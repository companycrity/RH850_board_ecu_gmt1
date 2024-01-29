<?xml version="1.0" encoding="ISO-8859-1" standalone="no" ?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:output method="xml" version="1.0" encoding="ISO-8859-1" standalone="no" doctype-system="..\DTD6.5\DVW.DTD" />
    
    <!-- Retain white space within all elements -->
    <xsl:preserve-space elements="*" />
    
    <!-- Root element rule -->
    <xsl:template match="/">
        <ECUProject>
            <xsl:apply-templates select="ECUProject" />
        </ECUProject>
    </xsl:template>

    <!-- ECUProject element rule -->
    <!-- DO NOT Set DTD version to 6.5, call of item convert required  -->
    <xsl:template match="ECUProject">
        <xsl:copy-of select="@*" />
        <xsl:copy-of select="NAME | LONGNAME | DESC | CONTENT | FileEntry | Task | TaskMap | NVMBlock | MemoryMap | ECUSWComposition" />
        <xsl:apply-templates select="ECUCommunication" />
        <xsl:copy-of select="ExternalTool | Generator | GenAttrList | OsApplication | ModuleChecksum" />
    </xsl:template>

    <!-- ECUCommunication element rule -->
    <!-- Remove FrTp definitions -->
    <xsl:template match="ECUCommunication">
        <ECUCommunication>
            <xsl:copy-of select="@*" />
            <xsl:copy-of select="ATTRLink | Signal | SignalType | SignalGroup | PDU | ECU | CANBus | LINBus | FlexRayCluster" />
        </ECUCommunication>
    </xsl:template>

</xsl:stylesheet>
