# ======================================================================================================================
#      File: OdxArxml.py
#   Project: EA4 Manufacturing Services
#   Created: 2016-01-26
#  Modified: 2016-01-26
#    Author: Jared Julien
#     Email: jared.julien@nexteer.com
# Copyright: (c) 2016 Nexteer Automotive
#
# Description:
# ------------
# OdxArxml converts an ODX file into ARXML describing the services suitable for import into Configurator during CMS
# configuration.
#
# Date        Rev   Author    Change Description
# ==========  ====  ========  =========================================================================================
# 2016-01-26  1     Jared     Initial file creation
# ----------------------------------------------------------------------------------------------------------------------
# ======================================================================================================================
# Import Statements
# ----------------------------------------------------------------------------------------------------------------------
import argparse
import logging
import re
import os

# Installed Dependencies
from mako.lookup import TemplateLookup  # https://pypi.python.org/pypi/Mako/

# Local imports
import bindings.odx
import libraries.services


# ======================================================================================================================
# Helper Functions
# ----------------------------------------------------------------------------------------------------------------------
def generateArxml(services, variant):
    # Derive the path to template files as relative to this file.  Mako assumes that templates are relative to the
    # directory from which the script is called which is likely to be in a component folder where the batch files is
    # located rather than here.
    directory = os.path.dirname(os.path.realpath(__file__))
    templateDir = os.path.join(directory, 'templates')
    lookup = TemplateLookup(directories=[templateDir])
    mytemplate = lookup.get_template('OdxArxml.arxml.tpl')
    return mytemplate.render(services=services, variant=variant).replace('\r', '')


# ======================================================================================================================
# Main Function
# ----------------------------------------------------------------------------------------------------------------------
if __name__ == "__main__":
    description = "Nexteer ODX to AUTOSAR ARXML Utility - EA4 Manufacturing Services"
    parser = argparse.ArgumentParser(description=description)
    parser.add_argument('-v', '--verbose', default=0, action='count', help='Output detailed information to console')
    parser.add_argument('input', help='Input ODX filename to be converted')
    parser.add_argument('variant', help='Generation variant, either CmnMfgSrv of ProgMfgSrv')
    parser.add_argument('output', help='Output ARXML filename (unconditionally overwritten)')
    args = parser.parse_args()

    # Setup logging
    levels = [logging.WARNING, logging.INFO, logging.DEBUG]
    logLevel = levels[min(args.verbose, 2)]
    logging.basicConfig(level=logLevel)

    # Read input file
    logging.info('Reading input file: %s', args.input)
    with open(args.input) as inFile:
        odxText = inFile.read()
    cms = bindings.odx.CreateFromDocument(odxText)

    # Determine proper variant string
    if args.variant == 'CmnMfgSrv':
        moduleVariant = 'CommonService'
    else:
        moduleVariant = 'ProgramSpecificService'

    # Convert ODX to ARXML
    variant = cms.DIAG_LAYER_CONTAINER.BASE_VARIANTS.BASE_VARIANT[0]
    services = []
    for diag in variant.DIAG_COMMS.DIAG_SERVICE:
        if '_NoResponse' not in diag.SHORT_NAME:
            service = libraries.services.Service(diag, variant)
            services.append(service)
    xml = generateArxml(services, moduleVariant)

    # Write output file
    with open(args.output, 'w+') as outFile:
        outFile.write(xml)
    logging.info('Output written to: %s', args.output)


# End of File: OdxArxml.py