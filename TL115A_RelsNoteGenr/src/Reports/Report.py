# ======================================================================================================================
#      File: Reports/__init__.py
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
import Model


# ======================================================================================================================
# Report Class
# ----------------------------------------------------------------------------------------------------------------------
class Report:
    def __init__(self, title):
        self.title = title
        self.groups = []
    def compile(self, groups, args, progressCallback):
        document = Model.Document()
        document.title = args.program + ' Release Notes'
        for idx, group in enumerate(groups):
            def callback(title, partial):
                weight = 1.0 / len(groups)
                chunk = weight * partial
                percentage = 100 * idx / len(groups) + chunk
                progressCallback('Generating %s...' % title, percentage)
            part = group.compile(args, callback)
            if part is not None:
                document.parts.append(part)
        return document


# End of File: Reports/Report.py