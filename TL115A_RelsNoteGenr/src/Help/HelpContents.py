# ======================================================================================================================
#      File: HelpContents.py
#   Project: EA4 Release Notes Generator
#   Created: 2017-01-04
#  Modified: 2017-01-04
#    Author: Jared Julien
#     Email: jared.julien@nexteer.com
# Copyright: (c) 2017 Nexteer Automotive
#
# Displays a help dialog box displaying the contents of the Help Contents folder (a bunch of markdown files with
# specific titles.  The filenames are split using a regular expression and used to construct a tree of help topics.)
# Files can be added or removed to alter the contents.  The tree is automatically generated at runtime from the files
# in the folder with a .md extension.
#
# Date        Rev   Author    Change Description
# ==========  ====  ========  =========================================================================================
# 2017-01-04  1     Jared     Initial file creation
# ----------------------------------------------------------------------------------------------------------------------
# ----------------------------------------------------------------------------------------------------------------------

# ======================================================================================================================
# Import Statements
# ----------------------------------------------------------------------------------------------------------------------
import re
import os
import wx
import wx.html
import markdown
import webbrowser
import glob


# ======================================================================================================================
# Help Item Class
# ----------------------------------------------------------------------------------------------------------------------
class Item:
    title = ''
    html = ''


# ======================================================================================================================
# wx Html Window Class Extension
# ----------------------------------------------------------------------------------------------------------------------
class wxHTML(wx.html.HtmlWindow):
    def __init__(self, *args, **kwds):
        if 'tree' in kwds:
            self.contents = kwds['tree']
            del kwds['tree']
        wx.html.HtmlWindow.__init__(self, *args, **kwds)

    def diveToSelected(self, parent, ref):
        found = False
        count = self.contents.GetChildrenCount(parent, False)
        for i in xrange(count):
            if i == 0:
                child, cookie = self.contents.GetFirstChild(parent)
            else:
                child, cookie = self.contents.GetNextChild(parent, cookie)
            # text  = self.GetPyData(child).replace('\n', '\\n')
            title = self.contents.GetItemText(child)
            section = re.search(r'([\d\.]+)', title)
            if section != None and section.group(1) == ref:
                self.contents.SelectItem(child)
                return True
            found |= self.diveToSelected(child, ref)
        return found

    def OnLinkClicked(self, link):
        ref = link.GetHref()
        match = re.search(r'([\d\.]+).*?#?(.*)', ref)
        found = False
        if match != None:
            page = match.group(1)
            # scrollTo = match.group(2)
            root = self.contents.GetRootItem()
            found = self.diveToSelected(root, page)
        if not found:
            webbrowser.open(ref)


# ======================================================================================================================
# Help Contents Class
# ----------------------------------------------------------------------------------------------------------------------
class HelpContents(wx.Frame):
    def __init__(self, *args, **kwds):
        kwds["style"] = wx.DEFAULT_FRAME_STYLE
        wx.Frame.__init__(self, *args, **kwds)
        self.window_splitter = wx.SplitterWindow(self, wx.ID_ANY, style=wx.SP_3D | wx.SP_BORDER)
        self.window_left = wx.Panel(self.window_splitter, wx.ID_ANY)
        self.contents = wx.TreeCtrl(self.window_left, wx.ID_ANY, style=wx.TR_HAS_BUTTONS | wx.TR_LINES_AT_ROOT | wx.TR_HIDE_ROOT | wx.TR_DEFAULT_STYLE | wx.SUNKEN_BORDER)
        self.window_right = wx.Panel(self.window_splitter, wx.ID_ANY)
        self.viewer = wxHTML(self.window_right, wx.ID_ANY, tree=self.contents)

        self.__set_properties()
        self.__do_layout()

        self.Bind(wx.EVT_TREE_SEL_CHANGED, self.onSelectItem, self.contents)

        self.loadTree()

    def __set_properties(self):
        self.SetTitle("Help Contents")
        self.SetSize((950, 650))
        _icon = wx.EmptyIcon()
        _icon.CopyFromBitmap(wx.Bitmap("icon.ico", wx.BITMAP_TYPE_ANY))
        self.SetIcon(_icon)

    def __do_layout(self):
        sizer_main = wx.BoxSizer(wx.VERTICAL)
        sizer_right = wx.BoxSizer(wx.VERTICAL)
        sizer_left = wx.BoxSizer(wx.VERTICAL)
        sizer_left.Add(self.contents, 1, wx.EXPAND, 0)
        self.window_left.SetSizer(sizer_left)
        sizer_right.Add(self.viewer, 1, wx.EXPAND, 0)
        self.window_right.SetSizer(sizer_right)
        self.window_splitter.SplitVertically(self.window_left, self.window_right, 200)
        sizer_main.Add(self.window_splitter, 1, wx.EXPAND, 0)
        self.SetSizer(sizer_main)
        self.Layout()

    # -----[ Load Tree Function ]---------------------------------------------------------------------------------------
    # @brief    Called by init to construct the tree of help topics.
    def loadTree(self):
        items = []
        for name in glob.glob(r'..\doc\Help\*.md'):
            item = Item()
            item.title = os.path.splitext(os.path.basename(name))[0]
            with open(name) as inFile:
                text = inFile.read()
            item.html = markdown.markdown(text, extensions=['extra'])
            items.append(item)
        items = sorted(items, key=lambda item: item.title)
        self.contents.DeleteAllItems()
        node = self.contents.AddRoot('Contents')
        prevLevel = 1
        parents = []
        child = None
        for item in items:
            match = re.match(r'([\d\.]+)', item.title)
            # pick off the first part of the title in case there's a digit and '.' in the title i.e. '1.x'
            sections = re.findall(r'(\d\.)', match.group(1))
            level = len(sections)
            if level > prevLevel:
                parents.append(node)
                node = child
                prevLevel += 1
            elif level < prevLevel:
                # may move back more than one level
                while level < prevLevel:
                    node = parents.pop()
                    prevLevel -= 1
            child = self.contents.AppendItem(node, item.title)
            self.contents.SetPyData(child, item.html)

    # -----[ Select Item Event ]----------------------------------------------------------------------------------------
    # @brief    Catch link selection and try to resolve as a relative link before passing it along to the default
    #           web-browser.  This way, links to documentation cause page changes in the help dialog and external links
    #           are opened in the user's browser.
    def onSelectItem(self, event):
        html = self.contents.GetPyData(event.GetItem())
        if html != None:
            self.viewer.SetPage(html)


# End of FIle: HelpContents.py