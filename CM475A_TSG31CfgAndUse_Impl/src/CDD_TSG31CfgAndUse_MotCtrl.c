/*****************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name: CDD_TSG31CfgAndUse_MotCtrl.c
* Module Description: Motor Control Loop runnable(s) for configuration and 
*                     use of the TSG31 timer peripheral
* Project           : CBD   
* Author            : Kathleen Creager
*****************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nz63rn %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/23/15	1   	 KMC			initial version							                                   EA4#337
* 06/20/15  2        KMC        changed CnvNanoSecToHalfTmrCnt() to CnvNanoSecToTmrCnt() and added             EA4#865
*                               masking per FDD 1.3.0
******************************************************************************/

#include "Rte_CDD_TSG31CfgAndUse.h"
#include "CDD_TSG31CfgAndUse.h"
#include "CDD_TSG31CfgAndUse_private.h"
#include "tsg3_regs.h"
#include "CDD_MotCtrlMgr_Data.h"


/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */


#define CDD_TSG31CfgAndUse_MotCtrl_START_SEC_CODE
#include "CDD_TSG31CfgAndUse_MotCtrl_MemMap.h" 

/******************************************************************************
  * Name:        TSG31CfgAndUsePer1
  * Description: TSG31CfgAndUse periodic processing in the motor control loop
  * Inputs:      see component's DataDict.m file     
  * Outputs:     see component's DataDict.m file 
  * Usage Notes: Called at Motor Control loop rate 
  ****************************************************************************/
FUNC (void, CDD_TSG31CfgAndUse_CODE) TSG31CfgAndUsePer1 (void)
{
	/* CM475A_TSG31CfgAndUse/TSG31CfgAndUse/TSG31CfgAndUsePer1 */
	
	VAR (uint32, AUTOMATIC) PhaOnTiA_NanoSec_T_u32;
	VAR (uint32, AUTOMATIC) PhaOnTiB_NanoSec_T_u32;
	VAR (uint32, AUTOMATIC) PhaOnTiC_NanoSec_T_u32;
	VAR (uint32, AUTOMATIC) PwmPerd_NanoSec_T_u32;
	VAR (MotCurrEolCalSt2, AUTOMATIC) MotCurrEolCalSt_T_enum;
	VAR (uint32, AUTOMATIC) PwmPerd_Cnt_T_u32;

	MotCurrEolCalSt_T_enum = MOTCTRLMGR_MotCtrlMotCurrEolCalSt;
	
	/* CM475A_TSG31CfgAndUse/TSG31CfgAndUse/TSG31CfgAndUsePer1/Truth Table */
	
	if (MotCurrEolCalSt_T_enum == MCECS_OFFSCMDSTRT)
	{
		/* Action Table Row 4 */
		PwmPerd_NanoSec_T_u32 = MOTCTRLMGR_MotCtrlPwmPerd;
		PhaOnTiA_NanoSec_T_u32 = MOTCTRLMGR_MotCtrlPhaOnTiA;
		PhaOnTiB_NanoSec_T_u32 = MOTCTRLMGR_MotCtrlPhaOnTiB;
		PhaOnTiC_NanoSec_T_u32 = MOTCTRLMGR_MotCtrlPhaOnTiC;
	}
	else if (MotCurrEolCalSt_T_enum == MCECS_OFFSCMDHI)
	{
		/* Action Table Row 1 */
		PwmPerd_NanoSec_T_u32 = Rte_Prm_CurrMeasEolFixdPwmPerd_Val();
		PhaOnTiA_NanoSec_T_u32 = Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val();
		PhaOnTiB_NanoSec_T_u32 = Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val();
		PhaOnTiC_NanoSec_T_u32 = Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val();
	}
	else if (MotCurrEolCalSt_T_enum == MCECS_OFFSCMDLO)
	{
		/* Action Table Row 2 */
		PwmPerd_NanoSec_T_u32 = Rte_Prm_CurrMeasEolFixdPwmPerd_Val();
		PhaOnTiA_NanoSec_T_u32 = Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val();
		PhaOnTiB_NanoSec_T_u32 = Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val();
		PhaOnTiC_NanoSec_T_u32 = Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val();
	}
	else if (MotCurrEolCalSt_T_enum == MCECS_OFFSCMDZERO)
	{
		/* Action Table Row 3 */
		PwmPerd_NanoSec_T_u32 = Rte_Prm_CurrMeasEolFixdPwmPerd_Val();
		PhaOnTiA_NanoSec_T_u32 = 0U;
		PhaOnTiB_NanoSec_T_u32 = 0U;
		PhaOnTiC_NanoSec_T_u32 = 0U;
	}
	else 
	{
		/* Action Table Row 4 */
		PwmPerd_NanoSec_T_u32 = MOTCTRLMGR_MotCtrlPwmPerd;
		PhaOnTiA_NanoSec_T_u32 = MOTCTRLMGR_MotCtrlPhaOnTiA;
		PhaOnTiB_NanoSec_T_u32 = MOTCTRLMGR_MotCtrlPhaOnTiB;
		PhaOnTiC_NanoSec_T_u32 = MOTCTRLMGR_MotCtrlPhaOnTiC;
	}
	PwmPerd_Cnt_T_u32 = CnvNanoSecToTmrCnt(PwmPerd_NanoSec_T_u32);
	MOTCTRLMGR_MotCtrlTSG31CMP0E = PwmPerd_Cnt_T_u32;
	MOTCTRLMGR_MotCtrlTSG31CMPUE = PwmPerd_Cnt_T_u32 - CnvNanoSecToTmrCnt(PhaOnTiA_NanoSec_T_u32);
	MOTCTRLMGR_MotCtrlTSG31CMPVE = PwmPerd_Cnt_T_u32 - CnvNanoSecToTmrCnt(PhaOnTiB_NanoSec_T_u32);
	MOTCTRLMGR_MotCtrlTSG31CMPWE = PwmPerd_Cnt_T_u32 - CnvNanoSecToTmrCnt(PhaOnTiC_NanoSec_T_u32);
	MOTCTRLMGR_MotCtrlTSG31DCMP0E = (PwmPerd_Cnt_T_u32 - *Rte_Pim_TSG31CfgAndUseAdcStrtOfCnvnPeak()) & CLRBIT0MASK_CNT_U32;
	MOTCTRLMGR_MotCtrlTSG31CMP12E = (PwmPerd_Cnt_T_u32 - *Rte_Pim_TSG31CfgAndUseMotAg0SPIStart()) & CLRBIT0MASK_CNT_U32;
}	
	
#define CDD_TSG31CfgAndUse_MotCtrl_STOP_SEC_CODE
#include "CDD_TSG31CfgAndUse_MotCtrl_MemMap.h" 

