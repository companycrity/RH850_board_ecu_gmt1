<?xml version="1.0" encoding="ISO-8859-1" standalone="no"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:output method="xml" version="1.0" encoding="ISO-8859-1" standalone="no" doctype-system="..\DTD6.5\DVW.DTD"/>

<!-- Root element rule -->
  <xsl:template match="/">
  <DVW>
    <xsl:apply-templates select="DVW"/>
  </DVW>
  </xsl:template>

<!-- DVW element rule -->
    <!-- Don't modify DTD version since it's already set to 6.5 -->
    <!-- Remove CompatibleVersions because external converter in DTD 6.5 -->

    <xsl:template match="DVW">
        <xsl:copy-of select="@*"/>
        <xsl:copy-of select ="NAME | LONGNAME | ATTRLink | AttrDefSetLink | ConstantLink | DataTypeLink | ComponentTypeLink | ECUProjectLink | PortInterfaceLink | ModeDclrGroupLink | PackageLink"/>
    </xsl:template>

</xsl:stylesheet>

