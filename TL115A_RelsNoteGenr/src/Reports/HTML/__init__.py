# ======================================================================================================================
#      File: Reports/HTML/__init__.py
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

from mako.lookup import TemplateLookup  # https://pypi.python.org/pypi/Mako/
from mako import exceptions

from Reports.Report import Report


# ======================================================================================================================
# Constants
# ----------------------------------------------------------------------------------------------------------------------
ASSET_DIR = r'Reports\HTML\Assets'
CSS_FILES = [
    r'css\bootstrap.min.css',
]

JS_FILES = [
    r'js\jquery.min.js',
    r'js\bootstrap.min.js',
    r'js\favicon.js',
]


# ======================================================================================================================
# Helper Functions
# ----------------------------------------------------------------------------------------------------------------------
def fetchCss():
    html = ''
    for file in CSS_FILES:
        path = os.path.join(ASSET_DIR, file)
        with open(path) as inFile:
            css = inFile.read()
        html += '<style type="text/css">\n%s\n</style>\n' % css
    return html

# ----------------------------------------------------------------------------------------------------------------------
def fetchJs():
    html = ''
    for file in JS_FILES:
        path = os.path.join(ASSET_DIR, file)
        with open(path) as inFile:
            js = inFile.read()
        html += '<script type="text/javascript">\n%s\n</script>\n' % js
    return html



# ======================================================================================================================
# HTML Report Class
# ----------------------------------------------------------------------------------------------------------------------
class HTML(Report):
    def __init__(self):
        Report.__init__(self, 'HTML')
    def render(self, document, filename):
        if filename[-5:] != '.html':
            filename += '.html'
        directory = os.path.dirname(os.path.realpath(__file__))
        templateDir = os.path.join(directory, 'Templates')
        lookup = TemplateLookup(directories=[templateDir])
        assets = {}
        assets['css'] = fetchCss()
        assets['js'] = fetchJs()
        try:
            mytemplate = lookup.get_template('Document.html.tpl')
            html = mytemplate.render(document=document, assets=assets).replace('\r', '')
        except:
            html = exceptions.html_error_template().render()
        with open(filename, 'w+') as outFile:
            outFile.write(html.encode('ascii', 'ignore'))
        return filename


# End of File: Reports/HTML/__init__.py