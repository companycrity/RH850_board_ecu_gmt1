# ======================================================================================================================
#      File: Reports/PDF/__init__.py
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

from reportlab.platypus import SimpleDocTemplate, Paragraph, Table, Spacer, PageBreak
from reportlab.lib.styles import getSampleStyleSheet
from reportlab.rl_config import defaultPageSize
from reportlab.lib.units import inch
from reportlab.pdfbase import pdfmetrics
from reportlab.pdfbase.ttfonts import TTFont

from Reports.Report import Report
import Model


# ======================================================================================================================
# Constants
# ----------------------------------------------------------------------------------------------------------------------
PAGE_HEIGHT = defaultPageSize[1]
PAGE_WIDTH = defaultPageSize[0]
STYLES = getSampleStyleSheet()
FONTS = {
    'Calibri': 'calibri.ttf',
    'CalibriBd': 'calibrib.ttf',
}


# ======================================================================================================================
# Global Variables
# ----------------------------------------------------------------------------------------------------------------------



# ======================================================================================================================
# Helper Functions
# ----------------------------------------------------------------------------------------------------------------------
Title = "Hello world"
pageinfo = "platypus example"
def firstPage(canvas, doc):
    canvas.saveState()
    canvas.setFont('CalibriBd', 16)
    canvas.drawCentredString(PAGE_WIDTH/2.0, PAGE_HEIGHT-108, document.title)
    # canvas.setFont('Times-Roman',9)
    # canvas.drawString(inch,0.75 * inch, "First Page / %s" % pageinfo)
    canvas.restoreState()


def laterPages(canvas, doc):
    canvas.saveState()
    canvas.setFont('Calibri', 9)
    canvas.drawRightString(inch, 0.75 * inch, "Page %d" % doc.page)
    canvas.restoreState()

def registerFonts():
    directory = os.path.dirname(os.path.realpath(__file__))
    fontDir = os.path.join(directory, 'Fonts')
    for font, filename in FONTS.iteritems():
        path = os.path.join(fontDir, filename)
        pdfmetrics.registerFont(TTFont(font, path))




# ======================================================================================================================
# PDF Report Class
# ----------------------------------------------------------------------------------------------------------------------
class PDF(Report):
    def __init__(self):
        Report.__init__(self, 'PDF')
    def render(self, inDoc, filename):
        global document
        document = inDoc
        if filename[-4:] != '.pdf':
            filename += '.pdf'
        registerFonts()
        doc = SimpleDocTemplate(filename)
        story = [PageBreak()]
        # print STYLES.list()
        for idx1, part in enumerate(document.parts):
            text = '%d %s' % (idx1 + 1, part.heading)
            heading = Paragraph(text, STYLES.get('Heading1'))
            story.append(heading)
            for idx2, piece in enumerate(part.pieces):
                text = '%d.%d %s' % (idx1 + 1, idx2 + 1, piece.heading)
                heading = Paragraph(text, STYLES.get('Heading2'))
                story.append(heading)
                for chunk in piece.chunks:
                    if isinstance(chunk, Model.Paragraph):
                        text = ' '.join([text.text for text in chunk.texts])
                        # TODO: Handle styles for individual texts here
                        paragraph = Paragraph(text, STYLES.get('Normal'))
                        story.append(p)
                    elif isinstance(chunk, Model.Table):
                        rows = []
                        for row in chunk.head + chunk.body + chunk.foot:
                            cells = []
                            for cell in row.columns:
                                text = ' '.join([text.text for text in cell.texts])
                                # TODO: Handle styles for individual texts here
                                cells.append(text)
                            rows.append(cells)
                        table = Table(rows, repeatRows=len(chunk.head))
                        story.append(table)
                    story.append(Spacer(1, 0.2 * inch))
                story.append(Spacer(1, 0.6 * inch))
            story.append(PageBreak())
                        
        doc.build(story, onFirstPage=firstPage, onLaterPages=laterPages)
        return filename


# End of File: Reports/PDF/__init__.py