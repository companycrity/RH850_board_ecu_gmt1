# ======================================================================================================================
#      File: Libraries/SynergyCcm.py
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
import os
import re
import subprocess
import logging
import atexit
import tempfile
import shutil

import dateutil.parser  # https://pypi.python.org/pypi/python-dateutil



# ======================================================================================================================
# Global Variables
# ----------------------------------------------------------------------------------------------------------------------
logger = logging.getLogger(__name__)
synergyCcmInstance = None
tempdir = tempfile.mkdtemp()


# ======================================================================================================================
# Exit Handler
# ----------------------------------------------------------------------------------------------------------------------
atexit.register(shutil.rmtree, tempdir)


# ======================================================================================================================
# Classes
# ----------------------------------------------------------------------------------------------------------------------
class Baseline:
    def __init__(self):
        self.version = ()
        self.object = ''
        self.created = None
    def __str__(self):
        return '.'.join(['%02d' % x for x in self.version])
    def __repr__(self):
        return self.object
    def __gt__(self, other):
        return self.version > other.version
    def __lt__(self, other):
        return self.version < other.version
    def __eq__(self, other):
        return self.version == other.version
    def __ne__(self, other):
        return self.version != other.version
    def createdDate(self):
        return dateutil.parser.parse(self.created)

# ----------------------------------------------------------------------------------------------------------------------
class Baselines(list):
    def lookup(self, version):
        version = parseVersion(version)
        for baseline in self:
            if baseline.version == version:
                return baseline
        raise KeyError('Baseline version %s not found' % version)

# ----------------------------------------------------------------------------------------------------------------------
class Project:
    def __init__(self, object):
        self.object = object
        first, second = object.split('-')
        if '_' in first and 'RH850' not in first:
            # This is a Nexteer owned component
            parts = second.split('_')
            self.id = parts[0]
            if len(self.id) == 5 and self.id[-1] != 'A':
                self.id += 'A'
            self.name = parts[1]
            self.vendor = 'Nexteer'
            self.delivery = 'N/A'
            if self.id[:2] == 'TL':
                self.version = parseVersion(parts[2])
            else:
                self.version = parseVersion(parts[-1])
            self.revision = None
        else:
            # This is third party software
            parts = list(second.split('_'))
            self.id = parts.pop(0)
            self.name = self.id
            self.vendor = parts.pop(0)
            self.package = parts.pop(0) if len(parts) == 4 else 'N/A'
            self.delivery = parts.pop(0) if len(parts) == 3 else 'N/A'
            if self.name == 'Suprt':
                # There are multiple support components, so we use the third field to distinguish them
                self.name = parts.pop(0)
            self.version = parseVersion(parts.pop(0))
            self.revision = int(parts.pop(0)) if parts else 0
    def __str__(self):
        try:
            return '%d.%d.%d' % self.version
        except:
            return str(self.version)
    def __repr__(self):
        return self.object
    def __gt__(self, other):
        return self.version > other.version
    def __lt__(self, other):
        return self.version < other.version
    def __eq__(self, other):
        return self.id == other.id and self.version == other.version
    def __ne__(self, other):
        return self.id != other.id or self.version != other.version
    def createdDate(self):
        return dateutil.parser.parse(self.created)

# ----------------------------------------------------------------------------------------------------------------------
class Task:
    def __init__(self, number, release, cr, owner, created):
        self.number = number
        self.release = release
        try:
            self.cr = int(cr[cr.index('#') + 1:])
        except ValueError:
            self.cr = None
        self.owner = owner
        self.created = created
    def __repr__(self):
        return '<Task %s>' % self.number


# ======================================================================================================================
# Helper Functions
# ----------------------------------------------------------------------------------------------------------------------
def parseVersion(text):
    matches = re.findall(r'([0-9]{1,2})\.([0-9]{1,2})\.([0-9]{1,2})', text)
    if matches:
        version = matches[-1]
        return (int(version[0]), int(version[1]), int(version[2]))
    try:
        return int(text)
    except ValueError:
        return None


# ======================================================================================================================
# Synergy CCM Class
# ----------------------------------------------------------------------------------------------------------------------
class SynergyCcm:
    def __init__(self):
        self.exe = self.FindCcmExe(['C:\\Program Files\\IBM', 'C:\\Program Files (x86)\\IBM'])
        # Query Caches
        self.baselines = {}
        self.subprojects = {}
        self.tasks = {}
    @staticmethod
    def FindCcmExe(synergy_search_paths):
        def searchFolder(folder, fileName):
            for root, dirnames, filenames in os.walk(folder):
                for file in filenames:
                    if file == fileName:
                        return os.path.join(root, file)
            return None
        for path in synergy_search_paths:
            logger.debug('Searching in: %s', path)
            ccmExe = searchFolder(path, "ccm.exe")
            if ccmExe != None:
                return ccmExe
        return None
    def _exec(self, command):
        cmdline = '"%s" %s' % (self.exe, command)
        logger.debug('Executing: [%s]', cmdline)
        process = subprocess.Popen(cmdline, stdout=subprocess.PIPE, stderr=subprocess.PIPE, shell=True, universal_newlines=True)
        outLines = []
        while process.poll() == None:
            out = process.stdout.readline().strip('\r\n')
            if out != "":
                logger.debug('> %s', out)
                outLines.append(out)
        out, err = process.communicate()
        for line in out.split('\n'):
            if line != "":
                line = line.strip('\r\n')
                logger.debug('> %s', line)
                outLines.append(line)
        for line in err.split('\n'):
            if line != "":
                line = line.strip('\r\n')
                logger.error('> %s', line)
        results = []
        for line in outLines:
            if ')' in line:
                line = line[line.index(')') + 1:]
            line = line.strip()
            results.append(line)
        return results
    def connect(self, username, password, path, url, workArea):
        params = '-q -nogui -d %s -s %s -u %s' % (path, url, workArea)
        command = 'start %s -n %s -pw %s' % (params, username, password)
        cmdline = [self.exe] + command.split(' ')
        try:
            response = subprocess.check_output(cmdline, stderr=subprocess.STDOUT)
        except subprocess.CalledProcessError as exc:
            if exc.returncode == 4 and 'Another CLI session is running on this machine' in exc.output:
                # Already logged in, this is okay
                return True
            # Otherwise there was some kind of login error, return False to inform the caller we failed
            return False
        # If the response comes back with data and no error, login was successful
        return len(response) > 0
    def disconnect(self):
        self._exec('stop')
    def query(self, query):
        command = 'query %s' % query
        return self._exec(command)
    def find(self, filename, baseline):
        query = '"is_member_of(\'%s\') and (name=\'%s\')" -f "%%objectname"' % (baseline.object, filename)
        results = self.query(query)
        object = results[0] if results else None
        return object
    def getBaselines(self, release):
        """Helper function that returns a list of baseline versions for a given program as a list of three tuples.
        These tuples can then easily be sorted and compared."""
        if release in self.baselines:
            return self.baselines.get(release)
        query = '"(cvtype=\'project\') and (status=\'integrate\') and (release=\'%s\')" -f "%%objectname\t%%version\t%%create_time"' % release
        results = self.query(query)
        baselines = Baselines()
        for result in results:
            baseline = Baseline()
            baseline.object, version, baseline.created = result.split('\t')
            baseline.version = parseVersion(version)
            baselines.append(baseline)
        baselines.sort()
        self.baselines[release] = baselines  # cache for potential future use
        return baselines
    def getSubprojects(self, parent):
        if parent in self.subprojects:
            return self.subprojects.get(parent)
        query = '-f "%%displayname\t%%release" "is_member_of(\'%s\') and type=\'project\'"' % parent
        results = self.query(query)
        projects = []
        for result in results:
            displayname, release = result.split('\t')
            project = Project(displayname)
            project.release = release
            projects.append(project)
        self.subprojects[parent] = projects  # cache for potential future use
        return projects
    def getTasks(self, release, baseline, filter):
        """Get a list of all change requests attached to baseline that are not in the filter baseline.  This function
        can be used to fetch a list of change requests attached to a single baseline if the previous baseline is
        given as the filter baseline."""
        key = '%s_%s_%s' % (release, baseline, filter)
        if key in self.tasks:
            return self.tasks.get(key)
        query = 'task -query -in_release %s %s -f "%%task_number\t%%release\t%%change_request\t%%owner\t%%create_time"' % (filter, baseline)
        results = self._exec(query)
        tasks = []
        for result in results:
            parts = result.split('\t')
            task = Task(*parts)
            if task.release == release:
                tasks.append(task)
        self.tasks[key] = tasks
        return tasks
    def objectToFileName(self, objectname):
        return re.sub(r'[^a-zA-Z0-9_-]', '_', objectname)
    def cat(self, object):
        filename = '_' + self.objectToFileName(object)
        path = os.path.join(tempdir, filename)
        if not os.path.exists(path):
            cmd = 'cat "%s" > "%s"' % (object, path)
            self._exec(cmd)
        with open(path) as inFile:
            contents = inFile.read()
        return contents
    def getReleases(self, filterComponents=False):
        query = 'release -list'
        releases = self._exec(query)
        if not filterComponents:
            return releases
        filtered = []
        for release in releases:
            if not re.match(r'[A-Z]{2,3}_?[0-9]{2,3}[A-Z]', release):
                filtered.append(release)
        return filtered


# ======================================================================================================================
# Constructor
# ----------------------------------------------------------------------------------------------------------------------
def GetSynergyCcm(args):
    global synergyCcmInstance
    if synergyCcmInstance is None:
        instance = SynergyCcm()
        if instance.connect(args.username, args.password, args.database, args.url, args.workArea):
            # Store a reference to this instance if the connection was successful
            synergyCcmInstance = instance
    return synergyCcmInstance


# End of File: Libraries/SynergyCcm.py