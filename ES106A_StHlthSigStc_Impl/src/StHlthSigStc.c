/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  StHlthSigStc.c
 *     SW-C Type:  StHlthSigStc
 *  Generated at:  Fri Dec  9 17:42:37 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <StHlthSigStc>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name: StHlthSigStc.c
* Module Description: Implementation of State of Health Signal Statistics
* Project           : CBD
* Author            : Akilan Rathakrishnan
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       tzyksv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 02/15/16  1        AR        Initial Version																	EA4#3760
* 05/05/16  2        AR        Updated for EA4#5553																EA4#5553
* 09/28/16  3        AR        Updated for 	Friction Estimation and WIR         							    EA4#7307
* 12/06/16  4        AR        Changes done according to FDD 2.4.0              							    EA4#7836
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************

 Data Types:
 ===========
  StHlthMonSig3
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

 *********************************************************************************************************************/

#include "Rte_StHlthSigStc.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
 /******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1] There is no appropriate action to take on the return value */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]Calibration port pointers to array base types are cast back to their array type for code readability and to allow use of "sizeof".*/


#include "Std_Types.h"
#include "osek.h"
#include "os.h"
#include "nontrustfct.h"
#include "NxtrMath.h"
#include "Crc.h"
#include "NxtrFixdPt.h"


/* Containers for Non-Trusted function call parameters */

 typedef struct {
    boolean TarSel;
} NtClrDataSampleRec;

 
 typedef struct {
    TaskType TaskId;
} NtUpdDataSampleRec;

typedef struct {
    uint32  NvmSampleCnt;
    uint8* NvmPtr;
    uint16  NvmAvrgVal;
    uint8  NvmMaxVal;
    uint8  NvmMinVal;
    
} NtUpdNvmPimRec;

/********************************************* Embedded Local Constants **********************************************/


/* Dynamic PIM mapping */
#define PimStHlthSigStcRamBuf_u8		            (*(Ary1D_u8_StHlthSigStc1*)Rte_Pim_RamBuf()) 
#define PimStHlthSigStcIgnCycSampleCntrAry_u32		(*(Ary1D_u32_StHlthSigStc1*)Rte_Pim_IgnCycSampleCntrAry())  
#define PimStHlthSigStcSigAvrgBufAry_f32		    (*(Ary1D_f32_StHlthSigStc1*)Rte_Pim_SigAvrgBuf())  

/* Data Storage in case of SOH signal storage in RAM Memory */
#define RAMRAWPOSN_CNT_U08   (0U)
#define RAMMAXPOSN_CNT_U08   (1U)
#define RAMMINPOSN_CNT_U08   (2U)

/* Data Storage in case of SOH signal storage in NV Memory */
#define NVMMAXPOSN_CNT_U08        (0U)
#define NVMMINPOSN_CNT_U08        (1U)
#define NVMAVRGPOSN_CNT_U08       (2U) /* Average value takes two bytes - u7p9 */
#define NVMSAMPLECNTRPOSN_CNT_U08  (4U)

#define STHLTHMAXVAL_CNT_U08  (100U)
#define STHLTHMINVAL_CNT_U08 (0U)
#define WORDSIZE_CNT_U08     (4U)
#define BITSPERBYTE_CNT_U08  (8U)
#define LOWRMASKVAL_CNT_U32 (0x000000FFU)

#define UPPRMASKVAL_CNT_U16 (0xFF00U)
#define LOWRMASKVAL_CNT_U16 (0x00FFU)

#define STHLTHMAXVAL_CNT_F32  (100.0F)
#define STHLTHMINVAL_CNT_F32  (0.0F)

#define IGNCYCSAMPLECNTRARYMAXLIM_CNT_U32 (4294967295U)
#define IGNCYCSAMPLECNTRARYMINLIM_CNT_U32 (0U)

#define CRCBUFSIZE_CNT_U08        (WORDSIZE_CNT_U08*NROFCRCAREA_CNT_U08)

/******************************************** Local Function Prototypes **********************************************/

static FUNC(void, StHlthSigStc_CODE) StHlthSigStc_ClrDataSample(boolean TarSel_Uls_T_logl);
static FUNC(void, StHlthSigStc_CODE) StHlthSigStc_GetSigStHlthData(StHlthMonSig3 SigId_Uls_T_enum, uint8* TarAdr);
static FUNC(void, StHlthSigStc_CODE) StHlthSigStc_UpdDataSample(uint8 TaskRef_Uls_T_u08);
static FUNC(void, StHlthSigStc_CODE) StHlthSigStc_UpdNvmPim(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) NvmPim_Ptr_T_u08, 
                                                            uint8 NvmMaxVal_Uls_T_u08,
                                                            uint8 NvmMinVal_Uls_T_u08,
                                                            uint16 NvmAvrgVal_Uls_T_u7p9,
                                                            uint32 NvmSampleCnt_Uls_T_u32);
                                                            

/*********************************************** Function Definitions ************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * Boolean: Boolean
 *
 * Enumeration Types:
 * ==================
 * NvM_RequestResultType: Enumeration of integer in interval [0...255] with enumerators
 *   NVM_REQ_OK (0U)
 *   NVM_REQ_NOT_OK (1U)
 *   NVM_REQ_PENDING (2U)
 *   NVM_REQ_INTEGRITY_FAILED (3U)
 *   NVM_REQ_BLOCK_SKIPPED (4U)
 *   NVM_REQ_NV_INVALIDATED (5U)
 *   NVM_REQ_CANCELED (6U)
 *   NVM_REQ_REDUNDANCY_FAILED (7U)
 *   NVM_REQ_RESTORED_FROM_ROM (8U)
 * StHlthMonSig3: Enumeration of integer in interval [0...255] with enumerators
 *   STHLTHMONSIG_ECUTFILTD (0U)
 *   STHLTHMONSIG_ASSIDUETOVLTG (1U)
 *   STHLTHMONSIG_DIGTQSNSRA (2U)
 *   STHLTHMONSIG_DIGTQSNSRB (3U)
 *   STHLTHMONSIG_DIGTQIDPTSIG (4U)
 *   STHLTHMONSIG_DUTYCYC (5U)
 *   STHLTHMONSIG_EOTIMPCT (6U)
 *   STHLTHMONSIG_MOTPOS (7U)
 *   STHLTHMONSIG_MOTPOSABDIFF (8U)
 *   STHLTHMONSIG_MOTPOSACDIFF (9U)
 *   STHLTHMONSIG_MOTPOSBCDIFF (10U)
 *   STHLTHMONSIG_CURRMOTSUMABC (11U)
 *   STHLTHMONSIG_CURRMOTSUMDEF (12U)
 *   STHLTHMONSIG_MOTPOSPHASEA (13U)
 *   STHLTHMONSIG_MOTPOSPHASEB (14U)
 *   STHLTHMONSIG_MOTPOSPHASEC (15U)
 *   STHLTHMONSIG_MOTPOSPHASED (16U)
 *   STHLTHMONSIG_MOTPOSPHASEE (17U)
 *   STHLTHMONSIG_MOTPOSPHASEF (18U)
 *   STHLTHMONSIG_BITCORRN (19U)
 *   STHLTHMONSIG_FRICESTIMN (20U)
 *   STHLTHMONSIG_WHLIMBREJCTN (21U)
 *
 * Array Types:
 * ============
 * Ary1D_u8_225: Array with 225 element(s) of type uint8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   boolean *Rte_Pim_VldNvm(void)
 *   uint32 *Rte_Pim_IgnCycSampleCntrAry(void)
 *   uint8 *Rte_Pim_RamBuf(void)
 *   float32 *Rte_Pim_SigAvrgBuf(void)
 *   uint8 *Rte_Pim_SigStcHistDataAry(void)
 *
 *********************************************************************************************************************/


#define StHlthSigStc_START_SEC_CODE
#include "StHlthSigStc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ClrSigStcHlthData_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ClrSigStcHlthData>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SigStcHistDataAry_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ClrSigStcHlthData_Oper(boolean ClrTar_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, StHlthSigStc_CODE) ClrSigStcHlthData_Oper(boolean ClrTar_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ClrSigStcHlthData_Oper
 *********************************************************************************************************************/
    /* REQ: ES106A #39 I */
    /* REQ: ES106A #40 I */
    VAR(NtClrDataSampleRec, AUTOMATIC) Prm_T_rec;  

    /* Check whether the call is made in the same application or from a different application */
    if(GetApplicationID() == STHLTHOSAPPL_CNT_U16)  
    {
        /* Clear RAM contents. Clear NVM content based on ClrTar_Arg */
        StHlthSigStc_ClrDataSample(ClrTar_Arg);
    }
    else
    {
        /* Route the call via OS Non trusted function call */
        Prm_T_rec.TarSel = ClrTar_Arg;    
        (void)CallNonTrustedFunction(NtWrapS_StHlthSigStc_ClrDataSample, (NonTrustedFunctionParameterRefType*)&Prm_T_rec);
    }
    /* ENDREQ: ES106A #39 I */
    /* ENDREQ: ES106A #40 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigStcHlthData_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigStcHlthData>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_StHlthSigStc_ExclusiveArea(void)
 *   void Rte_Exit_StHlthSigStc_ExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigStcHlthData_Oper(StHlthMonSig3 SigId_Arg, uint32 *BufPtr_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigStcHlthData_PortIf3_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, StHlthSigStc_CODE) GetSigStcHlthData_Oper(StHlthMonSig3 SigId_Arg, P2VAR(uint32, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) BufPtr_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigStcHlthData_Oper (returns application error)
 *********************************************************************************************************************/
    /* REQ: ES106A #7 I */
    P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) TmpBuffer_Ptr_T_u08;   
    VAR (Std_ReturnType, AUTOMATIC) RetVal_T_StdType;    
   
    /* Parameter check */
    if((SigId_Arg < SIGCNT_ULS_U08) && 
       (BufPtr_Arg != NULL_PTR))
    {
        TmpBuffer_Ptr_T_u08 = (uint8*)BufPtr_Arg;
        /* Check whether atleast once the sample was collected */
        if(PimStHlthSigStcIgnCycSampleCntrAry_u32[SigId_Arg] > 0U)
        {
            RetVal_T_StdType = E_OK;    
            StHlthSigStc_GetSigStHlthData(SigId_Arg, TmpBuffer_Ptr_T_u08);
        }
        else
        {
            /* System is not yet ready */
            RetVal_T_StdType = E_NOT_OK;
        }
    }
    else
    {
        /* Invalid parameters */
        RetVal_T_StdType = E_NOT_OK;       
    }
    return (RetVal_T_StdType);
    /* ENDREQ: ES106A #7 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StHlthSigStcInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SigStcHistDataAry_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, StHlthSigStc_CODE) StHlthSigStcInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StHlthSigStcInit1
 *********************************************************************************************************************/
    
    P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) NvmBlkPim_Ptr_T_u08;
    VAR(uint32, AUTOMATIC) NvmPimCnt_Uls_T_u32;
    VAR(uint32, AUTOMATIC) CrcData_T_u32;    
    VAR(uint16, AUTOMATIC) SigCnt_Uls_T_u16;    
    VAR(uint8, AUTOMATIC) StrtAdr_Uls_T_u08;
    VAR(uint8, AUTOMATIC) CrcBuf_Uls_T_u08[CRCBUFSIZE_CNT_U08];
    VAR(uint8, AUTOMATIC) CrcInnrLoopCnt_Uls_T_u08;
    VAR(uint8, AUTOMATIC) CrcOutrLoopCnt_Uls_T_u08;
    VAR(uint8, AUTOMATIC) CalcCrc_Uls_T_u08;    
    VAR(NvM_RequestResultType, AUTOMATIC) NvMBlkStatus_Cnt_T_u8 = NVM_REQ_OK; 
    
    /* Set NVM block as valid */
    *Rte_Pim_VldNvm() = TRUE;
    /* REQ: ES106A #43 I */
    /* Get NVM Block ECC status */
    (void)Rte_Call_SigStcHistDataAry_GetErrorStatus(&NvMBlkStatus_Cnt_T_u8);
    /* If invalid, then set NVM valid flag to false */
    if (NVM_REQ_OK != NvMBlkStatus_Cnt_T_u8)
    {
       *Rte_Pim_VldNvm() = FALSE;
    }
      
    /* REQ: ES106A #48 I */
    
    /* Prepare a buffer for CRC calculation over the Application and Calibration areas */
    for(CrcOutrLoopCnt_Uls_T_u08 = 0U; CrcOutrLoopCnt_Uls_T_u08 < NROFCRCAREA_CNT_U08; CrcOutrLoopCnt_Uls_T_u08++)
    {        
        /* Get CRC data from the given location */
        CrcData_T_u32 = *(StHlthSigStcCfgRecInst.CrcAdr[CrcOutrLoopCnt_Uls_T_u08].CrcStrtAdr);
        /* Fill the CRC buffer - split the u32 data into u8 data */
        for(CrcInnrLoopCnt_Uls_T_u08 = 0U; CrcInnrLoopCnt_Uls_T_u08 < WORDSIZE_CNT_U08; CrcInnrLoopCnt_Uls_T_u08++)
        {
            CrcBuf_Uls_T_u08[CrcInnrLoopCnt_Uls_T_u08+(CrcOutrLoopCnt_Uls_T_u08*WORDSIZE_CNT_U08)] = (uint8) ((CrcData_T_u32 >>(CrcInnrLoopCnt_Uls_T_u08*BITSPERBYTE_CNT_U08)) & LOWRMASKVAL_CNT_U32);
        }
      
    } 
    /* REQ: ES106A #49 I */    
    /* Calculate CRC */
    CalcCrc_Uls_T_u08 = Crc_CalculateCRC8(&CrcBuf_Uls_T_u08[0], CRCBUFSIZE_CNT_U08, 0xFFU, TRUE); 
    /* ENDREQ: ES106A #49 I */    
 
    /* Get NVM  PIM base pointer */
    NvmBlkPim_Ptr_T_u08 = (uint8*)(Rte_Pim_SigStcHistDataAry());   
    
    /* If applicability check passed then check validity */
    if (*Rte_Pim_VldNvm() != FALSE)
    { 
        /* REQ: ES106A #50 I */
        /* Check if the CRC is same as that on the Block */
        if(CalcCrc_Uls_T_u08 != NvmBlkPim_Ptr_T_u08[0U]) 
        {
            *Rte_Pim_VldNvm() = FALSE;            
        }
        /* ENDREQ: ES106A #50 I */        
    }
    /* ENDREQ: ES106A #48 I */
    /* ENDREQ: ES106A #43 I */  
    
    /* REQ: ES106A #52 I */
    /* If applicability or validity check failed */
	if(*Rte_Pim_VldNvm() == FALSE)
	{
        /* REQ: ES106A #44 I */
        /* Save the CRC value in the first location of NVM PIM buffer */
        NvmBlkPim_Ptr_T_u08[0U] = CalcCrc_Uls_T_u08;
        /* Initialize rest of NVM PIM buffer to zero */
		for(NvmPimCnt_Uls_T_u32 = 1U; NvmPimCnt_Uls_T_u32 < TOTBUFSIZENVM_CNT_U16; NvmPimCnt_Uls_T_u32++)
		{
			NvmBlkPim_Ptr_T_u08[NvmPimCnt_Uls_T_u32] = 0U; 
		}
        /* ENDREQ: ES106A #44 I */
	}
    /* Initialize the Minimum value for all SOH signals to 100. This will reduce some processing 
       during runtime */
    /* REQ: ES106A #14 I */   
    /* REQ: ES106A #17 I */
    /* REQ: ES106A #20 I */     
    for(SigCnt_Uls_T_u16 = 0U; SigCnt_Uls_T_u16 < SIGCNT_ULS_U08; SigCnt_Uls_T_u16++)
    {
        StrtAdr_Uls_T_u08 = StHlthSigStcCfgRecInst.SigPrm[SigCnt_Uls_T_u16].RamStorgOffs; 
        /* Initialze the Minimum value to 100 */
        PimStHlthSigStcRamBuf_u8[StrtAdr_Uls_T_u08 + RAMMINPOSN_CNT_U08] = STHLTHMAXVAL_CNT_U08;         
    }
    /* ENDREQ: ES106A #14 I */   
    /* ENDREQ: ES106A #17 I */
    /* ENDREQ: ES106A #20 I */       
    /* ENDREQ: ES106A #52 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StHlthStcPwrDwn_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <StHlthStcPwrDwn>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SigStcHistDataAry_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void StHlthStcPwrDwn_Oper(void)
 *
 *********************************************************************************************************************/

FUNC(void, StHlthSigStc_CODE) StHlthStcPwrDwn_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StHlthStcPwrDwn_Oper
 *********************************************************************************************************************/
    /* REQ: ES106A #12 I */
    VAR(NtUpdNvmPimRec, AUTOMATIC) UpdNvm_str;
    VAR(float32, AUTOMATIC) RamAvrgVal_Uls_T_f32;   
    VAR(float32, AUTOMATIC) NvmAvrgVal_Uls_T_f32;   
    VAR(float32, AUTOMATIC) TmpDif_Uls_T_f32;      
    VAR(uint16, AUTOMATIC) NvmAvrgVal_Uls_T_u7p9;
    P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) NvmPim_Ptr_T_u08;
    P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) NvMSampleCnt_Ptr_T_u08;
    P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) SampleCnt_Ptr_T_u08;
    VAR(uint32, AUTOMATIC) SampleCnt_Uls_T_u32;
    VAR(uint32, AUTOMATIC) NvmSampleCnt_Uls_T_u32;
    VAR(uint16, AUTOMATIC) SigCnt_Uls_T_u16;
    VAR(uint8, AUTOMATIC) NvmOffs_Uls_T_u08;
    VAR(uint8, AUTOMATIC) StrtAdr_Uls_T_u08;
    VAR(uint8, AUTOMATIC) NvmWrRqrdUls_T_u08;
    VAR(uint8, AUTOMATIC) NvmMaxVal_Uls_T_u08;
    VAR(uint8, AUTOMATIC) NvmMinVal_Uls_T_u08;
    VAR(uint8, AUTOMATIC) RamMaxVal_Uls_T_u08;
    VAR(uint8, AUTOMATIC) RamMinVal_Uls_T_u08;
    VAR(uint8, AUTOMATIC) SampleCntSize_Uls_T_u08;   
    
    NvmWrRqrdUls_T_u08 = 0U;
    NvmPim_Ptr_T_u08 = (uint8*)(Rte_Pim_SigStcHistDataAry());
    /* Search through all the configuration for the signals to be updated */
    /* REQ: ES106A #26 I */
    /* REQ: ES106A #28 I */
    /* REQ: ES106A #30 I */
    /* REQ: ES106A #31 I */
    /* REQ: ES106A #32 I */
    /* REQ: ES106A #33 I */    
    for(SigCnt_Uls_T_u16 = 0U; SigCnt_Uls_T_u16 < SIGCNT_ULS_U08; SigCnt_Uls_T_u16++)
    {  
        NvmOffs_Uls_T_u08 = StHlthSigStcCfgRecInst.SigPrm[SigCnt_Uls_T_u16].NvmStorgOffs; 
        /* Get data from RAM */
        StrtAdr_Uls_T_u08 = StHlthSigStcCfgRecInst.SigPrm[SigCnt_Uls_T_u16].RamStorgOffs;            
        /* Get sample counter from RAM Buffer */
        SampleCnt_Uls_T_u32 = PimStHlthSigStcIgnCycSampleCntrAry_u32[SigCnt_Uls_T_u16];
        /* Sample Counter converted to 1 second rate */
        SampleCnt_Uls_T_u32 = SampleCnt_Uls_T_u32/(StHlthSigStcCfgRecInst.SigPrm[SigCnt_Uls_T_u16].SamplePerSec); 
        /* Content is logged into NV RAM only if samples are collected for more than a second */        
        if(SampleCnt_Uls_T_u32 != 0U)/* REQ: ES106A #45 I */
        {
            /* REQ: ES106A #15 I */
            /* REQ: ES106A #18 I */
            /* REQ: ES106A #21 I */
            /* REQ: ES106A #22 I */
            NvmWrRqrdUls_T_u08 = 1U;
            /* Get Data from RAM Buffer */
            RamMaxVal_Uls_T_u08 = PimStHlthSigStcRamBuf_u8[StrtAdr_Uls_T_u08 + RAMMAXPOSN_CNT_U08];
            RamMinVal_Uls_T_u08 = PimStHlthSigStcRamBuf_u8[StrtAdr_Uls_T_u08 + RAMMINPOSN_CNT_U08];
            RamAvrgVal_Uls_T_f32 = PimStHlthSigStcSigAvrgBufAry_f32[SigCnt_Uls_T_u16];

            if(*Rte_Pim_VldNvm() == TRUE)
            {
                /* Get data from NvM */
                NvmMaxVal_Uls_T_u08 = NvmPim_Ptr_T_u08[NvmOffs_Uls_T_u08 + NVMMAXPOSN_CNT_U08];   
                NvmMinVal_Uls_T_u08 = NvmPim_Ptr_T_u08[NvmOffs_Uls_T_u08 + NVMMINPOSN_CNT_U08]; 
                /* Read NVM average value stored in NVM */
                NvmAvrgVal_Uls_T_u7p9 = (uint16)(((uint16)(((uint16)NvmPim_Ptr_T_u08[NvmOffs_Uls_T_u08 + NVMAVRGPOSN_CNT_U08]) << BITSPERBYTE_CNT_U08) & UPPRMASKVAL_CNT_U16) | (( (uint16)NvmPim_Ptr_T_u08[NvmOffs_Uls_T_u08 + NVMAVRGPOSN_CNT_U08 + 1U]) & LOWRMASKVAL_CNT_U16)); 
                /* Convert u7p9 value to float */
                NvmAvrgVal_Uls_T_f32 = FixdToFloat_f32_u16(NvmAvrgVal_Uls_T_u7p9,NXTRFIXDPT_P9TOFLOAT_ULS_F32);
                
                /* Read Sample counter value */
                SampleCntSize_Uls_T_u08 = WORDSIZE_CNT_U08;
                SampleCnt_Ptr_T_u08 = (uint8*)(&NvmSampleCnt_Uls_T_u32);
                NvMSampleCnt_Ptr_T_u08 = &(NvmPim_Ptr_T_u08[NvmOffs_Uls_T_u08 + NVMSAMPLECNTRPOSN_CNT_U08]);  
                
                do
                {
                    *SampleCnt_Ptr_T_u08 = *NvMSampleCnt_Ptr_T_u08;
                    SampleCnt_Ptr_T_u08++;
                    NvMSampleCnt_Ptr_T_u08++;
                    SampleCntSize_Uls_T_u08--;
                }while(SampleCntSize_Uls_T_u08 != 0U);
                
                /* MAX calculation */
                NvmMaxVal_Uls_T_u08 = Max_u08(NvmMaxVal_Uls_T_u08, RamMaxVal_Uls_T_u08);
                /* MIN Calculation */
                NvmMinVal_Uls_T_u08 = Min_u08(NvmMinVal_Uls_T_u08, RamMinVal_Uls_T_u08);
                /* Update life cycle sample counter */
                NvmSampleCnt_Uls_T_u32 += SampleCnt_Uls_T_u32; 
                /* Average calculation */
                /* NewAvrg = OldAvrg + ((NewVal - OldAvrg)/(SampleCnt_Uls_T_u32 + 1)) */
                if(RamAvrgVal_Uls_T_f32 >= NvmAvrgVal_Uls_T_f32)
                {
                    TmpDif_Uls_T_f32 =   RamAvrgVal_Uls_T_f32 - NvmAvrgVal_Uls_T_f32;
                    NvmAvrgVal_Uls_T_f32 += (TmpDif_Uls_T_f32/((float32)NvmSampleCnt_Uls_T_u32));
                }
                else
                {
                    TmpDif_Uls_T_f32 =   NvmAvrgVal_Uls_T_f32 - RamAvrgVal_Uls_T_f32;
                    NvmAvrgVal_Uls_T_f32 -= (TmpDif_Uls_T_f32/((float32)NvmSampleCnt_Uls_T_u32));
                }                
                
                NvmAvrgVal_Uls_T_u7p9 = FloatToFixd_u16_f32(Lim_f32(NvmAvrgVal_Uls_T_f32,STHLTHMINVAL_CNT_F32, STHLTHMAXVAL_CNT_F32),NXTRFIXDPT_FLOATTOP9_ULS_F32);
            }
            else
            {
                NvmMaxVal_Uls_T_u08 = RamMaxVal_Uls_T_u08;
                NvmMinVal_Uls_T_u08 = RamMinVal_Uls_T_u08;
                NvmAvrgVal_Uls_T_u7p9 = FloatToFixd_u16_f32(RamAvrgVal_Uls_T_f32,NXTRFIXDPT_FLOATTOP9_ULS_F32);
                NvmSampleCnt_Uls_T_u32 = SampleCnt_Uls_T_u32;
            }
            /* REQ: ES106A #15 I */
            /* REQ: ES106A #18 I */
            /* REQ: ES106A #21 I */
            /* REQ: ES106A #22 I */            
            /* REQ: ES106A #24 I */
            /* REQ: ES106A #42 I */            
            UpdNvm_str.NvmPtr       = &(NvmPim_Ptr_T_u08[NvmOffs_Uls_T_u08]);
            UpdNvm_str.NvmMaxVal    = NvmMaxVal_Uls_T_u08;
            UpdNvm_str.NvmMinVal    = NvmMinVal_Uls_T_u08;
            UpdNvm_str.NvmAvrgVal   = NvmAvrgVal_Uls_T_u7p9;
            UpdNvm_str.NvmSampleCnt = NvmSampleCnt_Uls_T_u32;
           
            (void)CallNonTrustedFunction(NtWrapS_StHlthSigStc_UpdNvmPim, (NonTrustedFunctionParameterRefType*)&UpdNvm_str);
            /* ENDREQ: ES106A #24 I */
            /* ENDREQ: ES106A #42 I */                
        }
        
    }
    if(NvmWrRqrdUls_T_u08 == 1U)
    {
        (void)Rte_Call_SigStcHistDataAry_SetRamBlockStatus(TRUE);
    }
    /* ENDREQ: ES106A #12 I */
    /* ENDREQ: ES106A #26 I */
    /* ENDREQ: ES106A #28 I */
    /* ENDREQ: ES106A #30 I */
    /* ENDREQ: ES106A #31 I */
    /* ENDREQ: ES106A #32 I */
    /* ENDREQ: ES106A #33 I */       

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: UpdStHlthStcData_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <UpdStHlthStcData>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_AbsltMotPosABDifStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_AbsltMotPosACDifStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_AbsltMotPosBCDifStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_CtrlrTStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_CurrMotSumABCStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_CurrMotSumDEFStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DigTqIdptSigStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DigTqSnsrAStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DigTqSnsrBStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DutyCycStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_EotImpctStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FricEstimnStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotPosStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_OutpAssiStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_PhaAStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_PhaBStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_PhaCStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_PhaDStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_PhaEStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_PhaFStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_RamEccSngBitCorrnStHlth_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_WhlImbMaxCmpStHlth_Val(uint8 *data)
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_StHlthSigStc_ExclusiveArea(void)
 *   void Rte_Exit_StHlthSigStc_ExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void UpdStHlthStcData_Oper(uint8 TaskId_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, StHlthSigStc_CODE) UpdStHlthStcData_Oper(uint8 TaskId_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: UpdStHlthStcData_Oper
 *********************************************************************************************************************/
    /* REQ: ES106A #11 I */
    /* REQ: ES106A #35 I */
    /* REQ: ES106A #5 I */
    /* REQ: ES106A #8 I */
    /* REQ: ES106A #6 I */
    VAR(NtUpdDataSampleRec, AUTOMATIC) Prm_T_str;  

    if(GetApplicationID() == STHLTHOSAPPL_CNT_U16)  
    { 
        StHlthSigStc_UpdDataSample(TaskId_Arg);
    }
    else
    {
        Prm_T_str.TaskId = TaskId_Arg; 
        (void)CallNonTrustedFunction(NtWrapS_StHlthSigStc_UpdDataSample, (NonTrustedFunctionParameterRefType*)&Prm_T_str);
    }
    /* ENDREQ: ES106A #11 I */
    /* ENDREQ: ES106A #35 I */
    /* ENDREQ: ES106A #8 I */
    /* ENDREQ: ES106A #6 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define StHlthSigStc_STOP_SEC_CODE
#include "StHlthSigStc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 /******************************************************************************
  * Name:        StHlthSigStc_ClrDataSample
  * Description: Clears RAM and NVM State of Health data 
  *              temperature
  * Inputs:      TarSel_Uls_T_logl - Indicates whether NVM Clear is required
  * Outputs:     NONE
  * Usage Notes: NONE
  ****************************************************************************/
 static FUNC(void, StHlthSigStc_CODE) StHlthSigStc_ClrDataSample(boolean TarSel_Uls_T_logl)
{
    /* REQ: ES106A #39 I */
    /* REQ: ES106A #40 I */
    P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) NvmBlkPim_Ptr_T_u08;
    VAR(uint16, AUTOMATIC) SigCnt_Uls_T_u16;
    VAR(uint16, AUTOMATIC) NvmPimCnt_Uls_T_u16;
    VAR(uint8, AUTOMATIC) StrtAdr_Uls_T_u08;

    SigCnt_Uls_T_u16 = SIGCNT_ULS_U08;

    while(SigCnt_Uls_T_u16 !=0U)
    {
        SigCnt_Uls_T_u16--;
        StrtAdr_Uls_T_u08 = StHlthSigStcCfgRecInst.SigPrm[SigCnt_Uls_T_u16].RamStorgOffs; 
        PimStHlthSigStcIgnCycSampleCntrAry_u32[SigCnt_Uls_T_u16] = 0U;
        PimStHlthSigStcRamBuf_u8[StrtAdr_Uls_T_u08 + RAMRAWPOSN_CNT_U08]  = 0U;
        PimStHlthSigStcRamBuf_u8[StrtAdr_Uls_T_u08 + RAMMAXPOSN_CNT_U08]  = 0U;
        PimStHlthSigStcRamBuf_u8[StrtAdr_Uls_T_u08 + RAMMINPOSN_CNT_U08]  = STHLTHMAXVAL_CNT_U08;
        PimStHlthSigStcSigAvrgBufAry_f32[SigCnt_Uls_T_u16] = 0.0F;
    }
    if(TRUE == TarSel_Uls_T_logl)
    {
        *Rte_Pim_VldNvm() = FALSE;
        NvmBlkPim_Ptr_T_u08 = (uint8*)(Rte_Pim_SigStcHistDataAry());        
        /* Initialize rest of NVM PIM buffer to zero */
		for(NvmPimCnt_Uls_T_u16 = 1U; NvmPimCnt_Uls_T_u16 < TOTBUFSIZENVM_CNT_U16; NvmPimCnt_Uls_T_u16++)
		{
			NvmBlkPim_Ptr_T_u08[NvmPimCnt_Uls_T_u16] = 0U; 
		}        
        
        (void)Rte_Call_SigStcHistDataAry_SetRamBlockStatus(TRUE);
    }
    /* ENDREQ: ES106A #39 I */
    /* ENDREQ: ES106A #40 I */ 
}
 /******************************************************************************
  * Name:        StHlthSigStc_GetSigStHlthData
  * Description: Returns statistical data for a given signal id
  *              temperature
  * Inputs:      SigId_Uls_T_enum - Signal id
                 TarAdr - location whether data to be updated
  * Outputs:     NONE
  * Usage Notes: NONE
  ****************************************************************************/
static FUNC(void, StHlthSigStc_CODE) StHlthSigStc_GetSigStHlthData(StHlthMonSig3 SigId_Uls_T_enum, uint8* TarAdr)
{
    P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) NvmBlkPim_Ptr_T_u08;    
    P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) NvMSampleCnt_Ptr_T_u08;
    P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) SampleCnt_Ptr_T_u08;
    VAR(uint32, AUTOMATIC) IgnCycSampleCnt_Uls_T_u32;
    VAR(uint32, AUTOMATIC) NvmSampleCnt_Uls_T_u32;
    VAR(float32, AUTOMATIC) RamAvrgVal_Uls_T_f32; 
    VAR(float32, AUTOMATIC) TmpDif_Uls_T_f32;  
    VAR(float32, AUTOMATIC) NvmAvrgVal_Uls_T_f32;  
    VAR(uint16, AUTOMATIC) NvmAvrgVal_Uls_T_u7p9;  
    VAR(uint8, AUTOMATIC) NvmOffs_Uls_T_u08;
    VAR(uint8, AUTOMATIC) StrtAdr_Uls_T_u08;
    VAR(uint8, AUTOMATIC) NvmMaxVal_Uls_T_u08;
    VAR(uint8, AUTOMATIC) NvmMinVal_Uls_T_u08;
    VAR(uint8, AUTOMATIC) NvmAvrgVal_Uls_T_u08;
    VAR(uint8, AUTOMATIC) RamMaxVal_Uls_T_u08;
    VAR(uint8, AUTOMATIC) RamMinVal_Uls_T_u08;
    VAR(uint8, AUTOMATIC) RamRawVal_Uls_T_u08;    
    VAR(uint8, AUTOMATIC) SampleCntSize_Uls_T_u08;
    
    /* REQ: ES106A #37 I */ 
  	Rte_Enter_StHlthSigStc_ExclusiveArea();    

    StrtAdr_Uls_T_u08 = StHlthSigStcCfgRecInst.SigPrm[SigId_Uls_T_enum].RamStorgOffs; 
    NvmOffs_Uls_T_u08 = StHlthSigStcCfgRecInst.SigPrm[SigId_Uls_T_enum].NvmStorgOffs; 
    NvmBlkPim_Ptr_T_u08 = (uint8*)(Rte_Pim_SigStcHistDataAry());     
    
     /* Get Data from RAM Buffer */
    RamRawVal_Uls_T_u08  = PimStHlthSigStcRamBuf_u8[StrtAdr_Uls_T_u08 + RAMRAWPOSN_CNT_U08];
    RamMaxVal_Uls_T_u08  = PimStHlthSigStcRamBuf_u8[StrtAdr_Uls_T_u08 + RAMMAXPOSN_CNT_U08];
    RamMinVal_Uls_T_u08  = PimStHlthSigStcRamBuf_u8[StrtAdr_Uls_T_u08 + RAMMINPOSN_CNT_U08];
    RamAvrgVal_Uls_T_f32 = PimStHlthSigStcSigAvrgBufAry_f32[SigId_Uls_T_enum]; 

    /* Get current  ignition cycle sample counter */
    IgnCycSampleCnt_Uls_T_u32 = PimStHlthSigStcIgnCycSampleCntrAry_u32[SigId_Uls_T_enum];
    /* Sample Counter converted to 1 second rate */
    IgnCycSampleCnt_Uls_T_u32 = IgnCycSampleCnt_Uls_T_u32/(StHlthSigStcCfgRecInst.SigPrm[SigId_Uls_T_enum].SamplePerSec); 
    /* Current ignition cycle data to be  considered only when it lasts for atleast one second */
    if((IgnCycSampleCnt_Uls_T_u32 != 0U) && (*Rte_Pim_VldNvm() == TRUE))
    {
        /* REQ: ES106A #15 I */
        /* REQ: ES106A #18 I */
        /* REQ: ES106A #21 I */
        /* REQ: ES106A #22 I */           
        /* Get life cycle data from NvM */
        NvmMaxVal_Uls_T_u08 = NvmBlkPim_Ptr_T_u08[NvmOffs_Uls_T_u08 + NVMMAXPOSN_CNT_U08];   
        NvmMinVal_Uls_T_u08 = NvmBlkPim_Ptr_T_u08[NvmOffs_Uls_T_u08 + NVMMINPOSN_CNT_U08];
        /* Read NVM average value stored in NVM */
        NvmAvrgVal_Uls_T_u7p9 = (((uint16)(((uint16)NvmBlkPim_Ptr_T_u08[NvmOffs_Uls_T_u08 + NVMAVRGPOSN_CNT_U08]) << BITSPERBYTE_CNT_U08) & UPPRMASKVAL_CNT_U16) | (((uint16)NvmBlkPim_Ptr_T_u08[NvmOffs_Uls_T_u08 + NVMAVRGPOSN_CNT_U08 + 1U]) & LOWRMASKVAL_CNT_U16)); 
        /* Convert u7p9 value to float */
        NvmAvrgVal_Uls_T_f32 = FixdToFloat_f32_u16(NvmAvrgVal_Uls_T_u7p9,NXTRFIXDPT_P9TOFLOAT_ULS_F32);        
        /* Reading out Life cycle sample counter */
        SampleCntSize_Uls_T_u08 = WORDSIZE_CNT_U08;
        SampleCnt_Ptr_T_u08 = (uint8*)(&NvmSampleCnt_Uls_T_u32);
        NvMSampleCnt_Ptr_T_u08 = &(NvmBlkPim_Ptr_T_u08[NvmOffs_Uls_T_u08 + NVMSAMPLECNTRPOSN_CNT_U08]);  
        
        do
        {
            *SampleCnt_Ptr_T_u08 = *NvMSampleCnt_Ptr_T_u08;
            SampleCnt_Ptr_T_u08++;
            NvMSampleCnt_Ptr_T_u08++;
            SampleCntSize_Uls_T_u08--;
        }while(SampleCntSize_Uls_T_u08 != 0U);
        
        /* MAX calculation */
        NvmMaxVal_Uls_T_u08 = Max_u08(NvmMaxVal_Uls_T_u08, RamMaxVal_Uls_T_u08);
        /* MIN Calculation */
        NvmMinVal_Uls_T_u08 = Min_u08(NvmMinVal_Uls_T_u08, RamMinVal_Uls_T_u08);
        /* Update life cycle sample counter */
        NvmSampleCnt_Uls_T_u32+= IgnCycSampleCnt_Uls_T_u32;         
        
        /* Average calculation */
        if(RamAvrgVal_Uls_T_f32 >= NvmAvrgVal_Uls_T_f32)
        {
            TmpDif_Uls_T_f32 =   RamAvrgVal_Uls_T_f32 - NvmAvrgVal_Uls_T_f32;
            NvmAvrgVal_Uls_T_f32 += (TmpDif_Uls_T_f32/((float32)NvmSampleCnt_Uls_T_u32));
        }
        else
        {
            TmpDif_Uls_T_f32 =   NvmAvrgVal_Uls_T_f32 - RamAvrgVal_Uls_T_f32;
            NvmAvrgVal_Uls_T_f32 -= (TmpDif_Uls_T_f32/((float32)NvmSampleCnt_Uls_T_u32));
        }
        
        /* Convert float value into uint8 */
        NvmAvrgVal_Uls_T_u08 = (uint8)FloatToFixd_u16_f32(Lim_f32(NvmAvrgVal_Uls_T_f32,STHLTHMINVAL_CNT_F32, STHLTHMAXVAL_CNT_F32),NXTRFIXDPT_FLOATTOP0_ULS_F32);        
                   
    }
    else
    {
        NvmMaxVal_Uls_T_u08 = RamMaxVal_Uls_T_u08;
        NvmMinVal_Uls_T_u08 = RamMinVal_Uls_T_u08;
        NvmAvrgVal_Uls_T_u08 = (uint8)FloatToFixd_u16_f32(RamAvrgVal_Uls_T_f32,NXTRFIXDPT_FLOATTOP0_ULS_F32);
        NvmSampleCnt_Uls_T_u32 = IgnCycSampleCnt_Uls_T_u32;
    }
    
    /* ENDREQ: ES106A #15 I */
    /* ENDREQ: ES106A #18 I */
    /* ENDREQ: ES106A #21 I */
    /* ENDREQ: ES106A #22 I */   
 
    /* Current ignition cycle data */ 
    *TarAdr = RamRawVal_Uls_T_u08;
    TarAdr++;
    *TarAdr = RamMaxVal_Uls_T_u08;
    TarAdr++;
    *TarAdr = RamMinVal_Uls_T_u08;
    TarAdr++;
    *TarAdr = (uint8)FloatToFixd_u16_f32(RamAvrgVal_Uls_T_f32,NXTRFIXDPT_FLOATTOP0_ULS_F32);
    TarAdr++;    
    
    /* Update Life cycle data */    
    *TarAdr = NvmMaxVal_Uls_T_u08; 
    TarAdr++;
    *TarAdr = NvmMinVal_Uls_T_u08; 
    TarAdr++;
    *TarAdr = NvmAvrgVal_Uls_T_u08; 
    TarAdr++;

    NvMSampleCnt_Ptr_T_u08 = (uint8*)&NvmSampleCnt_Uls_T_u32;    
    /* Update Lifecycle sample counter */
    *TarAdr = *NvMSampleCnt_Ptr_T_u08; 
    TarAdr++;
    NvMSampleCnt_Ptr_T_u08++;
    *TarAdr = *NvMSampleCnt_Ptr_T_u08; 
    TarAdr++;
    NvMSampleCnt_Ptr_T_u08++;
    *TarAdr = *NvMSampleCnt_Ptr_T_u08; 
    TarAdr++;
    NvMSampleCnt_Ptr_T_u08++;
    *TarAdr = *NvMSampleCnt_Ptr_T_u08; 

    Rte_Exit_StHlthSigStc_ExclusiveArea();        
    /* ENDREQ: ES106A #37 I */    
}

 /******************************************************************************
  * Name:        StHlthSigStc_UpdNvmPim
  * Description: Updates statiscal data for ECU lifecycle into NVM PIM
  * Inputs:      NvmPim_Ptr_T_u08 - Address of NVM PIM for update
                 NvmMaxVal_Uls_T_u08 - Max value
                 NvmMinVal_Uls_T_u08 - Min value
                 NvmAvrgVal_Uls_T_u08 - Average value
                 NvmSampleCnt_Uls_T_u32 - Sample count
  * Outputs:     NONE
  * Usage Notes: NONE
  ****************************************************************************/
static FUNC(void, StHlthSigStc_CODE) StHlthSigStc_UpdNvmPim(P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) NvmPim_Ptr_T_u08, 
                                                            uint8 NvmMaxVal_Uls_T_u08,
                                                            uint8 NvmMinVal_Uls_T_u08,
                                                            uint16 NvmAvrgVal_Uls_T_u7p9,
                                                            uint32 NvmSampleCnt_Uls_T_u32)
{
    /* REQ: ES106A #24 I */
    /* REQ: ES106A #42 I */
    P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) NvMSampleCnt_Ptr_T_u08;
    P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) SampleCnt_Ptr_T_u08;
    VAR(uint8, AUTOMATIC) SampleCntSize_Uls_T_u08; 
    
    /* Update data back in NvM */
    NvmPim_Ptr_T_u08[NVMMAXPOSN_CNT_U08] = NvmMaxVal_Uls_T_u08; 
    NvmPim_Ptr_T_u08[NVMMINPOSN_CNT_U08] = NvmMinVal_Uls_T_u08; 
    NvmPim_Ptr_T_u08[NVMAVRGPOSN_CNT_U08] = (uint8)((NvmAvrgVal_Uls_T_u7p9 >> BITSPERBYTE_CNT_U08) & LOWRMASKVAL_CNT_U16); 
    NvmPim_Ptr_T_u08[NVMAVRGPOSN_CNT_U08+1U] = (uint8)(NvmAvrgVal_Uls_T_u7p9 & LOWRMASKVAL_CNT_U16); 
    SampleCntSize_Uls_T_u08 = WORDSIZE_CNT_U08;
    SampleCnt_Ptr_T_u08 = (uint8*)(&NvmSampleCnt_Uls_T_u32);
    NvMSampleCnt_Ptr_T_u08 = &(NvmPim_Ptr_T_u08[NVMSAMPLECNTRPOSN_CNT_U08]); 
    
    do
    {
        *NvMSampleCnt_Ptr_T_u08 = *SampleCnt_Ptr_T_u08;
        SampleCnt_Ptr_T_u08++;
        NvMSampleCnt_Ptr_T_u08++;
        SampleCntSize_Uls_T_u08--;
    }while(SampleCntSize_Uls_T_u08 != 0U);
  
    /* ENDREQ: ES106A #24 I */
    /* ENDREQ: ES106A #42 I */
}

 /******************************************************************************
  * Name:        StHlthSigStc_UpdDataSample
  * Description: Updates Ram buffer for all signals monitored for given task
  * Inputs:      TaskRef_Uls_T_u08 - Task from which signal has to be monitored
  * Outputs:     NONE
  * Usage Notes: NONE
  ****************************************************************************/
static FUNC(void, StHlthSigStc_CODE) StHlthSigStc_UpdDataSample(uint8 TaskRef_Uls_T_u08)
{
    VAR(float32, AUTOMATIC) RawVal_Uls_T_f32;
    VAR(float32, AUTOMATIC) AvrgVal_Uls_T_f32;    
    VAR(float32, AUTOMATIC) TmpDif_Uls_T_f32;       
    VAR(uint16, AUTOMATIC) SigCnt_Uls_T_u16;
    VAR(uint8, AUTOMATIC) StrtAdr_Uls_T_u08;
    VAR(uint8, AUTOMATIC) MaxVal_Uls_T_u08;
    VAR(uint8, AUTOMATIC) RawVal_Uls_T_u08;
    VAR(uint8, AUTOMATIC) MinVal_Uls_T_u08;

    Rte_Enter_StHlthSigStc_ExclusiveArea();      
    
    /* Search through all the configuration for the signals to be updated */
    for(SigCnt_Uls_T_u16 = 0U; SigCnt_Uls_T_u16 < SIGCNT_ULS_U08; SigCnt_Uls_T_u16++)
    {
        /* Check for the signals related to the current Task Reference */
        if(StHlthSigStcCfgRecInst.SigPrm[SigCnt_Uls_T_u16].TaskRef == TaskRef_Uls_T_u08) 
        {
            /* REQ: ES106A #15 I */
            /* REQ: ES106A #18 I */
            /* REQ: ES106A #21 I */
            /* REQ: ES106A #22 I */   
            StrtAdr_Uls_T_u08 = StHlthSigStcCfgRecInst.SigPrm[SigCnt_Uls_T_u16].RamStorgOffs; 
            /* Get Data from RAM Buffer */
            RawVal_Uls_T_u08 = StHlthSigStcCfgRecInst.SigPrm[SigCnt_Uls_T_u16].GetStHlthDataOper();  
            MaxVal_Uls_T_u08 = PimStHlthSigStcRamBuf_u8[StrtAdr_Uls_T_u08 + RAMMAXPOSN_CNT_U08];
            MinVal_Uls_T_u08 = PimStHlthSigStcRamBuf_u8[StrtAdr_Uls_T_u08 + RAMMINPOSN_CNT_U08];
            AvrgVal_Uls_T_f32 = PimStHlthSigStcSigAvrgBufAry_f32[SigCnt_Uls_T_u16];

            /* Increment the sample count if it is less than IGNCYCSAMPLECNTRARYMAXLIM_CNT_U32 -1U*/
            if(PimStHlthSigStcIgnCycSampleCntrAry_u32[SigCnt_Uls_T_u16] < (IGNCYCSAMPLECNTRARYMAXLIM_CNT_U32 - 1U))
            {
                PimStHlthSigStcIgnCycSampleCntrAry_u32[SigCnt_Uls_T_u16]++; 
            }                
            /* Calculation of Max */
            MaxVal_Uls_T_u08 = Max_u08(MaxVal_Uls_T_u08, RawVal_Uls_T_u08);
            /* Calculation of Min */
            MinVal_Uls_T_u08 = Min_u08(MinVal_Uls_T_u08, RawVal_Uls_T_u08);
            /* Calculation of Average */
            /* NewAvrg = OldAvrg + ((NewVal - OldAvrg)/(SampleCnt_Uls_T_u32 + 1)) */
            RawVal_Uls_T_f32 = FixdToFloat_f32_u16((uint16)RawVal_Uls_T_u08,NXTRFIXDPT_P0TOFLOAT_ULS_F32);
            
            if (RawVal_Uls_T_f32 >= AvrgVal_Uls_T_f32)
            {
                TmpDif_Uls_T_f32 = RawVal_Uls_T_f32 - AvrgVal_Uls_T_f32;
                AvrgVal_Uls_T_f32 += (TmpDif_Uls_T_f32/((float32)PimStHlthSigStcIgnCycSampleCntrAry_u32[SigCnt_Uls_T_u16]));                        
            }
            else
            {
                TmpDif_Uls_T_f32 = AvrgVal_Uls_T_f32 - RawVal_Uls_T_f32;
                AvrgVal_Uls_T_f32 -= (TmpDif_Uls_T_f32/((float32)PimStHlthSigStcIgnCycSampleCntrAry_u32[SigCnt_Uls_T_u16])); 
            }   

            /* Update back the RAM buffer */
            PimStHlthSigStcRamBuf_u8[StrtAdr_Uls_T_u08 + RAMRAWPOSN_CNT_U08] = RawVal_Uls_T_u08;
            PimStHlthSigStcRamBuf_u8[StrtAdr_Uls_T_u08 + RAMMAXPOSN_CNT_U08] = MaxVal_Uls_T_u08;
            PimStHlthSigStcRamBuf_u8[StrtAdr_Uls_T_u08 + RAMMINPOSN_CNT_U08] = MinVal_Uls_T_u08;
            PimStHlthSigStcSigAvrgBufAry_f32[SigCnt_Uls_T_u16] = Lim_f32(AvrgVal_Uls_T_f32,STHLTHMINVAL_CNT_F32, STHLTHMAXVAL_CNT_F32);          
        }
        /* ENDREQ: ES106A #15 I */
        /* ENDREQ: ES106A #18 I */
        /* ENDREQ: ES106A #21 I */
        /* ENDREQ: ES106A #22 I */           
    }	
    Rte_Exit_StHlthSigStc_ExclusiveArea(); 
   
}
 /******************************************************************************
  * Name:        NONTRUSTED_NtWrapS_StHlthSigStc_ClrDataSample
  * Description: Non trusted function call wrapper for clear data
  * Inputs : index - NonTrustedFunctionIndexType
             par - container for required data
  * Outputs:     NONE
  * Usage Notes: NONE
  ****************************************************************************/
FUNC(void, StHlthSigStc_CODE) NONTRUSTED_NtWrapS_StHlthSigStc_ClrDataSample(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams)
{
    VAR(uint8, AUTOMATIC) TarSel_Cnt_T_logl;
    
    TarSel_Cnt_T_logl = ((NtClrDataSampleRec*)FunctionParams)->TarSel;
    
    StHlthSigStc_ClrDataSample(TarSel_Cnt_T_logl);
}
 /******************************************************************************
  * Name:        NONTRUSTED_NtWrapS_StHlthSigStc_UpdNvmPim
  * Description: Non trusted function call wrapper for update PIM
  * Inputs : index - NonTrustedFunctionIndexType
             par - container for required data
  * Outputs:     NONE
  * Usage Notes: NONE
  ****************************************************************************/
FUNC(void, StHlthSigStc_CODE) NONTRUSTED_NtWrapS_StHlthSigStc_UpdNvmPim(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams)
{
    VAR(uint32, AUTOMATIC) NvmSampleCnt_Cnt_T_u32;
    P2VAR(uint8, AUTOMATIC, RTE_STHLTHSIGSTC_APPL_VAR) NvmBasPtr;    
    VAR(uint8, AUTOMATIC) NvmMaxVal_Cnt_T_u08;   
    VAR(uint8, AUTOMATIC) NvmMinVal_Cnt_T_u08;   
    VAR(uint16, AUTOMATIC) NvmAvrgVal_Cnt_T_u7p9;  

    NvmBasPtr       = ((NtUpdNvmPimRec*)FunctionParams)->NvmPtr;
    NvmMaxVal_Cnt_T_u08    = ((NtUpdNvmPimRec*)FunctionParams)->NvmMaxVal;
    NvmMinVal_Cnt_T_u08    = ((NtUpdNvmPimRec*)FunctionParams)->NvmMinVal;
    NvmAvrgVal_Cnt_T_u7p9   = ((NtUpdNvmPimRec*)FunctionParams)->NvmAvrgVal;
    NvmSampleCnt_Cnt_T_u32 = ((NtUpdNvmPimRec*)FunctionParams)->NvmSampleCnt;
    
    StHlthSigStc_UpdNvmPim(NvmBasPtr, NvmMaxVal_Cnt_T_u08,NvmMinVal_Cnt_T_u08,NvmAvrgVal_Cnt_T_u7p9,NvmSampleCnt_Cnt_T_u32);
}
 /******************************************************************************
  * Name:        NONTRUSTED_NtWrapS_StHlthSigStc_UpdDataSample
  * Description: Non trusted function call wrapper for Update data sample
  * Inputs : index - NonTrustedFunctionIndexType
             par - container for required data
  * Outputs:     NONE
  * Usage Notes: NONE
  ****************************************************************************/
FUNC(void, StHlthSigStc_CODE) NONTRUSTED_NtWrapS_StHlthSigStc_UpdDataSample(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams)
{
    VAR(TaskType, AUTOMATIC) TaskId_Cnt_T_u08;
    
    TaskId_Cnt_T_u08 = ((NtUpdDataSampleRec*)FunctionParams)->TaskId;
    
    StHlthSigStc_UpdDataSample((uint8)TaskId_Cnt_T_u08);
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
