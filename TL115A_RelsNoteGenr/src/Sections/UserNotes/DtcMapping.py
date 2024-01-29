# ======================================================================================================================
#      File: Sections/UserNotes/DtcMapping.py
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
# DTC Event Class
# ----------------------------------------------------------------------------------------------------------------------
class DTC:
    def __init__(self, name, number, id):
        self.uid = name + number
        self.name = name
        self.number = int(number, 16)
        self.id = int(id)


# ======================================================================================================================
# Helper Functions
# ----------------------------------------------------------------------------------------------------------------------
def buildMapping(ccm, baseline):
    # If the configuration file parsing fails default to an empty array.  This will cause the remapping to
    # fall back on a 1:1 mapping with the even IDs from the DEM (this was the strategy before the mapping table
    # in DiagcMgr was implemented).
    # Fetch the diagnostic manager configuration from synergy
    mapping = {}
    object = ccm.find('DiagcMgr_Cfg.c', baseline)
    if not object:
        logging.error('DiagcMgr_Cfg.c not found in project baseline version %s', baseline)
    else:
        # Produce a mapping between the numbers used in the FltResp calibration and the event names from the DEM
        source = ccm.cat(object)
        eventToCtc = {}
        for idx, name in enumerate(re.findall(r'(DemConf_DemEventParameter_.+?),', source)):
            ctcNumber = idx + 1
            eventToCtc[name] = ctcNumber
        object = ccm.find('Dem_Lcfg.h', baseline)
        if not object:
            logging.error('Dem_Lcfg.h not found in project baseline version %s', baseline)
        else:
            # Produce a mapping between the DTC event IDs and the CTC numbers from the fault response
            source = ccm.cat(object)
            for name, eventId in re.findall(r'(DemConf_DemEventParameter_.+?) +(\d+)', source):
                mapping[eventId] = eventToCtc.get(name)
    return mapping


# ======================================================================================================================
# DTC Mapping Section Class
# ----------------------------------------------------------------------------------------------------------------------
class DtcMapping(Section):
    def __init__(self):
        Section.__init__(self, 'DTC Mapping')
        self.weight = 11
    def compile(self, args, piece):
        ccm = SynergyCcm.GetSynergyCcm(args)
        events = {}
        for baseline in args.baselines:
            # Construct a mapping table for cross referencing DEM event ID numbers to the CTC numbers used by the
            # fault response table calibration.  This will provide the EPDT with the information they need to properly
            # map CTCs in the fault response table.
            mapping = buildMapping(ccm, baseline)

            # Fetch the DEM config file from Synergy
            object = ccm.find('Dem_Lcfg.c', baseline)
            if not object:
                logging.error('Dem_Lcfg.c not found in project baseline version %s', baseline)
                baseline.events = None
                continue
            source = ccm.cat(object)

            # Extract a list of events
            pattern = re.compile(r'\{ /\* +([0-9]+) \*/ 0x([0-9A-F]{8})UL \},? +/\* \[([a-zA-Z0-9_]+)\] \*/')
            matches = pattern.findall(source)
            baseline.events = {}
            for id, ctcNumber, name in matches:
                # Use the mapping table to remap the DTC event number from the regular expression into the event number
                # used by the fault response table calibration for CTC mapping.  If no entry is found in the mapping
                # table then just use the the event ID.
                eventId = mapping.get(id)
                if eventId is None:
                    logging.warning('EventId %s not found in mapping set to DiagcMgr, is this CTC properly configured in DiagcMgr?', eventId)
                    eventId = id
                event = DTC(name, ctcNumber, eventId)
                if event.id != 0:
                    baseline.events[event.uid] = event
                    if event.uid not in events:
                        events[event.uid] = event

        # Create table header
        table = Model.Table()
        row = Model.Row()
        row.columns.append(Model.Cell('Name'))
        row.columns.append(Model.Cell('CTC'))
        for baseline in args.baselines:
            cell = Model.Cell('%s Event ID' % baseline)
            cell.rotate = True
            row.columns.append(cell)
        table.head.append(row)

        # Create table body
        for event in sorted(events.values(), key=lambda event: event.number):
            row = Model.Row()
            row.columns.append(Model.Cell(event.name))
            cell = Model.Cell('0x%04X.%02X' % (event.number >> 8, event.number & 0xFF))
            cell.horizontal = 'right'
            row.columns.append(cell)
            previous = None
            for index, baseline in enumerate(args.baselines):
                if baseline.events is not None:
                    specific = baseline.events.get(event.uid)
                    id = str(specific.id) if specific else ''
                else:
                    specific = None
                    id = '?'
                cell = Model.Cell(id)
                cell.horizontal = 'right'
                if index > 0 and specific and previous and specific.id != previous.id:
                    # Highlight changes in event IDs
                    cell.bgcolor = 'danger'
                previous = specific
                row.columns.append(cell)
            table.body.append(row)

        piece.chunks.append(table)
        return piece



# End of File: Sections/UserNotes/DtcMapping.py