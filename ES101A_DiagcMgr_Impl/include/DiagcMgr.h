/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name: DiagcMgr.h
* Module Description: DiagcMgr header file for the DiagcMgr and DiagcMgrProxy components
* Project           : CBD   
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:             8 %
* %derived_by:          gzkys7 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/30/15  1        SB         Initial version                                                                 EA4#447
* 05/07/15  2        SB         Correct the argument name of GetNtcSts_Oper                                     EA4#573
* 08/24/15  3        SB         Partial Implementation of version2                                              EA4#1388
* 09/03/15  4        SB         Partial Implementation of version2                                              EA4#1241
* 02/26/16  5        SB         ES101A_DiagcMgr_Design version 2 implementation                                 EA4#3421
* 04/19/16  6        SB         ES101A_DiagcMgr_Design version 3 implementation                                 EA4#5110
* 06/20/16  7        SB         ES101A_DiagcMgr_Design version 4 implementation                                 EA4#6251
* 12/06/16  8        SB         Added SnpshtDataAry_M                                                           EA4#8822
**********************************************************************************************************************/
#ifndef DIAGCMGR_H
#define DIAGCMGR_H

/************************************************ Include Statements *************************************************/
    /* NTC  ISO  BITS */
    #define     DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08                0x01U   /*  (1U)    Bit0 */
    #define     DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08      0x02U   /*  (2U)    Bit1 */
    #define     DIAGCMGR_NTCINFOCFMDNTC_CNT_U08                     0x08U   /*  (8U)    Bit3 */
    #define     DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08    0x40U   /*  (64U)   Bit6 */

    extern VAR(SnpshtDataRec1, DiagcMgr_CODE) SnpshtDataAry_M[8];
	extern FUNC(void, DiagcMgr_CODE) DiagcMgrPwrDwn(void);
    extern FUNC(void, DiagcMgr_CODE) RestoreNtcFltAryDft(void);
    extern FUNC(void, DiagcMgr_CODE) RestoreSnpshtAryDft(void);
    extern FUNC(void, DiagcMgr_CODE) UpdDtcEnaCdn(boolean DtcEnaCdnSts_Arg, uint8 DtcEnaCdnId_Arg);

#ifdef NTCCNTAPPL0_CNT_U16
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl0_CODE) GetNtcActv0_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL0_APPL_VAR) NtcActv_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl0_CODE) GetNtcQlfrSts0_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL0_APPL_VAR) NtcQlfr_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl0_CODE) SetNtcSts0_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
#endif
#ifdef NTCCNTAPPL1_CNT_U16
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl1_CODE) GetNtcActv1_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGRPROXYAppl1_APPL_VAR) NtcActv_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl1_CODE) GetNtcQlfrSts1_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAppl1_APPL_VAR) NtcQlfr_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl1_CODE) SetNtcSts1_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
#endif
#ifdef NTCCNTAPPL2_CNT_U16
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl2_CODE) GetNtcActv2_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGRPROXYAppl2_APPL_VAR) NtcActv_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl2_CODE) GetNtcQlfrSts2_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAppl2_APPL_VAR) NtcQlfr_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl2_CODE) SetNtcSts2_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
#endif    
#ifdef NTCCNTAPPL3_CNT_U16
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl3_CODE) GetNtcActv3_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGRPROXYAppl3_APPL_VAR) NtcActv_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl3_CODE) GetNtcQlfrSts3_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAppl3_APPL_VAR) NtcQlfr_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl3_CODE) SetNtcSts3_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
#endif  
#ifdef NTCCNTAPPL4_CNT_U16
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl4_CODE) GetNtcActv4_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGRPROXYAppl4_APPL_VAR) NtcActv_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl4_CODE) GetNtcQlfrSts4_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAppl4_APPL_VAR) NtcQlfr_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl4_CODE) SetNtcSts4_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
#endif  
#ifdef NTCCNTAPPL5_CNT_U16
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl5_CODE) GetNtcActv5_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGRPROXYAppl5_APPL_VAR) NtcActv_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl5_CODE) GetNtcQlfrSts5_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAppl5_APPL_VAR) NtcQlfr_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl5_CODE) SetNtcSts5_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
#endif  
#ifdef NTCCNTAPPL6_CNT_U16
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl6_CODE) GetNtcActv6_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGRPROXYAppl6_APPL_VAR) NtcActv_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl6_CODE) GetNtcQlfrSts6_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAppl6_APPL_VAR) NtcQlfr_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl6_CODE) SetNtcSts6_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
#endif 
#ifdef NTCCNTAPPL7_CNT_U16
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl7_CODE) GetNtcActv7_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGRPROXYAppl7_APPL_VAR) NtcActv_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl7_CODE) GetNtcQlfrSts7_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAppl7_APPL_VAR) NtcQlfr_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl7_CODE) SetNtcSts7_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
#endif  
#ifdef NTCCNTAPPL8_CNT_U16
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl8_CODE) GetNtcActv8_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGRPROXYAppl8_APPL_VAR) NtcActv_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl8_CODE) GetNtcQlfrSts8_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAppl8_APPL_VAR) NtcQlfr_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl8_CODE) SetNtcSts8_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
#endif   
#ifdef NTCCNTAPPL9_CNT_U16
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl9_CODE) GetNtcActv9_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGRPROXYAppl9_APPL_VAR) NtcActv_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl9_CODE) GetNtcQlfrSts9_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAppl9_APPL_VAR) NtcQlfr_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl9_CODE) SetNtcSts9_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
#endif  
#ifdef NTCCNTAPPL10_CNT_U16 
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl10_CODE) GetNtcActv10_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL10_APPL_VAR) NtcActv_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl10_CODE) GetNtcQlfrSts10_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL10_APPL_VAR) NtcQlfr_Arg);
    extern FUNC(Std_ReturnType, DiagcMgrProxyAppl10_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
#endif 

#endif
