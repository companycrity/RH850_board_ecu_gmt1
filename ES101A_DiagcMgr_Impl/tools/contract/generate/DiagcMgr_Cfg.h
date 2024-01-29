
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : DiagcMgr_Cfg.h
* Module Description: DiagcMgr
* Project           : CBD
* Author            : Spandana Balani
* Generator         : artt 2.0.2.0
* Generation Time   : 07.12.2016 10:45:03
***********************************************************************************************************************
* Version Control:
* %version:          5 %
* %derived_by:       gzkys7 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 03/11/16  1        SB         ES101A_DiagcMgr_Design version 2 implementation                                EA4#3421
* 04/19/16  2        SB         ES101A_DiagcMgr_Design version 3 implementation                                EA4#5110
* 05/23/16  3        SB         Updated to fix anomaly EA4#5865  NTC BF not setting                            EA4#5905
* 06/20/16  4        SB         ES101A_DiagcMgr_Design version 4 implementation                                EA4#6251
* 11/30/16  5        SB         Added DEMTOTNROFDTC_CNT_U08                                                    EA4#8662
* 12/06/16  6        SB         Removed Dem.h include                                                          EA4#8822
**********************************************************************************************************************/
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
# ifndef DIAGMGR_CFG_H
#define DIAGMGR_CFG_H

#include "DiagcMgrStaticTypes.h"
#include "NxtrDet.h"

/*******************************************************************************
**                      Module Private Data                                   **
*******************************************************************************/


    /** Number of NTCs configured in an application, 
        typedef for variable size NTC Info Array PIMs, 
        Application NTC array, 
        Total number of Deounce type NTCs in an application, 
        typedef for variable size DebCntr Array PIMs    **/
    
  
    #define     NTCCNTAPPL10_CNT_U16                   59U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl10[NTCCNTAPPL10_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NtcNrAryAppl10_Cnt_u16[NTCCNTAPPL10_CNT_U16];

    #define     TOTDEBNTCINAPPLX10_CNT_U08               9U
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl10[TOTDEBNTCINAPPLX10_CNT_U08 + 1U];
  
    #define     NTCCNTAPPL6_CNT_U16                   41U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl6[NTCCNTAPPL6_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NtcNrAryAppl6_Cnt_u16[NTCCNTAPPL6_CNT_U16];

    #define     TOTDEBNTCINAPPLX6_CNT_U08               2U
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl6[TOTDEBNTCINAPPLX6_CNT_U08 + 1U];
  
    #define     NTCCNTAPPL0_CNT_U16                   2U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl0[NTCCNTAPPL0_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NtcNrAryAppl0_Cnt_u16[NTCCNTAPPL0_CNT_U16];

    /* Note: No Debounce type NTCs Configured for Appl0 */
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl0[1U];
  
    #define     NTCCNTAPPL1_CNT_U16                   2U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl1[NTCCNTAPPL1_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NtcNrAryAppl1_Cnt_u16[NTCCNTAPPL1_CNT_U16];

    /* Note: No Debounce type NTCs Configured for Appl1 */
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl1[1U];
  
    #define     NTCCNTAPPL2_CNT_U16                   2U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl2[NTCCNTAPPL2_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NtcNrAryAppl2_Cnt_u16[NTCCNTAPPL2_CNT_U16];

    /* Note: No Debounce type NTCs Configured for Appl2 */
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl2[1U];
  
    #define     NTCCNTAPPL3_CNT_U16                   2U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl3[NTCCNTAPPL3_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NtcNrAryAppl3_Cnt_u16[NTCCNTAPPL3_CNT_U16];

    /* Note: No Debounce type NTCs Configured for Appl3 */
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl3[1U];
  
    #define     NTCCNTAPPL4_CNT_U16                   2U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl4[NTCCNTAPPL4_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NtcNrAryAppl4_Cnt_u16[NTCCNTAPPL4_CNT_U16];

    /* Note: No Debounce type NTCs Configured for Appl4 */
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl4[1U];
  
    #define     NTCCNTAPPL5_CNT_U16                   2U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl5[NTCCNTAPPL5_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NtcNrAryAppl5_Cnt_u16[NTCCNTAPPL5_CNT_U16];

    /* Note: No Debounce type NTCs Configured for Appl5 */
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl5[1U];
  
    #define     NTCCNTAPPL7_CNT_U16                   2U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl7[NTCCNTAPPL7_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NtcNrAryAppl7_Cnt_u16[NTCCNTAPPL7_CNT_U16];

    /* Note: No Debounce type NTCs Configured for Appl7 */
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl7[1U];
  
    #define     NTCCNTAPPL8_CNT_U16                   2U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl8[NTCCNTAPPL8_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NtcNrAryAppl8_Cnt_u16[NTCCNTAPPL8_CNT_U16];

    /* Note: No Debounce type NTCs Configured for Appl8 */
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl8[1U];
  
    #define     NTCCNTAPPL9_CNT_U16                   2U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl9[NTCCNTAPPL9_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NtcNrAryAppl9_Cnt_u16[NTCCNTAPPL9_CNT_U16];

    /* Note: No Debounce type NTCs Configured for Appl9 */
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl9[1U];

    /* Number of DTCs configured */
    #define TOTNROFDTC_CNT_U08                          2U 
    typedef uint8 Ary1D_u08_DiagcMgr1[TOTNROFDTC_CNT_U08 + 1U]; 
    extern CONST(uint16, DiagcMgr_CODE) DtcEnaMask[TOTNROFDTC_CNT_U08 + 1U];
    extern CONST(uint16, DiagcMgr_CODE) DemDtcEveIdMap[TOTNROFDTC_CNT_U08 + 1U];

    #define DIAGCMGR_DEMCHK                             STD_ON
#if ((STD_ON == NXTRDET_DIAGCMGR) && (STD_ON == DIAGCMGR_DEMCHK))
    
    #define DEMTOTNROFDTC_CNT_U08                       ((uint8)(TblSize_m(Dem_C_DtcTable)))
    
#endif
# endif
