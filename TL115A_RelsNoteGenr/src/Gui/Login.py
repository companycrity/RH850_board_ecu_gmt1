

# ======================================================================================================================
# Import Statements
# ----------------------------------------------------------------------------------------------------------------------
import wx
import wx.xrc


# ======================================================================================================================
# Login Dialog Class
# ----------------------------------------------------------------------------------------------------------------------
class LoginDialog(wx.Dialog):
    def __init__(self, parent):
        wx.Dialog.__init__ (self, parent, id = wx.ID_ANY, title = wx.EmptyString, pos = wx.DefaultPosition, size = wx.DefaultSize, style = wx.DEFAULT_DIALOG_STYLE)
        self.SetSizeHintsSz(wx.DefaultSize, wx.DefaultSize)
        self.m_panel = wx.Panel(self, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.TAB_TRAVERSAL)
        sizer_main = wx.BoxSizer(wx.VERTICAL)
        sizer_parent = wx.BoxSizer(wx.VERTICAL)
        sizer_username = wx.BoxSizer(wx.HORIZONTAL)
        self.label_Username = wx.StaticText(self.m_panel, wx.ID_ANY, u"Username:", wx.DefaultPosition, wx.DefaultSize, 0)
        self.label_Username.Wrap(-1)
        sizer_username.Add(self.label_Username, 0, wx.ALL|wx.ALIGN_CENTER_VERTICAL, 5)
        self.textCtrl_username = wx.TextCtrl(self.m_panel, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, wx.TE_PROCESS_ENTER)
        sizer_username.Add(self.textCtrl_username, 1, wx.ALL, 5)
        sizer_parent.Add(sizer_username, 0, wx.EXPAND, 5)
        sizer_password = wx.BoxSizer(wx.HORIZONTAL)
        self.label_Password = wx.StaticText(self.m_panel, wx.ID_ANY, u"Password:", wx.DefaultPosition, wx.DefaultSize, 0)
        self.label_Password.Wrap(-1)
        sizer_password.Add(self.label_Password, 0, wx.ALL|wx.ALIGN_CENTER_VERTICAL, 5)
        self.textCtrl_password = wx.TextCtrl(self.m_panel, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, wx.TE_PASSWORD|wx.TE_PROCESS_ENTER)
        sizer_password.Add(self.textCtrl_password, 1, wx.ALL, 5)
        sizer_parent.Add(sizer_password, 0, wx.EXPAND, 5)
        sizer_controls = wx.BoxSizer(wx.HORIZONTAL)
        sizer_controls.AddSpacer((0, 0), 1, wx.EXPAND, 5)
        self.m_buttonSubmit = wx.Button(self.m_panel, wx.ID_ANY, u"Submit", wx.DefaultPosition, wx.DefaultSize, 0)
        sizer_controls.Add(self.m_buttonSubmit, 0, wx.ALL, 5)
        self.m_buttonCancel = wx.Button(self.m_panel, wx.ID_ANY, u"Cancel", wx.DefaultPosition, wx.DefaultSize, 0)
        sizer_controls.Add(self.m_buttonCancel, 0, wx.ALL, 5)
        sizer_parent.Add(sizer_controls, 0, wx.EXPAND, 5)
        self.m_panel.SetSizer(sizer_parent)
        self.m_panel.Layout()
        sizer_parent.Fit(self.m_panel)
        sizer_main.Add(self.m_panel, 1, wx.EXPAND |wx.ALL, 5)
        self.SetSizer(sizer_main)
        self.Layout()
        sizer_main.Fit(self)
        self.Centre(wx.BOTH)

        self.textCtrl_password.SetFocus()

        # Connect Events
        self.textCtrl_username.Bind(wx.EVT_TEXT_ENTER, self.onSubmit)
        self.textCtrl_password.Bind(wx.EVT_TEXT_ENTER, self.onSubmit)
        self.m_buttonSubmit.Bind(wx.EVT_BUTTON, self.onSubmit)
        self.m_buttonCancel.Bind(wx.EVT_BUTTON, self.onCancel)

    def onSubmit(self, event):
        self.EndModal(wx.ID_OK)

    def onCancel(self, event):
        self.EndModal(wx.ID_CANCEL)

    def setUsername(self, username):
        self.textCtrl_username.SetValue(username)

    def getUsername(self):
        return self.textCtrl_username.GetValue()
    
    def getPassword(self):
        return self.textCtrl_password.GetValue()


# End of File: Login.py