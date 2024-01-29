# ======================================================================================================================
#      File: Sections/Section.py
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
import wx
import logging

from Libraries import Audience
from Gui import Exceptions
import Model


# ======================================================================================================================
# Global Variables
# ----------------------------------------------------------------------------------------------------------------------
logger = logging.getLogger(__name__)


# ======================================================================================================================
# Section Class
# ----------------------------------------------------------------------------------------------------------------------
class Section:
    def __init__(self, title):
        self.title = title
        self.checked = True
        self.enabled = True
        self.selectable = True
        self.audience = Audience.Audience([Audience.INTERNAL])
    def render(self, panel, target):
        self.checkbox = wx.CheckBox(panel, wx.ID_ANY, self.title, wx.DefaultPosition, wx.DefaultSize, 0)
        self.checkbox.Bind(wx.EVT_CHECKBOX, self.onCheck)
        self.update(target)
        return self.checkbox
    def update(self, target):
        self.enabled = self.audience.appicable(target)
        if self.enabled:
            self.checkbox.SetValue(self.checked)
            self.checkbox.Enable(self.selectable)
        else:
            self.checkbox.SetValue(False)
            self.checkbox.Enable(False)
    def onCheck(self, event):
        self.checked = self.checkbox.GetValue()
    def generate(self, args):
        logger.status('Generating section "%s"...', self.title)
        piece = Model.Piece()
        piece.heading = self.title
        try:
            piece = self.compile(args, piece)
        except Exceptions.StopGeneration:
            raise
        except:
            logger.exception('Unhandled exception occurred during generation of %s, skipping this section.', self.title)
            return None
        logger.info('Generating completed for "%s".', self.title)
        return piece
    # This function should be overridden to implement desired functionality in inherited classes
    def compile(self, args, piece):
        return None


# End of File: Section.py