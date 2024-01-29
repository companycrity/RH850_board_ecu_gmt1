# ======================================================================================================================
#      File: Sections/Scope/Identification.py
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
import datetime
import getpass

from Sections.Section import Section
from Libraries import Audience
from Libraries import SynergyCcm
from Libraries import Autosar4
import Model


# ======================================================================================================================
# Global Variables
# ----------------------------------------------------------------------------------------------------------------------
logger = logging.getLogger(__name__)


# ======================================================================================================================
# Helper Functions
# ----------------------------------------------------------------------------------------------------------------------
def getProgram(ecuc):
    for module in ecuc.AR_PACKAGES.AR_PACKAGE[0].ELEMENTS.ECUC_MODULE_CONFIGURATION_VALUES:
        if module.SHORT_NAME.value() == 'NxtrSwIds':
            logging.info('Found expected module: %s', module.SHORT_NAME.value())
            for container in module.CONTAINERS.ECUC_CONTAINER_VALUE:
                if container.DEFINITION_REF.value() == '/Nexteer/NxtrSwIds/NxtrSwIdsGeneral':
                    for parameter in container.PARAMETER_VALUES.ECUC_TEXTUAL_PARAM_VALUE:
                        if parameter.DEFINITION_REF.value() == '/Nexteer/NxtrSwIds/NxtrSwIdsGeneral/SwRelNr':
                            return parameter.VALUE.value()
    return 'Not Found'

# ----------------------------------------------------------------------------------------------------------------------
def getRevision(ecuc):
    for module in ecuc.AR_PACKAGES.AR_PACKAGE[0].ELEMENTS.ECUC_MODULE_CONFIGURATION_VALUES:
        if module.SHORT_NAME.value() == 'NxtrSwIds':
            logger.info('Found expected module: %s', module.SHORT_NAME.value())
            for container in module.CONTAINERS.ECUC_CONTAINER_VALUE:
                if container.DEFINITION_REF.value() == '/Nexteer/NxtrSwIds/NxtrSwIdsGeneral':
                    for parameter in container.PARAMETER_VALUES.ECUC_TEXTUAL_PARAM_VALUE:
                        if parameter.DEFINITION_REF.value() == '/Nexteer/NxtrSwIds/NxtrSwIdsGeneral/SwRelVer':
                            return parameter.VALUE.value()
    return None


# ======================================================================================================================
# Identification Section Class
# ----------------------------------------------------------------------------------------------------------------------
class Identification(Section):
    def __init__(self):
        Section.__init__(self, 'Identification')
        self.weight = 0
        self.audience.append(Audience.CUSTOMER)
        self.selectable = False
    def compile(self, args, piece):
        # Fetch ECUC information from Synergy
        baseline = max(args.baselines)
        ccm = SynergyCcm.GetSynergyCcm(args)
        object = ccm.find('EPS_NxtrSwIds_ecuc.arxml', baseline)
        if not object:
            logging.error('EPS_NxtrSwIds_ecuc.arxml not found in project, unable to produce identification information')
            return piece
        input = ccm.cat(object)
        ecuc = Autosar4.CreateFromDocument(input)
        program = getProgram(ecuc)
        ecucVersion = getRevision(ecuc)
        baselineVersion = str(baseline)
        if ecucVersion != baselineVersion:
            logger.warning('Mismatch found between software version found in ECUC (%s) and the Synergy baseline (%s), using %s', ecucVersion, baselineVersion, baselineVersion)
        try:
            username = getpass.getuser().lower()
        except:
            username = None
        generationTime = datetime.datetime.now()

        table = Model.Table()
        table.position = 'left' if len(args.baselines) > 2 else 'center'

        # Add program name to table
        row = Model.Row()
        text = Model.Text('Program Name:')
        text.bold = True
        cell = Model.Cell(text)
        cell.horizontal = 'right'
        row.columns.append(cell)
        row.columns.append(Model.Cell(program))
        table.body.append(row)

        # When only covering a specific version just add a couple of rows to this table with information
        if len(args.baselines) <= 2:
            # Add software version to table
            row = Model.Row()
            text = Model.Text('Software Version:')
            text.bold = True
            cell = Model.Cell(text)
            cell.horizontal = 'right'
            row.columns.append(cell)
            row.columns.append(Model.Cell(baselineVersion))
            table.body.append(row)

            # Add baseline date to table
            row = Model.Row()
            text = Model.Text('Baseline Date:')
            text.bold = True
            cell = Model.Cell(text)
            cell.horizontal = 'right'
            row.columns.append(cell)
            row.columns.append(Model.Cell(baseline.createdDate().strftime('%d-%b-%y %I:%M %p')))
            table.body.append(row)

        # Add Generation date to table
        row = Model.Row()
        text = Model.Text('Generation Date:')
        text.bold = True
        cell = Model.Cell(text)
        cell.horizontal = 'right'
        row.columns.append(cell)
        row.columns.append(Model.Cell(generationTime.strftime('%d-%b-%y %I:%M %p')))
        table.body.append(row)

        # Add generating user's username to table
        if username:
            row = Model.Row()
            text = Model.Text('Generated By:')
            cell = Model.Cell(text)
            text.bold = True
            cell.horizontal = 'right'
            row.columns.append(cell)
            row.columns.append(Model.Cell(username))
            table.body.append(row)
        piece.chunks.append(table)

        # When covering multiple baselines add another table with information about each
        if len(args.baselines) > 2:
            table = Model.Table()
            row = Model.Row()
            row.columns.append(Model.Cell('Baseline Version'))
            row.columns.append(Model.Cell('Baseline Date'))
            table.head.append(row)

            for baseline in args.baselines:
                row = Model.Row()
                row.columns.append(Model.Cell(str(baseline)))
                row.columns.append(Model.Cell(baseline.createdDate().strftime('%d-%b-%y %I:%M %p')))
                table.body.append(row)

            piece.chunks.append(table)
        return piece



# End of File: Sections/Scope/Identification.py