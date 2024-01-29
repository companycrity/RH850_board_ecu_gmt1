# ======================================================================================================================
#      File: Sections/Group.py
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
import os
import importlib
import logging

from Gui import Exceptions
import Model


# ======================================================================================================================
# Global Variables
# ----------------------------------------------------------------------------------------------------------------------
logger = logging.getLogger(__name__)


# ======================================================================================================================
# Group Class
# ----------------------------------------------------------------------------------------------------------------------
class Group:
    def __init__(self, title):
        self.title = title
        self.sections = []
        base = self.__module__.replace('.', '\\')
        for item in os.listdir(base):
            filename, extension = os.path.splitext(item)
            if extension == '.py' and '__init__' not in filename:
                path = os.path.join(base, filename)
                className = os.path.basename(filename)
                moduleName = path.replace('\\', '.')
                module = importlib.import_module(moduleName)
                object = getattr(module, className)
                instance = object()
                self.sections.append(instance)
        self.sections.sort(key=lambda section: section.weight)
    def force(self, checked):
        for section in self.sections:
            if section.selectable:
                section.checked = checked
    def render(self, notebook, target):
        self.panel = wx.Panel(notebook, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.TAB_TRAVERSAL)
        sizer = wx.BoxSizer(wx.VERTICAL)
        for section in self.sections:
            checkbox = section.render(self.panel, target)
            sizer.Add(checkbox, 0, wx.ALL, 5)
        self.panel.SetSizer(sizer)
        self.panel.Layout()
        sizer.Fit(self.panel)
        notebook.AddPage(self.panel, self.title, False)
    def update(self, target):
        for section in self.sections:
            section.update(target)
    def compile(self, args, progressCallback):
        part = Model.Part()
        part.heading = self.title
        for idx, section in enumerate(self.sections):
            if section.enabled and section.checked:
                percentage = 100 * idx / len(self.sections)
                progressCallback(section.title, percentage)
                try:
                    piece = section.generate(args)
                except Exceptions.StopGeneration:
                    raise
                except:
                    logger.exception('Unhandled exception occurred during generation of %s, skipping this group.', self.title)
                    continue
                if piece is not None:
                    part.pieces.append(piece)
        return part if len(part.pieces) > 0 else None


# End of File: Group.py