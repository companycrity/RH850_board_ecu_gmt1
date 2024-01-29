<?xml version="1.0" encoding="UTF-8"?>
<!--
***********************************************************************************************************************
*  COPYRIGHT
*  ********************************************************************************************************************
*  Copyright (c) 2006-2009 by Vector Informatik GmbH, all rights reserved
*
*                This software is copyright protected and proprietary to Vector Informatik GmbH.
*                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
*                 All other rights remain with Vector Informatik GmbH.
***********************************************************************************************************************


***********************************************************************************************************************
*  FILE DESCRIPTION
*  ********************************************************************************************************************
*         File:  SWC_WdgM.xsl
*    Component:  SysService_AsrWdM
*      Version:  GroupVersion="2.1.x"
*       Module:  WdgM
*
*   Description: -
***********************************************************************************************************************


***********************************************************************************************************************
*  AUTHOR IDENTITY
*  ********************************************************************************************************************
*  Name                          Initials      Company
*  ********************************************************************************************************************
*  Peter Paulus                  Pp            Vector Informatik GmbH
*  ********************************************************************************************************************
*  REVISION HISTORY
*  ********************************************************************************************************************
*  Version   Date        Author  Change Id     Description
*  ********************************************************************************************************************
*  02.00.00  2008-02-19  Pp      Creation of WdgM according to ASR3.0 release.
*  02.00.01  2008-05-19  Pp      ESCAN00026988 No changes in this file.
*                                              Resolved CodeInspection issues.
*  02.00.02  2008-06-03  Pp                    No changes in this file.
*  02.00.03  2008-06-09  Pp                    Removed svn keyword Id.
*  02.01.00  2008-06-30  Pp      ESCAN00027956 Added generator version check.
*  02.01.01  2008-07-16  Bmz     ESCAN00028458 no changes in define
*  02.01.02  2008-07-29  Bmz     ESCAN00028784 OPERATION-INVOKED-EVENT: the P-PORT-PROTOTYPE-REF is corrected to  `ComponentType/WdgM/globalmode`
*  02.02.00  2008-11-27  Bmz     ESCAN00030954 ECU mode management support
*                                ESCAN00031023 Bugfixing Callback Function Update - no changes in define
*                                ESCAN00031400 Bswmd Version insert - no changes in define
*  02.02.01  2009-03.01  Bmz     ESCAN00033401 No changes in this file.
*                                ESCAN00032075 No changes in this file.
*                                ESCAN00032646 No changes in this file.
*                                ESCAN00032744 No changes in this file.
*                                ESCAN00032077 No changes in this file.
*                                ESCAN00033836 the export of semantic information of service port interfaces added
*  02.03.00  2009-07-09  Bmz     ESCAN00035918 No changes in this file.
*                                ESCAN00034698 No changes in this file.
*                                ESCAN00036334 No changes in this file.
*                                ESCAN00032744 No changes in this file.
*                                -             Copyright update
*                                ESCAN00036400 No changes in this file.
*  02.03.01  2009-10-20  Bmz     ESCAN00038585 The wrong cycle function name is genereated for Alive Superivisions via DaVinciDeveloper
*                                              in case the Rte Mode Switch Notification is enabled.
*                                ESCAN00037101 No changes in this file.
*  02.03.02  2010-03-15  Bmz     ESCAN00041402 No changes in this file.
*                                ESCAN00041506 No changes in this file.
*  02.03.03  2010-05-06  Bmz     ESCAN00042306 No changes in this file.
*                                -             version update
*                                ESCAN00042796 No changes in this file.
*  02.03.04  2010-08-20  Bmz     ESCAN00043727 No changes in this file.
*  02.04.00  2010-12-07  Cer,Bmz ESCAN00045139 Added generation of module prefixes for symbolic names (Generation.xml)
*                                ESCAN00046406 Relation for container 'SupervisedEntity_0' reworked (Identifier.xml)
*                                ESCAN00045984 Removed string compares for numeric values (Validation.xml)
*                                ESCAN00031590 Renamed ports and modes in the SWC generation (SWC_WdgM.xsl),
*                                              IdentifierS.xml and WdgMS.xml to make service mapping easier
*                                SW-Version Update
*  02.04.01  2011-02-23  Bmz     ESCAN00048848 No changes in this file.
*
*  **.**.**  2011-06-08  JDU     draft by TTTech
*  **.**.**  2011-06-14  JDU     2nd draft by TTTech using feedback by Mr. Kalmbach/Vector
*  **.**.**  2011-07-13  JDU     Release Candidate
*  **.**.**  2011-08-26  JDU     generate code for `WdgM_MainFunction` and `WdgM_UpdateTickCount`
*  **.**.**  2011-09-14  JDU     [42475] AUTOSAR 3.1 compatibility
*  **.**.**  2011-09-14  JDU     [42548] fixed `GetLocalStatus` parameter type
*  **.**.**  2011-09-20  JDU     [42628,42629] new functions
*  **.**.**  2011-09-21  JDU     [42660] `UpdateTickCount` is periodic
*  **.**.**  2011-09-26  JDU     [42626] use `WdgM_LocalStatusType` as parameter type
*  **.**.**  2011-09-27  JDU     [42718] fix `ActivateSupervisionEntity` parameter list
*  **.**.**  2011-09-27  JDU     [42719] fix `DeactivateSupervisionEntity` parameter list
*  **.**.**  2011-09-27  JDU     [42475] use `UpdateAliveCounter` for 3.1 entities
*  **.**.**  2011-09-30  JDU     [42660] provide arguments for `UpdateTickCount`
*  **.**.**  2011-10-03  JDU     [42626] fix `PORT-API-OPTION` elements
*  **.**.**  2011-10-03  JDU     [42794] ensure unique `RUNNABLE` names
*  **.**.**  2011-10-04  JDU     [42475] use the right interface name
*  **.**.**  2011-10-21  JDU     [43187] temporarily remove AUTOSAR 3.1 compatibility mode
*  **.**.**  2011-10-21  JDU     [43206] support two new functions
*  **.**.**  2011-10-24  JDU     [43206] generate callback functions for each entity
*  **.**.**  2011-10-25  JDU     [43240] remove superflous prefix and fix parameter list
*  **.**.**  2011-11-02  JDU     [43240] remove superflous prefix for Global State Change Callback
*  **.**.**  2011-11-02  JDU     [43240] fixed the Local State Change callbacks.
*  **.**.**  2012-04-05  JDU     [42794] `WdgUpdateAliveCounter` should work now
*  **.**.**  2012-07-11  JDU     [42794] bugfix functions added to 4.0
*  **.**.**  2013-08-27  JDU     [55971] AUTOSAR4 version
*
***********************************************************************************************************************
-->
<xsl:stylesheet version="2.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
    xmlns:fo="http://www.w3.org/1999/XSL/Format"
    xmlns:xs="http://www.w3.org/2001/XMLSchema"
    xmlns:fn="http://www.w3.org/2004/07/xpath-functions"
    xmlns:xdt="http://www.w3.org/2004/07/xpath-datatypes"
    xmlns="http://autosar.org/schema/r4.0"
    xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
    exclude-result-prefixes="xsl fo xs fn xdt">
  <xsl:output method="xml" encoding="UTF-8" indent="yes"/>
  <xsl:variable name="COMP_NAME" select="'WdgM'"/>
  <xsl:variable name="WDGM_SUPERVISED_ENTITY_ID_TYPE" select="//*[local-name() = 'DEFINITION-REF' and .= '/TTTECH/WdgM/WdgMGeneral/WdgMSupervisedEntityIdType']/../*[local-name() = 'VALUE']"/>
  <xsl:variable name="WDGM_SUPERVISION_CYCLE"         select="//*[local-name() = 'DEFINITION-REF' and .= '/TTTECH/WdgM/WdgMConfigSet/WdgMMode/WdgMSupervisionCycle']/../*[local-name() = 'VALUE']"/>
  <xsl:variable name="WDGM_TICKS_PER_SECOND"          select="//*[local-name() = 'DEFINITION-REF' and .= '/TTTECH/WdgM/WdgMConfigSet/WdgMMode/WdgMTicksPerSecond']/../*[local-name() = 'VALUE']"/>

  <!--
  DO NOT DELETE THIS COMMENT!!! THIS IS INTENDED.
  -->
  <xsl:variable name="WDGM_CBK_MODE_SWITCH_NOTIFICATION" select="//*[local-name() = 'DEFINITION-REF' and .= '/TTTECH/WdgM/WdgMGeneral/WdgMCbkModeSwitchNotification']/../*[local-name() = 'VALUE']"/>
  <!--
  DO NOT DELETE THIS COMMENT!!! THIS IS INTENDED.
  -->
  <!-- Root template (Entry Point of Transformation) -->
  <xsl:template match="/">
    <AUTOSAR>
      <xsl:attribute name="xsi:schemaLocation">http://autosar.org/schema/r4.0 autosar_4-0-3.xsd</xsl:attribute>
      <AR-PACKAGES>
        <AR-PACKAGE>
          <SHORT-NAME>ComponentType</SHORT-NAME>
          <ELEMENTS>
            <SERVICE-SW-COMPONENT-TYPE>
              <SHORT-NAME><xsl:value-of select="$COMP_NAME"/></SHORT-NAME>
              <CATEGORY>SERVICE_COMPONENT</CATEGORY>
              <!-- Add export of special data group DV_SDG for service port interfaces -->
              <ADMIN-DATA>
                <SDGS>
                  <SDG GID="DV_SDG">
                    <SD GID="DV_BSWM">WdgM</SD>
                 </SDG>
                </SDGS>
              </ADMIN-DATA>
              <!-- Add Port Prototypes -->
              <xsl:call-template name="WDGM_PORT_PROTOTYPES"/>
              <!-- Add Internal Behavior -->
              <xsl:call-template name="WDGM_INTERNAL_BEHAVIOR"/>
            </SERVICE-SW-COMPONENT-TYPE>
            <!-- Add Implementation -->
            <xsl:call-template name="SWC_IMPLEMENTATION"/>
          </ELEMENTS>
          <xsl:call-template name="DATA_TYPES"/>
        </AR-PACKAGE>
        <AR-PACKAGE>
          <xsl:call-template name="WDGM_PORT_INTERFACES"/>
        </AR-PACKAGE>
        <AR-PACKAGE>
          <!-- DataTypes needed by WdgM -->
          <xsl:call-template name="WDGM_TYPES"/>
        </AR-PACKAGE>
        <AR-PACKAGE>
            <xsl:call-template name="WDGM_TYPE_CONSTRAINTS"/>
        </AR-PACKAGE>
        <AR-PACKAGE>
          <!-- ModeDeclaration for WdgM -->
          <xsl:call-template name="WDGM_MODE_DECLARATION_GROUP"/>
        </AR-PACKAGE>
      </AR-PACKAGES>
      </AUTOSAR><xsl:text>
</xsl:text>
    <xsl:comment> File generated using SWC_WdgM_A4.xsl 2.0.9 </xsl:comment>
  </xsl:template>

  <!--
  =====================================================================================================================
      PORT PROTOTYPES
  =====================================================================================================================
  -->
  <!-- Port Protoype Template -->
  <xsl:template name="WDGM_PORT_PROTOTYPES">
    <xsl:variable name="se31cnt"      select="count (//*[local-name () = 'DEFINITION-REF' and .= '/TTTECH/WdgM/WdgMGeneral/WdgMSupervisedEntity/WdgMSupportedAutosarAPI']/../*[local-name () = 'VALUE' and .= 'API_3_1'])"/>
    <xsl:variable name="is31config"   select="$se31cnt &gt; 0"/>
    <xsl:variable name="is40config"   select="$se31cnt = 0"/>
    <xsl:variable name="globalCbkCnt" select="count (//*[local-name() = 'DEFINITION-REF' and .='/TTTECH/WdgM/WdgMGeneral/WdgMGlobalStateChangeCbk'])"/>
    <PORTS>
      <xsl:for-each select="//*[local-name() = 'DEFINITION-REF' and .='/TTTECH/WdgM/WdgMGeneral/WdgMSupervisedEntity/WdgMSupervisedEntityId']/..">
        <xsl:variable name="entityID"   select="./*[local-name() = 'VALUE']"/>
        <xsl:variable name="entityName" select="../../*[local-name() = 'SHORT-NAME']"/>
        <xsl:variable name="entityIdToken">
          <xsl:choose>
            <xsl:when test="$entityID &lt; 10">SE00<xsl:value-of select="$entityID" />_<xsl:value-of select="$entityName" /></xsl:when>
            <xsl:when test="$entityID &lt; 100">SE0<xsl:value-of select="$entityID" />_<xsl:value-of select="$entityName" /></xsl:when>
            <xsl:otherwise>SE<xsl:value-of select="$entityID" />_<xsl:value-of select="$entityName" /></xsl:otherwise>
          </xsl:choose>
        </xsl:variable>
        <xsl:if test="$is40config">
          <xsl:for-each select="../..//*[local-name() = 'DEFINITION-REF' and .='/TTTECH/WdgM/WdgMGeneral/WdgMSupervisedEntity/WdgMCheckpoint/WdgMCheckpointId']/..">
            <xsl:variable name="checkpointID"   select="./*[local-name() = 'VALUE']"/>
            <xsl:variable name="checkpointName" select="../../*[local-name() = 'SHORT-NAME']"/>
            <xsl:variable name="checkpointIdToken">
              <xsl:choose>
                <xsl:when test="$checkpointID &lt; 10">CP00<xsl:value-of select="$checkpointID" />_<xsl:value-of select="$checkpointName" /></xsl:when>
                <xsl:when test="$checkpointID &lt; 100">CP0<xsl:value-of select="$checkpointID" />_<xsl:value-of select="$checkpointName" /></xsl:when>
                <xsl:otherwise>CP<xsl:value-of select="$checkpointID" />_<xsl:value-of select="$checkpointName" /></xsl:otherwise>
              </xsl:choose>
            </xsl:variable>
        <P-PORT-PROTOTYPE>
          <SHORT-NAME><xsl:value-of select="$entityIdToken"/>_<xsl:value-of select="$checkpointIdToken"/></SHORT-NAME>
          <DESC>
            <L-2 L="EN">P-Port Prototype for Supervised Entity <xsl:value-of select="$entityName" /> with ID <xsl:value-of select="$entityID" />
              and Checkpoint <xsl:value-of select="$checkpointName"/> with ID <xsl:value-of select="$checkpointID"/>.</L-2>
          </DESC>
          <PROVIDED-INTERFACE-TREF DEST="CLIENT-SERVER-INTERFACE">/PortInterface/WdgM_AliveSupervision</PROVIDED-INTERFACE-TREF>
        </P-PORT-PROTOTYPE>
          </xsl:for-each>
        </xsl:if>
        <P-PORT-PROTOTYPE>
          <SHORT-NAME><xsl:value-of select="$entityIdToken"/></SHORT-NAME>
          <DESC>
            <L-2 L="EN">P-Port Prototype for Supervised Entity <xsl:value-of select="$entityName" /> with ID <xsl:value-of select="$entityID" /></L-2>
          </DESC>
          <PROVIDED-INTERFACE-TREF DEST="CLIENT-SERVER-INTERFACE">/PortInterface/WdgM_IndividualMode</PROVIDED-INTERFACE-TREF>
        </P-PORT-PROTOTYPE>
        <xsl:if test="$is31config">
        <P-PORT-PROTOTYPE>
          <SHORT-NAME><xsl:value-of select="$entityIdToken"/>_API_31</SHORT-NAME>
          <DESC>
            <L-2 L="EN">P-Port Prototype for Supervised Entity <xsl:value-of select="$entityName" /> with ID <xsl:value-of select="$entityID" /> (API 3.1)
            </L-2>
          </DESC>
          <PROVIDED-INTERFACE-TREF DEST="CLIENT-SERVER-INTERFACE">/PortInterface/WdgM_AliveSupervision</PROVIDED-INTERFACE-TREF>
        </P-PORT-PROTOTYPE>
        </xsl:if>
      </xsl:for-each>
      <xsl:for-each select="//*[local-name() = 'DEFINITION-REF' and .='/TTTECH/WdgM/WdgMGeneral/WdgMSupervisedEntity/WdgMLocalStateChangeCbk']">
        <xsl:variable name="entityID"   select="../..//*[local-name() = 'DEFINITION-REF' and .='/TTTECH/WdgM/WdgMGeneral/WdgMSupervisedEntity/WdgMSupervisedEntityId']/../*[local-name() = 'VALUE']"/>
        <xsl:variable name="entityName" select="../../../*[local-name() = 'SHORT-NAME']"/>
        <xsl:variable name="entityIdToken">
          <xsl:choose>
            <xsl:when test="$entityID &lt; 10">SE00<xsl:value-of select="$entityID" />_<xsl:value-of select="$entityName" /></xsl:when>
            <xsl:when test="$entityID &lt; 100">SE0<xsl:value-of select="$entityID" />_<xsl:value-of select="$entityName" /></xsl:when>
            <xsl:otherwise>SE<xsl:value-of select="$entityID" />_<xsl:value-of select="$entityName" /></xsl:otherwise>
          </xsl:choose>
        </xsl:variable>
        <R-PORT-PROTOTYPE>
          <SHORT-NAME><xsl:value-of select="$entityIdToken"/>_StateChangeCbkPort</SHORT-NAME>
          <REQUIRED-COM-SPECS>
            <CLIENT-COM-SPEC>
              <OPERATION-REF DEST="CLIENT-SERVER-OPERATION">/PortInterface/WdgM_LocalStatusCallbackInterface/LocalStatusCallback</OPERATION-REF>
            </CLIENT-COM-SPEC>
          </REQUIRED-COM-SPECS>
          <REQUIRED-INTERFACE-TREF DEST="CLIENT-SERVER-INTERFACE">/PortInterface/WdgM_LocalStatusCallbackInterface</REQUIRED-INTERFACE-TREF>
        </R-PORT-PROTOTYPE>
      </xsl:for-each>
      <xsl:if test="$globalCbkCnt &gt; 0">
        <R-PORT-PROTOTYPE>
          <SHORT-NAME>GlobalStateChangeCbkPort</SHORT-NAME>
          <REQUIRED-COM-SPECS>
            <CLIENT-COM-SPEC>
              <OPERATION-REF DEST="CLIENT-SERVER-OPERATION">/PortInterface/WdgM_GlobalStatusCallbackInterface/GlobalStatusCallback</OPERATION-REF>
            </CLIENT-COM-SPEC>
          </REQUIRED-COM-SPECS>
          <REQUIRED-INTERFACE-TREF DEST="CLIENT-SERVER-INTERFACE">/PortInterface/WdgM_GlobalStatusCallbackInterface</REQUIRED-INTERFACE-TREF>
        </R-PORT-PROTOTYPE>
      </xsl:if>
      <P-PORT-PROTOTYPE>
        <SHORT-NAME>GlobalPort</SHORT-NAME>
        <DESC>
          <L-2 L="EN">P-Port Prototype for Global Mode </L-2>
        </DESC>
        <PROVIDED-INTERFACE-TREF DEST="CLIENT-SERVER-INTERFACE">/PortInterface/WdgM_GlobalMode</PROVIDED-INTERFACE-TREF>
      </P-PORT-PROTOTYPE>
    </PORTS>
  </xsl:template>

  <!--
  =====================================================================================================================
      SWC IMPLEMENTATION
  =====================================================================================================================
  -->
  <xsl:template name="SWC_IMPLEMENTATION">
    <SWC-IMPLEMENTATION>
      <SHORT-NAME>WdgM_Implementation</SHORT-NAME>
      <BEHAVIOR-REF DEST="SWC-INTERNAL-BEHAVIOR">/ComponentType/WdgM/WdgM_InternalBehavior</BEHAVIOR-REF>
    </SWC-IMPLEMENTATION>
  </xsl:template>
  <!--
  =====================================================================================================================
      DATA TYPES
  =====================================================================================================================
  -->
  <xsl:template name="DATA_TYPES">
  <AR-PACKAGES>
    <AR-PACKAGE>
      <SHORT-NAME>DataTypes</SHORT-NAME>
      <AR-PACKAGES>
        <AR-PACKAGE>
          <SHORT-NAME>BaseTypes</SHORT-NAME>
          <ELEMENTS>
            <SW-BASE-TYPE UUID="91dc5e1d-c14c-4790-ba8c-aae5c05c6abe">
              <SHORT-NAME>UInt8</SHORT-NAME>
              <CATEGORY>FIXED_LENGTH</CATEGORY>
              <BASE-TYPE-SIZE>8</BASE-TYPE-SIZE>
              <BASE-TYPE-ENCODING>NONE</BASE-TYPE-ENCODING>
              <NATIVE-DECLARATION>uint8</NATIVE-DECLARATION>
            </SW-BASE-TYPE>
            <SW-BASE-TYPE UUID="6279adc2-3def-465e-8c5c-64048623b19c">
              <SHORT-NAME>UInt16</SHORT-NAME>
              <CATEGORY>FIXED_LENGTH</CATEGORY>
              <BASE-TYPE-SIZE>16</BASE-TYPE-SIZE>
              <BASE-TYPE-ENCODING>NONE</BASE-TYPE-ENCODING>
              <NATIVE-DECLARATION>uint16</NATIVE-DECLARATION>
            </SW-BASE-TYPE>
            <SW-BASE-TYPE UUID="4b1cafd5-9990-46c4-a6d2-8367535e0ba7">
              <SHORT-NAME>WdgM_CheckpointIdType</SHORT-NAME>
              <BASE-TYPE-SIZE>16</BASE-TYPE-SIZE>
              <BASE-TYPE-ENCODING>NONE</BASE-TYPE-ENCODING>
              <NATIVE-DECLARATION>uint16</NATIVE-DECLARATION>
            </SW-BASE-TYPE>
            <SW-BASE-TYPE UUID="0482868d-16b9-4af0-98e7-9e89c7cc658c">
              <SHORT-NAME>WdgM_GlobalStatusType</SHORT-NAME>
              <CATEGORY>FIXED_LENGTH</CATEGORY>
              <BASE-TYPE-SIZE>8</BASE-TYPE-SIZE>
              <BASE-TYPE-ENCODING>NONE</BASE-TYPE-ENCODING>
              <NATIVE-DECLARATION>uint8</NATIVE-DECLARATION>
            </SW-BASE-TYPE>
            <SW-BASE-TYPE UUID="b47e5442-d652-452b-a869-7288261046d1">
              <SHORT-NAME>WdgM_LocalStatusType</SHORT-NAME>
              <CATEGORY>FIXED_LENGTH</CATEGORY>
              <BASE-TYPE-SIZE>8</BASE-TYPE-SIZE>
              <BASE-TYPE-ENCODING>NONE</BASE-TYPE-ENCODING>
              <NATIVE-DECLARATION>uint8</NATIVE-DECLARATION>
            </SW-BASE-TYPE>
            <SW-BASE-TYPE UUID="6bf2f9d7-989b-4098-ad91-7f4f2ed69890">
              <SHORT-NAME>WdgM_ModeType</SHORT-NAME>
              <CATEGORY>FIXED_LENGTH</CATEGORY>
              <BASE-TYPE-SIZE>8</BASE-TYPE-SIZE>
              <BASE-TYPE-ENCODING>NONE</BASE-TYPE-ENCODING>
              <NATIVE-DECLARATION>uint8</NATIVE-DECLARATION>
            </SW-BASE-TYPE>
            <SW-BASE-TYPE UUID="fc0c18d3-929e-46c4-b2a8-11580f96fea0">
              <SHORT-NAME>WdgM_SupervisedEntityIdType</SHORT-NAME>
              <CATEGORY>FIXED_LENGTH</CATEGORY>
              <BASE-TYPE-SIZE>16</BASE-TYPE-SIZE>
              <BASE-TYPE-ENCODING>NONE</BASE-TYPE-ENCODING>
              <NATIVE-DECLARATION>uint16</NATIVE-DECLARATION>
            </SW-BASE-TYPE>
           </ELEMENTS>
        </AR-PACKAGE>
        <AR-PACKAGE UUID="69a0497a-eb74-4b75-aca4-88f509b3d466">
          <SHORT-NAME>CompuMethods</SHORT-NAME>
          <ELEMENTS>
            <COMPU-METHOD UUID="c099c9b6-67d1-4023-bd30-a90634eaa210">
              <SHORT-NAME>WdgM_GlobalStatusType</SHORT-NAME>
              <CATEGORY>TEXTTABLE</CATEGORY>
              <COMPU-INTERNAL-TO-PHYS>
                <COMPU-SCALES>
                  <COMPU-SCALE>
                    <SHORT-LABEL>WDGM_GLOBAL_STATUS_OK</SHORT-LABEL>
                    <LOWER-LIMIT INTERVAL-TYPE="CLOSED">0</LOWER-LIMIT>
                    <UPPER-LIMIT INTERVAL-TYPE="CLOSED">0</UPPER-LIMIT>
                    <COMPU-CONST>
                      <VT>WDGM_GLOBAL_STATUS_OK</VT>
                    </COMPU-CONST>
                  </COMPU-SCALE>
                  <COMPU-SCALE>
                    <SHORT-LABEL>WDGM_GLOBAL_STATUS_FAILED</SHORT-LABEL>
                    <LOWER-LIMIT INTERVAL-TYPE="CLOSED">1</LOWER-LIMIT>
                    <UPPER-LIMIT INTERVAL-TYPE="CLOSED">1</UPPER-LIMIT>
                    <COMPU-CONST>
                      <VT>WDGM_GLOBAL_STATUS_FAILED</VT>
                    </COMPU-CONST>
                  </COMPU-SCALE>
                  <COMPU-SCALE>
                    <SHORT-LABEL>WDGM_GLOBAL_STATUS_EXPIRED</SHORT-LABEL>
                    <LOWER-LIMIT INTERVAL-TYPE="CLOSED">2</LOWER-LIMIT>
                    <UPPER-LIMIT INTERVAL-TYPE="CLOSED">2</UPPER-LIMIT>
                    <COMPU-CONST>
                      <VT>WDGM_GLOBAL_STATUS_EXPIRED</VT>
                    </COMPU-CONST>
                  </COMPU-SCALE>
                  <COMPU-SCALE>
                    <SHORT-LABEL>WDGM_GLOBAL_STATUS_STOPPED</SHORT-LABEL>
                    <LOWER-LIMIT INTERVAL-TYPE="CLOSED">3</LOWER-LIMIT>
                    <UPPER-LIMIT INTERVAL-TYPE="CLOSED">3</UPPER-LIMIT>
                    <COMPU-CONST>
                      <VT>WDGM_GLOBAL_STATUS_STOPPED</VT>
                    </COMPU-CONST>
                  </COMPU-SCALE>
                  <COMPU-SCALE>
                    <SHORT-LABEL>WDGM_GLOBAL_STATUS_DEACTIVATED</SHORT-LABEL>
                    <LOWER-LIMIT INTERVAL-TYPE="CLOSED">4</LOWER-LIMIT>
                    <UPPER-LIMIT INTERVAL-TYPE="CLOSED">4</UPPER-LIMIT>
                    <COMPU-CONST>
                      <VT>WDGM_GLOBAL_STATUS_DEACTIVATED</VT>
                    </COMPU-CONST>
                  </COMPU-SCALE>
                 </COMPU-SCALES>
              </COMPU-INTERNAL-TO-PHYS>
            </COMPU-METHOD>
            <COMPU-METHOD UUID="22f296a3-9dd2-4314-8950-a59b71ea885a">
              <SHORT-NAME>WdgM_LocalStatusType</SHORT-NAME>
              <CATEGORY>TEXTTABLE</CATEGORY>
              <COMPU-INTERNAL-TO-PHYS>
                <COMPU-SCALES>
                  <COMPU-SCALE>
                    <SHORT-LABEL>WDGM_LOCAL_STATUS_OK</SHORT-LABEL>
                    <LOWER-LIMIT INTERVAL-TYPE="CLOSED">0</LOWER-LIMIT>
                    <UPPER-LIMIT INTERVAL-TYPE="CLOSED">0</UPPER-LIMIT>
                    <COMPU-CONST>
                      <VT>WDGM_LOCAL_STATUS_OK</VT>
                    </COMPU-CONST>
                  </COMPU-SCALE>
                  <COMPU-SCALE>
                    <SHORT-LABEL>WDGM_LOCAL_STATUS_FAILED</SHORT-LABEL>
                    <LOWER-LIMIT INTERVAL-TYPE="CLOSED">1</LOWER-LIMIT>
                    <UPPER-LIMIT INTERVAL-TYPE="CLOSED">1</UPPER-LIMIT>
                    <COMPU-CONST>
                      <VT>WDGM_LOCAL_STATUS_FAILED</VT>
                    </COMPU-CONST>
                  </COMPU-SCALE>
                  <COMPU-SCALE>
                    <SHORT-LABEL>WDGM_LOCAL_STATUS_EXPIRED</SHORT-LABEL>
                    <LOWER-LIMIT INTERVAL-TYPE="CLOSED">2</LOWER-LIMIT>
                    <UPPER-LIMIT INTERVAL-TYPE="CLOSED">2</UPPER-LIMIT>
                    <COMPU-CONST>
                      <VT>WDGM_LOCAL_STATUS_EXPIRED</VT>
                    </COMPU-CONST>
                  </COMPU-SCALE>
                  <COMPU-SCALE>
                    <SHORT-LABEL>WDGM_LOCAL_STATUS_DEACTIVATED</SHORT-LABEL>
                    <LOWER-LIMIT INTERVAL-TYPE="CLOSED">4</LOWER-LIMIT>
                    <UPPER-LIMIT INTERVAL-TYPE="CLOSED">4</UPPER-LIMIT>
                    <COMPU-CONST>
                      <VT>WDGM_LOCAL_STATUS_DEACTIVATED</VT>
                    </COMPU-CONST>
                  </COMPU-SCALE>
                 </COMPU-SCALES>
              </COMPU-INTERNAL-TO-PHYS>
            </COMPU-METHOD>
          </ELEMENTS>
        </AR-PACKAGE>
      </AR-PACKAGES>
    </AR-PACKAGE>
  </AR-PACKAGES>
  </xsl:template>
  <!--
  =====================================================================================================================
      INTERNAL BEHAVIOR
  =====================================================================================================================
  -->
  <!-- Runnables Template -->
  <xsl:template name="WDGM_INTERNAL_BEHAVIOR">
    <INTERNAL-BEHAVIORS>
      <SWC-INTERNAL-BEHAVIOR>
        <SHORT-NAME>WdgM_InternalBehavior</SHORT-NAME>
        <!-- <COMPONENT-REF DEST="SERVICE-COMPONENT-TYPE">/ComponentType/<xsl:value-of select="$COMP_NAME"/></COMPONENT-REF> -->
        <xsl:call-template name="WDGM_OPERATION_INVOKED_EVENTS"/>
        <xsl:call-template name="WDGM_PORT_DEFINED_ARGUMENTS"/>
        <xsl:call-template name="WDGM_RUNNABLES"/>
      </SWC-INTERNAL-BEHAVIOR>
    </INTERNAL-BEHAVIORS>
  </xsl:template>
  <!--
  =====================================================================================================================
      OPERATION INVOKED EVENTS
  =====================================================================================================================
  -->
  <!-- Operation Invoked events Template -->
  <xsl:template name="WDGM_OPERATION_INVOKED_EVENTS">
    <xsl:variable name="se31cnt"    select="count (//*[local-name () = 'DEFINITION-REF' and .= '/TTTECH/WdgM/WdgMGeneral/WdgMSupervisedEntity/WdgMSupportedAutosarAPI']/../*[local-name () = 'VALUE' and .= 'API_3_1'])"/>
    <xsl:variable name="is31config" select="$se31cnt > 0"/>
    <xsl:variable name="is40config" select="$se31cnt = 0"/>
    <xsl:variable name="timebase_source" select="//*[(local-name () = 'DEFINITION-REF') and (.='/TTTECH/WdgM/WdgMGeneral/WdgMTimebaseSource')]/../*[(local-name () = 'VALUE')]"/>
    <EVENTS>
      <OPERATION-INVOKED-EVENT>
        <SHORT-NAME>V_WDGM_GMO</SHORT-NAME>
        <START-ON-EVENT-REF DEST="RUNNABLE-ENTITY">/ComponentType/WdgM/WdgM_InternalBehavior/GetMode</START-ON-EVENT-REF>
        <OPERATION-IREF>
          <CONTEXT-P-PORT-REF DEST="P-PORT-PROTOTYPE">/ComponentType/<xsl:value-of select="$COMP_NAME"/>/GlobalPort</CONTEXT-P-PORT-REF>
          <TARGET-PROVIDED-OPERATION-REF DEST="CLIENT-SERVER-OPERATION">/PortInterface/WdgM_GlobalMode/GetMode</TARGET-PROVIDED-OPERATION-REF>
        </OPERATION-IREF>
      </OPERATION-INVOKED-EVENT>
      <OPERATION-INVOKED-EVENT>
        <SHORT-NAME>V_WDGM_GGS</SHORT-NAME>
        <START-ON-EVENT-REF DEST="RUNNABLE-ENTITY">/ComponentType/WdgM/WdgM_InternalBehavior/GetGlobalStatus</START-ON-EVENT-REF>
        <OPERATION-IREF>
          <CONTEXT-P-PORT-REF DEST="P-PORT-PROTOTYPE">/ComponentType/<xsl:value-of select="$COMP_NAME"/>/GlobalPort</CONTEXT-P-PORT-REF>
          <TARGET-PROVIDED-OPERATION-REF DEST="CLIENT-SERVER-OPERATION">/PortInterface/WdgM_GlobalMode/GetGlobalStatus</TARGET-PROVIDED-OPERATION-REF>
        </OPERATION-IREF>
      </OPERATION-INVOKED-EVENT>
      <OPERATION-INVOKED-EVENT>
        <SHORT-NAME>V_WDGM_PRE</SHORT-NAME>
        <START-ON-EVENT-REF DEST="RUNNABLE-ENTITY">/ComponentType/WdgM/WdgM_InternalBehavior/PerformReset</START-ON-EVENT-REF>
        <OPERATION-IREF>
          <CONTEXT-P-PORT-REF DEST="P-PORT-PROTOTYPE">/ComponentType/<xsl:value-of select="$COMP_NAME"/>/GlobalPort</CONTEXT-P-PORT-REF>
          <TARGET-PROVIDED-OPERATION-REF DEST="CLIENT-SERVER-OPERATION">/PortInterface/WdgM_GlobalMode/PerformReset</TARGET-PROVIDED-OPERATION-REF>
        </OPERATION-IREF>
      </OPERATION-INVOKED-EVENT>
      <TIMING-EVENT>
        <SHORT-NAME>V_WDGM_MAI</SHORT-NAME>
        <START-ON-EVENT-REF DEST="RUNNABLE-ENTITY">/ComponentType/WdgM/WdgM_InternalBehavior/WdgM_MainFunction</START-ON-EVENT-REF>
        <PERIOD><xsl:value-of select="$WDGM_SUPERVISION_CYCLE"/></PERIOD>
      </TIMING-EVENT>
      <xsl:if test="$timebase_source = 'WDGM_EXTERNAL_TICK'">
      <TIMING-EVENT>
        <SHORT-NAME>V_WDGM_UTC</SHORT-NAME>
        <START-ON-EVENT-REF DEST="RUNNABLE-ENTITY">/ComponentType/WdgM/WdgM_InternalBehavior/UpdateTickCount</START-ON-EVENT-REF>
        <PERIOD><xsl:value-of select="1 div number ($WDGM_TICKS_PER_SECOND)"/></PERIOD>
      </TIMING-EVENT>
      </xsl:if>
      <xsl:for-each select="//*[local-name() = 'DEFINITION-REF' and .='/TTTECH/WdgM/WdgMGeneral/WdgMSupervisedEntity/WdgMSupervisedEntityId']/..">
        <xsl:variable name="entityID"   select="./*[local-name() = 'VALUE']"/>
        <xsl:variable name="entityName" select="../../*[local-name() = 'SHORT-NAME']"/>
        <xsl:variable name="entityIdToken">
          <xsl:choose>
            <xsl:when test="$entityID &lt; 10">SE00<xsl:value-of select="$entityID" />_<xsl:value-of select="$entityName" /></xsl:when>
            <xsl:when test="$entityID &lt; 100">SE0<xsl:value-of select="$entityID" />_<xsl:value-of select="$entityName" /></xsl:when>
            <xsl:otherwise>SE<xsl:value-of select="$entityID" />_<xsl:value-of select="$entityName" /></xsl:otherwise>
          </xsl:choose>
        </xsl:variable>

        <OPERATION-INVOKED-EVENT>
          <xsl:choose>
            <xsl:when test="$is31config">
              <SHORT-NAME>V_WDGM_<xsl:value-of select="$entityIdToken"/>_GAS</SHORT-NAME>
              <START-ON-EVENT-REF DEST="RUNNABLE-ENTITY">/ComponentType/WdgM/WdgM_InternalBehavior/GetAliveSupervisionStatus</START-ON-EVENT-REF>
              <OPERATION-IREF>
                <CONTEXT-P-PORT-REF DEST="P-PORT-PROTOTYPE">/ComponentType/<xsl:value-of select="$COMP_NAME"/>/<xsl:value-of select="$entityIdToken"/></CONTEXT-P-PORT-REF>
                <TARGET-PROVIDED-OPERATION-REF DEST="CLIENT-SERVER-OPERATION">/PortInterface/WdgM_IndividualMode/GetAliveSupervisionStatus</TARGET-PROVIDED-OPERATION-REF>
              </OPERATION-IREF>
            </xsl:when>
            <xsl:when test="$is40config">
              <SHORT-NAME>V_WDGM_<xsl:value-of select="$entityIdToken"/>_GLS</SHORT-NAME>
              <START-ON-EVENT-REF DEST="RUNNABLE-ENTITY">/ComponentType/WdgM/WdgM_InternalBehavior/GetLocalStatus</START-ON-EVENT-REF>
              <OPERATION-IREF>
                <CONTEXT-P-PORT-REF DEST="P-PORT-PROTOTYPE">/ComponentType/<xsl:value-of select="$COMP_NAME"/>/<xsl:value-of select="$entityIdToken"/></CONTEXT-P-PORT-REF>
                <TARGET-PROVIDED-OPERATION-REF DEST="CLIENT-SERVER-OPERATION">/PortInterface/WdgM_IndividualMode/GetLocalStatus</TARGET-PROVIDED-OPERATION-REF>
              </OPERATION-IREF>
            </xsl:when>
          </xsl:choose>
        </OPERATION-INVOKED-EVENT>

        <OPERATION-INVOKED-EVENT>
          <xsl:choose>
            <xsl:when test="$is31config">
                <SHORT-NAME>V_WDGM_<xsl:value-of select="$entityIdToken"/>_AAS</SHORT-NAME>
                <START-ON-EVENT-REF DEST="RUNNABLE-ENTITY">/ComponentType/WdgM/WdgM_InternalBehavior/ActivateAliveSupervision</START-ON-EVENT-REF>
                <OPERATION-IREF>
                  <CONTEXT-P-PORT-REF DEST="P-PORT-PROTOTYPE">/ComponentType/<xsl:value-of select="$COMP_NAME"/>/<xsl:value-of select="$entityIdToken"/></CONTEXT-P-PORT-REF>
                  <TARGET-PROVIDED-OPERATION-REF DEST="CLIENT-SERVER-OPERATION">/PortInterface/WdgM_IndividualMode/ActivateAliveSupervision</TARGET-PROVIDED-OPERATION-REF>
                </OPERATION-IREF>
            </xsl:when>
            <xsl:when test="$is40config">
                <SHORT-NAME>V_WDGM_<xsl:value-of select="$entityIdToken"/>_ASE</SHORT-NAME>
                <START-ON-EVENT-REF DEST="RUNNABLE-ENTITY">/ComponentType/WdgM/WdgM_InternalBehavior/ActivateSupervisionEntity</START-ON-EVENT-REF>
                <OPERATION-IREF>
                  <CONTEXT-P-PORT-REF DEST="P-PORT-PROTOTYPE">/ComponentType/<xsl:value-of select="$COMP_NAME"/>/<xsl:value-of select="$entityIdToken"/></CONTEXT-P-PORT-REF>
                  <TARGET-PROVIDED-OPERATION-REF DEST="CLIENT-SERVER-OPERATION">/PortInterface/WdgM_IndividualMode/ActivateSupervisionEntity</TARGET-PROVIDED-OPERATION-REF>
                </OPERATION-IREF>
            </xsl:when>
          </xsl:choose>
        </OPERATION-INVOKED-EVENT>

        <OPERATION-INVOKED-EVENT>
          <xsl:choose>
            <xsl:when test="$is31config">
                <SHORT-NAME>V_WDGM_<xsl:value-of select="$entityIdToken"/>_DAS</SHORT-NAME>
                <START-ON-EVENT-REF DEST="RUNNABLE-ENTITY">/ComponentType/WdgM/WdgM_InternalBehavior/DeactivateAliveSupervision</START-ON-EVENT-REF>
                <OPERATION-IREF>
                  <CONTEXT-P-PORT-REF DEST="P-PORT-PROTOTYPE">/ComponentType/<xsl:value-of select="$COMP_NAME"/>/<xsl:value-of select="$entityIdToken"/></CONTEXT-P-PORT-REF>
                  <TARGET-PROVIDED-OPERATION-REF DEST="CLIENT-SERVER-OPERATION">/PortInterface/WdgM_IndividualMode/DeactivateAliveSupervision</TARGET-PROVIDED-OPERATION-REF>
                </OPERATION-IREF>
            </xsl:when>
            <xsl:when test="$is40config">
                <SHORT-NAME>V_WDGM_<xsl:value-of select="$entityIdToken"/>_DSE</SHORT-NAME>
                <START-ON-EVENT-REF DEST="RUNNABLE-ENTITY">/ComponentType/WdgM/WdgM_InternalBehavior/DeactivateSupervisionEntity</START-ON-EVENT-REF>
                <OPERATION-IREF>
                  <CONTEXT-P-PORT-REF DEST="P-PORT-PROTOTYPE">/ComponentType/<xsl:value-of select="$COMP_NAME"/>/<xsl:value-of select="$entityIdToken"/></CONTEXT-P-PORT-REF>
                  <TARGET-PROVIDED-OPERATION-REF DEST="CLIENT-SERVER-OPERATION">/PortInterface/WdgM_IndividualMode/DeactivateSupervisionEntity</TARGET-PROVIDED-OPERATION-REF>
                </OPERATION-IREF>
            </xsl:when>
          </xsl:choose>
        </OPERATION-INVOKED-EVENT>

        <xsl:if test="$is31config">
          <OPERATION-INVOKED-EVENT>
            <SHORT-NAME>V_WDGM_<xsl:value-of select="$entityIdToken"/>_UAC</SHORT-NAME>
            <START-ON-EVENT-REF DEST="RUNNABLE-ENTITY">/ComponentType/WdgM/WdgM_InternalBehavior/UpdateAliveCounter</START-ON-EVENT-REF>
            <OPERATION-IREF>
              <CONTEXT-P-PORT-REF DEST="P-PORT-PROTOTYPE">/ComponentType/<xsl:value-of select="$COMP_NAME"/>/<xsl:value-of select="$entityIdToken"/>_API_31</CONTEXT-P-PORT-REF>
              <TARGET-PROVIDED-OPERATION-REF DEST="CLIENT-SERVER-OPERATION">/PortInterface/WdgM_AliveSupervision/UpdateAliveCounter</TARGET-PROVIDED-OPERATION-REF>
            </OPERATION-IREF>
          </OPERATION-INVOKED-EVENT>
        </xsl:if>

        <xsl:if test="$is40config">
          <xsl:for-each select="../..//*[local-name() = 'DEFINITION-REF' and .='/TTTECH/WdgM/WdgMGeneral/WdgMSupervisedEntity/WdgMCheckpoint/WdgMCheckpointId']/..">
          <xsl:variable name="checkpointID"   select="./*[local-name() = 'VALUE']"/>
          <xsl:variable name="checkpointName" select="../../*[local-name() = 'SHORT-NAME']"/>
          <xsl:variable name="checkpointIdToken">
            <xsl:choose>
              <xsl:when test="$checkpointID &lt; 10">CP00<xsl:value-of select="$checkpointID" />_<xsl:value-of select="$checkpointName" /></xsl:when>
              <xsl:when test="$checkpointID &lt; 100">CP0<xsl:value-of select="$checkpointID" />_<xsl:value-of select="$checkpointName" /></xsl:when>
              <xsl:otherwise>CP<xsl:value-of select="$checkpointID" />_<xsl:value-of select="$checkpointName" /></xsl:otherwise>
            </xsl:choose>
          </xsl:variable>

            <OPERATION-INVOKED-EVENT>
              <SHORT-NAME>V_WDGM_<xsl:value-of select="$entityIdToken"/>_<xsl:value-of select="$checkpointIdToken"/>_CPR</SHORT-NAME>
              <START-ON-EVENT-REF DEST="RUNNABLE-ENTITY">/ComponentType/WdgM/WdgM_InternalBehavior/CheckpointReached</START-ON-EVENT-REF>
              <OPERATION-IREF>
                <CONTEXT-P-PORT-REF DEST="P-PORT-PROTOTYPE">/ComponentType/<xsl:value-of select="$COMP_NAME"/>/<xsl:value-of select="$entityIdToken"/>_<xsl:value-of select="$checkpointIdToken"/></CONTEXT-P-PORT-REF>
                <TARGET-PROVIDED-OPERATION-REF DEST="CLIENT-SERVER-OPERATION">/PortInterface/WdgM_AliveSupervision/CheckpointReached</TARGET-PROVIDED-OPERATION-REF>
              </OPERATION-IREF>
            </OPERATION-INVOKED-EVENT>
          </xsl:for-each>
        </xsl:if>
      </xsl:for-each>
    </EVENTS>
  </xsl:template>
  <!--
  =====================================================================================================================
      PORT DEFINED ARGUMENTS
  =====================================================================================================================
  -->
  <!-- Port defined Arguments Template -->
  <xsl:template name="WDGM_PORT_DEFINED_ARGUMENTS">
    <xsl:variable name="se31cnt"    select="count (//*[local-name () = 'DEFINITION-REF' and .= '/TTTECH/WdgM/WdgMGeneral/WdgMSupervisedEntity/WdgMSupportedAutosarAPI']/../*[local-name () = 'VALUE' and .= 'API_3_1'])"/>
    <xsl:variable name="is31config" select="$se31cnt > 0"/>
    <xsl:variable name="is40config" select="$se31cnt = 0"/>
    <PORT-API-OPTIONS>
      <xsl:for-each select="//*[local-name() = 'DEFINITION-REF' and .='/TTTECH/WdgM/WdgMGeneral/WdgMSupervisedEntity/WdgMSupervisedEntityId']/..">
        <xsl:variable name="entityID"   select="./*[local-name() = 'VALUE']"/>
        <xsl:variable name="entityName" select="../../*[local-name() = 'SHORT-NAME']"/>
        <xsl:variable name="entityIdToken">
          <xsl:choose>
            <xsl:when test="$entityID &lt; 10">SE00<xsl:value-of select="$entityID" />_<xsl:value-of select="$entityName" /></xsl:when>
            <xsl:when test="$entityID &lt; 100">SE0<xsl:value-of select="$entityID" />_<xsl:value-of select="$entityName" /></xsl:when>
            <xsl:otherwise>SE<xsl:value-of select="$entityID" />_<xsl:value-of select="$entityName" /></xsl:otherwise>
          </xsl:choose>
        </xsl:variable>
        <xsl:if test="$is40config">
          <xsl:for-each select="../..//*[local-name() = 'DEFINITION-REF' and .='/TTTECH/WdgM/WdgMGeneral/WdgMSupervisedEntity/WdgMCheckpoint/WdgMCheckpointId']/..">
            <xsl:variable name="checkpointID"   select="./*[local-name() = 'VALUE']"/>
            <xsl:variable name="checkpointName" select="../../*[local-name() = 'SHORT-NAME']"/>
            <xsl:variable name="checkpointIdToken">
              <xsl:choose>
                <xsl:when test="$checkpointID &lt; 10">CP00<xsl:value-of select="$checkpointID" />_<xsl:value-of select="$checkpointName" /></xsl:when>
                <xsl:when test="$checkpointID &lt; 100">CP0<xsl:value-of select="$checkpointID" />_<xsl:value-of select="$checkpointName" /></xsl:when>
                <xsl:otherwise>CP<xsl:value-of select="$checkpointID" />_<xsl:value-of select="$checkpointName" /></xsl:otherwise>
              </xsl:choose>
            </xsl:variable>
          <PORT-API-OPTION>
            <PORT-ARG-VALUES>
              <PORT-DEFINED-ARGUMENT-VALUE>
                <VALUE>
                  <NUMERICAL-VALUE-SPECIFICATION>
                    <VALUE><xsl:value-of select="$entityID"/></VALUE>
                  </NUMERICAL-VALUE-SPECIFICATION>
                </VALUE>
                <VALUE-TYPE-TREF DEST="IMPLEMENTATION-DATA-TYPE">/DataType/WdgM_SupervisedEntityIdType</VALUE-TYPE-TREF>
              </PORT-DEFINED-ARGUMENT-VALUE>
              <PORT-DEFINED-ARGUMENT-VALUE>
                <VALUE>
                  <NUMERICAL-VALUE-SPECIFICATION>
                    <VALUE><xsl:value-of select="$checkpointID"/></VALUE>
                  </NUMERICAL-VALUE-SPECIFICATION>
                </VALUE>
                <VALUE-TYPE-TREF DEST="IMPLEMENTATION-DATA-TYPE">/DataType/WdgM_CheckpointIdType</VALUE-TYPE-TREF>
              </PORT-DEFINED-ARGUMENT-VALUE>
            </PORT-ARG-VALUES>
            <PORT-REF DEST="P-PORT-PROTOTYPE">/ComponentType/<xsl:value-of select="$COMP_NAME"/>/<xsl:value-of select="$entityIdToken"/>_<xsl:value-of select="$checkpointIdToken"/></PORT-REF>
          </PORT-API-OPTION>
          </xsl:for-each>
        </xsl:if>
        <PORT-API-OPTION>
          <PORT-ARG-VALUES>
            <PORT-DEFINED-ARGUMENT-VALUE>
              <VALUE>
                <NUMERICAL-VALUE-SPECIFICATION>
                  <VALUE><xsl:value-of select="$entityID"/></VALUE>
                </NUMERICAL-VALUE-SPECIFICATION>
              </VALUE>
              <VALUE-TYPE-TREF DEST="IMPLEMENTATION-DATA-TYPE">/DataType/WdgM_SupervisedEntityIdType</VALUE-TYPE-TREF>
            </PORT-DEFINED-ARGUMENT-VALUE>
          </PORT-ARG-VALUES>
          <PORT-REF DEST="P-PORT-PROTOTYPE">/ComponentType/<xsl:value-of select="$COMP_NAME"/>/<xsl:value-of select="$entityIdToken"/></PORT-REF>
        </PORT-API-OPTION>
      <xsl:if test="$is31config">
        <!-- for UpdateAliveCounter (3.1) -->
        <PORT-API-OPTION>
          <PORT-ARG-VALUES>
            <PORT-DEFINED-ARGUMENT-VALUE>
              <VALUE>
                <NUMERICAL-VALUE-SPECIFICATION>
                  <VALUE><xsl:value-of select="$entityID"/></VALUE>
                </NUMERICAL-VALUE-SPECIFICATION>
              </VALUE>
              <VALUE-TYPE-TREF DEST="IMPLEMENTATION-DATA-TYPE">/DataType/WdgM_SupervisedEntityIdType</VALUE-TYPE-TREF>
            </PORT-DEFINED-ARGUMENT-VALUE>
          </PORT-ARG-VALUES>
          <PORT-REF DEST="P-PORT-PROTOTYPE">/ComponentType/<xsl:value-of select="$COMP_NAME"/>/<xsl:value-of select="$entityIdToken"/>_API_31</PORT-REF>
        </PORT-API-OPTION>
      </xsl:if>
      </xsl:for-each>
    </PORT-API-OPTIONS>
  </xsl:template>
  <!--
  =====================================================================================================================
      RUNNABLES
  =====================================================================================================================
  -->
  <!-- Runnables Template -->
  <xsl:template name="WDGM_RUNNABLES">
    <xsl:variable name="se31cnt"         select="count (//*[local-name () = 'DEFINITION-REF' and .= '/TTTECH/WdgM/WdgMGeneral/WdgMSupervisedEntity/WdgMSupportedAutosarAPI']/../*[local-name () = 'VALUE' and .= 'API_3_1'])"/>
    <xsl:variable name="is31config"      select="$se31cnt > 0"/>
    <xsl:variable name="is40config"      select="$se31cnt = 0"/>
    <xsl:variable name="timebase_source" select="//*[(local-name () = 'DEFINITION-REF') and (.='/TTTECH/WdgM/WdgMGeneral/WdgMTimebaseSource')]/../*[(local-name () = 'VALUE')]"/>
    <xsl:variable name="localCbkCnt"     select="count (//*[local-name() = 'DEFINITION-REF' and .='/TTTECH/WdgM/WdgMGeneral/WdgMSupervisedEntity/WdgMLocalStateChangeCbk'])"/>
    <xsl:variable name="globalCbkCnt"    select="count (//*[local-name() = 'DEFINITION-REF' and .='/TTTECH/WdgM/WdgMGeneral/WdgMGlobalStateChangeCbk'])"/>
    <RUNNABLES>
      <RUNNABLE-ENTITY>
        <SHORT-NAME>GetMode</SHORT-NAME>
        <MINIMUM-START-INTERVAL>0</MINIMUM-START-INTERVAL>
        <CAN-BE-INVOKED-CONCURRENTLY>true</CAN-BE-INVOKED-CONCURRENTLY>
        <SYMBOL>WdgM_GetMode</SYMBOL>
      </RUNNABLE-ENTITY>
       <xsl:if test="$is31config">
      <RUNNABLE-ENTITY>
        <SHORT-NAME>UpdateAliveCounter</SHORT-NAME>
        <MINIMUM-START-INTERVAL>0</MINIMUM-START-INTERVAL>
        <CAN-BE-INVOKED-CONCURRENTLY>true</CAN-BE-INVOKED-CONCURRENTLY>
        <SYMBOL>WdgM_UpdateAliveCounter</SYMBOL>
      </RUNNABLE-ENTITY>
      </xsl:if>
      <xsl:if test="$is40config">
      <RUNNABLE-ENTITY>
        <SHORT-NAME>CheckpointReached</SHORT-NAME>
        <MINIMUM-START-INTERVAL>0</MINIMUM-START-INTERVAL>
        <CAN-BE-INVOKED-CONCURRENTLY>true</CAN-BE-INVOKED-CONCURRENTLY>
        <SYMBOL>WdgM_CheckpointReached</SYMBOL>
      </RUNNABLE-ENTITY>
      </xsl:if>
      <xsl:if test="$is31config">
      <RUNNABLE-ENTITY>
        <SHORT-NAME>GetAliveSupervisionStatus</SHORT-NAME>
        <MINIMUM-START-INTERVAL>0</MINIMUM-START-INTERVAL>
        <CAN-BE-INVOKED-CONCURRENTLY>true</CAN-BE-INVOKED-CONCURRENTLY>
        <SYMBOL>WdgM_GetLocalStatus</SYMBOL>
      </RUNNABLE-ENTITY>
      </xsl:if>
      <xsl:if test="$is40config">
      <RUNNABLE-ENTITY>
        <SHORT-NAME>GetLocalStatus</SHORT-NAME>
        <MINIMUM-START-INTERVAL>0</MINIMUM-START-INTERVAL>
        <CAN-BE-INVOKED-CONCURRENTLY>true</CAN-BE-INVOKED-CONCURRENTLY>
        <SYMBOL>WdgM_GetLocalStatus</SYMBOL>
      </RUNNABLE-ENTITY>
      </xsl:if>
      <xsl:if test="$is31config">
      <RUNNABLE-ENTITY>
        <SHORT-NAME>ActivateAliveSupervision</SHORT-NAME>
        <MINIMUM-START-INTERVAL>0</MINIMUM-START-INTERVAL>
        <CAN-BE-INVOKED-CONCURRENTLY>true</CAN-BE-INVOKED-CONCURRENTLY>
        <SYMBOL>WdgM_ActivateSupervisionEntity</SYMBOL>
      </RUNNABLE-ENTITY>
      </xsl:if>
      <xsl:if test="$is40config">
      <RUNNABLE-ENTITY>
        <SHORT-NAME>ActivateSupervisionEntity</SHORT-NAME>
        <MINIMUM-START-INTERVAL>0</MINIMUM-START-INTERVAL>
        <CAN-BE-INVOKED-CONCURRENTLY>true</CAN-BE-INVOKED-CONCURRENTLY>
        <SYMBOL>WdgM_ActivateSupervisionEntity</SYMBOL>
      </RUNNABLE-ENTITY>
      </xsl:if>
      <xsl:if test="$is31config">
      <RUNNABLE-ENTITY>
        <SHORT-NAME>DeactivateAliveSupervision</SHORT-NAME>
        <MINIMUM-START-INTERVAL>0</MINIMUM-START-INTERVAL>
        <CAN-BE-INVOKED-CONCURRENTLY>true</CAN-BE-INVOKED-CONCURRENTLY>
        <SYMBOL>WdgM_DeactivateSupervisionEntity</SYMBOL>
      </RUNNABLE-ENTITY>
      </xsl:if>
      <xsl:if test="$is40config">
      <RUNNABLE-ENTITY>
        <SHORT-NAME>DeactivateSupervisionEntity</SHORT-NAME>
        <MINIMUM-START-INTERVAL>0</MINIMUM-START-INTERVAL>
        <CAN-BE-INVOKED-CONCURRENTLY>true</CAN-BE-INVOKED-CONCURRENTLY>
        <SYMBOL>WdgM_DeactivateSupervisionEntity</SYMBOL>
      </RUNNABLE-ENTITY>
      </xsl:if>
      <RUNNABLE-ENTITY>
        <SHORT-NAME>GetGlobalStatus</SHORT-NAME>
        <MINIMUM-START-INTERVAL>0</MINIMUM-START-INTERVAL>
        <CAN-BE-INVOKED-CONCURRENTLY>true</CAN-BE-INVOKED-CONCURRENTLY>
        <SYMBOL>WdgM_GetGlobalStatus</SYMBOL>
      </RUNNABLE-ENTITY>
      <RUNNABLE-ENTITY>
        <SHORT-NAME>PerformReset</SHORT-NAME>
        <MINIMUM-START-INTERVAL>0</MINIMUM-START-INTERVAL>
        <CAN-BE-INVOKED-CONCURRENTLY>true</CAN-BE-INVOKED-CONCURRENTLY>
        <SYMBOL>WdgM_PerformReset</SYMBOL>
      </RUNNABLE-ENTITY>
      <RUNNABLE-ENTITY>
        <SHORT-NAME>WdgM_MainFunction</SHORT-NAME>
        <MINIMUM-START-INTERVAL>0</MINIMUM-START-INTERVAL>
        <CAN-BE-INVOKED-CONCURRENTLY>true</CAN-BE-INVOKED-CONCURRENTLY>
      <xsl:if test="($localCbkCnt &gt; 0) or ($globalCbkCnt &gt; 0)">
        <SERVER-CALL-POINTS>
        <xsl:for-each select="//*[local-name() = 'DEFINITION-REF' and .='/TTTECH/WdgM/WdgMGeneral/WdgMSupervisedEntity/WdgMLocalStateChangeCbk']">
          <xsl:variable name="callbackName" select="../*[local-name() = 'VALUE']"/>
          <xsl:variable name="entityID"   select="../..//*[local-name() = 'DEFINITION-REF' and .='/TTTECH/WdgM/WdgMGeneral/WdgMSupervisedEntity/WdgMSupervisedEntityId']/../*[local-name() = 'VALUE']"/>
          <xsl:variable name="entityName" select="../../../*[local-name() = 'SHORT-NAME']"/>
          <xsl:variable name="entityIdToken">
            <xsl:choose>
              <xsl:when test="$entityID &lt; 10">SE00<xsl:value-of select="$entityID" />_<xsl:value-of select="$entityName" /></xsl:when>
              <xsl:when test="$entityID &lt; 100">SE0<xsl:value-of select="$entityID" />_<xsl:value-of select="$entityName" /></xsl:when>
              <xsl:otherwise>SE<xsl:value-of select="$entityID" />_<xsl:value-of select="$entityName" /></xsl:otherwise>
            </xsl:choose>
          </xsl:variable>
        <SYNCHRONOUS-SERVER-CALL-POINT>
          <SHORT-NAME>SC_V_WDGM_<xsl:value-of select="$entityIdToken"/>_LSC_<xsl:value-of select="$callbackName"/></SHORT-NAME>
          <OPERATION-IREF>
            <CONTEXT-R-PORT-REF DEST="R-PORT-PROTOTYPE">/ComponentType/WdgM/<xsl:value-of select="$entityIdToken"/>_StateChangeCbkPort</CONTEXT-R-PORT-REF>
            <TARGET-REQUIRED-OPERATION-REF DEST="CLIENT-SERVER-OPERATION">/PortInterface/WdgM_LocalStatusCallbackInterface/LocalStatusCallback</TARGET-REQUIRED-OPERATION-REF>
          </OPERATION-IREF>
          <TIMEOUT>0.000000000</TIMEOUT>
        </SYNCHRONOUS-SERVER-CALL-POINT>
        </xsl:for-each>
        <xsl:if test="$globalCbkCnt &gt; 0">
        <SYNCHRONOUS-SERVER-CALL-POINT>
          <SHORT-NAME>SC_V_WDGM_GlobalStateCallback</SHORT-NAME>
          <OPERATION-IREF>
            <CONTEXT-R-PORT-REF DEST="R-PORT-PROTOTYPE">/ComponentType/WdgM/GlobalStateChangeCbkPort</CONTEXT-R-PORT-REF>
            <TARGET-REQUIRED-OPERATION-REF DEST="CLIENT-SERVER-OPERATION">/PortInterface/WdgM_GlobalStatusCallbackInterface/GlobalStatusCallback</TARGET-REQUIRED-OPERATION-REF>
          </OPERATION-IREF>
          <TIMEOUT>0.000000000</TIMEOUT>
        </SYNCHRONOUS-SERVER-CALL-POINT>
        </xsl:if>
       </SERVER-CALL-POINTS>
      </xsl:if>
        <SYMBOL>WdgM_MainFunction</SYMBOL>
      </RUNNABLE-ENTITY>
      <xsl:if test="$timebase_source = 'WDGM_EXTERNAL_TICK'">
      <RUNNABLE-ENTITY>
        <SHORT-NAME>UpdateTickCount</SHORT-NAME>
        <MINIMUM-START-INTERVAL>0</MINIMUM-START-INTERVAL>
        <CAN-BE-INVOKED-CONCURRENTLY>true</CAN-BE-INVOKED-CONCURRENTLY>
        <SYMBOL>WdgM_UpdateTickCount</SYMBOL>
      </RUNNABLE-ENTITY>
      </xsl:if>
    </RUNNABLES>
  </xsl:template>

  <!--
  =====================================================================================================================
      PORT INTERFACES
  =====================================================================================================================
  -->
  <!-- Port Interface Template -->
  <xsl:template   name="WDGM_PORT_INTERFACES">
    <xsl:variable name="se31cnt"         select="count (//*[local-name () = 'DEFINITION-REF' and .= '/TTTECH/WdgM/WdgMGeneral/WdgMSupervisedEntity/WdgMSupportedAutosarAPI']/../*[local-name () = 'VALUE' and .= 'API_3_1'])"/>
    <xsl:variable name="is31config"      select="$se31cnt > 0"/>
    <xsl:variable name="is40config"      select="$se31cnt = 0"/>
    <xsl:variable name="timebase_source" select="//*[(local-name () = 'DEFINITION-REF') and (.='/TTTECH/WdgM/WdgMGeneral/WdgMTimebaseSource')]/../*[(local-name () = 'VALUE')]"/>
    <xsl:variable name="localCbkCnt"     select="count (//*[local-name() = 'DEFINITION-REF' and .='/TTTECH/WdgM/WdgMGeneral/WdgMSupervisedEntity/WdgMLocalStateChangeCbk'])"/>
    <xsl:variable name="globalCbkCnt"    select="count (//*[local-name() = 'DEFINITION-REF' and .='/TTTECH/WdgM/WdgMGeneral/WdgMGlobalStateChangeCbk'])"/>
    <SHORT-NAME>PortInterface</SHORT-NAME>
    <ELEMENTS>
      <!-- WdgM_AliveSupervision interface -->
      <CLIENT-SERVER-INTERFACE>
        <SHORT-NAME>WdgM_AliveSupervision</SHORT-NAME>
        <ADMIN-DATA>
          <SDGS>
            <SDG GID="DV_SDG">
              <SD GID="DV_BSWM">WdgM</SD>
            </SDG>
          </SDGS>
        </ADMIN-DATA>
        <IS-SERVICE>true</IS-SERVICE>
        <OPERATIONS>
          <xsl:if test="$is31config">
          <CLIENT-SERVER-OPERATION>
            <SHORT-NAME>UpdateAliveCounter</SHORT-NAME>
            <DESC>
              <L-2 L="EN">Indicates to the Watchdog Manager that a Checkpoint within a Supervised Entity has been reached. Equivalent to CheckpointReached in AUTOSAR 4.0</L-2>
            </DESC>
            <POSSIBLE-ERROR-REFS>
              <POSSIBLE-ERROR-REF DEST="APPLICATION-ERROR">/PortInterface/WdgM_AliveSupervision/E_NOT_OK</POSSIBLE-ERROR-REF>
            </POSSIBLE-ERROR-REFS>
          </CLIENT-SERVER-OPERATION>
          </xsl:if>
          <xsl:if test="$is40config">
          <CLIENT-SERVER-OPERATION>
            <SHORT-NAME>CheckpointReached</SHORT-NAME>
            <DESC>
              <L-2 L="EN">Indicates to the Watchdog Manager that a Checkpoint within a Supervised Entity has been reached.</L-2>
            </DESC>
            <POSSIBLE-ERROR-REFS>
              <POSSIBLE-ERROR-REF DEST="APPLICATION-ERROR">/PortInterface/WdgM_AliveSupervision/E_NOT_OK</POSSIBLE-ERROR-REF>
            </POSSIBLE-ERROR-REFS>
          </CLIENT-SERVER-OPERATION>
          </xsl:if>
        </OPERATIONS>
        <POSSIBLE-ERRORS>
          <APPLICATION-ERROR>
            <SHORT-NAME>E_NOT_OK</SHORT-NAME>
            <ERROR-CODE>1</ERROR-CODE>
          </APPLICATION-ERROR>
        </POSSIBLE-ERRORS>
      </CLIENT-SERVER-INTERFACE>
      <CLIENT-SERVER-INTERFACE>
        <SHORT-NAME>WdgM_IndividualMode</SHORT-NAME>
        <ADMIN-DATA>
          <SDGS>
            <SDG GID="DV_SDG">
              <SD GID="DV_BSWM">WdgM</SD>
            </SDG>
          </SDGS>
        </ADMIN-DATA>
        <IS-SERVICE>true</IS-SERVICE>
        <OPERATIONS>
          <xsl:if test="$is31config">
          <CLIENT-SERVER-OPERATION>
            <SHORT-NAME>GetAliveSupervisionStatus</SHORT-NAME>
            <DESC>
              <L-2 L="EN">Returns the monitoring status of an individual Supervised Entity. Equivalent to `GetLocalStatus` in AUTOSAR 4.0</L-2>
            </DESC>
            <ARGUMENTS>
              <ARGUMENT-DATA-PROTOTYPE>
                <SHORT-NAME>Status</SHORT-NAME>
                <TYPE-TREF DEST="IMPLEMENTATION-DATA-TYPE">/DataType/WdgM_LocalStatusType</TYPE-TREF>
                <DIRECTION>OUT</DIRECTION>
              </ARGUMENT-DATA-PROTOTYPE>
            </ARGUMENTS>
            <POSSIBLE-ERROR-REFS>
              <POSSIBLE-ERROR-REF DEST="APPLICATION-ERROR">/PortInterface/WdgM_IndividualMode/E_NOT_OK</POSSIBLE-ERROR-REF>
            </POSSIBLE-ERROR-REFS>
          </CLIENT-SERVER-OPERATION>
          </xsl:if>
          <xsl:if test="$is40config">
          <CLIENT-SERVER-OPERATION>
            <SHORT-NAME>GetLocalStatus</SHORT-NAME>
            <DESC>
              <L-2 L="EN">Returns the monitoring status of an individual Supervised Entity.</L-2>
            </DESC>
            <ARGUMENTS>
              <ARGUMENT-DATA-PROTOTYPE>
                <SHORT-NAME>Status</SHORT-NAME>
                <TYPE-TREF DEST="IMPLEMENTATION-DATA-TYPE">/DataType/WdgM_LocalStatusType</TYPE-TREF>
                <DIRECTION>OUT</DIRECTION>
              </ARGUMENT-DATA-PROTOTYPE>
            </ARGUMENTS>
            <POSSIBLE-ERROR-REFS>
              <POSSIBLE-ERROR-REF DEST="APPLICATION-ERROR">/PortInterface/WdgM_IndividualMode/E_NOT_OK</POSSIBLE-ERROR-REF>
            </POSSIBLE-ERROR-REFS>
          </CLIENT-SERVER-OPERATION>
          </xsl:if>
          <xsl:if test="$is31config">
          <CLIENT-SERVER-OPERATION>
            <SHORT-NAME>ActivateAliveSupervision</SHORT-NAME>
            <DESC>
              <L-2 L="EN">This function activates the monitoring of the given Supervised Entity. Equivalent to ActivateSupervisionEntity in AUTOSAR 4.0</L-2>
            </DESC>
            <ARGUMENTS>
            </ARGUMENTS>
            <POSSIBLE-ERROR-REFS>
              <POSSIBLE-ERROR-REF DEST="APPLICATION-ERROR">/PortInterface/WdgM_IndividualMode/E_NOT_OK</POSSIBLE-ERROR-REF>
            </POSSIBLE-ERROR-REFS>
          </CLIENT-SERVER-OPERATION>
          </xsl:if>
          <xsl:if test="$is40config">
          <CLIENT-SERVER-OPERATION>
            <SHORT-NAME>ActivateSupervisionEntity</SHORT-NAME>
            <DESC>
              <L-2 L="EN">This function activates the monitoring of the given Supervised Entity</L-2>
            </DESC>
            <ARGUMENTS>
            </ARGUMENTS>
            <POSSIBLE-ERROR-REFS>
              <POSSIBLE-ERROR-REF DEST="APPLICATION-ERROR">/PortInterface/WdgM_IndividualMode/E_NOT_OK</POSSIBLE-ERROR-REF>
            </POSSIBLE-ERROR-REFS>
          </CLIENT-SERVER-OPERATION>
          </xsl:if>
          <xsl:if test="$is31config">
          <CLIENT-SERVER-OPERATION>
            <SHORT-NAME>DeactivateAliveSupervision</SHORT-NAME>
            <DESC>
              <L-2 L="EN">This function deactivates the monitoring of the given Supervised Entity. Equivalent to DeactivateSupervisionEntity in AUTOSAR 4.0</L-2>
            </DESC>
            <ARGUMENTS>
            </ARGUMENTS>
            <POSSIBLE-ERROR-REFS>
              <POSSIBLE-ERROR-REF DEST="APPLICATION-ERROR">/PortInterface/WdgM_IndividualMode/E_NOT_OK</POSSIBLE-ERROR-REF>
            </POSSIBLE-ERROR-REFS>
          </CLIENT-SERVER-OPERATION>
          </xsl:if>
          <xsl:if test="$is40config">
          <CLIENT-SERVER-OPERATION>
            <SHORT-NAME>DeactivateSupervisionEntity</SHORT-NAME>
            <DESC>
              <L-2 L="EN">This function deactivates the monitoring of the given Supervised Entity</L-2>
            </DESC>
            <ARGUMENTS>
            </ARGUMENTS>
            <POSSIBLE-ERROR-REFS>
              <POSSIBLE-ERROR-REF DEST="APPLICATION-ERROR">/PortInterface/WdgM_IndividualMode/E_NOT_OK</POSSIBLE-ERROR-REF>
            </POSSIBLE-ERROR-REFS>
          </CLIENT-SERVER-OPERATION>
          </xsl:if>
        </OPERATIONS>
        <POSSIBLE-ERRORS>
          <APPLICATION-ERROR>
            <SHORT-NAME>E_NOT_OK</SHORT-NAME>
            <ERROR-CODE>1</ERROR-CODE>
          </APPLICATION-ERROR>
        </POSSIBLE-ERRORS>
      </CLIENT-SERVER-INTERFACE>
      <CLIENT-SERVER-INTERFACE>
        <SHORT-NAME>WdgM_GlobalMode</SHORT-NAME>
        <ADMIN-DATA>
          <SDGS>
            <SDG GID="DV_SDG">
              <SD GID="DV_BSWM">WdgM</SD>
            </SDG>
          </SDGS>
        </ADMIN-DATA>
        <IS-SERVICE>true</IS-SERVICE>
        <OPERATIONS>
          <CLIENT-SERVER-OPERATION>
            <SHORT-NAME>GetMode</SHORT-NAME>
            <DESC>
              <L-2 L="EN">Returns the current mode of the Watchdog Manager.</L-2>
            </DESC>
            <ARGUMENTS>
              <ARGUMENT-DATA-PROTOTYPE>
                <SHORT-NAME>Mode</SHORT-NAME>
                <TYPE-TREF DEST="IMPLEMENTATION-DATA-TYPE">/DataType/WdgM_ModeType</TYPE-TREF>
                <DIRECTION>OUT</DIRECTION>
              </ARGUMENT-DATA-PROTOTYPE>
            </ARGUMENTS>
            <POSSIBLE-ERROR-REFS>
              <POSSIBLE-ERROR-REF DEST="APPLICATION-ERROR">/PortInterface/WdgM_GlobalMode/E_NOT_OK</POSSIBLE-ERROR-REF>
            </POSSIBLE-ERROR-REFS>
          </CLIENT-SERVER-OPERATION>
          <CLIENT-SERVER-OPERATION>
            <SHORT-NAME>GetGlobalStatus</SHORT-NAME>
            <DESC>
              <L-2 L="EN">Returns the global monitoring status of the Watchdog Manager.</L-2>
            </DESC>
            <ARGUMENTS>
              <ARGUMENT-DATA-PROTOTYPE>
                <SHORT-NAME>Status</SHORT-NAME>
                <TYPE-TREF DEST="IMPLEMENTATION-DATA-TYPE">/DataType/WdgM_GlobalStatusType</TYPE-TREF>
                <DIRECTION>OUT</DIRECTION>
              </ARGUMENT-DATA-PROTOTYPE>
            </ARGUMENTS>
            <POSSIBLE-ERROR-REFS>
              <POSSIBLE-ERROR-REF DEST="APPLICATION-ERROR">/PortInterface/WdgM_GlobalMode/E_NOT_OK</POSSIBLE-ERROR-REF>
            </POSSIBLE-ERROR-REFS>
          </CLIENT-SERVER-OPERATION>
          <CLIENT-SERVER-OPERATION>
            <SHORT-NAME>PerformReset</SHORT-NAME>
            <DESC>
              <L-2 L="EN">Instructs the Watchdog Manager to cause a watchdog reset.</L-2>
            </DESC>
            <POSSIBLE-ERROR-REFS>
              <POSSIBLE-ERROR-REF DEST="APPLICATION-ERROR">/PortInterface/WdgM_GlobalMode/E_NOT_OK</POSSIBLE-ERROR-REF>
            </POSSIBLE-ERROR-REFS>
          </CLIENT-SERVER-OPERATION>
        </OPERATIONS>
        <POSSIBLE-ERRORS>
          <APPLICATION-ERROR>
            <SHORT-NAME>E_NOT_OK</SHORT-NAME>
            <ERROR-CODE>1</ERROR-CODE>
          </APPLICATION-ERROR>
        </POSSIBLE-ERRORS>
      </CLIENT-SERVER-INTERFACE>
      <xsl:if test="$localCbkCnt &gt; 0">
      <CLIENT-SERVER-INTERFACE>
        <SHORT-NAME>WdgM_LocalStatusCallbackInterface</SHORT-NAME>
        <DESC><L-2 L="EN">Interface for local callback functions</L-2></DESC>
        <IS-SERVICE>true</IS-SERVICE>
        <OPERATIONS>
          <CLIENT-SERVER-OPERATION>
            <SHORT-NAME>LocalStatusCallback</SHORT-NAME>
            <DESC>
              <L-2 L="EN">Callback function (see documentation on `WdgMLocalStateChangeCbk`).</L-2>
            </DESC>
            <ARGUMENTS>
              <ARGUMENT-DATA-PROTOTYPE>
                <SHORT-NAME>Status</SHORT-NAME>
                <TYPE-TREF DEST="IMPLEMENTATION-DATA-TYPE">/DataType/WdgM_LocalStatusType</TYPE-TREF>
                <DIRECTION>IN</DIRECTION>
              </ARGUMENT-DATA-PROTOTYPE>
            </ARGUMENTS>
            <POSSIBLE-ERROR-REFS>
              <POSSIBLE-ERROR-REF DEST="APPLICATION-ERROR">/PortInterface/WdgM_LocalStatusCallbackInterface/E_NOT_OK</POSSIBLE-ERROR-REF>
            </POSSIBLE-ERROR-REFS>
          </CLIENT-SERVER-OPERATION>
        </OPERATIONS>
        <POSSIBLE-ERRORS>
          <APPLICATION-ERROR>
            <SHORT-NAME>E_NOT_OK</SHORT-NAME>
            <ERROR-CODE>1</ERROR-CODE>
          </APPLICATION-ERROR>
        </POSSIBLE-ERRORS>
      </CLIENT-SERVER-INTERFACE>
      </xsl:if>
      <xsl:if test="$globalCbkCnt &gt; 0">
      <CLIENT-SERVER-INTERFACE>
        <SHORT-NAME>WdgM_GlobalStatusCallbackInterface</SHORT-NAME>
        <DESC><L-2 L="EN">Interface for the global callback functions</L-2></DESC>
        <IS-SERVICE>true</IS-SERVICE>
        <OPERATIONS>
          <CLIENT-SERVER-OPERATION>
            <SHORT-NAME>GlobalStatusCallback</SHORT-NAME>
            <DESC>
              <L-2 L="EN">Callback function (see documentation on `WdgMGlobalStateChangeCbk`).</L-2>
            </DESC>
            <ARGUMENTS>
              <ARGUMENT-DATA-PROTOTYPE>
                <SHORT-NAME>Status</SHORT-NAME>
                <TYPE-TREF DEST="IMPLEMENTATION-DATA-TYPE">/DataType/WdgM_GlobalStatusType</TYPE-TREF>
                <DIRECTION>IN</DIRECTION>
              </ARGUMENT-DATA-PROTOTYPE>
            </ARGUMENTS>
            <POSSIBLE-ERROR-REFS>
              <POSSIBLE-ERROR-REF DEST="APPLICATION-ERROR">/PortInterface/WdgM_GlobalStatusCallbackInterface/E_NOT_OK</POSSIBLE-ERROR-REF>
            </POSSIBLE-ERROR-REFS>
          </CLIENT-SERVER-OPERATION>
        </OPERATIONS>
        <POSSIBLE-ERRORS>
          <APPLICATION-ERROR>
            <SHORT-NAME>E_NOT_OK</SHORT-NAME>
            <ERROR-CODE>1</ERROR-CODE>
          </APPLICATION-ERROR>
        </POSSIBLE-ERRORS>
      </CLIENT-SERVER-INTERFACE>
      </xsl:if>
    </ELEMENTS>
  </xsl:template>

  <!--
  =====================================================================================================================
      TYPES TEMPLATE
  =====================================================================================================================
  -->
  <xsl:template name="WDGM_TYPES">
    <SHORT-NAME>DataType</SHORT-NAME>
    <ELEMENTS>
      <IMPLEMENTATION-DATA-TYPE>
        <SHORT-NAME>UInt8</SHORT-NAME>
        <SW-DATA-DEF-PROPS>
          <SW-DATA-DEF-PROPS-VARIANTS>
            <SW-DATA-DEF-PROPS-CONDITIONAL>
              <BASE-TYPE-REF DEST="SW-BASE-TYPE">/ComponentType/DataTypes/BaseTypes/UInt8</BASE-TYPE-REF>
              <DATA-CONSTR-REF DEST="DATA-CONSTR">/DataConstrs/UInt8_Constr</DATA-CONSTR-REF>
<!--          <LOWER-LIMIT INTERVAL-TYPE="CLOSED">0</LOWER-LIMIT>
              <UPPER-LIMIT INTERVAL-TYPE="CLOSED">255</UPPER-LIMIT> -->
            </SW-DATA-DEF-PROPS-CONDITIONAL>
          </SW-DATA-DEF-PROPS-VARIANTS>
        </SW-DATA-DEF-PROPS>
      </IMPLEMENTATION-DATA-TYPE>
      <IMPLEMENTATION-DATA-TYPE>
        <SHORT-NAME>UInt16</SHORT-NAME>
        <SW-DATA-DEF-PROPS>
          <SW-DATA-DEF-PROPS-VARIANTS>
            <SW-DATA-DEF-PROPS-CONDITIONAL>
              <BASE-TYPE-REF DEST="SW-BASE-TYPE">/ComponentType/DataTypes/BaseTypes/UInt16</BASE-TYPE-REF>
              <DATA-CONSTR-REF DEST="DATA-CONSTR">/DataConstrs/UInt16_Constr</DATA-CONSTR-REF>
            </SW-DATA-DEF-PROPS-CONDITIONAL>
          </SW-DATA-DEF-PROPS-VARIANTS>
        </SW-DATA-DEF-PROPS>
      </IMPLEMENTATION-DATA-TYPE>
      <IMPLEMENTATION-DATA-TYPE>
        <SHORT-NAME>WdgM_SupervisedEntityIdType</SHORT-NAME>
        <CATEGORY>VALUE</CATEGORY>
        <ADMIN-DATA>
          <SDGS>
            <SDG GID="DV_SDG">
              <SD GID="DV_BSWM">WdgM</SD>
            </SDG>
          </SDGS>
        </ADMIN-DATA>
        <SW-DATA-DEF-PROPS>
          <SW-DATA-DEF-PROPS-VARIANTS>
            <SW-DATA-DEF-PROPS-CONDITIONAL>
              <BASE-TYPE-REF DEST="SW-BASE-TYPE">/ComponentType/DataTypes/BaseTypes/UInt8</BASE-TYPE-REF>
              <DATA-CONSTR-REF DEST="DATA-CONSTR">/DataConstrs/UInt8_Constr</DATA-CONSTR-REF>
            </SW-DATA-DEF-PROPS-CONDITIONAL>
          </SW-DATA-DEF-PROPS-VARIANTS>
        </SW-DATA-DEF-PROPS>
      </IMPLEMENTATION-DATA-TYPE>
      <IMPLEMENTATION-DATA-TYPE>
        <SHORT-NAME>WdgM_CheckpointIdType</SHORT-NAME>
        <!-- Add export of special data group DV_SDG for service port interfaces -->
        <CATEGORY>VALUE</CATEGORY>
        <ADMIN-DATA>
          <SDGS>
            <SDG GID="DV_SDG">
              <SD GID="DV_BSWM">WdgM</SD>
            </SDG>
          </SDGS>
        </ADMIN-DATA>
        <SW-DATA-DEF-PROPS>
          <SW-DATA-DEF-PROPS-VARIANTS>
            <SW-DATA-DEF-PROPS-CONDITIONAL>
              <BASE-TYPE-REF DEST="SW-BASE-TYPE">/ComponentType/DataTypes/BaseTypes/UInt16</BASE-TYPE-REF>
              <DATA-CONSTR-REF DEST="DATA-CONSTR">/DataConstrs/UInt16_Constr</DATA-CONSTR-REF>
            </SW-DATA-DEF-PROPS-CONDITIONAL>
          </SW-DATA-DEF-PROPS-VARIANTS>
        </SW-DATA-DEF-PROPS>
      </IMPLEMENTATION-DATA-TYPE>
      <IMPLEMENTATION-DATA-TYPE>
        <SHORT-NAME>WdgM_ModeType</SHORT-NAME>
        <CATEGORY>VALUE</CATEGORY>
        <ADMIN-DATA>
          <SDGS>
            <SDG GID="DV_SDG">
              <SD GID="DV_BSWM">WdgM</SD>
            </SDG>
          </SDGS>
        </ADMIN-DATA>
        <SW-DATA-DEF-PROPS>
          <SW-DATA-DEF-PROPS-VARIANTS>
            <SW-DATA-DEF-PROPS-CONDITIONAL>
              <BASE-TYPE-REF DEST="SW-BASE-TYPE">/ComponentType/DataTypes/BaseTypes/UInt8</BASE-TYPE-REF>
              <DATA-CONSTR-REF DEST="DATA-CONSTR">/DataConstrs/UInt8_Constr</DATA-CONSTR-REF>
            </SW-DATA-DEF-PROPS-CONDITIONAL>
          </SW-DATA-DEF-PROPS-VARIANTS>
        </SW-DATA-DEF-PROPS>
      </IMPLEMENTATION-DATA-TYPE>
      <IMPLEMENTATION-DATA-TYPE>
        <SHORT-NAME>WdgM_LocalStatusType</SHORT-NAME>
        <CATEGORY>VALUE</CATEGORY>
        <ADMIN-DATA>
          <SDGS>
            <SDG GID="DV_SDG">
              <SD GID="DV_BSWM">WdgM</SD>
            </SDG>
          </SDGS>
        </ADMIN-DATA>
        <SW-DATA-DEF-PROPS>
          <SW-DATA-DEF-PROPS-VARIANTS>
            <SW-DATA-DEF-PROPS-CONDITIONAL>
              <BASE-TYPE-REF DEST="SW-BASE-TYPE">/ComponentType/DataTypes/BaseTypes/WdgM_LocalStatusType</BASE-TYPE-REF>
              <COMPU-METHOD-REF DEST="COMPU-METHOD">/ComponentType/DataTypes/CompuMethods/WdgM_LocalStatusType</COMPU-METHOD-REF>
              <DATA-CONSTR-REF DEST="DATA-CONSTR">/DataConstrs/UInt8_Constr</DATA-CONSTR-REF>
            </SW-DATA-DEF-PROPS-CONDITIONAL>
          </SW-DATA-DEF-PROPS-VARIANTS>
        </SW-DATA-DEF-PROPS>
      </IMPLEMENTATION-DATA-TYPE>
      <IMPLEMENTATION-DATA-TYPE>
        <SHORT-NAME>WdgM_GlobalStatusType</SHORT-NAME>
        <CATEGORY>VALUE</CATEGORY>
        <ADMIN-DATA>
          <SDGS>
            <SDG GID="DV_SDG">
              <SD GID="DV_BSWM">WdgM</SD>
            </SDG>
          </SDGS>
        </ADMIN-DATA>
        <SW-DATA-DEF-PROPS>
          <SW-DATA-DEF-PROPS-VARIANTS>
            <SW-DATA-DEF-PROPS-CONDITIONAL>
              <BASE-TYPE-REF DEST="SW-BASE-TYPE">/ComponentType/DataTypes/BaseTypes/WdgM_GlobalStatusType</BASE-TYPE-REF>
              <COMPU-METHOD-REF DEST="COMPU-METHOD">/ComponentType/DataTypes/CompuMethods/WdgM_GlobalStatusType</COMPU-METHOD-REF>
              <DATA-CONSTR-REF DEST="DATA-CONSTR">/DataConstrs/UInt8_Constr</DATA-CONSTR-REF>
            </SW-DATA-DEF-PROPS-CONDITIONAL>
          </SW-DATA-DEF-PROPS-VARIANTS>
        </SW-DATA-DEF-PROPS>
      </IMPLEMENTATION-DATA-TYPE>
    </ELEMENTS>
  </xsl:template>

  <!--
  =====================================================================================================================
      TYPE CONSTRAINTS TEMPLATE
  =====================================================================================================================
  -->
  <xsl:template name="WDGM_TYPE_CONSTRAINTS">
    <SHORT-NAME>DataConstrs</SHORT-NAME>
    <ELEMENTS>
      <DATA-CONSTR UUID="23b6eb1e-6704-4d2b-afee-cb327c8d5bd1">
        <SHORT-NAME>UInt8_Constr</SHORT-NAME>
        <DATA-CONSTR-RULES>
          <DATA-CONSTR-RULE>
            <INTERNAL-CONSTRS>
              <LOWER-LIMIT INTERVAL-TYPE="CLOSED">0</LOWER-LIMIT>
              <UPPER-LIMIT INTERVAL-TYPE="CLOSED">255</UPPER-LIMIT>
            </INTERNAL-CONSTRS>
          </DATA-CONSTR-RULE>
        </DATA-CONSTR-RULES>
      </DATA-CONSTR>
      <DATA-CONSTR UUID="57d33baf-a928-4c1e-be70-c19654abf2f0">
        <SHORT-NAME>UInt16_Constr</SHORT-NAME>
        <DATA-CONSTR-RULES>
          <DATA-CONSTR-RULE>
            <INTERNAL-CONSTRS>
              <LOWER-LIMIT INTERVAL-TYPE="CLOSED">0</LOWER-LIMIT>
              <UPPER-LIMIT INTERVAL-TYPE="CLOSED">65535</UPPER-LIMIT>
            </INTERNAL-CONSTRS>
          </DATA-CONSTR-RULE>
        </DATA-CONSTR-RULES>
      </DATA-CONSTR>
    </ELEMENTS>
  </xsl:template>
  <!--
  =====================================================================================================================
      MODE DECLARATION GROUP TEMPLATE
  =====================================================================================================================
  -->
  <xsl:template name="WDGM_MODE_DECLARATION_GROUP">
    <SHORT-NAME>ModeDeclarationGroup</SHORT-NAME>
    <ELEMENTS>
    </ELEMENTS>
  </xsl:template>
</xsl:stylesheet>
