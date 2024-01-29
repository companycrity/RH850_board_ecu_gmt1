
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : DiagcMgr_Cfg.h
* Module Description: DiagcMgr
* Project           : CBD
* Author            : Spandana Balani
* Generator         : artt 2.0.2.0
* Generation Time   : 14.12.2016 18:13:07
***********************************************************************************************************************
* Version Control:
* %version:          17 %
* %derived_by:       nz2654 %
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
    
  
    /* Note: No NTCs Configured for Appl0 */

    /* Note: No Debounce type NTCs Configured for Appl0 */
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl0[1U];
  
    #define     NTCCNTAPPL6_CNT_U16                   44U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl6[NTCCNTAPPL6_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NtcNrAryAppl6_Cnt_u16[NTCCNTAPPL6_CNT_U16];

    /* Note: No Debounce type NTCs Configured for Appl6 */
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl6[1U];
  
    #define     NTCCNTAPPL10_CNT_U16                   140U
    typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgrProxyAppl10[NTCCNTAPPL10_CNT_U16];
    extern CONST(uint16, DiagcMgr_CODE) NtcNrAryAppl10_Cnt_u16[NTCCNTAPPL10_CNT_U16];

    #define     TOTDEBNTCINAPPLX10_CNT_U08               50U
    typedef sint16 Ary1D_s16_DiagcMgrProxyAppl10[TOTDEBNTCINAPPLX10_CNT_U08 + 1U];

    /* Number of DTCs configured */
    #define TOTNROFDTC_CNT_U08                          32U 
    typedef uint8 Ary1D_u08_DiagcMgr1[TOTNROFDTC_CNT_U08 + 1U]; 
    extern CONST(uint16, DiagcMgr_CODE) DtcEnaMask[TOTNROFDTC_CNT_U08 + 1U];
    extern CONST(uint16, DiagcMgr_CODE) DemDtcEveIdMap[TOTNROFDTC_CNT_U08 + 1U];

    #define DIAGCMGR_DEMCHK                             STD_ON
#if ((STD_ON == NXTRDET_DIAGCMGR) && (STD_ON == DIAGCMGR_DEMCHK))
    
    #define DEMTOTNROFDTC_CNT_U08                       ((uint8)(DEM_CFG_GLOBAL_DTC_COUNT))
    
#endif
# endif
