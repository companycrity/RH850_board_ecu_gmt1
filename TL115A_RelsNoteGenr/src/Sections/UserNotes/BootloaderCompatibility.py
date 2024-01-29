# ======================================================================================================================
#      File: Sections/UserNotes/BootloaderCompatability.py
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
import logging
import os
import ConfigParser
import StringIO

from Sections.Section import Section
from Libraries import SynergyCcm
import Model


# ======================================================================================================================
# Global Variables
# ----------------------------------------------------------------------------------------------------------------------
logger = logging.getLogger(__name__)


# ======================================================================================================================
# Bootloader Compatibility Section Class
# ----------------------------------------------------------------------------------------------------------------------
class BootloaderCompatibility(Section):
    def __init__(self):
        Section.__init__(self, 'Bootloader Compatability')
        self.weight = 0
    def compile(self, args, piece):
        ccm = SynergyCcm.GetSynergyCcm(args)
        # Use the latest baseline in the series in hopes of getting the most complete table
        baseline = max(args.baselines)
        object = ccm.find('BootloaderCompatibility.ini', baseline)
        if not object:
            logging.error('BootloaderCompatibility.ini not found in project baseline version %s', baseline)
        else:
            # Fetch the raw contents of the file from Synergy
            raw = ccm.cat(object)
            # Create a string I/O buffer from the raw contents
            buffer = StringIO.StringIO(raw)
            compatibility = ConfigParser.RawConfigParser()
            compatibility.optionxform = str
            # Load the string from Synergy into the config parser via the string IO object
            compatibility.readfp(buffer)
            sections = compatibility.sections()
            if 'Bootloaders' not in sections or 'Applications' not in sections:
                logger.error('Malformed bootloader compatability file, expected two sections titled \'Bootloaders\' and \'Applications\', skipping this section')
                return None
            bootloaders = dict(compatibility.items('Bootloaders'))
            applications = dict(compatibility.items('Applications'))

            table = Model.Table()
            table.bordered = True
            row = Model.Row()
            row.columns.append(Model.Cell('Application'))
            indexes = sorted(map(int, bootloaders.keys()))
            for idx in indexes:
                name = bootloaders.get(str(idx))
                cell = Model.Cell(name)
                cell.rotate = True
                cell.horizontal = 'center'
                row.columns.append(cell)
            table.head.append(row)
            for application in sorted(applications.keys()):
                test = SynergyCcm.Baseline()
                test.version = SynergyCcm.parseVersion(application)
                if test in args.baselines:
                    row = Model.Row()
                    row.columns.append(Model.Cell(application))
                    compatability = [int(idx.strip()) for idx in applications.get(application).split(',')]
                    for idx in indexes:
                        if idx in compatability:
                            value = 'X'
                        else:
                            value = ''
                        text = Model.Text(value)
                        text.bold = True
                        cell = Model.Cell(text)
                        cell.horizontal = 'center'
                        row.columns.append(cell)
                    table.body.append(row)
            piece.chunks.append(table)
        return piece



# End of File: Sections/UserNotes/BootloaderCompatability.py