/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_ExcpnHndlgNonRte.c 
* Module Description: Implements the non-RTE functionality of CM101A Exception Handling RH850
*                     Includes SetMcuDiagcIdnData and GetMcuDiagcIdnData server runnables
* Project           : CBD
* Author            : Kathleen Creager
***********************************************************************************************************************
* Version Control:
* %version:          6 %
* %derived_by:       rzk04c %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 09/11/15   1       KMC       Initial Version                                                                EA4#1832
* 11/20/15   2       LWW       Update for anomaly correction per FDD                                          EA4#2577
* 01/19/15   3       LWW       Updated for error and protection hook removal                                  EA4#3185
* 02/10/16	 4		 AJM       Updated for Clock monitor FENMI handling, 									  EA4#3765
							   Fault processing for Start up test of P Bus and PBG,Soft and Hard Reset Cases
* 03/22/16   5       AJM       Changed DTS RAM Double BIT ECC fault to SYSERR type from FENMI		  		  EA4#4632
* 04/05/16   6       AJM	   Added Mode error handlers, removed SPI Dbl bit Handler.SetMcuDiagcIdnData	  EA4#5099
							   function has been modified to update BRAMDAT0/1 in case of DBGRST also						  
**********************************************************************************************************************/
#include <v800_ghs.h> /* for LDSR, STSR intrinsics */  
#include "Rte_CDD_ExcpnHndlg.h"
#include "CDD_ExcpnHndlg.h"
#include "CDD_ExcpnHndlg_private.h"
#include "ram_regs.h" /* for BRAMDAT0, BRAMDAT1 */
#include "ecc_regs.h" /* for ECCCSIH0*, etc. */
#include "dma_regs.h" /* for DMASSDMACER */
#include "WdgM.h"
#include "WdgM_PBcfg.h" /* for declarations needed in distinguishing program flow, deadline monitor, and alive monitor faults */
#include "NxtrMcuSuprtLib.h" /* for NxtrSwRstFromExcpn(), WrProtdRegSys_u32() */

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define FPCFGININVAL_CNT_T_U32    0x0000001CU /* enable invalid operation, divide by zero, and overflow FPU exceptions */

/* system register register IDs and selection IDs */
#define FPCFGREGID_CNT_S32 		10	/* register ID of FPCFG */
#define FPCFGSELNID_CNT_S32 	0	/* selection ID of FPCFG */

#define CDD_ExcpnHndlg_START_SEC_CODE 
#include "CDD_ExcpnHndlg_MemMap.h"
/*****************************************************************************************************************
 * Name        :   ExcpnHndlgInit1
 * Description :   Pre-OS initialization for the CM101A ExcpnHandlg component 
 * Inputs      :   None
 * Outputs     :   None
 * Usage Notes :   Non-RTE function because it needs to be called before the OS is started - so
 *                 that floating point exceptions can be enabled before anything uses floating point
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) ExcpnHndlgInit1(void)
{
	/* configure floating point exceptions */
	__LDSR (FPCFGREGID_CNT_S32, FPCFGSELNID_CNT_S32, FPCFGININVAL_CNT_T_U32);

}

/*****************************************************************************************************************
 * Name        :   FeNmiPeg
 * Description :   PEG Exception Handling callback for the CM101A ExcpnHandlg component 
 * Inputs      :   None
 * Outputs     :   None
 * Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiPeg(void)
{
	/* Identify reset cause and reset */
	NxtrSwRstFromExcpn(MCUDIAGC_PROCRELMGUARD, 0U);	
}

/*****************************************************************************************************************
 * Name        :   FeNmiDmaTrf
 * Description :   DMA Transfer Error exception handler callback for the CM101A ExcpnHandlg component 
 * Inputs      :   None
 * Outputs     :   None
 * Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiDmaTrf(void)
{
	NxtrSwRstFromExcpn(MCUDIAGC_DMATRFERR, DMASSDMACER);
}

/*****************************************************************************************************************
 * Name        :   FeNmiDmaRegAcsProtnErr
 * Description :   DMA Register Access Protection Error exception handler callback for the CM101A ExcpnHandlg component 
 * Inputs      :   None
 * Outputs     :   None
 * Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiDmaRegAcsProtnErr(void)
{
	NxtrSwRstFromExcpn(MCUDIAGC_DMAREGACSPROTCNERR, DMASSDMACER);
}

/*****************************************************************************************************************
 * Name        :   FeNmiEcmMstChkrCmp
 * Description :   ECM Master Checker Compare exception handler callback for the CM101A ExcpnHandlg component 
 * Inputs      :   None
 * Outputs     :   None
 * Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiEcmMstChkrCmp(void)
{
	NxtrSwRstFromExcpn(MCUDIAGC_ECMMSTCHKRERR, 0U);
}

/*****************************************************************************************************************
 * Name        :   FeNmiWdg
 * Description :   Watchdog Exception Handler callback for the CM101A ExcpnHandlg component 
 * Inputs      :   None
 * Outputs     :   None
 * Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiWdg(void)
{
	VAR (McuDiagc1, AUTOMATIC) FltVal_Cnt_T_enum;
	VAR (uint32, AUTOMATIC) FltInfo_Cnt_T_u32;
	P2CONST (WdgM_ConfigType, AUTOMATIC, CDD_ExcpnHndlg_APPL_CONST) WdgCfgPtr_T_rec; 
    VAR (WdgM_SupervisedEntityIdType, AUTOMATIC) NumOfWdgMgrEnty; 
    VAR (WdgM_SupervisedEntityIdType, AUTOMATIC) EntyId; 
    P2CONST (WdgM_SupervisedEntityType, AUTOMATIC, CDD_ExcpnHndlg_APPL_CONST) EntyPtr_T_rec; 

    WdgCfgPtr_T_rec = &WdgMConfig_Mode0; 
	NumOfWdgMgrEnty = WdgCfgPtr_T_rec->NrOfSupervisedEntities;
	
	/* default to MCUDIAGC_FENMIWDG if no other violations found */
	FltVal_Cnt_T_enum = MCUDIAGC_FENMIWDG;
	FltInfo_Cnt_T_u32 = 0U;
	
	EntyId = 0U;
	
    /* For all configured Entities or until fault cause is found */
    while ((EntyId < NumOfWdgMgrEnty) && (FltVal_Cnt_T_enum == MCUDIAGC_FENMIWDG))
    {
        EntyPtr_T_rec  = &WdgCfgPtr_T_rec->WdgMSupervisedEntityRef[EntyId];
		if (EntyPtr_T_rec->EntityStatusGRef->ProgramFlowViolationCnt != 0U)
		{
			FltVal_Cnt_T_enum = MCUDIAGC_FENMIPROGFLOW;
			FltInfo_Cnt_T_u32 = (uint32)EntyId;
		}
		else if (EntyPtr_T_rec->EntityStatusGRef->FailedSupervisionRefCycles != 0U)
		{
			FltVal_Cnt_T_enum = MCUDIAGC_FENMIALVMONR;
			FltInfo_Cnt_T_u32 = (uint32)EntyId;
		}
		else if (EntyPtr_T_rec->EntityStatusGRef->DeadlineViolationCnt != 0U)
		{
			FltVal_Cnt_T_enum = MCUDIAGC_FENMIDEADLINEMONR;
			FltInfo_Cnt_T_u32 = (uint32)EntyId;
		}
		else
		{
			/* do nothing */
		}
		EntyId++;
	}
	
	NxtrSwRstFromExcpn(FltVal_Cnt_T_enum, FltInfo_Cnt_T_u32);
}

/*****************************************************************************************************************
* Name        :   SetMcuDiagcIdnData
* Description :   Implementation of SetMcuDiagcIdnData special function 
*                 Sets the reset reason and supporting information
* Inputs      :   McuDiagcData0_Arg - data to be saved in BRAMDAT0
*             :   McuDiagcData1_Arg - data to be saved in BRAMDAT1
* Outputs     :   BRAMDAT0 - global output - backup RAM used to save the reset reason
*             :   BRAMDAT1 - global output - backup RAM used to save additional supporting information
* Usage Notes :   This is a server runnable which may be called from both RTE and non-RTE functions, but calls 
*                 from RTE functions will look like library calls, i.e. will not use a client/server port.
*                 May be called multiple times but only updates data once per reset, except when setting
*                 a flash programming request which will always update the data
****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) SetMcuDiagcIdnData(McuDiagc1 McuDiagcData0_Arg, 
													uint32 McuDiagcData1_Arg)
{
	VAR(McuDiagc1, AUTOMATIC) RstInfo_Cnt_T_enum; 
	
	RstInfo_Cnt_T_enum = (McuDiagc1)BRAMDAT0;  /* copy current reset info from backup RAM */
	
	if ((McuDiagcData0_Arg == MCUDIAGC_FLSPROGMREQ) || 
		(RstInfo_Cnt_T_enum == MCUDIAGC_PWRONRST) || 
		(RstInfo_Cnt_T_enum == MCUDIAGC_DBGRST) ||		
		(RstInfo_Cnt_T_enum == MCUDIAGC_FLSPROGMCMPL) ||
		(RstInfo_Cnt_T_enum == MCUDIAGC_HARDRST) ||
		(RstInfo_Cnt_T_enum == MCUDIAGC_SOFTRST))
	{
		BRAMDAT0 = McuDiagcData0_Arg;
		BRAMDAT1 = McuDiagcData1_Arg;
	}
}

/*****************************************************************************************************************
* Name        :   GetMcuDiagcIdnData
* Description :   Implementation of GetMcuDiagcIdnData special function 
*                 Gets the reset reason/pre-os error code
* Inputs      :   BRAMDAT0
* Outputs     :   *McuDiagcData0_Arg - reset reason / pre-os error code
* Usage Notes :   This is a server runnable which may be called from both RTE and non-RTE functions, but calls 
*                 from RTE functions will look like library calls, i.e. will not use a client/server port.
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) GetMcuDiagcIdnData(P2VAR(McuDiagc1, AUTOMATIC, ExcpnHndlg_APPL_VAR) McuDiagcData0_Arg) 
{
		*McuDiagcData0_Arg = BRAMDAT0;
}

/*****************************************************************************************************************
* Name        :   ProcUkwnExcpnErr
* Description :   Implementation of Process Unknown Exception Error
*                 Handles reaction to Unknown Exception
* Inputs      :   McuDiagcData1_Arg - fault error code argument
* Outputs     :   None
* Usage Notes :   This is a server runnable which is expected to be called by the Os Error Handler (non-RTE context)
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) ProcUkwnExcpnErr(uint32 McuDiagcData1_Arg) 
{
	NxtrSwRstFromExcpn(MCUDIAGC_UKWNEXCPN, McuDiagcData1_Arg);
}

/*****************************************************************************************************************
* Name        :   ProcMpuExcpnErr
* Description :   Implementation of Process MPU Exception Error
*                 Handles reaction to Memory Protection Violation
* Inputs      :   McuDiagcData1_Arg - fault error code argument
* Outputs     :   None
* Usage Notes :   This is a server runnable which is expected to be called by the Os Error Handler (non-RTE context)
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) ProcMpuExcpnErr(uint32 McuDiagcData1_Arg) 
{
	NxtrSwRstFromExcpn(MCUDIAGC_MPU, McuDiagcData1_Arg);
}

/*****************************************************************************************************************
* Name        :   ProcPrvlgdInstrExcpnErr
* Description :   Implementation of Process Privileged Instruction Exception Error
*                 Handles reaction to Privileged Instruction Exception
* Inputs      :   McuDiagcData1_Arg - fault error code argument
* Outputs     :   None
* Usage Notes :   This is a server runnable which is expected to be called by the Os Error Handler (non-RTE context)
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) ProcPrvlgdInstrExcpnErr(uint32 McuDiagcData1_Arg) 
{
	NxtrSwRstFromExcpn(MCUDIAGC_PRVLGDINSTREXCPN, McuDiagcData1_Arg);
}

/*****************************************************************************************************************
* Name        :   ProcPrmntOsErr
* Description :   Implementation of Process Permanent OS Error
*                 Handles reaction to Permanent OS Errors
* Inputs      :   McuDiagcData1_Arg - fault error code argument
* Outputs     :   None
* Usage Notes :   This is a server runnable which is expected to be called by the Os Error Handler (non-RTE context)
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) ProcPrmntOsErr(uint32 McuDiagcData1_Arg) 
{
	NxtrSwRstFromExcpn(MCUDIAGC_PRMNTOSERR, McuDiagcData1_Arg);
}

/*****************************************************************************************************************
* Name        :   ProcNonCritOsErr
* Description :   Implementation of Process Non Critical OS Error
*                 Handles reaction to Non Critical OS Errors
* Inputs      :   McuDiagcData1_Arg - fault error code argument
* Outputs     :   ExcpnHndlgOsErrCod_C - error code variable polled in a periodic function
* Usage Notes :   This is a server runnable which is expected to be called by the Os Error Handler (non-RTE context)
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) ProcNonCritOsErr(uint32 McuDiagcData1_Arg) 
{
	ExcpnHndlgOsErrCod_C = (uint16)McuDiagcData1_Arg;
}

/*****************************************************************************************************************
* Name        :   FeNmiClkMonr0RtLowrLimFlt
* Description :   Clock Monitor 0 Runtime Lower Limit Failure exception handler callback for the CM101A 
				  ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiClkMonr0RtLowrLimFlt(void) 
{
	NxtrSwRstFromExcpn(MCUDIAGC_CLKMONR0RTLOWRLIMFLT,0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiClkMonr0RtUpprLimFlt
* Description :   Clock Monitor 0 Runtime Upper Limit Failure exception handler callback for the CM101A 
				  ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiClkMonr0RtUpprLimFlt(void) 
{
	NxtrSwRstFromExcpn(MCUDIAGC_CLKMONR0RTUPPRLIMFLT,0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiClkMonr1RtLowrLimFlt
* Description :   Clock Monitor 1 Runtime Lower Limit Failure exception handler callback for the CM101A 
				  ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiClkMonr1RtLowrLimFlt(void) 
{
	NxtrSwRstFromExcpn(MCUDIAGC_CLKMONR1RTLOWRLIMFLT,0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiClkMonr1RtUpprLimFlt
* Description :   Clock Monitor 1 Runtime Upper Limit Failure exception handler callback for the CM101A 
				  ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiClkMonr1RtUpprLimFlt(void) 
{
	NxtrSwRstFromExcpn(MCUDIAGC_CLKMONR1RTUPPRLIMFLT,0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiClkMonr2RtLowrLimFlt
* Description :   Clock Monitor 2 Runtime Lower Limit Failure exception handler callback for the CM101A 
				  ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiClkMonr2RtLowrLimFlt(void) 
{
	NxtrSwRstFromExcpn(MCUDIAGC_CLKMONR2RTLOWRLIMFLT,0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiClkMonr2RtUpprLimFlt
* Description :   Clock Monitor 2 Runtime Upper Limit Failure exception handler callback for the CM101A 
				  ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR)
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiClkMonr2RtUpprLimFlt(void) 
{
	NxtrSwRstFromExcpn(MCUDIAGC_CLKMONR2RTUPPRLIMFLT,0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiClkMonr3RtLowrLimFlt
* Description :   Clock Monitor 3 Runtime Lower Limit Failure exception handler callback for the CM101A 
				  ExcpnHandlg component..
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiClkMonr3RtLowrLimFlt(void) 
{
	NxtrSwRstFromExcpn(MCUDIAGC_CLKMONR3RTLOWRLIMFLT,0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiClkMonr3RtUpprLimFlt
* Description :   Clock Monitor 3 Runtime Upper Limit Failure exception handler callback for the CM101A 
				  ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiClkMonr3RtUpprLimFlt(void) 
{
	NxtrSwRstFromExcpn(MCUDIAGC_CLKMONR3RTUPPRLIMFLT,0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiOperModErrSngChipInactv
* Description :   Single Chip Mode in Single chip mode inactive exception handler callback for the CM101A 
				  ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
 FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiOperModErrSngChipInactv(void) 
{
	NxtrSwRstFromExcpn(MCUDIAGC_OPERMODERRSNGCHIPINACTV,0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiOperModErrFlsProgmModStrtd
* Description :   Flash programming Mode in Single chip mode active exception handler callback for the CM101A 
				  ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
 FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiOperModErrFlsProgmModStrtd(void) 
{
	NxtrSwRstFromExcpn(MCUDIAGC_OPERMODERRFLSPROGMMODSTRTD,0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiOperModErrTestModStrtd
* Description :   Test Mode in Single chip mode active exception handler callback for the CM101A 
				  ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
 FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiOperModErrTestModStrtd(void) 
{
	NxtrSwRstFromExcpn(MCUDIAGC_OPERMODERRTESTMODSTRTD,0U);
}

#define CDD_ExcpnHndlg_STOP_SEC_CODE 
#include "CDD_ExcpnHndlg_MemMap.h"
