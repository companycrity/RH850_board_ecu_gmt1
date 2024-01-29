/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name: DiagcMgrNonRTE.c
* Module Description: Implementation of Diagnostic Manager FDD ES101A - Non RTE functions
* Project           : CBD 
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:           6 %
* %derived_by:        gzkys7 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 02/26/16  1        SB         ES101A_DiagcMgr_Design version 2 implementation                                EA4#3421
* 03/11/16  2        SB         Update includes for Nvm to work as expected                                    EA4#3421
* 04/19/16  3        SB         ES101A_DiagcMgr_Design version 3 implementation                                EA4#5110
* 06/20/16  4        SB         ES101A_DiagcMgr_Design version 4 implementation                                EA4#6251
* 09/23/16  5        SB         Removed requirement mapping                                                    EA4#7191
* 12/02/16  6        SB         Updated PimSnpshtDataAry_SnpshtDataRec1 definition                             EA4#8250
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Rte_DiagcMgr.h"
#include "NxtrMath.h"
#include "DiagcMgr.h"
#include "CDD_NvMProxy.h"
#include "NvM.h"
#include "NxtrDet.h"
#include "DiagcMgr_private.h"
#include "DiagcMgrStaticTypes.h"
#include "DiagcMgr_Cfg.h"

/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.2]: Per Instance Memory pointers to array base types are cast back to their 
                                            array type for code readability and to allow use of "sizeof" */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define PimDiagcMgrNtcFltAry_NtcFltInfoRec2     (*(Ary1D_NtcFltInfoRec2_20 *)(Rte_Pim_DiagcMgrNtcFltAry()))
#define PimSnpshtDataAry_SnpshtDataRec1         (SnpshtDataAry_M)
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define DiagcMgr_START_SEC_CODE
#include "DiagcMgr_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
/**********************************************************************************************************************
* Name:        DiagcMgrPwrDwn
* Description: Copies the appropriate information for upto 20 NTCs from Application NtcInfoArys and stores it to 
                Nvm PIM. And, calls "SetRamBlockSts"
* Inputs:      NONE     
* Outputs:     NONE 
* Usage Notes:  NONE 
*********************************************************************************************************************/
FUNC(void, DiagcMgr_CODE) DiagcMgrPwrDwn(void)
{
/**********************************************************************************************************************
* DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
* Symbol: DiagcMgrPwrDwn
*********************************************************************************************************************/
    VAR(uint16, AUTOMATIC) NtcMapIdx_Cnt_T_u16;
    VAR(uint16, AUTOMATIC) NtcFltAryIdx_Cnt_T_u16 = 0U;         /* Clear NtcFltAryIdx  */
    VAR(uint16, AUTOMATIC) HistFltAryIdx_Cnt_T_u16 = 0U;        /* Clear HistFltAryIdx */  
    VAR(uint16, AUTOMATIC) HistFltAryTempIdx_Cnt_T_u16 = 0U;    /* Initialize HistFltAryTempIdx_Cnt_T_u16 */
    VAR(NtcFltInfoRec2, AUTOMATIC) HistNtcFltAry_T_rec[20];         
    VAR(NtcInfoRec4, AUTOMATIC) NtcInfo_Cnt_T_rec;
    
    NtcMapIdx_Cnt_T_u16 = 1U;
    
    while((NtcMapIdx_Cnt_T_u16 < (uint16)TblSize_m(DiagcMgrNtcMap_Cnt_rec)) && 
         ((NtcFltAryIdx_Cnt_T_u16 < (uint16)TblSize_m(PimDiagcMgrNtcFltAry_NtcFltInfoRec2))))  
    {
        switch(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].ApplIdx) 
        {
            #ifdef NTCCNTAPPL0_CNT_U16
                case 0x00U: 
                {
                    (void) GetNtcInfoAppl0_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);                      
                }
                break;
            #endif
                          
            #ifdef NTCCNTAPPL1_CNT_U16
                case 0x01U:
                {
                    (void) GetNtcInfoAppl1_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                }
                break;
            #endif
                      
            #ifdef NTCCNTAPPL2_CNT_U16
                case 0x02U:
                {
                    (void) GetNtcInfoAppl2_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                }
                break;
            #endif           
            
            #ifdef NTCCNTAPPL3_CNT_U16
                case 0x03U:
                {
                    (void) GetNtcInfoAppl3_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                }
                break;
            #endif          
                
            #ifdef NTCCNTAPPL4_CNT_U16
                case 0x04U:
                {
                    (void) GetNtcInfoAppl4_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                }
                break;
            #endif          
               
            #ifdef NTCCNTAPPL5_CNT_U16
                case 0x05U:
                {
                    (void) GetNtcInfoAppl5_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                }
                break;
            #endif          
            
            #ifdef NTCCNTAPPL6_CNT_U16
                case 0x06U:
                {
                    (void) GetNtcInfoAppl6_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                }
                break;
            #endif          
            
            #ifdef NTCCNTAPPL7_CNT_U16
                case 0x07U:
                {
                    (void) GetNtcInfoAppl7_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                }
                break;
            #endif          
              
            #ifdef NTCCNTAPPL8_CNT_U16
                case 0x08U:
                {
                    (void) GetNtcInfoAppl8_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                }
                break;
            #endif          
            
            #ifdef NTCCNTAPPL9_CNT_U16
                case 0x09U:
                {
                    (void) GetNtcInfoAppl9_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                }
                break;
            #endif          
            
            #ifdef NTCCNTAPPL10_CNT_U16
                case 0x0AU:
                {
                    (void) GetNtcInfoAppl10_Oper(DiagcMgrNtcMap_Cnt_rec[NtcMapIdx_Cnt_T_u16].NtcInfoIdx, &NtcInfo_Cnt_T_rec);              
                }
                break;
            #endif 
                        
            case 0xFFU:          
            default:
            {           
                NtcInfo_Cnt_T_rec.AgiCntr = DFTAGICNTR_CNT_U08;
                NtcInfo_Cnt_T_rec.Sts = 0U;               
            }
            break;
        } 
         
        /* Update NtcFltAry and HistFltAry */   
        if(NtcInfo_Cnt_T_rec.AgiCntr == 0U)
        {           
            /* Update NtcFltAry */
            PimDiagcMgrNtcFltAry_NtcFltInfoRec2[NtcFltAryIdx_Cnt_T_u16].NtcNr = NtcMapIdx_Cnt_T_u16;
            PimDiagcMgrNtcFltAry_NtcFltInfoRec2[NtcFltAryIdx_Cnt_T_u16].AgiCntr = 1U;
            PimDiagcMgrNtcFltAry_NtcFltInfoRec2[NtcFltAryIdx_Cnt_T_u16].Sts = NtcInfo_Cnt_T_rec.Sts;                                           

            NtcFltAryIdx_Cnt_T_u16++;
        }
        else if(NtcInfo_Cnt_T_rec.AgiCntr  < 64U)
        {
            if(HistFltAryIdx_Cnt_T_u16 < (uint16)TblSize_m(HistNtcFltAry_T_rec))
            {
                /* Update History Fault Array */
                HistNtcFltAry_T_rec[HistFltAryIdx_Cnt_T_u16].NtcNr = NtcMapIdx_Cnt_T_u16;
                HistNtcFltAry_T_rec[HistFltAryIdx_Cnt_T_u16].AgiCntr = NtcInfo_Cnt_T_rec.AgiCntr +1U;
                HistNtcFltAry_T_rec[HistFltAryIdx_Cnt_T_u16].Sts = NtcInfo_Cnt_T_rec.Sts;             
                
                HistFltAryIdx_Cnt_T_u16++;
            }
        }
        else /* For DFTAGICNTR_CNT_U08 */
        {
            /* Do Nothing */
        }   
        NtcMapIdx_Cnt_T_u16++;
    }            
    
    while((NtcFltAryIdx_Cnt_T_u16 < (uint16)TblSize_m(PimDiagcMgrNtcFltAry_NtcFltInfoRec2)) &&
          (HistFltAryTempIdx_Cnt_T_u16 < HistFltAryIdx_Cnt_T_u16))
    {      
        /* Update Ntc Fault Array with History Fault Array values */
        PimDiagcMgrNtcFltAry_NtcFltInfoRec2[NtcFltAryIdx_Cnt_T_u16] = HistNtcFltAry_T_rec[HistFltAryTempIdx_Cnt_T_u16];   
            
        /* Increment Indices */
        NtcFltAryIdx_Cnt_T_u16++;
        HistFltAryTempIdx_Cnt_T_u16++;       
    }   
    while(NtcFltAryIdx_Cnt_T_u16 < (uint16)TblSize_m(PimDiagcMgrNtcFltAry_NtcFltInfoRec2))
    {
        /* Update NtcFltAry */
        PimDiagcMgrNtcFltAry_NtcFltInfoRec2[NtcFltAryIdx_Cnt_T_u16].NtcNr = NTCNR_RESD;
        PimDiagcMgrNtcFltAry_NtcFltInfoRec2[NtcFltAryIdx_Cnt_T_u16].AgiCntr = DFTAGICNTR_CNT_U08;
        PimDiagcMgrNtcFltAry_NtcFltInfoRec2[NtcFltAryIdx_Cnt_T_u16].Sts = 0U;

        NtcFltAryIdx_Cnt_T_u16++;
    }   

    /* Write to NvM */
    (void) NvMProxy_SetRamBlockStatus(NvMConf_NvMBlockDescriptor_Rte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry, TRUE);
      
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}
 
/**********************************************************************************************************************
  * Name:        RestoreNtcFltAryDft
  * Description: Non-RTE Server Runnable, called by Nvm Manager if the Nvm Data is corrupted
  * Inputs:      NONE     
  * Outputs:     NONE 
  * Usage Notes:  NONE 
  *********************************************************************************************************************/
 FUNC(void, DiagcMgr_CODE) RestoreNtcFltAryDft(void)
{
    VAR(uint16,  AUTOMATIC) NtcFltAryIdx_Cnt_T_u16;

    for (NtcFltAryIdx_Cnt_T_u16 = 0U; NtcFltAryIdx_Cnt_T_u16 < (uint16)TblSize_m(PimDiagcMgrNtcFltAry_NtcFltInfoRec2);( NtcFltAryIdx_Cnt_T_u16++)) 
    {
        PimDiagcMgrNtcFltAry_NtcFltInfoRec2[NtcFltAryIdx_Cnt_T_u16].NtcNr = NTCNR_RESD;
        PimDiagcMgrNtcFltAry_NtcFltInfoRec2[NtcFltAryIdx_Cnt_T_u16].AgiCntr = DFTAGICNTR_CNT_U08;
        PimDiagcMgrNtcFltAry_NtcFltInfoRec2[NtcFltAryIdx_Cnt_T_u16].Sts = 0U;
    }
} 
 
/**********************************************************************************************************************
  * Name:        RestoreSnpshtAryDft
  * Description: Non-RTE Server Runnable, called by Nvm Manager if the Nvm Data is corrupted
  * Inputs:      NONE     
  * Outputs:     NONE 
  * Usage Notes:  NONE 
  *********************************************************************************************************************/
 FUNC(void, DiagcMgr_CODE) RestoreSnpshtAryDft(void)
{
    VAR(uint8,  AUTOMATIC) SnpshtAryIdx_Cnt_T_u08;
    for (SnpshtAryIdx_Cnt_T_u08 = 0U; SnpshtAryIdx_Cnt_T_u08 < (uint8)TblSize_m(PimSnpshtDataAry_SnpshtDataRec1);( SnpshtAryIdx_Cnt_T_u08++)) 
    {
        PimSnpshtDataAry_SnpshtDataRec1[SnpshtAryIdx_Cnt_T_u08].MicroDiagcData = 0U;
        PimSnpshtDataAry_SnpshtDataRec1[SnpshtAryIdx_Cnt_T_u08].HwTq = 0;
        PimSnpshtDataAry_SnpshtDataRec1[SnpshtAryIdx_Cnt_T_u08].MotTq = 0;
        PimSnpshtDataAry_SnpshtDataRec1[SnpshtAryIdx_Cnt_T_u08].IgnCntr = 0U;
        PimSnpshtDataAry_SnpshtDataRec1[SnpshtAryIdx_Cnt_T_u08].BrdgVltg = 0U;
        PimSnpshtDataAry_SnpshtDataRec1[SnpshtAryIdx_Cnt_T_u08].EcuT = 0;
        PimSnpshtDataAry_SnpshtDataRec1[SnpshtAryIdx_Cnt_T_u08].NtcNr = NTCNR_RESD;
        PimSnpshtDataAry_SnpshtDataRec1[SnpshtAryIdx_Cnt_T_u08].NtcStInfo = 0U;
        PimSnpshtDataAry_SnpshtDataRec1[SnpshtAryIdx_Cnt_T_u08].SysSt = SYSST_WRMININ;
        PimSnpshtDataAry_SnpshtDataRec1[SnpshtAryIdx_Cnt_T_u08].VehSpd = 0U;
    }
} 
  
/**********************************************************************************************************************
  * Name:        UpdDtcEnaCdn
  * Description: Update DTC Enable Condition is a Non-RTE Server Runnable, called from BSWM
  * Inputs:      DtcEnaCdnSts_Arg, DtcEnaCdnId_Arg
  * Outputs:     NONE 
  * Usage Notes:  NONE 
  *********************************************************************************************************************/
 FUNC(void, DiagcMgr_CODE) UpdDtcEnaCdn(boolean DtcEnaCdnSts_Arg, uint8 DtcEnaCdnId_Arg)
{
    #if (STD_ON == NXTRDET_DIAGCMGR)
        if (DtcEnaCdnId_Arg > 15U)
        {
            /* Dem Configuration and DiagcMgr Configuration not consistent */
            (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, 0xFDU, 0U, 0U);
        }           
    #endif
    if(DtcEnaCdnSts_Arg == TRUE)
    {       
        /* Set Bit */
        DiagcMgrSetBits_u16(Rte_Pim_DtcEnaSts(), (uint16)((uint16)1U << DtcEnaCdnId_Arg));
    }
    else
    {
        /* Clear Bit */
        DiagcMgrClrBits_u16(Rte_Pim_DtcEnaSts(), (uint16)((uint16)1U << DtcEnaCdnId_Arg));
    }
}  
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#define DiagcMgr_STOP_SEC_CODE
#include "DiagcMgr_MemMap.h"
