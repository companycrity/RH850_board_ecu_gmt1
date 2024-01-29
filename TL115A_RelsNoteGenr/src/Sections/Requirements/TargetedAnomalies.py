# ======================================================================================================================
#      File: Sections/Requirements/TargetedAnomalies.py
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
# Anomalies Repaired Section Class
# ----------------------------------------------------------------------------------------------------------------------
class TargetedAnomalies(Section):
    def __init__(self):
        Section.__init__(self, 'Targeted Anomalies')
        self.weight = 10
        self.audience.append(Audience.CUSTOMER)
    def compile(self, args, piece):
        logger.info('Compiling Targeted Anomalies')
        ccm = SynergyCcm.GetSynergyCcm(args)
        logger.debug('Release: %s', args.release)
        # Take the first baseline as the "previous"
        previous = args.baselines[0]
        # Skip the first baseline and iterate through the remainder
        for baseline in args.baselines[1:]:
            logger.debug('Comparing %s to %s', baseline, previous)
            baseline.tasks = ccm.getTasks(args.release, baseline.object, previous.object)
            logger.debug('Found %d tasks between baselines', len(baseline.tasks))
        anomalies = []
        soap = SynergySoap.GetSynergySoap(args)
        # Step through each of our baselines skipping the first which doesn't have any tasks...
        for baseline in args.baselines[1:]:
            # Step through each task completed in each baseline...
            for task in baseline.tasks:
                # We only care about a task if it's attached to a work CR
                if task.cr:
                    # Fetch the top level parents of a given work CR and loop through them
                    for anomaly in soap.getParents(task.cr):
                        # Ensure that it's an anomaly and not an ICR
                        if anomaly.status.split('_')[0] == 'anom':
                            # Ensure that this anomaly is not already in the list
                            if anomaly not in anomalies:
                                anomaly.baseline = baseline
                                anomalies.append(anomaly)
        anomalies.sort(key=lambda anomaly: anomaly.number)
        logger.debug('Found %d associated anomalies', len(anomalies))

        if len(anomalies) > 0:
            table = Model.Table()
            row = Model.Row()
            row.columns.append(Model.Cell('Number'))
            row.columns.append(Model.Cell('Synopsis'))
            row.columns.append(Model.Cell('Repaired In'))
            table.head.append(row)
            for anomaly in anomalies:
                row = Model.Row()
                row.columns.append(Model.Cell('EA4#%d' % anomaly.number))
                row.columns.append(Model.Cell(anomaly.synopsis))
                row.columns.append(Model.Cell(str(anomaly.baseline)))
                table.body.append(row)
            piece.chunks.append(table)
        else:
            text = Model.Text('No anomalies are associated with the specified baseline(s).')
            text.italic = True
            paragraph = Model.Paragraph()
            paragraph.texts.append(text)
            piece.chunks.append(paragraph)
        return piece



# End of File: Sections/Requirements/TargetedAnomalies.py