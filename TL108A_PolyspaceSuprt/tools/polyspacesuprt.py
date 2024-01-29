#! python
"""Polyspace Support
Copyright 2016 Nexteer.

Usage:
    polyspacesuprt.py [path/to/greenhills/project.gpj]

Polyspace Support is a wrapper for EA4 integration project Polyspace project
management and execution.  It automates most redundant tasks, while providing
consistency across EA4 programs.  It also enables more effective usage of
Polyspace licenses, which are released immediately as analysis is completed.

See the usage documentation in the doc directory of this component for more
details.
"""

# *********************************************************************************************************************
# * Nexteer Confidential
# *
# * Module File Name:   polyspacesuprt.py
# * Module Description: Generates polyspace project files and runs analysis.
# * Project:            TL108A_PolyspaceSuprt, EA4
# * Author:             Owen Tosh
# *********************************************************************************************************************
# * Version Control:
# *-------------------------------------------------------------------------------------------------------------------
# * Date      Rev      Author    Change Description                                                         SCR #
# * --------  -------  --------  -------------------------------------------------------------------------  ---------
# * 10/04/16   1       OT        Initial version                                                            EA4#632
# *********************************************************************************************************************


import os
import sys
import datetime
import time
import mako.template as mt
import multiprocessing
import nxtr
import re
import shutil
import subprocess
import threading
import Tkinter as tk
import ttk
import tkMessageBox as tkMB
import tkFileDialog as tkFD
import xml.etree.cElementTree as et
import zipfile


# general constants
_window_title = 'Polyspace Support'
_year = datetime.datetime.now().year

# script directories
_script_dir = os.path.dirname(os.path.realpath(sys.argv[0]))
_template_dir = os.path.join(_script_dir, 'template')
_doc_dir = os.path.normpath(os.path.join(_script_dir, '..', 'doc'))

# file paths
_help_doc_path = os.path.join(_doc_dir, 'PolyspaceSuprt_Usage.docx')

# template paths
_bugfinder_template_file = os.path.join(_template_dir, 'Polyspace.bf.psprj.tpl')
_misra_template_file = os.path.join(_template_dir, 'MISRASettings.cfg')
_batch_template_file = os.path.join(_template_dir, 'PolyspaceHelper.bat.tpl')
_report_template_files = []
_report_template_files.append(os.path.join(_template_dir, 'BugFinder.rpt'))
_report_template_files.append(os.path.join(_template_dir, 'BugFinderSummary.rpt'))

# regex
_copyright_re = re.compile(r'Copyright', re.IGNORECASE)
_nexteer_re = re.compile(r'Copyright.*Nexteer', re.IGNORECASE)



################################################################################
##  MAIN FUNCTION
################################################################################

def _main():
    """Execute GUI app."""
    # initialize Tk
    root = tk.Tk()
    root.withdraw()
    
    # set up window icon
    icon_image = tk.Image('photo', file=os.path.join(_script_dir, 'resources', 'icon.gif'))
    root.tk.call('wm', 'iconphoto', root._w, '-default', icon_image)
    
    # determine project file path
    if len(sys.argv) >= 2:
        project_path = sys.argv[1]
        
        # convert to absolute path
        if project_path.startswith('.'):
            project_path = os.path.abspath(project_path)
    else:
        project_path = tkFD.askopenfilename(parent=root, title='Select GH project file.', filetypes=[('Green Hills Projects', '*.gpj')])
        if not project_path:
            return
    
    # check path validity
    if not os.path.exists(project_path):
        tkMB.showerror(_window_title, 'Error: project file does not exist:\n' + project_path + '\nSpecify a path to a project file (.gpj), or run the script without arguments.', parent=root)
        return
    
    # create main window
    _Main(root, project_path)
    
    # call tk main loop
    root.mainloop()
    
    # release Tk resources
    root.quit()



################################################################################
##  UTILITY FUNCTIONS
################################################################################


def _check_copyright(file_path):
    """Check for a copyright statement in a code file.
    
    Return two boolean values:
    found_copyright -- True if any copyright statement found, otherwise False
    found_nexteer -- True if a Nexteer copyright statement found, otherwise False
    """
    found_copyright = False
    found_nexteer = False
    
    with open(file_path, 'r') as file:
        
        for line in file:
            if _nexteer_re.search(line):
                found_nexteer = True
                break
            if _copyright_re.search(line):
                found_copyright = True
    
    return found_copyright, found_nexteer



def _name_suffix(all_files, all_misra):
    """Return a suffix based on configuration settings.
    
    The returned string can be added to a file or directory name to distinguish
    between analyses of different configurations.
    
    Required arguments:
    all_files -- boolean, whether checking all files or only Nexteer files
    all_misra -- boolean, whether checking all MISRA rules or only rules
        defined in the EA4 Static Analysis Compliance Guideline
    """
    # returns name suffix (based on GUI settings)
    if all_files:
        if all_misra:
            return '-all'
        return '-allfiles'
    if all_misra:
        return '-allmisra'
    return ''



def _find_polyspace_bin_directory():
    """Locate the Polyspace 'bin' directory.
    
    Return a string with the absolute path if found, otherwise None.
    """
    path = 'C:\\Program Files\\MATLAB\\'
    if not os.path.exists(path):
        return None
    
    for dir in os.listdir(path):
        if 'polyspace' in os.listdir(os.path.join(path, dir)):
            if 'bin' in os.listdir(os.path.join(path, dir, 'polyspace')):
                return os.path.join(path, dir, 'polyspace', 'bin')
    
    return None



def _kill_process(proc):
    """Kill a Windows process.
    
    If not initially successful, retry for 3 seconds at a rate of 100ms.
    
    Required arguments:
    proc -- a string defining the name of the process to be killed
    """
    # kills a process in Windows
    
    # create command
    command = []
    command.append('taskkill')
    command.append('/IM')
    command.append(proc)
    command.append('/F')
    
    # initialize startupinfo (don't show a console window)
    sinfo = subprocess.STARTUPINFO()
    sinfo.dwFlags |= subprocess.STARTF_USESHOWWINDOW
    
    # start a loop
    for i in range(30):
        
        # attempt to kill the task
        process = subprocess.Popen(command, startupinfo=sinfo)
        # TODO: add a timeout here?
        process.wait()
        
        # if it worked, stop the loop
        if process.returncode == 0:
            break
        
        # otherwise, wait and try again
        time.sleep(0.1)



################################################################################
##  POLYSPACE PROJECT CLASS
################################################################################

class Polyspace():
    """Primary class for a Polyspace project.
    
    Contains methods to generate and run analysis.  These methods perform all
    file manipulation and external process execution.  The class is equipped to
    allow for multithreading applications, but can also be run directly.
    
    If Polyspace.queue is defined (with a multiprocessing.Queue object), return
    values will be placed on this queue.  Otherwise, they will be returned
    directly.
    """
    
    def __init__(self, gpj_path, pipe=None, kill_event=None):
        """Polyspace class initializer.
        
        Required arguments:
            gpj_path: path to the green hills project file.  May be relative.
        
        Keyword arguments:
        pipe -- a multiprocessing.Connection object.  If None or unspecified,
            output will be printed to stdout.
        kill_event -- a threading.Event object.  Will be checked for requests
            to interrupt the current process.
        """
        # set up paths
        if not os.path.isabs(gpj_path):
            gpj_path = os.path.abspath(gpj_path)
        
        self.gpj_path = gpj_path
        
        # parent directories
        self.tools_dir = os.path.dirname(gpj_path)
        
        self.base_dir = os.path.normpath(os.path.join(self.tools_dir, '..'))
        
        # Polyspace directories
        self.polyspace_dir = os.path.join(self.tools_dir, 'Polyspace')
        
        # results directories
        self.saved_dir = os.path.join(self.polyspace_dir, 'Saved')
        self.results_dir = os.path.join(self.polyspace_dir, '~results')
        self.backup_dir = os.path.join(self.results_dir, 'comments_bak')
        
        # documentation directories
        self.doc_dir = os.path.join(self.base_dir, 'doc')
        
        # file paths
        self.bfpsprj_path = os.path.join(self.polyspace_dir, 'Polyspace.bf.psprj')
        self.batch_path = os.path.join(self.polyspace_dir, 'PolyspaceHelper.bat')
        self.misra_path = os.path.join(self.polyspace_dir, 'MISRASettings.cfg')
        self.overrides_path = os.path.join(self.polyspace_dir, 'IgnoreOverrides.cfg')
        self.options_path = os.path.join(self.polyspace_dir, 'options.txt')
        self.log_path = os.path.join(self.polyspace_dir, 'PolyspaceSuprt.log')
        
        # get project name from parent directory
        program_name = os.path.basename(self.base_dir)
        if '_EPS_' in program_name:
            program_name = program_name[:program_name.find('_EPS_')]
        self.program_name = program_name
        
        # multithreading data
        self.__pipe = pipe
        self.__kill_event = kill_event
        self.queue = None
    
    
    ## Local Functions
    
    def __return(self, *args):
        """Return values directly or through a queue.
        
        If Polyspace.queue is not None, send results through the queue and
        return None.  Otherwise, return the results directly.
        """
        if self.queue is not None:
            if len(args) == 1 and args[0] is None:
                return None
            for arg in args:
                self.queue.put(arg)
            return None
        else:
            # if only one return value, return it directly.  Otherwise, return a tuple.
            if len(args) == 1:
                return args[0]
            else:
                return args
    
    
    def __output(self, process):
        """Collect and send process output through pipe or stdout.
        
        Process output is sent through the multiprocessing.Connection object
        provided in the initializer.  If no connection object was provided,
        print the output directly to stdout.
        """
        stdout = process.stdout.readline()
        while stdout != '' or process.poll() is None:
            if self.__pipe is not None:
                self.__pipe.send(stdout)
            else:
                print(stdout)
            stdout = process.stdout.readline()
    
    
    def __check_for_kill_event(self):
        """Return True if a kill event present.  Otherwise, False."""
        if self.__kill_event is not None:
            if self.__kill_event.is_set():
                return True
        return False
    
    
    def __execute(self, args, cwd, show_window=False):
        """Execute a process defined by args.
        
        Return error text if any, otherwise None.
        """
        error_text = None
        
        # initialize startupinfo (don't show a console window)
        sinfo = subprocess.STARTUPINFO()
        if not show_window:
            sinfo.dwFlags |= subprocess.STARTF_USESHOWWINDOW
        
        # start process
        process = subprocess.Popen(args, cwd=cwd, startupinfo=sinfo, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
        
        # initiate thread to relay output to GUI
        stdout_thread = threading.Thread(target=self.__output, args=(process,))
        stdout_thread.start()
        
        # while process runs
        while process.poll() is None:
            
            # check for kill event
            if self.__check_for_kill_event():
                process.terminate()
                
                # process-specific extra tasks to kill
                if args[0] == 'polyspace-report-generator':
                    _kill_process('ps_rptgen.exe')
                elif args[0] == 'polyspace-bug-finder':
                    _kill_process('javaw.exe')
                elif args[0] == 'polyspace-bug-finder-nodesktop':
                    _kill_process('ps_pckg.exe')
                
                stdout_thread.join()
                return 'Process terminated by user.\n'
        
        # wait for output to flush
        stdout_thread.join()
        
        # return error text
        if process.returncode:
            return 'There was an error processing the request.\n'
        
        return None
    
    
    def __harvest_gpj(self, gpj_path):
        """Return a dictionary of options from a green hills project file.
        
        Recursive.
        """
        options = {
            'include_paths': [],
            'source_files': [],
            'c_include_directory': [],
            'predefines': []
        }
        
        # get local relative directory
        gpj_dir = os.path.normpath(os.path.dirname(gpj_path))
        
        with open(gpj_path, 'r') as gpj_file:
            for line in gpj_file:
                
                line = line.strip()
                
                # check for include statements
                if line.startswith('-I'):
                    include_path = os.path.relpath(os.path.join(gpj_dir, line[2:]), self.polyspace_dir)
                    if os.path.exists(os.path.join(self.polyspace_dir, include_path)):
                        options['include_paths'].append(include_path.replace('\\', '/'))
                    
                # check for source files
                elif line.endswith('.c'):
                    source_path = os.path.relpath(os.path.join(gpj_dir, line), self.polyspace_dir)
                    if os.path.exists(os.path.join(self.polyspace_dir, source_path)):
                        options['source_files'].append(source_path.replace('\\', '/'))
                    
                # check for -c_include_directory option
                elif line.startswith('-c_include_directory '):
                    include_directories = line[len('-c_include_directory '):].split(',')
                    for dir in include_directories:
                        dir = dir.strip()
                        dir = dir.replace('\\', '/')
                    options['c_include_directory'].extend(include_directories)
                    
                # check for -c_include_directory option
                elif line.startswith('-D'):
                    predefines = line[2:].split(',')
                    for predefine in predefines:
                        predefine = predefine.strip()
                    options['predefines'].extend(predefines)
                    
                # check for subprojects
                elif line.endswith('.gpj'):
                    subproject_options = self.__harvest_gpj(os.path.join(gpj_dir, line))
                    options['include_paths'].extend(subproject_options['include_paths'])
                    options['source_files'].extend(subproject_options['source_files'])
                    options['c_include_directory'].extend(subproject_options['c_include_directory'])
                    options['predefines'].extend(subproject_options['predefines'])
                
                # check for kill event
                if self.__check_for_kill_event():
                    return options
        
        return options
    
    
    def __get_ignored_files(self, options):
        """Return a list of files and folders to ignore.
        
        Return True if overrides config file is updated, otherwise False.
        """
        # returns a list of files and folders to ignore
        # returns True if the IgnoreOverrides.cfg file is updated
        
        ignored_files = []
        no_copyright_files = []
        
        # parse the overrides config file
        process_overrides, ignore_overrides = self.__get_overrides()
        
        # check source files to ignore
        for file_path in options['source_files']:
            
            if file_path in process_overrides:
                pass
            elif file_path in ignore_overrides:
                ignored_files.append(file_path)
            else:
                found_copyright, found_nexteer = _check_copyright(self.__abs_path(file_path))
                if not found_nexteer:
                    if found_copyright:
                        ignored_files.append(file_path)
                    else:
                        no_copyright_files.append(file_path)
            
            # check for kill event
            if self.__check_for_kill_event():
                return [], False
        
        # check header files to ignore
        include_paths = []
        include_paths.extend(options['c_include_directory'])
        include_paths.extend(options['include_paths'])
        for include_path in include_paths:
            
            ignore_all = True
            local_ignores = []
            
            file_names = sorted(os.listdir(self.__abs_path(include_path)))
            
            for file_name in file_names:
                
                if file_name.endswith('.c'):
                    ignore_all = False
                
                elif file_name.endswith('.h'):
                    
                    file_path = os.path.join(include_path, file_name).replace('\\', '/')
                    
                    if file_path in process_overrides:
                        ignore_all = False
                    elif file_path in ignore_overrides:
                        local_ignores.append(file_path)
                    else:
                        found_copyright, found_nexteer = _check_copyright(self.__abs_path(file_path))
                        
                        if not found_nexteer:
                            if found_copyright:
                                local_ignores.append(file_path)
                            else:
                                no_copyright_files.append(file_path)
                                ignore_all = False
                
                # check for kill event
                if self.__check_for_kill_event():
                    return [], False
            
            # if all header files in this include are to be ignored, ignore the entire folder
            if ignore_all:
                ignored_files.append(include_path)
            else:
                ignored_files.extend(local_ignores)
        
        return ignored_files, self.__update_overrides(no_copyright_files, process_overrides, ignore_overrides)
    
    
    def __get_overrides(self):
        """Parse the overrides config file.  Return override lists."""
        ignore_overrides = []
        process_overrides = []
        
        if os.path.exists(self.overrides_path):
            with open(self.overrides_path, 'r') as overrides_file:
                line = overrides_file.readline().rstrip('\n')
                while line and not line.startswith('[Process]'):
                    line = overrides_file.readline().rstrip('\n')
                line = overrides_file.readline().rstrip('\n')
                while line and not line.startswith('[Ignore]'):
                    process_overrides.append(line)
                    line = overrides_file.readline().rstrip('\n')
                line = overrides_file.readline().rstrip('\n')
                while line:
                    ignore_overrides.append(line)
                    line = overrides_file.readline().rstrip('\n')
        
        return process_overrides, ignore_overrides
    
    
    def __update_overrides(self, no_copyright_files, process_overrides, ignore_overrides):
        """Update overrides configuration file.
        
        Return True if file is changed, otherwise False.
        """
        lines = []
        
        # file header
        lines.append('# Project Customization File')
        lines.append('#')
        lines.append('# Usage notes:')
        lines.append('# - files paths are absolute, or relative to the polyspace project file')
        lines.append('# - files after the [Process] tag will be processed, regardless of copyright')
        lines.append('# - files after the [Ignore] tag will be ignored, regardless of copyright')
        lines.append('# - otherwise, files with a non-Nexteer copyright will be ignored')
        lines.append('# - any files without copyright are automatically added to the Process list')
        lines.append('# - don\'t leave blank lines in this file')
        lines.append('#')
        
        # process overrides
        lines.append('[Process]')
        override_files = []
        override_files.extend(no_copyright_files)
        override_files.extend(process_overrides)
        for file in override_files:
            lines.append(file)
        
        # ignore overrides
        lines.append('[Ignore]')
        for file in ignore_overrides:
            lines.append(file)
            
        # check for kill event
        if self.__check_for_kill_event():
            return False
        
        return nxtr.write_if_changed('\n'.join(lines), self.overrides_path)
    
    
    def __conv_ps_path(self, path_statement):
        """Convert Polyspace path format to absolute path.
        
        Use Polyspace.polyspace_dir as reference for relative paths.  Return
        the absolute path.
        """
        # strip 'file:/'
        if path_statement.startswith('file:/'):
            path_statement = path_statement[len('file:/'):]
        
        # convert to absolute path if necessary
        if path_statement.startswith('C:/.'):
            path_statement = os.path.join(self.polyspace_dir, path_statement[len('C:/'):])
        
        # switch slash direction
        path_statement = path_statement.replace('\\', '/')
        
        # normalize path
        path_statement = os.path.normpath(path_statement)
        
        return path_statement
    
    
    def __abs_path(self, path):
        """Convert relative path to absolute path, if not already absolute.
        
        Path is relative to the tools/Polyspace directory.
        """
        if os.path.isabs(path):
            return path
        return os.path.normpath(os.path.join(self.polyspace_dir, path))
    
    
    
    ## Polyspace Project Generation Function
    def generate_polyspace_project(self, all_files, all_misra):
        """Generate Polyspace project files.
        
        This includes the Polyspace project file, batch files, and any other
        permanent files the integration project will need.
        
        Return True if any files are changed, otherwise False.
        
        Required arguments:
        all_files -- boolean, whether checking all files or only Nexteer files
        all_misra -- boolean, whether checking all MISRA rules or only rules
            defined in the EA4 Static Analysis Compliance Guideline
        """
        files_changed = False
        
        # check reference path exists (create if it doesn't exist)
        if not os.path.exists(self.polyspace_dir):
            os.makedirs(self.polyspace_dir)
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(False, False)
        
        # get include and source files
        options = self.__harvest_gpj(self.gpj_path)
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(False, False)
        
        # use default value if options not set
        if not options['c_include_directory']:
            options['c_include_directory'] = [
                'C:/ghs/comp_201517/include/v800',
                'C:/ghs/comp_201517/ansi'
            ]
        
        if not options['predefines']:
            options['predefines'] = [
                '__ghs_board_is_v800_generic'
            ]
        
        # get files to ignore
        if all_files:
            options['ignored_files'] = []
            overrides_file_updated = False
        else:
            options['ignored_files'], overrides_file_updated = self.__get_ignored_files(options)
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(False, False)
        
        # set MISRA rules
        options['all_misra'] = all_misra
        
        # render project file from template
        bugfinder_template = mt.Template(filename=_bugfinder_template_file)
        bugfinder_rendered = bugfinder_template.render(program_name=self.program_name, options=options).replace('\r', '')
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(False, False)
        
        # compare files (don't update if there are no differences)
        files_changed |= nxtr.write_if_changed(bugfinder_rendered, self.bfpsprj_path)
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(False, False)
        
        # get project file name
        gpj_file_name = os.path.basename(self.gpj_path)
        
        # render batch file from template
        batch_template = mt.Template(filename=_batch_template_file)
        batch_rendered = batch_template.render(year=_year, gpj_file_name=gpj_file_name).replace('\r', '')
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(False, False)
        
        # write if changed
        files_changed |= nxtr.write_if_changed(batch_rendered, self.batch_path)
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(False, False)
        
        # copy MISRA configuration file
        files_changed |= nxtr.copy_if_changed(_misra_template_file, self.misra_path)
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(False, False)
        
        # create Saved folder if it doesn't exist
        if not os.path.exists(self.saved_dir):
            os.makedirs(self.saved_dir)
        
        return self.__return(overrides_file_updated, files_changed)
    
    
    # Open overrides configuration file
    def open_overrides(self):
        """Open overrides config file.
        
        Return error text, or None if successful.
        """
        # check file exists
        if not os.path.exists(self.overrides_path):
            return self.__return('Overrides configuration file doesn\'t exist.\n')
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(None)
        
        # form command
        command = []
        command.append('notepad.exe')
        command.append(self.overrides_path)
        
        # run command
        error_text = self.__execute(command, self.polyspace_dir, True)
        
        return self.__return(error_text)
    
    
    ## Unzip Function
    def unzip(self, all_files, all_misra):
        """Unzip the previous results.
        
        Return False if no results found, otherwise True.
        
        Required arguments:
        all_files -- boolean, whether checking all files or only Nexteer files
        all_misra -- boolean, whether checking all MISRA rules or only rules
            defined in the EA4 Static Analysis Compliance Guideline
        """
        # remove existing files if they exist
        if os.path.exists(self.results_dir):
            shutil.rmtree(self.results_dir)
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(False)
        
        # check for Saved directory
        if not os.path.exists(self.saved_dir):
            return self.__return(False)
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(False)
        
        # get zip file path
        zip_path = os.path.join(self.saved_dir, 'Results' + _name_suffix(all_files, all_misra) + '.zip')
        
        # return if it doesn't exist
        if not os.path.exists(zip_path):
            return self.__return(False)
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(False)
        
        # create results directory
        os.makedirs(self.results_dir)
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(False)
        
        # unzip archive
        with zipfile.ZipFile(zip_path, 'r') as zip_file:
            
            # check for kill event
            if self.__check_for_kill_event():
                return self.__return(False)
            
            zip_file.extractall(self.results_dir)
            zip_file.close()
        
        return self.__return(True)
    
    
    ## Run Analysis Function
    def run_analysis(self):
        """Run Polyspace analysis.
        
        Return error text, or None if successful.
        """
        # create results directory if it doesn't exist
        if not os.path.exists(self.results_dir):
            os.makedirs(self.results_dir)
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(None)
        
        # parse bf.psprj xml file
        tree = et.parse(self.bfpsprj_path)
        root = tree.getroot()
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(None)
        
        options = []
        
        # project name
        options.append('-prog ' + root.attrib['name'])
        
        # language
        options.append('-lang ' + root.attrib['language'])
        
        # author
        options.append('-author ' + root.attrib['author'])
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(None)
        
        # source files
        source_files = []
        for source in root.iter('source'):
            for file in source.iter('file'):
                source_files.append(self.__conv_ps_path(file.attrib['path']))
                
                # check for kill event
                if self.__check_for_kill_event():
                    return self.__return(None)
        
        if source_files:
            options.append('-sources "' + ','.join(source_files) + '"')
        
        # include directories
        for include in root.iter('include'):
            for file in include.iter('file'):
                options.append('-I ' + self.__conv_ps_path(file.attrib['path']))
                
                # check for kill event
                if self.__check_for_kill_event():
                    return self.__return(None)
        
        # get module element
        for module in root.iter('module'):
            
            # optionset
            for optionset in module.iter('optionset'):
                for option in optionset:
                    
                    # checkers
                    if option.attrib['flagname'] == '*_checkers_preset':
                        options.append('-checkers ' + option.text)
                    # TODO: what about custom checkers?
                    
                    # MISRA
                    elif option.attrib['flagname'] == '-misra2':
                        if len(option) > 0:
                            options.append('-misra2 MISRASettings.cfg')
                        else:
                            options.append('-misra2 ' + option.text)
                    # TODO: does this cover all configurations of MISRA?
                    
                    # "other"
                    elif option.attrib['flagname'] == '*_other':
                        options.append(option.text)
                    
                    # preprocessor definitions
                    elif option.attrib['flagname'] == '-D':
                        for element in option.iter('element'):
                            options.append('-D ' + element.text)
                    
                    # pragmas
                    elif option.attrib['flagname'] == '-allowed-pragmas':
                        pragmas = []
                        for element in option.iter('element'):
                            pragmas.append(element.text)
                        if pragmas:
                            options.append('-allowed-pragmas ' + ','.join(pragmas))
                    
                    # div-round-down
                    elif option.attrib['flagname'] == '-div-round-down':
                        if option.text == 'true':
                            options.append('-div-round-down')
                    
                    # includes to ignore
                    elif option.attrib['flagname'] == '-includes-to-ignore':
                        ignores = []
                        for element in option.iter('element'):
                            ignores.append(self.__conv_ps_path(element.text))
                        if ignores:
                            options.append('-includes-to-ignore "' + ','.join(ignores) + '"')
                    
                    # check for kill event
                    if self.__check_for_kill_event():
                        return self.__return(None)
            
            # result
            for result in module.iter('result'):
                if len(result) > 0:
                    options.append('-results-dir ' + os.path.relpath(self.__conv_ps_path(result[0].attrib['path']), self.polyspace_dir))
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(None)
        
        # get target element
        for target in root.iter('target'):
            
            options.append('-target mcpu')
            
            for option in target.iter('option'):
                
                # alignment
                if option.attrib['flagname'] == '-align':
                    options.append('-align ' + option.text)
                
                # default sign of char
                elif option.attrib['flagname'] == '-default-sign-of-char':
                    options.append('-default-sign-of-char ' + option.text)
                
                # double is 64 bits
                elif option.attrib['flagname'] == '-double-is-64bits':
                    options.append('-double-is-64bits')
                
                # int is 32 bits
                elif option.attrib['flagname'] == '-int-is-32bits':
                    options.append('-int-is-32bits')
                
                # little endian
                elif option.attrib['flagname'] == '-little-endian':
                    options.append('-little-endian')
                
                # big endian
                elif option.attrib['flagname'] == '-big-endian':
                    options.append('-big-endian')
                
                # long long is 64 bits
                elif option.attrib['flagname'] == '-long-long-is-64bits':
                    options.append('-long-long-is-64bits')
                
                # pointer is 32 bits
                elif option.attrib['flagname'] == '-pointer-is-32bits':
                    options.append('-pointer-is-32bits')
                
                # check for kill event
                if self.__check_for_kill_event():
                    return self.__return(None)
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(None)
        
        # write options file
        nxtr.write_if_changed('\n'.join(options), self.options_path)
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(None)
        
        # form command
        command = []
        command.append('polyspace-bug-finder-nodesktop')
        command.append('-options-file')
        command.append(self.options_path)
        
        # run command
        error_text = self.__execute(command, self.polyspace_dir)
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(None)
        
        # clean up options.txt
        os.remove(self.options_path)
        
        return self.__return(error_text)
    
    
    ## Open Results Function
    def open_results(self):
        """Open Polyspace analysis results.
        
        Return error text, or None if successful.
        """
        # check that directory exists
        if not os.path.exists(self.results_dir):
            return self.__return('The results directory does not exist.\n')
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(None)
        
        # get results project name
        file_name = None
        for file in os.listdir(self.results_dir):
            
            if file.endswith('.psbf'):
                file_name = file
                break
            
            # check for kill event
            if self.__check_for_kill_event():
                return self.__return(None)
        
        # check that a file was found
        if not file_name:
            return self.__return('No results were found.\n')
        
        # form command
        command = []
        command.append('polyspace-bug-finder')
        command.append(os.path.join(self.results_dir, file_name))
        
        # run command
        error_text = self.__execute(command, self.results_dir)
        
        return self.__return(error_text)
    
    
    ## Generate Report Function
    def generate_report(self, all_files, all_misra):
        """Generate Polyspace report.
        
        Return error text, or None if successful.
        
        Required arguments:
        all_files -- boolean, whether checking all files or only Nexteer files
        all_misra -- boolean, whether checking all MISRA rules or only rules
            defined in the EA4 Static Analysis Compliance Guideline
        """
        # get bin directory
        # - report generator must be run directly from the bin directory (it's not so smart)
        polyspace_bin_dir = _find_polyspace_bin_directory()
        if not polyspace_bin_dir:
            return self.__return('Could not find the Polyspace bin directory.  Generate the report manually by opening the results, then select Run -> Run Report.\n')
        
        # form command
        command = []
        command.append('polyspace-report-generator')
        command.append('-template')
        command.append(','.join(_report_template_files))
        command.append('-format')
        command.append('HTML')
        command.append('-output-name')
        command.append(os.path.join(self.doc_dir, 'Polyspace' + _name_suffix(all_files, all_misra)))
        command.append('-results-dir')
        command.append(self.results_dir)
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(None)
        
        # run command
        error_text = self.__execute(command, polyspace_bin_dir)
        
        return self.__return(error_text)
    
    
    ## Zip Function
    def zip(self, all_files, all_misra):
        """Zip current results into archive.
        
        Return False if no results found, otherwise True.
        
        Required arguments:
        all_files -- boolean, whether checking all files or only Nexteer files
        all_misra -- boolean, whether checking all MISRA rules or only rules
            defined in the EA4 Static Analysis Compliance Guideline
        """
        # check for current results directory
        if not os.path.exists(self.results_dir):
            return self.__return(False)
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(False)
        
        # return if results directory is empty
        if not os.listdir(self.results_dir):
            return self.__return(False)
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(False)
        
        # get zip file path
        zip_path = os.path.join(self.saved_dir, 'Results' + _name_suffix(all_files, all_misra) + '.zip')
        
        # check Saved folder exists
        if os.path.exists(self.saved_dir):
            # remove old archive if it exists
            if os.path.exists(zip_path):
                os.remove(zip_path)
        else:
            os.makedirs(self.saved_dir)
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(False)
        
        # remove backup folder if it exists
        if os.path.exists(self.backup_dir):
            shutil.rmtree(self.backup_dir)
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(False)
        
        # zip archive
        with zipfile.ZipFile(zip_path, 'w') as zip_file:
            
            for root, directories, files in os.walk(self.results_dir):
                for file in files:
                    file_path = os.path.join(root, file)
                    rel_path = os.path.relpath(file_path, self.results_dir)
                    zip_file.write(file_path, rel_path)
                    
                    # check for kill event
                    if self.__check_for_kill_event():
                        return self.__return(False)
        
        return self.__return(True)
    
    
    ## Clean Function
    def clean(self):
        """Clean up extra files and directories not required to save.
        
        Return True if any files are changed, otherwise False.
        """
        files_changed = False
        
        # check for options.txt
        if os.path.exists(self.options_path):
            os.remove(self.options_path)
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(False)
        
        # check for current results directory
        if os.path.exists(self.results_dir):
            # remove directory
            shutil.rmtree(self.results_dir)
            files_changed = True
        
        # check for kill event
        if self.__check_for_kill_event():
            return self.__return(False)
        
        # check for empty report folders
        for entry in os.listdir(self.doc_dir):
            dir = os.path.join(self.doc_dir, entry)
            if os.path.isdir(dir) and entry.startswith('Polyspace'):
                for entry2 in os.listdir(dir):
                    dir2 = os.path.join(dir, entry2)
                    if os.path.isdir(dir2):
                        if not os.listdir(dir2):
                            os.rmdir(dir2)
                            files_changed = True
                    
                    # check for kill event
                    if self.__check_for_kill_event():
                        return self.__return(False)
        
        return self.__return(files_changed)


################################################################################
##  GUI CLASS
################################################################################

class _Main(nxtr.Menu):
    """Main GUI class.
    
    Implements a multithreaded environment to allow real-time display of process
    output in a GUI window.
    """
    
    def __init__(self, parent, gpj_path):
        """Initialize main GUI."""
        # set up multithreading communication
        self.__pipe, remote = multiprocessing.Pipe(False)
        self.__kill_event = threading.Event()
        self.__kill_event.clear()
        
        # initialize polyspace project class
        self.ps = Polyspace(gpj_path, remote, self.__kill_event)
        
        # initialize state data
        self.__sync_buttons = []
        
        # run standard init sequence
        nxtr.Menu.__init__(self, parent, _window_title)
    
    
    ## Local GUI Functions
    def __thread(self, func, *args):
        """Wrap asynchronous process execution.  Write output to GUI."""
        # initialize communication data
        queue = multiprocessing.Queue()
        self.ps.queue = queue
        
        # initialize thread
        thread = threading.Thread(target=func, args=args)
        
        # start thread
        thread.start()
        
        # wait for thread to finish
        while thread.is_alive():
            if self.__pipe.poll():
                self.__output(self.__pipe.recv())
            self.update()
            # TODO: add timeout for cancel request?
        
        # sanity check
        thread.join()
        
        # flush pipe
        while self.__pipe.poll():
            self.__output(self.__pipe.recv())
        
        # collect return values
        retval = []
        while not queue.empty():
            retval.append(queue.get())
        
        # remove queue
        self.ps.queue = None
        queue.close()
        queue.join_thread()
        
        if len(retval) == 0:
            return None
        elif len(retval) == 1:
            return retval[0]
        else:
            return tuple(retval)
    
    
    def __output(self, message):
        """Write message to the output window."""
        self.output_area.config(state='normal')
        self.output_area.insert(tk.END, message)
        self.output_area.config(state='disabled')
        self.output_area.see(tk.END)
        self.__export_button.config(state='normal')
        self.update()
    
    
    def __check_for_cancel(self, print_message=False):
        """Return True if cancel button pressed, otherwise False."""
        if not self.__kill_event.is_set():
            return False
        
        if print_message:
            self.__output('\nThe process was cancelled by the user.\n\n')
        return True
    
    
    def __enable_cancel_button(self):
        """Enable cancel button, disable synchronous command buttons."""
        # disable buttons
        for button in self.__sync_buttons:
            button.config(state='disabled')
        
        # enable cancel button
        self.__cancel_button.config(state='normal')
        
        # refresh GUI
        self.update()
    
    
    def __disable_cancel_button(self):
        """Disable cancel button, reenable synchronous command buttons."""
        # disable cancel button
        self.__cancel_button.config(state='disabled')
        self.__kill_event.clear()
        
        # enable buttons
        for button in self.__sync_buttons:
            button.config(state='normal')
        
        # refresh GUI
        self.update()
    
    
    ## Automatic Generation
    def __all(self, interactive):
        """Automatically run all generation steps."""
        # show start message
        self.__output('Starting automatic generation.\n\n')
        
        # project file generation
        self.__output('Project file generation started.\n')
        overrides_updated, files_changed = self.ps.generate_polyspace_project(self.all_files.get(), self.all_misra.get())
        
        # check for cancel
        if self.__check_for_cancel(True):
            return
        
        if overrides_updated:
            message = 'The overrides configuration was updated.  You should review these changes to ensure all files are checked properly.\n'
            
            if interactive:
                message += '\nOpen this file now?'
                response = tkMB.askyesnocancel(_window_title, message, parent=self)
                if response is None:
                    self.__output('\nCancelled.\n\n')
                    return
                elif response:
                    # open overrides file
                    self.__output('Waiting for overrides configuration file to be closed.\n')
                    error_text = self.ps.open_overrides()
                    
                    # check for cancel
                    if self.__check_for_cancel(True):
                        return
                    
                    # print confirmation message
                    if error_text:
                        self.__output(error_text)
                        self.__output('An error was encountered when updating the overrides configuration file.\n')
                    else:
                        self.__output('Overrides configuration file closed.  Regenerating project files.\n')
                        self.ps.generate_polyspace_project(self.all_files.get(), self.all_misra.get())
                        
                        # check for cancel
                        if self.__check_for_cancel(True):
                            return
            else:
                self.__output(message)
        
        if files_changed:
            self.__output('The polyspace project files were updated successfully.\n')
        elif not overrides_updated:
            self.__output('The polyspace project files are already up to date.\n')
        
        self.__output('Project file generation complete.\n\n')
        
        # check for cancel
        if self.__check_for_cancel(True):
            return
        
        # unzip previous results
        self.__unzip()
        
        # check for cancel
        if self.__check_for_cancel():
            return
        
        # run analysis
        self.__run()
        
        # check for cancel
        if self.__check_for_cancel():
            return
        
        # open results
        if interactive:
            message = 'Analysis completed.  Do you want to review the results?'
            if tkMB.askyesno(_window_title, message, parent=self):
                self.__open_results()
        
        # check for cancel
        if self.__check_for_cancel():
            return
        
        # generate report
        self.__generate_report()
        
        # check for cancel
        if self.__check_for_cancel():
            return
        
        # zip results
        self.__zip()
        
        # check for cancel
        if self.__check_for_cancel():
            return
        
        # clean up
        self.__clean()
        
        # show completion message
        self.__output('Automatic generation completed.\n\n')
    
    
    ## Manual Generation Functions
    def __generate(self):
        """Generate Polyspace project files."""
        # show start message
        self.__output('Project file generation started.\n')
        
        # generate project file
        overrides_updated, files_changed = self.__thread(self.ps.generate_polyspace_project, self.all_files.get(), self.all_misra.get())
        
        # check for cancel
        if self.__check_for_cancel(True):
            return
        
        # show completion message
        message = [];
        if overrides_updated:
            message.append('IMPORTANT: The overrides configuration was updated.  Open IgnoreOverrides.cfg, check the list to ensure files are classified properly, and regenerate the project file if you make any changes.')
        if files_changed:
            message.append('Polyspace project files were updated.')
        if not message:
            message.append('The Polyspace project files are already up to date.')
        message.append('Project file generation complete.\n\n')
        self.__output('\n'.join(message))
    
    
    def __unzip(self):
        """Unzip previous results (if any)."""
        # show start message
        self.__output('Unzipping previous results started.\n')
        
        # unzip files
        files_unzipped = self.__thread(self.ps.unzip, self.all_files.get(), self.all_misra.get())
        
        # check for cancel
        if self.__check_for_cancel(True):
            return
        
        # show confirmation message
        if files_unzipped:
            self.__output('Unzipping previous results completed.\n\n')
        else:
            self.__output('No previous results were found.\n\n')
    
    
    def __run(self):
        """Run Polyspace analysis."""
        # show start message
        self.__output('Polyspace analysis starting.\nThis may take upwards of an hour.\n')
        
        # run analysis
        error_text = self.__thread(self.ps.run_analysis)
        
        # check for cancel
        if self.__check_for_cancel(True):
            return
        
        # show completion message
        if error_text:
            self.__output(error_text)
            self.__output('Polyspace analysis encountered an error.\n\n')
        else:
            self.__output('Polyspace analysis completed successfully.\n\n')
    
    
    def __open_results(self):
        """Open Polyspace analysis results."""
        # show start message
        self.__output('Opening Polyspace results.  Waiting for Polyspace to be closed.\n')
        
        # open the results
        error_text = self.__thread(self.ps.open_results)
        
        # check for cancel
        if self.__check_for_cancel(True):
            return
        
        # show completion message
        if error_text:
            self.__output(error_text)
            self.__output('There was an error in opening the Polyspace results.\n\n')
        else:
            self.__output('Done.\n\n')
    
    
    def __generate_report(self):
        """Generate Polyspace analysis report from current results."""
        # show start message
        self.__output('Report generation started.\n')
        
        # generate reports
        error_text = self.__thread(self.ps.generate_report, self.all_files.get(), self.all_misra.get())
        
        # check for cancel
        if self.__check_for_cancel(True):
            return
        
        # show completion message
        if error_text:
            self.__output(error_text)
            self.__output('Report generation encountered an error.\n\n')
        else:
            self.__output('Report generation completed successfully.\n\n')
        
        pass
    
    
    def __zip(self):
        """Zip current results to archive."""
        # show start message
        self.__output('Zipping current results started.\n')
        
        # zip files
        files_zipped = self.__thread(self.ps.zip, self.all_files.get(), self.all_misra.get())
        
        # check for cancel
        if self.__check_for_cancel(True):
            return
        
        # show confirmation message
        if files_zipped:
            self.__output('Zipping current results completed.\n\n')
        else:
            self.__output('No current results were found.\n\n')
    
    
    def __clean(self):
        """Clean up all unnecessary files and directories."""
        # show start message
        self.__output('Cleaning up started.\n')
        
        # clean up files
        files_changed = self.__thread(self.ps.clean)
        
        # check for cancel
        if self.__check_for_cancel(True):
            return
        
        # show confirmation message
        if files_changed:
            self.__output('Cleaning up completed.\n\n')
        else:
            self.__output('Nothing to clean.\n\n')
    
    
    ## Button Action Functions
    def __automatic(self, interactive):
        """Start automatic generation."""
        # enable cancel button
        self.__enable_cancel_button()
        
        # run full generation
        self.__all(interactive)
        
        # disable cancel button
        self.__disable_cancel_button()
    
    
    def __manual(self, command):
        """Start manual step."""
        # enable cancel button
        self.__enable_cancel_button()
        
        # run command
        command()
        
        # disable cancel button
        self.__disable_cancel_button()
    
    
    def __help(self):
        """Load usage documentation."""
        os.system('start "Polyspace Support Help" "' + _help_doc_path + '"')
    
    
    def __export(self):
        """Save output window to log file."""
        with open(self.ps.log_path, 'w') as file:
            file.write(self.output_area.get('1.0', tk.END))
        
        self.__export_button.config(state='disabled')
    
    
    def __clear(self):
        """Clear the output window."""
        self.output_area.config(state='normal')
        self.output_area.delete('1.0', tk.END)
        self.output_area.config(state='disabled')
        self.update()
    
    
    def __cancel(self):
        """Interrupt command execution."""
        # set kill event for polyspace thread
        self.__kill_event.set()
        
        # disable cancel button
        self.__cancel_button.config(state='disabled')
    
    
    ## GUI Formation
    def body(self, frame):
        """Initialize GUI contents."""
        # initialize variables
        self.all_files = tk.BooleanVar()
        self.all_files.set(False)
        self.all_misra = tk.BooleanVar()
        self.all_misra.set(False)
        
        sec_pad = 6  # section padding
        int_pad = 6  # internal padding
        
        
        # left panel
        panelouter = tk.Frame(frame)
        panel = tk.Frame(panelouter)
        
        # close and cancel buttons
        box = tk.Frame(panel)
        
        self.__cancel_button = ttk.Button(box, text='Cancel', width=7, command=self.__cancel, state='disabled')
        self.__cancel_button.pack(side='right', anchor='s', padx=int_pad, pady=int_pad)
        
        button = ttk.Button(box, text='Close', width=7, command=self.destroy)
        button.pack(side='left', anchor='s', padx=int_pad, pady=int_pad)
        self.__sync_buttons.append(button)
        
        box.pack(side='bottom', fill='x', padx=(sec_pad+2), pady=(sec_pad+2))
        
        # Select Files panel
        box = ttk.LabelFrame(panel, text='Select Files', padding=int_pad)
        
        button = ttk.Radiobutton(box, text='Nexteer Only', variable=self.all_files, value=False)
        button.pack(anchor='w')
        button.invoke()
        self.__sync_buttons.append(button)
        
        button = ttk.Radiobutton(box, text='All Files', variable=self.all_files, value=True)
        button.pack(anchor='w')
        self.__sync_buttons.append(button)
        
        box.pack(side='top', fill='x', padx=sec_pad, pady=sec_pad)
        
        # MISRA Rules panel
        box = ttk.LabelFrame(panel, text='MISRA Rules', padding=int_pad)
        
        button = ttk.Radiobutton(box, text='Standard', variable=self.all_misra, value=False)
        button.pack(anchor='w')
        button.invoke()
        self.__sync_buttons.append(button)
        
        button = ttk.Radiobutton(box, text='All Rules', variable=self.all_misra, value=True)
        button.pack(anchor='w')
        self.__sync_buttons.append(button)
        
        box.pack(side='top', fill='x', padx=sec_pad, pady=sec_pad)
        
        # Notebook
        notebook = ttk.Notebook(panel)
        
        # Automatic Generation panel
        tab = tk.Frame(notebook, bg='white')
        
        button_specs = (
            ('Generate Interactive',    lambda: self.__automatic(True)),
            ('Generate Unattended',     lambda: self.__automatic(False))
        )
        
        for spec in button_specs:
            button = ttk.Button(tab, text=spec[0], command=spec[1])
            button.pack(anchor='w', fill='x')
            self.__sync_buttons.append(button)
        
        notebook.add(tab, text='Automatic', padding=int_pad)
        
        # Manual Generation panel
        tab = tk.Frame(notebook, bg='white')
        
        button_specs = (
            ('Generate Project Files',  lambda: self.__manual(self.__generate)),
            ('Unzip Previous Results',  lambda: self.__manual(self.__unzip)),
            ('Run Analysis',            lambda: self.__manual(self.__run)),
            ('Open Results',            lambda: self.__manual(self.__open_results)),
            ('Generate Report',         lambda: self.__manual(self.__generate_report)),
            ('Zip Current Results',     lambda: self.__manual(self.__zip)),
            ('Clean Up',                lambda: self.__manual(self.__clean))
        )
        
        for spec in button_specs:
            button = ttk.Button(tab, text=spec[0], command=spec[1])
            button.pack(anchor='w', fill='x')
            self.__sync_buttons.append(button)
        
        notebook.add(tab, text='Manual', padding=int_pad)
        
        # pack Notebook
        notebook.pack(side='top', fill='x', padx=sec_pad, pady=sec_pad)
        
        # pack left panel
        panel.pack(side='left', fill='y', expand=True)
        panelouter.pack(side='left', fill='y')
        
        
        # right panel
        panel = tk.Frame(frame)
        
        # help, export, and clear buttons
        box = tk.Frame(panel)
        
        ttk.Button(box, text='?', width=2, command=self.__help).pack(side='left', anchor='s')
        
        ttk.Button(box, text='Clear', width=7, command=self.__clear).pack(side='right', anchor='s', padx=5)
        
        self.__export_button = ttk.Button(box, text='Export', width=7, command=self.__export, state='disabled')
        self.__export_button.pack(side='right', anchor='s', padx=5)
        
        box.pack(side='bottom', fill='x', padx=(sec_pad+2), pady=(sec_pad+2))
        
        # output area
        box = ttk.LabelFrame(frame, text='Output', padding=int_pad)
        
        scrollbar = ttk.Scrollbar(box)
        self.output_area = tk.Text(box, font=('sans', 8), wrap='word')
        
        scrollbar.pack(side='right', fill='y')
        self.output_area.pack(side='right', fill='both', expand=True)
        
        scrollbar.config(command=self.output_area.yview)
        self.output_area.config(yscrollcommand=scrollbar.set, width=50, height=1, state='disabled')
        
        box.pack(side='top', fill='both', expand=True, padx=sec_pad, pady=sec_pad)
        
        # close right panel
        panel.pack(side='left', fill='both', expand=True, padx=sec_pad, pady=sec_pad)



################################################################################
##  RUN MAIN
################################################################################

if __name__ == '__main__':
    _main()

