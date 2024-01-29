<?xml version="1.0" encoding="ISO-8859-1" standalone="no"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:output method="xml" version="1.0" encoding="ISO-8859-1" standalone="no" doctype-system="..\DTD6.8\DVW.DTD"/>

<!-- Root element rule -->
  <xsl:template match="/">
  <DVW>
    <xsl:apply-templates select="DVW"/>
  </DVW>
  </xsl:template>

<!-- DVW element rule -->
    <!-- Set DTD version to 6.8, no external conversion required  -->

    <xsl:template match="DVW">
        <xsl:attribute name="DTDVersion">6.8</xsl:attribute>
        <xsl:copy-of select="@CMVersion | @CMState | @GUID | @Version | @RO | @InstVers | @SpecialBuild | @AttrDefSetLink | @AUTOSARVersion"/>
        <xsl:copy-of select ="NAME | LONGNAME | ATTRLink | SignalGroupLink | AttrDefSetLink | SignalLink | SignalTypeLink | ConstantLink | DataTypeLink | ComponentTypeLink | CANBusLink | LINBusLink | FlexRayClusterLink | VehicleProjectLink | ECUProjectLink | PortInterfaceLink | ModeDclrGroupLink | PDU"/>
    </xsl:template>

</xsl:stylesheet>

