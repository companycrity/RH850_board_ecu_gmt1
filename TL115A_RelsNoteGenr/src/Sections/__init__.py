# ======================================================================================================================
#      File: Sections/__init__.py
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
import importlib


# ======================================================================================================================
# Helper Functions
# ----------------------------------------------------------------------------------------------------------------------
def GetAllGroups():
    """Return all available groups."""
    groups = []
    dir = 'Sections'
    for name in os.listdir(dir):
        root = os.path.join(dir, name)
        if os.path.isdir(root):
            className = os.path.basename(root)
            path = root.replace('\\', '.')
            module = importlib.import_module(path)
            object = getattr(module, className)
            instance = object()
            groups.append(instance)
    return sorted(groups, key=lambda group: group.weight)



# End of File Sections/__init__.py