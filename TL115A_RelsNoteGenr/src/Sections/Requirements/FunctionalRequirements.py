# ======================================================================================================================
#      File: Sections/Requirements/FunctionalRequirements.py
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
from Libraries import SynergyCcm
from Libraries import Audience
import Model

# ======================================================================================================================
# Helper Functions
# ----------------------------------------------------------------------------------------------------------------------
def search(baseline, component):
    for subproject in baseline.subprojects:
        if subproject.id == component.id:
            return subproject
    return ''

# ----------------------------------------------------------------------------------------------------------------------
def since(baselines, component):
    for baseline in baselines:
        for subproject in baseline.subprojects:
            if subproject.id == component.id and component.version == subproject.version:
                return baseline
    return None


# ======================================================================================================================
# Functional Requirements Section Class
# ----------------------------------------------------------------------------------------------------------------------
class FunctionalRequirements(Section):
    def __init__(self):
        Section.__init__(self, 'Functional Requirements')
        self.weight = 0
        self.audience.append(Audience.CUSTOMER)
    def compile(self, args, piece):
        ccm = SynergyCcm.GetSynergyCcm(args)
        allBaselines = ccm.getBaselines(args.release)
        components = {}
        logging.info('Gathering component info for %d project baselines', len(allBaselines))
        for idx, baseline in enumerate(allBaselines):
            logging.debug('%d/%d: %s', idx + 1, len(allBaselines), baseline)
            baseline.subprojects = ccm.getSubprojects(baseline.object)
            for project in baseline.subprojects:
                if project.id not in components or project.version > components[project.id].version:
                    components[project.id] = project
        logging.info('Gathering info for %d components', len(components.keys()))
        for idx, component in enumerate(components.values()):
            logging.debug('%d/%d: %s', idx + 1, len(components), component.id)
            component.versions = ccm.getBaselines(component.release)

        # Prep data
        components = sorted(components.values(), key=lambda component: component.id)
        baselines = [baseline for baseline in allBaselines if baseline in args.baselines]

        logging.info('Rendering Functional Requirements table')
        # Table Header
        table = Model.Table()
        table.bordered = True
        row = Model.Row()
        cell = Model.Cell('Software Component Name')
        cell.rotate = True
        row.columns.append(cell)
        for baseline in baselines:
            cell = Model.Cell('%s %s' % (args.program, baseline))
            cell.rotate = True
            cell.horizontal = 'center'
            row.columns.append(cell)
        cell = Model.Cell('Integrated Since')
        cell.rotate = True
        cell.horizontal = 'center'
        row.columns.append(cell)
        table.head.append(row)

        # Table Body
        for component in components:
            if 'CBD' in component.id:
                # Skip reporting information about the SIP package (the version isn't captured in it anyways)
                continue
            row = Model.Row()
            row.columns.append(Model.Cell(component.id))
            previous = None
            hasAtLeastOne = False
            for idx, baseline in enumerate(baselines):
                match = search(baseline, component)
                if match:
                    hasAtLeastOne = True
                cell = Model.Cell(str(match))
                cell.horizontal = 'center'
                if idx > 0 and str(match) != str(previous):
                    cell.bgcolor = 'danger'
                row.columns.append(cell)
                previous = match
            if hasAtLeastOne:
                first = since(allBaselines, component)
                row.columns.append(Model.Cell(str(first)))
                table.body.append(row)

        logging.info('Functional requirements generation complete')
        piece.chunks.append(table)
        return piece



# End of File: Sections/Requirements/FunctionalRequirements.py