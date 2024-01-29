# ======================================================================================================================
#      File: Sections/KnownIssues/OpenAnomalies.py
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
import datetime

from Sections.Section import Section
from Libraries import SynergySoap
import Model


# For future reference, this handy command can be used to display all available attributes for a "project" baseline
# command = 'attr -list -project %s' % baseline
# print ccm._exec(command, True)


# ======================================================================================================================
# Helper Functions
# ----------------------------------------------------------------------------------------------------------------------
def parseVersion(text):
    return re.findall(r'([0-9]{2}).([0-9]{2}).([0-9]{2})', text)[0]


# ======================================================================================================================
# Open Anomalies Section Class
# ----------------------------------------------------------------------------------------------------------------------
class OpenAnomalies(Section):
    def __init__(self):
        Section.__init__(self, 'Open Anomalies')
        self.weight = 0
        self.checked = False
    def compile(self, args, piece):
        # (cvtype='problem') and
        # (product_name='T1xx') and
        # (anom_submitted_time<time('11/10/2015 0:00:00')) and
        # ((anom_completed_time>time('11/10/2015 0:00:00')) or
        #  (not has_attr('anom_completed_time')))
        # Query for anomalies that were created before this baseline but not completed when this baseline was created
        # Get list of open anomalies
        newest = max(args.baselines)
        timestamp = newest.created
        query = '(cvtype=\'problem\') and (product_name=\'%s\') and (anom_submitted_time<time(\'%s\')) and ((not has_attr(\'anom_completed_time\')) or (anom_completed_time>time(\'%s\'))) and (crstatus!=\'anom_rejected\')' % (args.program, timestamp, timestamp)
        soap = SynergySoap.GetSynergySoap(args)
        anomalies = soap.anomalies(query)

        # Generate a disclaimer indicating that this report is immediately outdated.
        now = datetime.datetime.now()
        disclaimer = [
            'Please note, this list of anomalies was accurate as of %s.' % now.strftime('%d-%b-%y at %I:%M:%S %p'),
            'Because the anomaly database is very dynamic this list may be incorrect.',
            'New anomalies may have been added since the above time and may impact this build.',
            'Also, some of these anomalies may not be in the proper state at the time of generation and may actually be resolved in this build.',
            'Please consider this list for reference only and consult the Change Synergy database directly for an accurate list of open anomalies.',
        ]
        paragraph = Model.Paragraph()
        for sentance in disclaimer:
            text = Model.Text(sentance)
            paragraph.texts.append(text)
        piece.chunks.append(paragraph)

        # Create table of open anomalies
        table = Model.Table()
        row = Model.Row()
        row.columns.append(Model.Cell('Number'))
        row.columns.append(Model.Cell('Synopsis'))
        table.head.append(row)
        for anomaly in anomalies:
            row = Model.Row()
            row.columns.append(Model.Cell('EA4#%d' % anomaly.number))
            row.columns.append(Model.Cell(anomaly.synopsis))
            table.body.append(row)
        piece.chunks.append(table)
        return piece


# End of File: Sections/KnownIssues/OpenAnomalies.py