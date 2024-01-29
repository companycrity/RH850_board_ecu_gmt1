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
    <!-- Set DTD version to 6.5, No ItemConvert required  -->
    <xsl:template match="ECUProject">
        <xsl:copy-of select="@CMVersion | @CMState | @GUID | @Version | @RO" />
        <xsl:attribute name="DTDVersion">6.5</xsl:attribute>
        <xsl:copy-of select="@GenOutputLevel | @BSWMDFileCom | @BSWMDFileNvM | @BSWMDFileOs | @ECUCFile | @ECUCFileLastUpdate | @ECUCFileModificationTime | @AllowGenerationOfUnsavedData | @DPAFile | @SystemVersion | @ExtractVersion" />
        <xsl:copy-of select="NAME | LONGNAME | DESC | CONTENT | FileEntry | Task | TaskMap | NVMBlock | MemoryMap | ECUSWComposition" />
        <xsl:apply-templates select="ECUCommunication" />
        <xsl:copy-of select="ExternalTool | Generator | GenAttrList | OsApplication | ModuleChecksum | ECUCSplitter | ExternalFile" />
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
