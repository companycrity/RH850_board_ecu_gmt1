# ======================================================================================================================
#      File: App.py
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
import wx
import wx.lib.mixins.listctrl as listmix
import ctypes

import Log
import WxExt
import Exceptions


# ======================================================================================================================
# Progress Dialog Class
# ----------------------------------------------------------------------------------------------------------------------
class ProgressDialog(wx.Frame):
    """A progress dialog that is used during the generation process to show the progression and logging output.
    It also provides a mechanism to cancel generation if the users requests via a StopGeneration exception."""
    def __init__(self, parent):
        style = wx.DEFAULT_FRAME_STYLE & (~wx.MAXIMIZE_BOX)
        self.parent = parent
        title = "Release Notes Generation Progress"
        wx.Frame.__init__(self, parent, id=wx.ID_ANY, title=title, pos=wx.DefaultPosition, size=wx.Size(450,300), style=style)
        _icon = wx.EmptyIcon()
        _icon.CopyFromBitmap(wx.Bitmap("icon.ico", wx.BITMAP_TYPE_ANY))
        self.SetIcon(_icon)
        self.panel = wx.Panel(self, wx.ID_ANY)
        self.SetSizeHintsSz(wx.DefaultSize, wx.DefaultSize)
        sizer_main = wx.BoxSizer(wx.VERTICAL)
        self.label_status = wx.StaticText(self.panel, wx.ID_ANY, u"Generating...", wx.DefaultPosition, wx.DefaultSize, 0)
        self.label_status.Wrap(-1)
        sizer_main.Add(self.label_status, 0, wx.LEFT|wx.TOP, 10)
        sizer_progress = wx.BoxSizer(wx.HORIZONTAL)
        self.gauge_progress = wx.Gauge(self.panel, wx.ID_ANY, 100, wx.DefaultPosition, wx.DefaultSize, wx.GA_HORIZONTAL)
        self.gauge_progress.SetValue(0)
        sizer_progress.Add(self.gauge_progress, 1, wx.ALL, 10)
        sizer_main.Add(sizer_progress, 1, wx.EXPAND, 5)
        sizer_controls = wx.BoxSizer(wx.HORIZONTAL)
        sizer_controls.AddSpacer((0, 0), 1, wx.EXPAND, 5)
        self.btn_cancel = wx.Button(self.panel, wx.ID_CANCEL)
        sizer_controls.Add(self.btn_cancel, 0, wx.EXPAND|wx.ALIGN_CENTER_VERTICAL, 10)
        sizer_main.Add(sizer_controls, 0, wx.EXPAND|wx.ALL, 10)
        self.listctrl_log = WxExt.SpanningListCtrl(self.panel, wx.ID_ANY, style=wx.LC_REPORT | wx.SUNKEN_BORDER)
        self.listctrl_log.InsertColumn(1, 'Type')
        self.listctrl_log.InsertColumn(2, 'Description')
        sizer_main.Add(self.listctrl_log, 1, wx.ALL|wx.EXPAND, 5)
        self.panel.SetSizer(sizer_main)
        self.Layout()
        self.Centre(wx.BOTH)
        self.Bind(wx.EVT_CLOSE, self.onCancel)
        self.btn_cancel.Bind(wx.EVT_BUTTON, self.onCancel)
        parent.Bind(Log.EVT_WX_LOG_EVENT, self.onLogEvent)
        self.thread = None
    def setThread(self, tid):
        """Set the thread that is used to run the generation process.  This will optionally be used to cancel the
        generation by raising a StopGeneration exception on that thread."""
        self.thread = tid
    def update(self, text, progress):
        """Callback function passed to the generator to allow the generation thread to post periodic updates on it's
        status including progress percentage and a textual message."""
        if text:
            self.label_status.SetLabel(text)
        if progress:
            self.gauge_progress.SetValue(progress)
    def onLogEvent(self, event):
        """Event that fires when information is logged via the logging utility.  This happens when the wxLogHandler
        class receives an event and will update the log listbox to add this new entry."""
        self.parent.onLogEvent(event)
        level = event.levelname.title()
        msg = event.message.strip("\r")
        Colors = {
            'Critical': (0xBA, 0x4B, 0x45),
            'Error': (0xF2, 0xDD, 0xDC),
            'Warning': (0xFD, 0xE9, 0xD9),
            'Info': (0xC5, 0xD9, 0xF1),
            'Debug': (0xC9, 0xF4, 0xC1),
        }
        color = Colors.get(level, (0xFF, 0xFF, 0xFF))
        # Determine the position of the window before adding this new item
        position = self.listctrl_log.GetScrollPos(wx.VERTICAL)
        range = self.listctrl_log.GetScrollRange(wx.VERTICAL)
        count = self.listctrl_log.GetCountPerPage()
        atBottom = position >= max(range - count - 2, 0)
        # Append the new entry to the bottom of the log window and set it's color
        self.listctrl_log.Append((level, msg))
        index = self.listctrl_log.GetItemCount() - 1
        self.listctrl_log.SetItemBackgroundColour(index, wx.Colour(color[0], color[1], color[2]))
        if atBottom:
            # If we were already at the bottom of the window when this message was added then scroll the window to show
            # this new message.  If not, assume that the user has scrolled up for inspection.
            self.listctrl_log.EnsureVisible(index)
    def onCancel(self, event):
        """Raises a StopGeneration exception in the generator thread using it's id provided via the setThread function
        above."""
        if self.thread:
            res = ctypes.pythonapi.PyThreadState_SetAsyncExc(self.thread, ctypes.py_object(Exceptions.StopGeneration))
            if res == 0:
                raise ValueError("invalid thread id")
            elif res != 1:
                # a number greater than 1 is bad, call it again with exc=NULL to revert the effect"
                ctypes.pythonapi.PyThreadState_SetAsyncExc(tid, 0)
                raise SystemError("PyThreadState_SetAsyncExc failed")
        else:
            logging.error('Unable to cancel as no thread ID was set by the main window')


# End of File: Progress.py