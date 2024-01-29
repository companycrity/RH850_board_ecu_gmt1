<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<AUTOSAR xmlns="http://autosar.org/schema/r4.0" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://autosar.org/schema/r4.0 autosar_4-0-3.xsd">
  <AR-PACKAGES>
    <AR-PACKAGE>
      <SHORT-NAME>ActiveEcuC</SHORT-NAME>
      <ELEMENTS>
        <ECUC-MODULE-CONFIGURATION-VALUES>
          <SHORT-NAME>NxtrMfgSrv</SHORT-NAME>
          <DEFINITION-REF DEST="ECUC-MODULE-DEF">/Nexteer/NxtrMfgSrv</DEFINITION-REF>
          <IMPLEMENTATION-CONFIG-VARIANT>VARIANT-PRE-COMPILE</IMPLEMENTATION-CONFIG-VARIANT>
          <CONTAINERS>
            % for service in services:
              <ECUC-CONTAINER-VALUE>
                <SHORT-NAME>${service.title()}</SHORT-NAME>
                <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/Nexteer/NxtrMfgSrv/${variant}</DEFINITION-REF>
                <PARAMETER-VALUES>
                  <ECUC-TEXTUAL-PARAM-VALUE>
                    <DEFINITION-REF DEST="ECUC-ENUMERATION-PARAM-DEF">/Nexteer/NxtrMfgSrv/${variant}/ServiceType</DEFINITION-REF>
                    <VALUE>${service.type()}</VALUE>
                  </ECUC-TEXTUAL-PARAM-VALUE>
                  <ECUC-NUMERICAL-PARAM-VALUE>
                    <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/Nexteer/NxtrMfgSrv/${variant}/RequestLength</DEFINITION-REF>
                    <VALUE>${service.reqLen()}</VALUE>
                  </ECUC-NUMERICAL-PARAM-VALUE>
                  <ECUC-NUMERICAL-PARAM-VALUE>
                    <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/Nexteer/NxtrMfgSrv/${variant}/ResponseLength</DEFINITION-REF>
                    <VALUE>${service.respLen()}</VALUE>
                  </ECUC-NUMERICAL-PARAM-VALUE>
                  % if service.serviceId() is not None:
                    <ECUC-NUMERICAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/Nexteer/NxtrMfgSrv/${variant}/ServiceId</DEFINITION-REF>
                      <VALUE>${service.serviceId()}</VALUE>
                    </ECUC-NUMERICAL-PARAM-VALUE>
                  % endif;
                  % if service.subFunction() is not None:
                    <ECUC-NUMERICAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/Nexteer/NxtrMfgSrv/${variant}/SubFunction</DEFINITION-REF>
                      <VALUE>${service.subFunction()}</VALUE>
                    </ECUC-NUMERICAL-PARAM-VALUE>
                  % endif;
                </PARAMETER-VALUES>
                <SUB-CONTAINERS>
                  <ECUC-CONTAINER-VALUE>
                    <SHORT-NAME>AccessControls</SHORT-NAME>
                    <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/Nexteer/NxtrMfgSrv/${variant}/AccessControls</DEFINITION-REF>
                    <PARAMETER-VALUES>
                      <ECUC-NUMERICAL-PARAM-VALUE>
                        <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/Nexteer/NxtrMfgSrv/${variant}/AccessControls/NexteerSession</DEFINITION-REF>
                        <VALUE>${str(service.nexteerSession()).lower()}</VALUE>
                      </ECUC-NUMERICAL-PARAM-VALUE>
                      <ECUC-NUMERICAL-PARAM-VALUE>
                        <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/Nexteer/NxtrMfgSrv/${variant}/AccessControls/SecurityAccess</DEFINITION-REF>
                        <VALUE>${str(service.securityAccess()).lower()}</VALUE>
                      </ECUC-NUMERICAL-PARAM-VALUE>
                    </PARAMETER-VALUES>
                  </ECUC-CONTAINER-VALUE>
                </SUB-CONTAINERS>
              </ECUC-CONTAINER-VALUE>
            % endfor;
          </CONTAINERS>
        </ECUC-MODULE-CONFIGURATION-VALUES>
      </ELEMENTS>
    </AR-PACKAGE>
  </AR-PACKAGES>
</AUTOSAR>
