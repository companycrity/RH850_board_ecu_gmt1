# ======================================================================================================================
#      File: Sections/UserNotes/SupportedNtcs.py
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
import re
import logging

from Sections.Section import Section
from Libraries import SynergyCcm
import Model


# ======================================================================================================================
# Global Variables
# ----------------------------------------------------------------------------------------------------------------------
logger = logging.getLogger(__name__)


# ======================================================================================================================
# DTC Mapping Section Class
# ----------------------------------------------------------------------------------------------------------------------
class SupportedNtcs(Section):
    def __init__(self):
        Section.__init__(self, 'Supported Nexteer Trouble Codes (NTCs)')
        self.weight = 10
    def compile(self, args, piece):
        ccm = SynergyCcm.GetSynergyCcm(args)
        ntcs = []
        for baseline in args.baselines:
            # Fetch the config file from Synergy
            object = ccm.find('DiagcMgr_Cfg.c', baseline)
            if not object:
                logging.error('DiagcMgr_Cfg.c not found in project baseline version %s', baseline)
                baseline.ntcs = None
                continue
            source = ccm.cat(object)

            # Extract a list of NTCs
            pattern = re.compile(r'[\t ]*\{[\t ]*0x([0-9A-F]{2})U,[\t ]*0x[0-9A-F]{2}U,[\t ]*0x[0-9A-F]{2}U \},[\t ]*/\*[\t ]*NTCNR_0X([0-9A-F]{3})[\t ]*\*/')
            # Use pattern to extract information for each NTC
            matches = pattern.findall(source)
            # For each NTC, parse the numbers of those that are actually tied to some application (i.e. enabled)
            enabled = [int(match[1], 16) for match in matches if match[0] != 'FF']
            baseline.ntcs = enabled
            ntcs.extend(enabled)

        # Reduce the global list of NTCs down to a single set
        ntcs = list(set(ntcs))

        # Add a description for this section
        description = Model.Paragraph()
        description.texts.append(Model.Text("""The following NTCs are supported by the software.
        Any NTC that does not appear below can be assumed as not-supported by the software.
        Note, however, that NTCs may be disabled via cals."""))
        piece.chunks.append(description)

        # Build the table header
        table = Model.Table()
        table.bordered = True
        row = Model.Row()
        row.columns.append(Model.Cell('NTC Number'))
        for baseline in args.baselines:
            cell = Model.Cell(str(baseline))
            cell.rotate = True
            cell.horizontal = 'center'
            row.columns.append(cell)
        table.head.append(row)

        # Build the table body
        for ntc in sorted(ntcs):
            row = Model.Row()
            text = Model.Text('0x%03X' % ntc)
            text.bold = True
            cell = Model.Cell(text)
            cell.horizontal = 'right'
            row.columns.append(cell)
            for baseline in args.baselines:
                if baseline.ntcs:
                    value = 'X' if ntc in baseline.ntcs else ''
                else:
                    value = '?'
                cell = Model.Cell(value)
                cell.horizontal = 'center'
                row.columns.append(cell)
            table.body.append(row)

        piece.chunks.append(table)
        return piece



# End of File: Sections/UserNotes/SupportedNtcs.py