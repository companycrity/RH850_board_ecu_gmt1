/*****************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name: FltInj.h
* Module Description: Fault Injection
* Project           : CBD
* Author            : Nick 
*****************************************************************************
* Version Control:
* %version:           2 %
* %derived_by:        nzt9hv %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     ----------
* 08/13/15  1        Nick        Initial version                                                                EA4#361
******************************************************************************/

#ifndef FLTINJ_H
#define FLTINJ_H

#define FLTINJ_CURRMEAS_MOTCURRCORRDA   (29U)
#define FLTINJ_CURRMEAS_MOTCURRCORRDD   (36U)
#define FLTINJ_CURRMEAS_TESTOK          (30U)

#define FLTINJENA STD_ON /* FLTINJENA is defined as STD_ON in contract folder to let the compiler check the function call */
extern FUNC(Std_ReturnType, DiagcMgr_CODE) FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg);
extern FUNC(Std_ReturnType, DiagcMgr_CODE) FltInj_u08_Oper(P2VAR(uint8, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg);

#endif
