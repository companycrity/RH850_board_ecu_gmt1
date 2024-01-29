# ======================================================================================================================
#      File: Sections/Scope/CompilerInformation.py
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
# Compiler Information Section Class
# ----------------------------------------------------------------------------------------------------------------------
class CompilerInformation(Section):
    def __init__(self):
        Section.__init__(self, 'Compiler Information')
        self.weight = 20
    def compile(self, args, piece):
        ccm = SynergyCcm.GetSynergyCcm(args)
        baseline = max(args.baselines)
        object = ccm.find('ProjectTraits.ini', baseline)
        if not object:
            logging.error('ProjectTraits.ini not found in project baseline version %s', baseline)
            return None
        else:
            # Fetch the raw contents of the file from Synergy
            raw = ccm.cat(object)
            # Create a string I/O buffer from the raw contents
            buffer = StringIO.StringIO(raw)
            traits = ConfigParser.RawConfigParser()
            # Load the string from Synergy into the config parser via the string IO object
            traits.readfp(buffer)
            items = traits.items('compiler')
            if not items:
                logging.error('No items in project trait configuration [compiler] section or section not present')
            else:
                table = Model.Table()
                row = Model.Row()
                cell = Model.Cell('Tool')
                cell.horizontal = 'right'
                row.columns.append(cell)
                row.columns.append(Model.Cell('Version'))
                table.head.append(row)
                for key, value in items:
                    logging.debug('Compiler information trait - %s: %s', key, value)
                    row = Model.Row()
                    label = Model.Text(key.title() + ':')
                    label.bold = True
                    cell = Model.Cell(label)
                    cell.horizontal = 'right'
                    row.columns.append(cell)
                    row.columns.append(Model.Cell(value))
                    table.body.append(row)
                piece.chunks.append(table)
        return piece


# End of File: Sections/Scope/CompilerInformation.py