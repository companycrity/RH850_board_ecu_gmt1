# ======================================================================================================================
#      File: Model/Components.py
#   Project: EA4 Release Notes Generator
#   Created: 2017-01-04
#  Modified: 2017-01-04
#    Author: Jared Julien
#     Email: jared.julien@nexteer.com
# Copyright: (c) 2017 Nexteer Automotive
#
# Date        Rev   Author    Change Description
# ==========  ====  ========  =========================================================================================
# 2017-01-04  1     Jared     Initial file creation - moved from Model/__init__.py module
# ----------------------------------------------------------------------------------------------------------------------
# ======================================================================================================================
# Text Class
# ----------------------------------------------------------------------------------------------------------------------
class Text:
    def __init__(self, input=''):
        self.text = input
        self.font = None
        self.bold = False
        self.italic = False
        self.underline = False
    def __repr__(self):
        return self.text

# ----------------------------------------------------------------------------------------------------------------------
class Link(Text):
    def __init__(self,  input=''):
        Text.__init__(self, input)
        self.location = None


# ======================================================================================================================
# Heading Class
# ----------------------------------------------------------------------------------------------------------------------
class Heading(Text):
    def __init__(self, input=''):
        Text.__init__(self, input)
        self.level = 1


# ======================================================================================================================
# Document Class
# ----------------------------------------------------------------------------------------------------------------------
class Document:
    def __init__(self):
        self.title = ''
        self.parts = []


# ======================================================================================================================
# Part Class
# ----------------------------------------------------------------------------------------------------------------------
class Part:
    def __init__(self):
        self.heading = ''
        self.pieces = []


# ======================================================================================================================
# Piece Class
# ----------------------------------------------------------------------------------------------------------------------
class Piece:
    def __init__(self):
        self.heading = ''
        self.chunks = []


# ======================================================================================================================
# Paragraph Class
# ----------------------------------------------------------------------------------------------------------------------
class Paragraph:
    def __init__(self):
        self.texts = []
    def __repr__(self):
        return '<Paragraph "%s">' % ' '.join([repr(text) for text in self.texts])


# ======================================================================================================================
# Block Quote Class
# ----------------------------------------------------------------------------------------------------------------------
class Quote:
    def __init__(self):
        self.texts = []
    def __repr__(self):
        return '<Quote "%s">' % ' '.join([repr(text) for text in self.texts])


# ======================================================================================================================
# List Classes
# ----------------------------------------------------------------------------------------------------------------------
class List:
    def __init__(self):
        self.items = []
        self.ordered = False
    def __repr__(self):
        return '<List "%s">' % ' '.join([repr(item) for item in self.items])

# ----------------------------------------------------------------------------------------------------------------------
class Item:
    def __init__(self, input=None):
        self.texts = []
        if input:
            if isinstance(input, basestring):
                self.texts.append(Text(input))
            else:
                self.texts.append(input)
    def __repr__(self):
        return '<Item "%s">' % ' '.join([repr(text) for text in self.texts])


# ======================================================================================================================
# Table Classes
# ----------------------------------------------------------------------------------------------------------------------
class Table:
    def __init__(self):
        self.head = []
        self.body = []
        self.foot = []
        self.bordered = False
        self.position = 'center'

# ----------------------------------------------------------------------------------------------------------------------
class Row:
    def __init__(self):
        self.bgcolor = None
        self.fgcolor = None
        self.columns = []

# ----------------------------------------------------------------------------------------------------------------------
class Cell:
    def __init__(self, input=None):
        self.bgcolor = None
        self.fgcolor = None
        self.rotate = False
        self.vertical = 'bottom'
        self.horizontal = 'left'
        self.texts = []
        if input is not None:
            if isinstance(input, basestring):
                self.texts.append(Text(input))
            else:
                self.texts.append(input)


# End of File Model/Components.py