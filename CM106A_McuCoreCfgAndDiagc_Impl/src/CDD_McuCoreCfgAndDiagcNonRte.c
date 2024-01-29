/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name: CDD_McuCoreCfgAndDiagcNonRte.c
* Module Description: Mcu Core Configuration and Diagnostics Complex Driver NonRte Functionality
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          3 %
* %derived_by:       nzt9hv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 10/19/15  1        LWW       Initial Version                                                                 EA4#1848
* 02/24/16	2		 AJM       Replaced GetMcuDiagcData with ChkForStrtUpTest to check for 					   EA4#3981	
							   start up test condition
* 04/04/16	3		 Selva     Replaced ChkForStrtUpTest with  GetMcuDiagcData on PWRRST 				       EA4#5095
							    in Init1							   
**********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include <v800_ghs.h>
#include "Rte_CDD_McuCoreCfgAndDiagc.h"
#include "CDD_McuCoreCfgAndDiagc.h"
#include "NxtrMcuSuprtLib.h"
#include "CDD_ExcpnHndlg.h"
#include "sys_regs.h"
#include "ecm_regs.h"
#include "lockstep_regs.h"

/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/

/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/
#define CDD_McuCoreCfgAndDiagc_STOP_SEC_CODE
#include "CDD_McuCoreCfgAndDiagc_MemMap.h"

/**********************************************************************************************************************
  * Name:        McuCoreCfgAndDiagcInit1
  * Description: Non-RTE initialization function checking BIST results
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: To be called at appropriate time during initialization prior to the O/S starting
  ********************************************************************************************************************/
FUNC(void, CDD_McuCoreCfgAndDiagc_CODE) McuCoreCfgAndDiagcInit1(void)
{
	VAR(McuDiagc1, AUTOMATIC) DiagcIdn_Cnt_T_enum;
	VAR(uint32, AUTOMATIC) SYSDEBUGMODE_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) SYSDEBUGMODEB_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) ECMMSSE109_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) ECMCSSE109_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) ECMMSSE108_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) ECMCSSE108_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) SYSBISTRESULT_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) SYSBISTRESULTB_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) SYSLBISTSIG1_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) SYSLBISTREF1_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) SYSLBISTSIG2_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) SYSLBISTREF2_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) SYSMBISTREF_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) SYSMBISTSIG_Cnt_T_u32;
	
	GetMcuDiagcIdnData(&DiagcIdn_Cnt_T_enum);
	
	/* Only Run test on Power-On-Reset when not in Debug Mode */
	SYSDEBUGMODE_Cnt_T_u32 = SYSDEBUGMODE;
	SYSDEBUGMODEB_Cnt_T_u32 = SYSDEBUGMODEB;

	
	if ((MCUDIAGC_PWRONRST == DiagcIdn_Cnt_T_enum) &&
		((SYSDEBUGMODE_Cnt_T_u32 == 0U) || (SYSDEBUGMODEB_Cnt_T_u32 == 1U)))
	{
		ECMMSSE109_Cnt_T_u32 = ECMMSSE109;
		ECMCSSE109_Cnt_T_u32 = ECMCSSE109;
		ECMMSSE108_Cnt_T_u32 = ECMMSSE108;
		ECMCSSE108_Cnt_T_u32 = ECMCSSE108;
		
		/* Check if 2/1 Bit ECC Error occurred during BIST execution */
		if ((1U == ECMMSSE109_Cnt_T_u32) || (1U == ECMCSSE109_Cnt_T_u32)|| (1U == ECMCSSE108_Cnt_T_u32) ||(1U == ECMMSSE108_Cnt_T_u32))
		{
			SetMcuDiagcIdnData(MCUDIAGC_BISTECCERR, 0U);
		}
		else
		{
			SYSBISTRESULT_Cnt_T_u32 = SYSBIST_RESULT;
			SYSBISTRESULTB_Cnt_T_u32 = SYSBIST_RESULTB;
			
			/* At least one Register indicates BIST Completed Successfully */
			if ((SYSBISTRESULT_Cnt_T_u32 != 2U) && (SYSBISTRESULTB_Cnt_T_u32 != 5U))
			{
				SetMcuDiagcIdnData(MCUDIAGC_BISTNOTCMPLERR, 0U);
			}
			else
			{
				SYSLBISTSIG1_Cnt_T_u32 = SYSLBISTSIG1;
				SYSLBISTREF1_Cnt_T_u32 = SYSLBISTREF1;
				SYSLBISTSIG2_Cnt_T_u32 = SYSLBISTSIG2;
				SYSLBISTREF2_Cnt_T_u32 = SYSLBISTREF2;
				
				/* Check if there were any errors during LBIST execution */
				if ((SYSLBISTSIG1_Cnt_T_u32 != SYSLBISTREF1_Cnt_T_u32) || (SYSLBISTSIG2_Cnt_T_u32 != SYSLBISTREF2_Cnt_T_u32))
				{
					SetMcuDiagcIdnData(MCUDIAGC_LOGLBISTERR, 0U);
				}
				else
				{
					SYSMBISTREF_Cnt_T_u32 = SYSMBISTREF;
					SYSMBISTSIG_Cnt_T_u32 = SYSMBISTSIG;
					
					/* Check if there were any errors during MBIST execution */
					if (SYSMBISTREF_Cnt_T_u32 != SYSMBISTSIG_Cnt_T_u32)
					{
						SetMcuDiagcIdnData(MCUDIAGC_MEMBISTERR, 0U);
					}
				}
			}
		}
	}
	
}

/**********************************************************************************************************************
  * Name:        McuCoreCfgAndDiagcInit2
  * Description: Non-RTE initialization function checking Core and DMA Lockstep functionality
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: To be called at appropriate time during initialization prior to the O/S starting
  ********************************************************************************************************************/
FUNC(void, CDD_McuCoreCfgAndDiagc_CODE) McuCoreCfgAndDiagcInit2(void)
{
	VAR(boolean,AUTOMATIC) ExecStrtUpTest_Cnt_T_logl;
	VAR(uint32, AUTOMATIC) SavedECMEMK0_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) SavedECMMICFG0_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) SavedECMNMICFG0_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) SavedECMIRCFG0_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) ECMMSSE001_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) ECMCSSE001_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) SYSDEBUGMODE_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) SYSDEBUGMODEB_Cnt_T_u32;
	
	ChkForStrtUpTest_Oper(&ExecStrtUpTest_Cnt_T_logl);
		
	ECMMSSE001_Cnt_T_u32 = ECMMSSE001;
	ECMCSSE001_Cnt_T_u32 = ECMCSSE001;
	SYSDEBUGMODE_Cnt_T_u32 = SYSDEBUGMODE;
	SYSDEBUGMODEB_Cnt_T_u32 = SYSDEBUGMODEB;
	
	/* Only Run test on Power-On-Reset and if lockstep failure has not already occurred */
	if ((TRUE == ExecStrtUpTest_Cnt_T_logl) &&
	    ((ECMMSSE001_Cnt_T_u32 == 0U) && (ECMCSSE001_Cnt_T_u32 == 0U)) &&
	    ((SYSDEBUGMODE_Cnt_T_u32 == 0U) || (SYSDEBUGMODEB_Cnt_T_u32 == 1U)))
	{
		/* Save contents of modified registers */
		SavedECMEMK0_Cnt_T_u32 = ECMEMK0;
		SavedECMMICFG0_Cnt_T_u32 = ECMMICFG0;
		SavedECMNMICFG0_Cnt_T_u32 = ECMNMICFG0;
		SavedECMIRCFG0_Cnt_T_u32 = ECMIRCFG0;
		
		/* Mask the Error Source 1, NMI Interrupt and MI Interrupt of the ECMmESSTR0 register */
		WrProtdRegEcm_u32((SavedECMEMK0_Cnt_T_u32 | ((uint32)1U<<1U)), &ECMEMK0);
		WrProtdRegEcm_u32((SavedECMMICFG0_Cnt_T_u32 & ~((uint32)1U<<1U)), &ECMMICFG0);
		WrProtdRegEcm_u32((SavedECMNMICFG0_Cnt_T_u32 & ~((uint32)1U<<1U)), &ECMNMICFG0);
		WrProtdRegEcm_u32((SavedECMIRCFG0_Cnt_T_u32 & ~((uint32)1U<<1U)), &ECMIRCFG0);
		
		/* Inject Fault to cause a DMA Lockstep Error */
		PDMACOMPPDMA_COMP_CNTRL = 0xBFFF070FU;
		/* Wait until read from the TESTCOMPREG0 is complete to trigger the fault */
		__SYNCM();
		
		ECMMSSE001_Cnt_T_u32 = ECMMSSE001;
		ECMCSSE001_Cnt_T_u32 = ECMCSSE001;
	
		/* Check if the DMA Lockstep fault was notified */
		if ((ECMMSSE001_Cnt_T_u32 == 0U) || (ECMCSSE001_Cnt_T_u32 == 0U))
		{
			/* DMA Lockstep test failed */
			SetMcuDiagcIdnData(MCUDIAGC_DMALOCKSTEPERR, 0U);
		}
		else
		{
			/* Clear Notification */
			WrProtdRegEcm_u32(((uint32)1U<<1U), &ECMESSTC0);
			
			/* Inject Fault to cause a CPU Lockstep Error */
			TESTCOMPREG0 = 0x11111111U;
			TESTCOMPREG1 = 0x22222222U;
			
			/* According to SAN, a Read is required to induce a CPU Lockstep Fault */
			*Rte_Pim_CoreCompTestRegRead() = TESTCOMPREG0;
			/* Wait until read from the TESTCOMPREG0 is complete to trigger the fault */
			__SYNCM();
			
			ECMMSSE001_Cnt_T_u32 = ECMMSSE001;
			ECMCSSE001_Cnt_T_u32 = ECMCSSE001;
		
			/* Check if the CPU Lockstep fault was notified */
			if ((ECMMSSE001_Cnt_T_u32 == 0U) || (ECMCSSE001_Cnt_T_u32 == 0U))
			{
				SetMcuDiagcIdnData(MCUDIAGC_CPULOCKSTEPERR, 0U);
			}
		}
		
		/* Clear Notification */
		WrProtdRegEcm_u32(((uint32)1U<<1U), &ECMESSTC0);
		
		/* Restore contents of modified registers */
		WrProtdRegEcm_u32(SavedECMEMK0_Cnt_T_u32, &ECMEMK0);
		WrProtdRegEcm_u32(SavedECMMICFG0_Cnt_T_u32, &ECMMICFG0);
		WrProtdRegEcm_u32(SavedECMNMICFG0_Cnt_T_u32, &ECMNMICFG0);
		WrProtdRegEcm_u32(SavedECMIRCFG0_Cnt_T_u32, &ECMIRCFG0);
	}
}

#define CDD_McuCoreCfgAndDiagc_STOP_SEC_CODE
#include "CDD_McuCoreCfgAndDiagc_MemMap.h"
