# ======================================================================================================================
#      File: App.py
#   Project: EA4 Release Notes Generator
#   Created: 2017-01-04
#  Modified: 2017-01-04
#    Author: Jared Julien
#     Email: jared.julien@nexteer.com
# Copyright: (c) 2017 Nexteer Automotive
#
# Date        Rev   Author    Change Description
# ==========  ====  ========  =========================================================================================
# 2017-01-04  1     Jared     Initial file creation
# ----------------------------------------------------------------------------------------------------------------------
# ======================================================================================================================
# Import Statements
# ----------------------------------------------------------------------------------------------------------------------
import argparse
import getpass
import logging
import threading
import sys
import os
import subprocess

import wx

from Help import HelpContents
from Gui.Login import LoginDialog
from Gui import Log
from Gui import Progress
from Gui import WxExt
from Gui import Exceptions
from Libraries import Audience
from Libraries import SynergyCcm
import Sections
import Reports


# ======================================================================================================================
# Global Variables
# ----------------------------------------------------------------------------------------------------------------------
Groups = Sections.GetAllGroups()
AvailableReports = Reports.GetAvailable()


# ======================================================================================================================
# Constants
# ----------------------------------------------------------------------------------------------------------------------
SYNERGY_CONFIG = {
    'database': r'\\usmisag-ap58\ccmdb72\ses_dev_ea4',
    'role':     'User',
    'url':      'http://usmisag-ap58:8400',
    'workArea': r'C:\ccm',
    'wsdl':     'http://10.199.100.212:8603/change/webservices/ChangeService?wsdl',
}

# Logging "report" level number, just above "warning" by threshold to force output under most circumstances.
# Used to report status information.
DEBUG_STATUS_NUM = logging.WARNING + 5


# ======================================================================================================================
# Helper Functions
# ----------------------------------------------------------------------------------------------------------------------
def browseExplorer(absolute_path):
    """Given the absolute path to a given file, launch a Windows Explorer window to show the file."""
    subprocess.Popen(r'explorer /select,"%s"' % absolute_path)


# ======================================================================================================================
# Generation Function
# ----------------------------------------------------------------------------------------------------------------------
def generate(report, args, updateCallback, completeCallback):
    try:
        document = report.compile(Groups, args, updateCallback)
    except Exceptions.StopGeneration:
        # User has requested we stop, so bail out of generation
        logging.warning('Generation cancelled')
        completeCallback(False)
    except:
        # Some unexpected and unhandled exception occurred, abort generation
        updateCallback('Error occured, see log for details', 0)
        logging.exception('Unhandled exception occured during compilation and report generation cannot continue.')
        completeCallback(False)
    else:
        if args.filename:
            filename = args.filename
        else:
            # Create the output filename based upon the span of baselines
            if len(args.baselines) > 2:
                baseline = '%s-%s' % (min(args.baselines), max(args.baselines))
            else:
                baseline = str(max(args.baselines))
            filename = '%s_%s_ReleaseNotes' % (args.program, baseline)

        # Create the output directory if it doesn't exist
        outputDirectory = os.path.join('..', 'output')
        if not os.path.exists(outputDirectory):
            os.mkdir(outputDirectory)
        outputPath = os.path.join(outputDirectory, filename)

        # If generation was successful, render the output report
        actualFilename = report.render(document, outputPath)
        actualPath = os.path.join(outputDirectory, actualFilename)
        completeCallback(True, actualPath)


# ======================================================================================================================
# Main Frame Class
# ----------------------------------------------------------------------------------------------------------------------
class MainFrame(wx.Frame):
    def __init__(self, parent, args):
        self.args = args
        wx.Frame.__init__ (self, parent, id=wx.ID_ANY, title=u"EA4 Release Notes Generator", pos=wx.DefaultPosition, size=wx.Size(900,500), style=wx.DEFAULT_FRAME_STYLE|wx.TAB_TRAVERSAL)

        # Loop until login is successful
        self.ccm = None
        while self.ccm is None:
            # If the user's password was not given at the command line prompt them for it
            if not args.password:
                dialog = LoginDialog(self)
                dialog.setUsername(args.username)
                if dialog.ShowModal() == wx.ID_OK:
                    # 
                    args.username = dialog.getUsername()
                    args.password = dialog.getPassword()
                else:
                    # quit the whole application if the user selects the quit option in the dialog
                    self.Destroy()
                    return
                dialog.Destroy()

            with wx.BusyInfo('Connecting to Synergy server...'):
                self.ccm = SynergyCcm.GetSynergyCcm(args)

            if self.ccm is None:
                # Clear the password if login failed - causes us to try again
                args.password = None
            else:
                # upon successful creation of the CCM component, break the endless while loop
                break

        # After successfully logging into Synergy fetch a list of releases
        with wx.BusyInfo('Fetching releases from Synergy...'):
            releases = self.ccm.getReleases(filterComponents=True)

        # Main window setup
        _icon = wx.EmptyIcon()
        _icon.CopyFromBitmap(wx.Bitmap("icon.ico", wx.BITMAP_TYPE_ANY))
        self.SetIcon(_icon)
        self.SetSizeHintsSz(wx.DefaultSize, wx.DefaultSize)
        sizer_main = wx.BoxSizer(wx.VERTICAL)
        sizer_top = wx.BoxSizer(wx.HORIZONTAL)
        sizer_release = wx.BoxSizer(wx.HORIZONTAL)
        self.panel_top = wx.Panel(self)
        sizer_top_left = wx.BoxSizer(wx.VERTICAL)

        # Release Combobox
        sizer_release = wx.BoxSizer(wx.HORIZONTAL)
        self.label_release = wx.StaticText(self.panel_top, wx.ID_ANY, u"Release:", wx.DefaultPosition, wx.DefaultSize, 0)
        self.label_release.Wrap(-1)
        sizer_release.Add(self.label_release, 0, wx.ALL, 5)
        self.combo_release = wx.ComboBox(self.panel_top, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, releases, 0)
        sizer_release.Add(self.combo_release, 1, wx.ALL, 5)
        sizer_top_left.Add(sizer_release, 0, wx.ALL|wx.EXPAND, 5)

        # Target Audience Dropdown
        sizer_audience = wx.BoxSizer(wx.HORIZONTAL)
        self.label_audience = wx.StaticText(self.panel_top, wx.ID_ANY, u"Target Audience:", wx.DefaultPosition, wx.DefaultSize, 0)
        self.label_audience.Wrap(-1)
        sizer_audience.Add(self.label_audience, 0, wx.ALL, 5)
        audiences = Audience.GetAvailable()
        self.choice_audience = wx.Choice(self.panel_top, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, audiences, 0)
        self.choice_audience.SetSelection(audiences.index(args.audience) if args.audience else 0)
        sizer_audience.Add(self.choice_audience, 0, 0, 5)
        sizer_top_left.Add(sizer_audience, 0, wx.ALL|wx.EXPAND, 5)

        # Program Name
        sizer_program = wx.BoxSizer(wx.HORIZONTAL)
        self.label_program = wx.StaticText(self.panel_top, wx.ID_ANY, u"Program:", wx.DefaultPosition, wx.DefaultSize, 0)
        self.label_program.Wrap(-1)
        sizer_program.Add(self.label_program, 0, wx.ALL, 5)
        self.text_program = wx.TextCtrl(self.panel_top, wx.ID_ANY, args.program, wx.DefaultPosition, wx.DefaultSize, 0)
        sizer_program.Add(self.text_program, 0, wx.ALL, 5)
        sizer_top_left.Add(sizer_program, 0, wx.ALL|wx.EXPAND, 5)

        # Baseline Selection
        sizer_top.Add(sizer_top_left, 1, wx.EXPAND, 5)
        sbSizer_versions = wx.StaticBoxSizer(wx.StaticBox(self.panel_top, wx.ID_ANY, u"Versions"), wx.VERTICAL)
        bSizer_version_from = wx.BoxSizer(wx.HORIZONTAL)
        self.label_from = wx.StaticText(self.panel_top, wx.ID_ANY, u"From:", wx.DefaultPosition, wx.DefaultSize, 0)
        self.label_from.Wrap(-1)
        bSizer_version_from.Add(self.label_from, 0, wx.ALL, 5)
        choice_ver_startChoices = []
        self.choice_ver_start = wx.Choice(self.panel_top, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, choice_ver_startChoices, 0)
        self.choice_ver_start.SetSelection(0)
        self.choice_ver_start.Enable(False)
        bSizer_version_from.Add(self.choice_ver_start, 1, wx.ALL, 5)
        sbSizer_versions.Add(bSizer_version_from, 1, wx.EXPAND, 5)
        bSizer_version_to = wx.BoxSizer(wx.HORIZONTAL)
        self.label_to = wx.StaticText(self.panel_top, wx.ID_ANY, u"To:", wx.DefaultPosition, wx.DefaultSize, 0)
        self.label_to.Wrap(-1)
        bSizer_version_to.Add(self.label_to, 0, wx.ALL, 5)
        choice_ver_stopChoices = []
        self.choice_ver_stop = wx.Choice(self.panel_top, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, choice_ver_stopChoices, 0)
        self.choice_ver_stop.SetSelection(0)
        self.choice_ver_stop.Enable(False)
        bSizer_version_to.Add(self.choice_ver_stop, 1, wx.ALL, 5)
        sbSizer_versions.Add(bSizer_version_to, 1, wx.EXPAND, 5)
        sizer_top.Add(sbSizer_versions, 0, wx.ALL|wx.EXPAND, 5)
        sizer_main.Add(sizer_top, 0, wx.EXPAND, 5)

        # Sections
        notebook_sections = wx.Notebook(self.panel_top, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, 0)
        target = self.choice_audience.GetString(self.choice_audience.GetSelection())
        for group in Groups:
            group.render(notebook_sections, target)
        sizer_main.Add(notebook_sections, 0, wx.ALL|wx.EXPAND, 5)

        # Reports
        titles = [report.title for report in AvailableReports.values()]
        self.radio_format = wx.RadioBox(self.panel_top, wx.ID_ANY, u"Report Format", wx.DefaultPosition, wx.DefaultSize, titles, 1, wx.RA_SPECIFY_COLS)
        self.radio_format.SetSelection(AvailableReports.keys().index(args.format) if args.format else 0)
        sizer_main.Add(self.radio_format, 0, wx.ALL|wx.EXPAND, 5)

        # Controls
        sizer_controls = wx.BoxSizer( wx.HORIZONTAL )
        self.btn_clear = wx.Button(self.panel_top, wx.ID_ANY, 'Clear Log', wx.DefaultPosition, wx.DefaultSize, 0)
        sizer_controls.Add(self.btn_clear, 0, wx.ALL|wx.ALIGN_CENTER_VERTICAL, 5)
        self.btn_save = wx.Button(self.panel_top, wx.ID_ANY, 'Save Log', wx.DefaultPosition, wx.DefaultSize, 0)
        sizer_controls.Add(self.btn_save, 0, wx.ALL|wx.ALIGN_CENTER_VERTICAL, 5)
        sizer_controls.AddSpacer((0, 0), 1, wx.EXPAND, 5)
        self.btn_generate = wx.Button(self.panel_top, wx.ID_ANY, 'Generate', wx.DefaultPosition, wx.DefaultSize, 0)
        self.btn_generate.Enable(False)
        sizer_controls.Add(self.btn_generate, 0, wx.ALL|wx.ALIGN_CENTER_VERTICAL, 5)
        self.btn_quit = wx.Button(self.panel_top, wx.ID_EXIT)
        sizer_controls.Add(self.btn_quit, 0, wx.ALL|wx.ALIGN_CENTER_VERTICAL, 5)
        self.btn_help = wx.Button(self.panel_top, wx.ID_HELP)
        sizer_controls.Add(self.btn_help, 0, wx.ALL|wx.ALIGN_CENTER_VERTICAL, 5)
        sizer_main.Add(sizer_controls, 0, wx.ALL|wx.EXPAND, 5)

        # Log window
        self.logbook = Log.Book()
        self.listctrl_log = WxExt.SpanningListCtrl(self.panel_top, wx.ID_ANY, style=wx.LC_REPORT | wx.SUNKEN_BORDER)
        sizer_main.Add(self.listctrl_log, 1, wx.ALL|wx.EXPAND, 5)
        # Add a new handler to the logger that will capture logging events and append them to the logbook
        logging.getLogger().addHandler(Log.wxLogHandler(self))

        # Layout
        self.panel_top.SetSizer(sizer_main)
        self.panel_top.Layout()
        self.Centre(wx.BOTH)

        # Connect Events
        self.combo_release.Bind(wx.EVT_COMBOBOX, self.onReleaseChange)
        self.combo_release.Bind(wx.EVT_TEXT, self.onReleaseChange)
        self.choice_audience.Bind(wx.EVT_CHOICE, self.onAudienceChange)
        self.btn_clear.Bind(wx.EVT_BUTTON, self.onClearLog)
        self.btn_save.Bind(wx.EVT_BUTTON, self.onSaveLog)
        self.btn_quit.Bind(wx.EVT_BUTTON, self.onQuit)
        self.btn_help.Bind(wx.EVT_BUTTON, self.onHelp)
        self.btn_generate.Bind(wx.EVT_BUTTON, self.onGenerate)
        self.Bind(wx.EVT_CLOSE, self.onExit)
        self.Bind(Log.EVT_WX_LOG_EVENT, self.onLogEvent)

        if args.release:
            self.combo_release.SetValue(args.release)
            self.onReleaseChange(None)

    def onExit(self, event):
        try:
            self.generator.join()
        except AttributeError:
            pass
        self.ccm.disconnect()
        self.Destroy()

    def onQuit(self, event):
        self.Close()

    def onClearLog(self, event):
        self.logbook = Log.Book()
        self.listctrl_log.ClearAll()

    def onSaveLog(self, event):
        saveFileDialog = wx.FileDialog(self, "Save log file",
                                       wildcard="HTML Log Files (*.html)|*.html",
                                       style=wx.FD_SAVE | wx.FD_OVERWRITE_PROMPT)
        result = saveFileDialog.ShowModal()
        if result != wx.ID_CANCEL:
            html = self.logbook.toHtml()
            path = saveFileDialog.GetPath()
            with open(path, 'w+') as logFile:
                logFile.write(html)
        saveFileDialog.Destroy()

    def onLogEvent(self, event):
        level = event.levelname.title()
        msg = event.message.strip("\r")
        entry = Log.Entry(level, msg)
        self.logbook.append(entry)
        self.logbook.sort(key=lambda entry: entry.timestamp)
        self.listctrl_log.ClearAll()
        self.listctrl_log.InsertColumn(1, 'Type')
        self.listctrl_log.InsertColumn(2, 'Description')
        for entry in self.logbook:
            Colors = {
                'Critical': (0xBA, 0x4B, 0x45),
                'Error': (0xF2, 0xDD, 0xDC),
                'Warning': (0xFD, 0xE9, 0xD9),
                'Info': (0xC5, 0xD9, 0xF1),
                'Debug': (0xC9, 0xF4, 0xC1),
            }
            color = Colors.get(entry.level, (0xFF, 0xFF, 0xFF))
            self.listctrl_log.Append((entry.level, entry.message))
            index = self.listctrl_log.GetItemCount() - 1
            self.listctrl_log.SetItemBackgroundColour(index, wx.Colour(color[0], color[1], color[2]))
        self.listctrl_log.EnsureVisible(len(self.logbook) - 1)

    def onHelp(self, event):
        contents = HelpContents.HelpContents(self)
        contents.Show()

    def onAudienceChange(self, event):
        target = self.choice_audience.GetString(self.choice_audience.GetSelection())
        for group in Groups:
            group.update(target)

    def onReleaseChange(self, event):
        release = self.combo_release.GetValue()
        # Populate the program text box with the best guess at the program name as long as it's empty
        if self.text_program.GetValue() == '':
            # Assume that the second part of the release is the program name
            program = release.split('_')[1]
            # GM programs always seem to have an xx that's lowercase
            program = program.replace('XX', 'xx')
            self.text_program.SetValue(program)
        self.baselines = self.ccm.getBaselines(release)
        if len(self.baselines) >= 2:
            # This assumes that release notes will be invalid when there's no baseline to compare to
            self.baselines.sort()
            versions = [str(baseline) for baseline in self.baselines]
            self.choice_ver_start.SetItems(versions)
            self.choice_ver_stop.SetItems(versions)
            if self.args.stop:
                stopIndex = self.choice_ver_stop.FindString(self.args.stop)
            else:
                stopIndex = len(versions) - 1
            if self.args.start:
                startIndex = self.choice_ver_start.FindString(self.args.start)
            else:
                startIndex = max(stopIndex - 1, 0)
            self.choice_ver_start.SetSelection(startIndex)
            self.choice_ver_stop.SetSelection(stopIndex)
            self.choice_ver_start.Enable(True)
            self.choice_ver_stop.Enable(True)
            self.btn_generate.Enable(True)
        else:
            self.choice_ver_start.SetItems([])
            self.choice_ver_stop.SetItems([])
            self.choice_ver_start.Enable(False)
            self.choice_ver_stop.Enable(False)
            self.btn_generate.Enable(False)

    def onGenerate(self, event):
        # Setup inputs
        format = self.radio_format.GetString(self.radio_format.GetSelection()).lower()
        report = AvailableReports.get(format)

        # Parse out the information from the GUI window
        versionFrom = self.choice_ver_start.GetString(self.choice_ver_start.GetSelection())
        versionTo = self.choice_ver_stop.GetString(self.choice_ver_stop.GetSelection())
        if versionFrom >= versionTo:
            self.popupError('Baseline version "from" must be earlier than "to"')
            return
        baselineFrom = self.baselines.lookup(versionFrom)
        baselineTo = self.baselines.lookup(versionTo)
        indexFrom = self.baselines.index(baselineFrom)
        indexTo = self.baselines.index(baselineTo)
        self.args.baselines = self.baselines[indexFrom : indexTo + 1]
        self.args.release = self.combo_release.GetValue()
        self.args.program = self.text_program.GetValue()

        # Create a progress dialog
        self.status = Progress.ProgressDialog(self)
        self.status.Show()
        self.Hide()

        # Start the generator
        self.generator = threading.Thread(target=generate, args=(report, self.args, self.status.update, self.onDone))
        self.generator.start()

        for tid, tobj in threading._active.items():
            if tobj == self.generator:
                self.status.setThread(tid)

    def onDone(self, success, outputPath):
        self.Show()
        self.Raise()
        self.status.Destroy()
        self.Bind(Log.EVT_WX_LOG_EVENT, self.onLogEvent)
        logger = logging.getLogger()
        if success:
            logger.status('Report Generated')
            absPath = os.path.abspath(outputPath)
            browseExplorer(absPath)
        else:
            logger.status('Report not generated')

    def popupError(self, message):
        dialog = wx.MessageDialog(self, message, 'Something isn\'t right...', wx.ICON_ERROR|wx.OK)
        dialog.ShowModal()



# ======================================================================================================================
# Main Function
# ----------------------------------------------------------------------------------------------------------------------
if __name__ == "__main__":
    sections = []
    for group in Groups:
        for section in group.sections:
            sections.append(section.title)
    username = getpass.getuser()
    description = "Nexteer Release Notes Generator"
    parser = argparse.ArgumentParser(description=description)
    parser.add_argument('-v', '--verbose', default=0, action='count', help='Output detailed information to console')
    parser.add_argument('--nogui', action='store_true', help='Run in command line mode without GUI')
    parser.add_argument('--release', help='Synergy release tag for project to be querried.')
    parser.add_argument('--program', default='', help='Name to use when querying change Synergy for CRs.')
    parser.add_argument('--audience', choices=Audience.GetAvailable(), help='Limit the scope of the release notes by specifying the end user')
    parser.add_argument('--start', help='Baseline verion in release to start range for release notes (inclusive).')
    parser.add_argument('--stop', help='Baseline verion in release to end range for release notes (inclusive).')
    group = parser.add_mutually_exclusive_group()
    group.add_argument('--all', action='store_true', help='Include all available sections by default')
    group.add_argument('--none', action='store_true', help='Exclude all sections by default')
    parser.add_argument('--include', action='append', default=[], choices=sections, help='Include the specified sub-section from the report')
    parser.add_argument('--exclude', action='append', default=[], choices=sections, help='Exclude the specified sub-section from the report')
    parser.add_argument('--format', choices=AvailableReports.keys(), help='Output report format')
    parser.add_argument('--username', default=username, help='Synergy username to use when performing queries, if not specified the currently logged in username will be used.')
    parser.add_argument('--password', help='Synergy password to use when performing queries, if not specified a prompt will be issued.')
    parser.add_argument('--filename', help='Specify the output filename for the report.')
    args = parser.parse_args()

    if args.nogui:
        # When not using the GUI, some of the optional arguments become mandatory, need to manually enforce
        if not args.format:
            parser.error("Use of --nogui requires an output --format.")
        if not args.release:
            parser.error("Use of --nogui requires a --release to be specified.")
        if not args.program:
            parser.error("Use of --nogui requires a --program to be specified.")

    # Setup logging
    levels = [logging.WARNING, logging.INFO, logging.DEBUG]
    logLevel = levels[min(args.verbose, 2)]
    logging.basicConfig(level=logLevel)
    # Add a new logging level with a threshold above warning to allow reporting status information
    logging.addLevelName(DEBUG_STATUS_NUM, 'STATUS')
    def status(self, message, *args, **kws):
        if self.isEnabledFor(DEBUG_STATUS_NUM):
            self._log(DEBUG_STATUS_NUM, message, args, **kws) 
    logging.Logger.status = status

    # Setup common attributes
    if args.all or args.none:
        for group in Groups:
            group.force(args.all)
    for group in Groups:
        for section in group.sections:
            if section.title in args.include and section.title in args.exclude:
                logging.warning('Section "%s" explicitly specified as both included and excluded, exclusion takes precedence', section.title)
            if section.title in args.exclude:
                section.checked = False
            elif section.title in args.include:
                section.checked = True

    # Add the fixed synergy configuration into the arguments object
    args.database = SYNERGY_CONFIG.get('database')
    args.role = SYNERGY_CONFIG.get('role')
    args.url = SYNERGY_CONFIG.get('url')
    args.workArea = SYNERGY_CONFIG.get('workArea')
    args.wsdl = SYNERGY_CONFIG.get('wsdl')

    if args.nogui:
        # Not using a GUI so lets gather all out information from the command line instead
        report = AvailableReports.get(args.format)
        ccm = None
        while ccm is None:
            # If the user's password was not given at the command line prompt them for it
            if not args.password:
                args.password = getpass.getpass('Synergy Password: ')

            ccm = SynergyCcm.GetSynergyCcm(args)

            if ccm is None:
                # Clear the password if login failed - causes us to try again
                args.password = None
            else:
                # upon successful creation of the CCM component, break the endless while loop
                break

        # Determine our baselines
        baselines = ccm.getBaselines(args.release)
        if len(baselines) < 2:
            logging.critical('Not enough baselines available for release "%s"', args.release)
            sys.exit(10)
        baselineFrom = baselines.lookup(args.start) if args.start else baselines[-2]
        baselineTo = baselines.lookup(args.stop) if args.stop else baselines[-1]
        indexFrom = baselines.index(baselineFrom)
        indexTo = baselines.index(baselineTo)
        args.baselines = baselines[indexFrom : indexTo + 1] # Slice the baselines array to select all in range

        # Define callback functions used for status updates - from the GUI these is used to update a pretty progress bar
        def update(text, percentage):
            percentage = int(percentage)
            hashes = '#' * (percentage / 2)
            bar = ' %3d%% [%-50s]  %-50s' % (percentage, hashes, text)
            print bar
        def complete(success, outputPath):
            update('Generation Complete', 100)
            if success:
                print 'Report Generated'
                print 'Report Location:', outputPath
            else:
                print 'Generation failed'

        print 'Generating started'
        generate(report, args, update, complete)

        ccm.disconnect()
    else:
        app = wx.App(0)
        main = MainFrame(None, args)
        app.SetTopWindow(main)
        main.Show()
        app.MainLoop()


# End of File: App.py