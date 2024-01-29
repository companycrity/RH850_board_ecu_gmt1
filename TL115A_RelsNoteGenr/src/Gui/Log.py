# ======================================================================================================================
#      File: Log.py
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
import datetime
import time
import wx
import wx.lib.newevent


# ======================================================================================================================
# Logging Event
# ----------------------------------------------------------------------------------------------------------------------
wxLogEvent, EVT_WX_LOG_EVENT = wx.lib.newevent.NewEvent()


# ======================================================================================================================
# wx Logging Event Handler
# ----------------------------------------------------------------------------------------------------------------------
class wxLogHandler(logging.Handler):
    """Custom handler class to catch Python logging events and translate them into wx events to allow logging output
    to be displayed in listview containers."""
    def __init__(self, wxDest=None):
        logging.Handler.__init__(self)
        self.wxDest = wxDest
        self.level = logging.DEBUG
    def flush(self):
        pass
    def emit(self, record):
        try:
            msg = self.format(record)
            evt = wxLogEvent(message=msg, levelname=record.levelname)
            wx.PostEvent(self.wxDest, evt)
        except (KeyboardInterrupt, SystemExit):
            raise
        except:
            self.handleError(record)


# ======================================================================================================================
# Log Book Class
# ----------------------------------------------------------------------------------------------------------------------
class Book(list):
    """A special list intended to hold instances of the Entry class below.  This list provides special functionality
    to render it's contents into HTML for use when saving log output to file."""
    def toHtml(self):
        """Convert the classes contents to HTML.  Suitable for use when saving log output to disc."""
        Colors = {
            'Debug':   ('#000000', '#C9F4C1'),  # black on green
            'Info':    ('#000000', '#C5D9F1'),  # black on blue
            'Warning': ('#000000', '#FDE9D9'),  # black on yellow
            'Error':   ('#000000', '#F2DDDC')   # black on red
        }
        now = datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')
        html = '<html>\n'
        html += '\t<head>\n'
        html += '\t\t<title>Release Notes Generation Log - Saved %s</title>\n' % now
        html += '\t</head>\n'
        html += '\t<body>\n'
        html += '\t\t<table>\n'
        html += '\t\t\t<tr>\n'
        html += '\t\t\t\t<th>Timestamp</th>\n'
        html += '\t\t\t\t<th>Type</th>\n'
        html += '\t\t\t\t<th>Description</th>\n'
        html += '\t\t\t</tr>\n'
        for entry in self:
            date = datetime.datetime.fromtimestamp(entry.timestamp)
            date = date.strftime('%Y-%m-%d %H-%M-%S.%f')
            color = Colors.get(entry.level.title(), ('#000000', '#FFFFFF'))  # black on white by default
            style = 'style="color: %s; background-color: %s;"' % color
            html += '\t\t\t<tr %s>\n' % style
            html += '\t\t\t\t<td>%s</td>\n' % date
            html += '\t\t\t\t<td>%s</td>\n' % entry.level
            html += '\t\t\t\t<td>%s</td>\n' % entry.message
            html += '\t\t\t</tr>\n'
        html += '\t\t</table>\n'
        html += '\t</body>\n'
        html += '</html>\n'
        return html


# ======================================================================================================================
# Log Entry Class
# ----------------------------------------------------------------------------------------------------------------------
class Entry:
    """Simple log entry class.  One is created each time a logging event occurs to store information about the event."""
    timestamp = 0
    level = 'DEBUG'
    message = ''
    def __init__(self, level, message):
        self.level = level
        self.message = message
        self.timestamp = time.time()


# End of File: Log.py