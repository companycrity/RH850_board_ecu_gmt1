/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_GmT1xxMcuCfg.h
* Module Description: Stub GM T1xx Mcu Config header until component is created and implemented
* Project           : GM T1xx
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/28/15  1        LWW       Initial Version                                                                 EA4#517
* 10/22/15  2        JWJ       Added Adc0OutpInin prototype for micro diagnostics updates                      EA4#2198
**********************************************************************************************************************/

#ifndef CDD_GMT1XXMCUCFG_H
#define CDD_GMT1XXMCUCFG_H

#include "Std_Types.h"

extern FUNC(void, CDD_GmT1xxMcuCfg_CODE) GmT1xxMcuCfgInit1(void);
extern FUNC(void, CDD_GmT1xxMcuCfg_CODE) GmT1xxMcuCfgInit2(void);
extern FUNC(void, CDD_GmT1xxMcuCfg_CODE) GmT1xxMcuCfgPer1(void);
extern FUNC(void, CDD_GmT1xxMcuCfg_CODE) Adc0OutpInin(void);
	
#endif
