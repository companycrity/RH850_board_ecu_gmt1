# ======================================================================================================================
#      File: Sections/UserNotes/AdditionalNotes.py
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
import os
import logging

from Sections.Section import Section
from Libraries import SynergyCcm
from Model import Markdown


# ======================================================================================================================
# Global Variables
# ----------------------------------------------------------------------------------------------------------------------
logger = logging.getLogger(__name__)


# ======================================================================================================================
# Additional Notes Section Class
# ----------------------------------------------------------------------------------------------------------------------
class AdditionalNotes(Section):
    def __init__(self):
        Section.__init__(self, 'Additional Notes')
        self.weight = 30
    def compile(self, args, piece):
        ccm = SynergyCcm.GetSynergyCcm(args)
        # Use the latest baseline available to get all of the user notes
        baseline = max(args.baselines)
        object = ccm.find('UserNotes.md', baseline)
        if not object:
            logging.error('UserNotes.md not found in project baseline version %s', baseline)
            return None
        else:
            text = ccm.cat(object)
            piece.chunks = Markdown.toModel(text)
        return piece



# End of File: Sections/UserNotes/AdditionalNotes.py