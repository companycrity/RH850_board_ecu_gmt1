/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name: DiagcMgr_private.c
* Module Description: Functions shared by multiple C files in the component
* Project           : CBD 
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:           3 %
* %derived_by:        gzkys7 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 03/11/16  1        SB         ES101A_DiagcMgr_Design version 2 implementation                                EA4#3421
* 04/19/16  2        SB         ES101A_DiagcMgr_Design version 3 implementation                                EA4#5110
* 09/23/16  3        SB         Removed requirement mapping                                                    EA4#7191
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Rte_DiagcMgr.h"
#include "NxtrMath.h"
#include "ElecGlbPrm.h"
#include "DiagcMgr.h"
#include "DiagcMgr_private.h"

/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their array 
                                            type for code readability and to allow use of "sizeof" */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define PrmDiagcMgrFltResp_u32                  (*(const Ary1D_u32_512 *)(Rte_Prm_DiagcMgrFltResp_Ary1D()))

#define DiagcMgr_START_SEC_CODE
#include "DiagcMgr_MemMap.h"

CONST(float32, DiagcMgr_CODE) FltRespRampTbl_Uls_f32[13] =
    {0.1F,0.125F,0.1428F,0.1667F,0.2F,0.25F,0.333F,0.5F,1.0F,2.0F,3.333F,10.0F,500.0F}; 

#define DiagcMgr_STOP_SEC_CODE
#include "DiagcMgr_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define DiagcMgr_START_SEC_CODE
#include "DiagcMgr_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * Function:    ProcProxyRampResp
 * Description: This function will update Ramp Rate, Scale and Ramp Related DiagStatus bits based on passed fault response
 *              currently active
 * Inputs:      None
 * Outputs:     None
 **********************************************************************************************************************/
FUNC(void, DiagcMgr_CODE) ProcProxyRampResp(uint16 NtcNr_Cnt_T_u16,
                                            CONSTP2VAR(DiagcDataRec1, AUTOMATIC, DiagcMgr_CODE) ProxyDiagcData_T_rec)
{   
    VAR(uint32, AUTOMATIC) RampRespBits_Cnt_T_u32;
 
    RampRespBits_Cnt_T_u32 = (uint32)(((PrmDiagcMgrFltResp_u32[NtcNr_Cnt_T_u16]) & FLTRESPRAMPBITS_CNT_U32) >> 8U);
    switch(RampRespBits_Cnt_T_u32)
    {
        /* RapidShutdown Fault*/ 
        case IMDTSHTDWNFLT_CNT_U32:
        {
            ProxyDiagcData_T_rec->DiagcSts = ProxyDiagcData_T_rec->DiagcSts | DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U16;                            
            /* Update Ramp Rate */
            if(MAXRAMPRATE_ULSPERSEC_F32 > ProxyDiagcData_T_rec->ActvRampRate)
            {
                ProxyDiagcData_T_rec->ActvRampRate = MAXRAMPRATE_ULSPERSEC_F32;
            }
            /* Update Scale */
            if(SCAMOTTQCMDTOZERO_ULS_F32 < ProxyDiagcData_T_rec->ActvMotTqCmdSca)
            {
                ProxyDiagcData_T_rec->ActvMotTqCmdSca = SCAMOTTQCMDTOZERO_ULS_F32;
            }
        }   
        break; 
        /* ControlledShutdown Fault */ /* Damping Based Rampdown */
        case CTRLDSHTDWNFLT_CNT_U32:
        {
            /* Update DiagcSts */
            ProxyDiagcData_T_rec->DiagcSts = ProxyDiagcData_T_rec->DiagcSts | DIAGCSTSCTRLDSHTDWNFLTPRSNT_CNT_U16 | DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U16;           
            /* Update Scale */
            if(SCAMOTTQCMDTOZERO_ULS_F32 < ProxyDiagcData_T_rec->ActvMotTqCmdSca)
            {
                ProxyDiagcData_T_rec->ActvMotTqCmdSca = SCAMOTTQCMDTOZERO_ULS_F32;
            }
        }
        break;
        /* Information Only Fault *//* No Ramp */
        case INFOONLYFLT_CNT_U32:
        {
        }
        break;
        /* TimedShutdown Fault */
        default:
        {
            /* Update DiagcSts */
            ProxyDiagcData_T_rec->DiagcSts = ProxyDiagcData_T_rec->DiagcSts | DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U16;                 
            /* Update Ramp Rate */ 
            if((FltRespRampTbl_Uls_f32[RampRespBits_Cnt_T_u32]) > ProxyDiagcData_T_rec->ActvRampRate)
            {
                ProxyDiagcData_T_rec->ActvRampRate = FltRespRampTbl_Uls_f32[RampRespBits_Cnt_T_u32];
            }
            /* Update Scale */  
            if(SCAMOTTQCMDTOZERO_ULS_F32 < ProxyDiagcData_T_rec->ActvMotTqCmdSca)
            {
                ProxyDiagcData_T_rec->ActvMotTqCmdSca = SCAMOTTQCMDTOZERO_ULS_F32;
            }
        }   
        break;
    }
}
/**********************************************************************************************************************
 * Function:    ProcessDiagSts
 * Description: This function will update Non-Ramp Related DiagStatus bits based on passed fault response
 *              currently active
 * Inputs:      None
 * Outputs:     None
 **********************************************************************************************************************/
FUNC(void, DiagcMgr_CODE) ProcDiagSts(uint32 FltRsp_Cnt_T_u32, CONSTP2VAR(uint16, AUTOMATIC, AUTOMATIC) DiagStsX_Cnt_T_u16)
{
    if (DiagcMgrReadBit_u32(FltRsp_Cnt_T_u32, FLTRESPLIMDTPRFMNC_CNT_U32) == TRUE)
    {
        DiagcMgrSetBits_u16(DiagStsX_Cnt_T_u16, DIAGCSTSLIMDTPRFMNC_CNT_U16);
    }
    if (DiagcMgrReadBit_u32(FltRsp_Cnt_T_u32, FLTRESPIVTR1INACTV_CNT_U32) == TRUE)
    {
        DiagcMgrSetBits_u16(DiagStsX_Cnt_T_u16, DIAGCSTSIVTR1INACTV_CNT_U16);
    }
    if (DiagcMgrReadBit_u32(FltRsp_Cnt_T_u32, FLTRESPIVTR2INACTV_CNT_U32) == TRUE)
    {
        DiagcMgrSetBits_u16(DiagStsX_Cnt_T_u16, DIAGCSTSIVTR2INACTV_CNT_U16);
    }
    if (DiagcMgrReadBit_u32(FltRsp_Cnt_T_u32, FLTRESPDFTHWAG_CNT_U32) == TRUE)
    {
        DiagcMgrSetBits_u16(DiagStsX_Cnt_T_u16, DIAGCSTSDFTHWAG_CNT_U16);
    }
    if (DiagcMgrReadBit_u32(FltRsp_Cnt_T_u32, FLTRESPDFTVEHSPD_CNT_U32) == TRUE)
    {
        DiagcMgrSetBits_u16(DiagStsX_Cnt_T_u16, DIAGCSTSDFTVEHSPD_CNT_U16);
    }
    if (DiagcMgrReadBit_u32(FltRsp_Cnt_T_u32, FLTRESPDFTHWAGSERLCOMEXPRTVAL_CNT_U32) == TRUE)
    {
        DiagcMgrSetBits_u16(DiagStsX_Cnt_T_u16, DIAGCSTSDFTHWAGSERLCOMEXPRTVAL_CNT_U16);
    }   
    if (DiagcMgrReadBit_u32(FltRsp_Cnt_T_u32, FLTRESPWHLIMBREJCTNDI_CNT_U32) == TRUE)
    {
        DiagcMgrSetBits_u16(DiagStsX_Cnt_T_u16, DIAGCSTSWHLIMBREJCTNDI_CNT_U16);
    }        
}
/**********************************************************************************************************************
 * Function:    DiagcMgrSetBits_u08
 * Description: This function will set bits based on the passed BitMask for a uint8 datatype
 * Inputs:      None
 * Outputs:     None
 **********************************************************************************************************************/        
FUNC(void, DiagcMgr_CODE) DiagcMgrSetBits_u08(CONSTP2VAR(uint8, AUTOMATIC, DiagcMgr_CODE) Data, uint8 BitMask)
{
    *Data |= BitMask;   
}
/**********************************************************************************************************************
 * Function:    DiagcMgrSetBits_u16
 * Description: This function will set bits based on the passed BitMask for a uint16 datatype
 * Inputs:      None
 * Outputs:     None
 **********************************************************************************************************************/
FUNC(void, DiagcMgr_CODE) DiagcMgrSetBits_u16(CONSTP2VAR(uint16, AUTOMATIC, DiagcMgr_CODE) Data, uint16 BitMask) 
{
    *Data |= BitMask;   
}
/**********************************************************************************************************************
 * Function:    DiagcMgrClrBits_u08
 * Description: This function will clear bits based on the passed BitMask for a uint8 datatype
 * Inputs:      None
 * Outputs:     None
 **********************************************************************************************************************/
FUNC(void, DiagcMgr_CODE) DiagcMgrClrBits_u08(CONSTP2VAR(uint8, AUTOMATIC, DiagcMgr_CODE) Data, uint8 BitMask)
{
    *Data &= (uint8)(~BitMask);
}
/**********************************************************************************************************************
 * Function:    DiagcMgrClrBits_u16
 
 * Description: This function will clear bits based on the passed BitMask for a uint16 datatype
 * Inputs:      None
 * Outputs:     None
 **********************************************************************************************************************/
FUNC(void, DiagcMgr_CODE) DiagcMgrClrBits_u16(CONSTP2VAR(uint16, AUTOMATIC, DiagcMgr_CODE) Data, uint16 BitMask)
{
    *Data &= (uint16)(~BitMask);
}
/**********************************************************************************************************************
 * Function:    DiagcMgrReadBit_u08
 * Description: This function will return TRUE if any bits are set based on the passed BitMask for a uint8 datatype
 * Inputs:      None
 * Outputs:     None
 **********************************************************************************************************************/
FUNC(boolean, DiagcMgr_CODE) DiagcMgrReadBit_u08(uint8 Data, uint8 BitMask)
{
    return (boolean)(((Data & BitMask) == 0U)?FALSE:TRUE);
}
/**********************************************************************************************************************
 * Function:    DiagcMgrReadBit_u16
 * Description: This function will return TRUE if any bits are set based on the passed BitMask for a uint16 datatype
 * Inputs:      None
 * Outputs:     None
 **********************************************************************************************************************/
FUNC(boolean, DiagcMgr_CODE) DiagcMgrReadBit_u16(uint16 Data, uint16 BitMask)
{
    return (boolean)(((Data & BitMask) == 0U)?FALSE:TRUE);
}
/**********************************************************************************************************************
 * Function:    DiagcMgrReadBit_u32
 * Description: This function will return TRUE if any bits are set based on the passed BitMask for a uint32 datatype
 * Inputs:      None
 * Outputs:     None
 **********************************************************************************************************************/
FUNC(boolean, DiagcMgr_CODE) DiagcMgrReadBit_u32(uint32 Data, uint32 BitMask)
{
    return  (boolean)(((Data & BitMask) == 0U)?FALSE:TRUE);
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define DiagcMgr_STOP_SEC_CODE
#include "DiagcMgr_MemMap.h" 
 
