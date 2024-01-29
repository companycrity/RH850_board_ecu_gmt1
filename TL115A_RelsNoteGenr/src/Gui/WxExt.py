# ======================================================================================================================
#      File: WxExt.py
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
import wx.lib.mixins.listctrl as listmix


# ======================================================================================================================
# wx Extension Classes
# ----------------------------------------------------------------------------------------------------------------------
class SpanningListCtrl(wx.ListCtrl, listmix.ListCtrlAutoWidthMixin):
    """wx extension to mix in auto width control for the rightmost column in a ListCtrl.  This makes the rightmost
    column always fill the renaming space."""
    def __init__(self, parent, ID, pos=wx.DefaultPosition, size=wx.DefaultSize, style=0):
        wx.ListCtrl.__init__(self, parent, ID, pos, size, style)
        listmix.ListCtrlAutoWidthMixin.__init__(self)


# End of File: WxExt.py