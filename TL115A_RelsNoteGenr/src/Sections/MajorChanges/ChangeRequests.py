# ======================================================================================================================
#      File: Sections/MajorChanges/ChangeRequests.py
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

from Sections.Section import Section
from Libraries import Audience
from Libraries import SynergyCcm
from Libraries import SynergySoap
import Model


# ======================================================================================================================
# Global Variables
# ----------------------------------------------------------------------------------------------------------------------
logger = logging.getLogger(__name__)


# ======================================================================================================================
# Change Requests Section Class
# ----------------------------------------------------------------------------------------------------------------------
class ChangeRequests(Section):
    def __init__(self):
        Section.__init__(self, 'Change Requests')
        self.weight = 0
        self.audience.append(Audience.CUSTOMER)
    def compile(self, args, piece):
        logger.info('Compiling Change Requests')
        ccm = SynergyCcm.GetSynergyCcm(args)
        logger.debug('Release: %s', args.release)
        baseline = max(args.baselines)
        previous = min(args.baselines)
        logger.debug('Comparing %s to %s', baseline, previous)
        tasks = ccm.getTasks(args.release, baseline.object, previous.object)
        logger.debug('Found %d tasks between baselines', len(tasks))
        changes = []
        soap = SynergySoap.GetSynergySoap(args)
        for task in tasks:
            if task.cr:
                for change in soap.getParents(task.cr):
                    if change not in changes and change.status.split('_')[0] == 'cr':
                        changes.append(change)
        changes.sort(key=lambda change: change.number, reverse=True)
        logger.debug('Found %d associated change requests', len(changes))

        if len(changes) > 0:
            table = Model.Table()
            row = Model.Row()
            row.columns.append(Model.Cell('Number'))
            row.columns.append(Model.Cell('Synopsis'))
            table.head.append(row)
            for change in changes:
                row = Model.Row()
                row.columns.append(Model.Cell('EA4#%d' % change.number))
                row.columns.append(Model.Cell(change.synopsis))
                table.body.append(row)
            piece.chunks.append(table)
        else:
            text = Model.Text('No change requests are associated with the specified baseline(s).')
            text.italic = True
            paragraph = Model.Paragraph()
            paragraph.texts.append(text)
            piece.chunks.append(paragraph)
        return piece


# End of File: Sections/MajorChanges/ChangeRequests.py