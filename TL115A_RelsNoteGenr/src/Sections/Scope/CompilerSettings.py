# ======================================================================================================================
#      File: Sections/Scope/CompilerSettings.py
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
import re
import os
import ConfigParser

from Sections.Section import Section
from Libraries import SynergyCcm
import Model


# ======================================================================================================================
# Compiler Settings Section Class
# ----------------------------------------------------------------------------------------------------------------------
class CompilerSettings(Section):
    def __init__(self):
        Section.__init__(self, 'Compiler Settings')
        self.weight = 25
    def compile(self, args, piece):
        ccm = SynergyCcm.GetSynergyCcm(args)
        project = args.program + '.gpj'
        available = []
        for baseline in args.baselines:
            object = ccm.find(project, baseline)
            if not object:
                logging.error('%s not found in project baseline version %s', project, baseline)
                return None
            else:
                source = ccm.cat(object)
                # Match against ant item in the file starting with a dash but not followed by an I for include files
                pattern = re.compile(r'\n[ \t]*-+([^I].+)')
                matches = pattern.findall(source)
                baseline.settings = []
                for option in matches:
                    baseline.settings.append(option)
                    if option not in available:
                        available.append(option)
        available.sort()

        table = Model.Table()
        row = Model.Row()
        cell = Model.Cell('Setting')
        row.columns.append(cell)
        for baseline in args.baselines:
            cell = Model.Cell(str(baseline))
            cell.rotate = True
            row.columns.append(cell)
        table.head.append(row)
        for option in available:
            row = Model.Row()
            label = Model.Text(option)
            label.bold = True
            cell = Model.Cell(label)
            row.columns.append(cell)
            previous = None
            for baseline in args.baselines:
                cell = Model.Cell('X' if option in baseline.settings else '')
                cell.horizontal = 'center'
                if previous and previous.settings.count(option) != baseline.settings.count(option):
                    # highlight changes in options to make more readable
                    cell.bgcolor = 'danger'
                row.columns.append(cell)
                previous = baseline
            table.body.append(row)
        piece.chunks.append(table)
        return piece


# End of File: Sections/Scope/CompilerInformation.py