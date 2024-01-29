# ======================================================================================================================
#      File: Libraries/SynergySoap.py
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

import suds


# ======================================================================================================================
# Global Variables
# ----------------------------------------------------------------------------------------------------------------------
logger = logging.getLogger(__name__)
synergySoapInstance = None


# ======================================================================================================================
# Change Request Class
# ----------------------------------------------------------------------------------------------------------------------
class ChangeRequest:
    def __init__(self):
        self.number = None
        self.status = ''
        self.synopsis = ''
        self.responsible = ''
    def __repr__(self):
        attribs = [
            "number='%s'" % self.number,
            "status='%s'" % self.status,
            "synopsis='%s'" % self.synopsis,
            "responsible='%s'" % self.responsible,
        ]
        return "<ChangeRequest(%s)>" % ', '.join(attribs)
    def __eq__(self, other):
        return self.number == other.number


# ======================================================================================================================
# Open Anomalies Section Class
# ----------------------------------------------------------------------------------------------------------------------
class SynergySoap:
    def __init__(self, args):
        logging.getLogger('suds').setLevel(logging.INFO)
        self.client = suds.client.Client(args.wsdl)
        self.token = self.client.service.login(args.username, args.password, args.database, args.role)
        self.crCache = {}
    def standardAttributes(self):
        return attrs
    def query(self, query, attrs):
        resp = self.client.service.query(self.token, query, attrs)
        try:
            queryCrs = resp.changeRequest
        except AttributeError:
            logger.error('Response from Synergy was NOT a list of change requests. (%s)', resp)
            queryCrs = []
        return queryCrs
    def anomalies(self, query):
        attrs = self.client.factory.create('ns0:ArrayOfString')
        attrs.string.append('problem_synopsis')
        attrs.string.append('crstatus')
        attrs.string.append('responsible')
        queryCrs = self.query(query, attrs)
        changeRequests = []
        for queryCr in queryCrs:
            cr = ChangeRequest()
            # Parse CRID from 'EA4#xxxx' into integer equivalent 'xxxx'
            cr.number = int(queryCr.crid[queryCr.crid.index('#') + 1:])
            for attribute in queryCr.attributes.attribute:
                if attribute.name == 'problem_synopsis':
                    cr.synopsis = attribute.stringValue
                elif attribute.name == 'crstatus':
                    cr.status = attribute.stringValue
                elif attribute.name == 'responsible':
                    cr.responsible = attribute.stringValue
            changeRequests.append(cr)
        logger.info('Synergy returned %d change requests' % len(changeRequests))
        return changeRequests
    def get(self, id):
        if id in self.crCache:
            change = self.crCache.get(id)
        else:
            query = "(cvtype='problem') and (problem_number='%s')" % id
            change = self.anomalies(query)[0]
            self.crCache[id] = change
        return change
    def getParents(self, id):
        parents = []
        attrs = self.client.factory.create('ns0:ArrayOfString')
        # Assume this is a component, integration, or verification CR and try to get the parent
        for type in ['has_subsystem_cr_comp', 'has_subsystem_cr_int', 'has_subsystem_cr_ver', 'has_subsystem_cr_comp_anom', 'has_subsystem_cr_int_anom', 'has_subsystem_cr_ver_anom']:
            resp = self.client.service.getRelatedFrom(self.token, id, type, attrs)
            if resp:
                # if len(resp.changeRequest) > 1:
                    # print 'Got one!', resp.changeRequest
                for cr in resp.changeRequest:
                    number = int(cr.crid[cr.crid.index('#') + 1:])
                    parents.append(self.get(number))
                return parents
        # If that fails, try to get the parent of a work CR
        for type in ['has_subsystem_cr_work', 'has_subsystem_cr_work_int', 'has_subsystem_cr_work_ver']:
            resp = self.client.service.getRelatedFrom(self.token, id, type, attrs)
            if resp:
                # if len(resp.changeRequest) > 1:
                    # print 'Got one!', resp.changeRequest
                for cr in resp.changeRequest:
                    parents.extend(self.getParents(cr.crid))
                return parents
        # Making it here means there is no parent... must assume that we are the parent
        number = int(id[id.index('#') + 1:])
        parents = [self.get(number)]
        return parents
        
        # Change Request
        # print self.client.service.getRelatedFrom(self.token, id, 'has_subsystem_cr_comp', attrs)
        # print self.client.service.getRelatedFrom(self.token, id, 'has_subsystem_cr_int', attrs)
        # print self.client.service.getRelatedFrom(self.token, id, 'has_subsystem_cr_ver', attrs)
        
        # # Anomaly
        # print self.client.service.getRelatedFrom(self.token, id, 'has_subsystem_cr_comp_anom', attrs)
        # print self.client.service.getRelatedFrom(self.token, id, 'has_subsystem_cr_int_anom', attrs)
        # print self.client.service.getRelatedFrom(self.token, id, 'has_subsystem_cr_ver_anom', attrs)

        # # Work CRs, run again
        # print self.client.service.getRelatedFrom(self.token, id, 'has_subsystem_cr_work', attrs)
        # print self.client.service.getRelatedFrom(self.token, id, 'has_subsystem_cr_work_int', attrs)
        # print self.client.service.getRelatedFrom(self.token, id, 'has_subsystem_cr_work_ver', attrs)


# ======================================================================================================================
# Constructor
# ----------------------------------------------------------------------------------------------------------------------
def GetSynergySoap(args):
    global synergySoapInstance
    if synergySoapInstance is None:
        synergySoapInstance = SynergySoap(args)
    return synergySoapInstance


# End of File: Libraries/SynergySoap.py