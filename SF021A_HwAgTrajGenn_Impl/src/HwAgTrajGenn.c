/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HwAgTrajGenn.c
 *     SW-C Type:  HwAgTrajGenn
 *  Generated at:  Tue Feb  9 12:14:53 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HwAgTrajGenn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : HwAgTrajGenn.c
* Module Description: Implementation of Hand wheel Angle Trajectory Generation FDD SF021A
* Project           : CBD 
* Author            : Sankardu Varadapureddi
***********************************************************************************************************************
* Version Control:
* %version          : 1 %
* %derived_by       : pznywf %
*--------------------------------------------------------------------------------------------------------------------
* Date        Rev     Author    Change Description                                                            SCR #
* -------   -------  --------  ------------------------------------------------------------------------     ---------
* 02/04/16    1         SV     Initial Version                                                              EA4#2600                                   
* 04/12/16    2         KK     Range limited the Output                             					    EA4#5147
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
  HwAgTrajCmdSt1
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

 *********************************************************************************************************************/

#include "Rte_HwAgTrajGenn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
#include "NxtrMath.h" 
#include "ArchGlbPrm.h"
#include "SysGlbPrm.h"

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define MINATAR_HWDEGPERSECPERSEC_F32	0.125F
#define MINVELTAR_HWDEGPERSEC_F32		0.125F

#define ONEOVERTWOMPLR_ULS_F32			0.5F

static FUNC(void, HAGTRAJGENN_CODE) HwAgTrajInitVaris(float32 HwPosn_HwDeg_T_f32,
													  boolean CalcFlg_Cnt_T_logl,
													  float32 HwATar_HwDegPerSecPerSec_T_f32,
													  float32 HwAgTar_HwDeg_T_f32,
													  float32 HwVelTar_HwDegPerSec_T_f32);

static FUNC(float32, HAGTRAJGENN_CODE) HwAgTrajGenSigs(float32 HwPosn_HwDeg_T_f32,
													   boolean CalcFlg_Cnt_T_logl);		
														  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Enumeration Types:
 * ==================
 * HwAgTrajCmdSt1: Enumeration of integer in interval [0...65535] with enumerators
 *   HWAGTRAJCMDST_WAIT (0U)
 *   HWAGTRAJCMDST_HWAGA (1U)
 *   HWAGTRAJCMDST_CONVEL (2U)
 *   HWAGTRAJCMDST_HWAGDECEL (3U)
 *   HWAGTRAJCMDST_HLD (4U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_AMax(void)
 *   float32 *Rte_Pim_HwPosnIni(void)
 *   float32 *Rte_Pim_HwPosnOffs(void)
 *   float32 *Rte_Pim_SignHwPosnDelta(void)
 *   float32 *Rte_Pim_TiDeltaA(void)
 *   float32 *Rte_Pim_TiDeltaVel(void)
 *   float32 *Rte_Pim_TiSt(void)
 *   float32 *Rte_Pim_VelMax(void)
 *   HwAgTrajCmdSt1 *Rte_Pim_CmdSt(void)
 *   boolean *Rte_Pim_CalcFlg(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HwAgTrajGennAMax_Val(void)
 *   float32 Rte_Prm_HwAgTrajGennAgMax_Val(void)
 *   float32 Rte_Prm_HwAgTrajGennVelMax_Val(void)
 *
 *********************************************************************************************************************/


#define HwAgTrajGenn_START_SEC_CODE
#include "HwAgTrajGenn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgTrajGennInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, HwAgTrajGenn_CODE) HwAgTrajGennInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgTrajGennInit1
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgTrajGennPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgTrajGennEna_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAgTrakgServoCmd_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_HwAgTrajGennPer1_HwATar(void)
 *   float32 Rte_IrvRead_HwAgTrajGennPer1_HwAgTar(void)
 *   float32 Rte_IrvRead_HwAgTrajGennPer1_HwVelTar(void)
 *
 *********************************************************************************************************************/

FUNC(void, HwAgTrajGenn_CODE) HwAgTrajGennPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgTrajGennPer1
 *********************************************************************************************************************/
	
	/* inputs */
	VAR(float32, AUTOMATIC) HwAg_HwDeg_T_f32;
	VAR(boolean, AUTOMATIC) HwAgTrajGennEna_Cnt_T_logl;
	
	/* output */
	VAR(float32, AUTOMATIC) HwAgTrakgServoCmd_HwDeg_T_f32;
	
	/* Read inputs */
	(void) Rte_Read_HwAg_Val(&HwAg_HwDeg_T_f32);
    (void) Rte_Read_HwAgTrajGennEna_Logl(&HwAgTrajGennEna_Cnt_T_logl);
	
	/* 'Initialize Variables' block */
	HwAgTrajInitVaris(HwAg_HwDeg_T_f32,
					  HwAgTrajGennEna_Cnt_T_logl,
					  Rte_IrvRead_HwAgTrajGennPer1_HwATar(),
					  Rte_IrvRead_HwAgTrajGennPer1_HwAgTar(),
					  Rte_IrvRead_HwAgTrajGennPer1_HwVelTar());
		
	/* 'Generate Signals' block */
	HwAgTrakgServoCmd_HwDeg_T_f32 = HwAgTrajGenSigs(HwAg_HwDeg_T_f32,
													HwAgTrajGennEna_Cnt_T_logl);
	
	/* write output */
	(void)Rte_Write_HwAgTrakgServoCmd_Val(Lim_f32(HwAgTrakgServoCmd_HwDeg_T_f32, SYSGLBPRM_HWAGLOLIM_HWDEG_F32, SYSGLBPRM_HWAGHILIM_HWDEG_F32));
	
			
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetTrajTarPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetTrajTarPrm>
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_SetTrajTarPrm_Oper_HwATar(float32 data)
 *   void Rte_IrvWrite_SetTrajTarPrm_Oper_HwAgTar(float32 data)
 *   void Rte_IrvWrite_SetTrajTarPrm_Oper_HwVelTar(float32 data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetTrajTarPrm_Oper(float32 HwAgTrajGennHwAgTar_Arg, float32 HwAgTrajGennHwVelTar_Arg, float32 HwAgTrajGennHwATar_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, HwAgTrajGenn_CODE) SetTrajTarPrm_Oper(float32 HwAgTrajGennHwAgTar_Arg, float32 HwAgTrajGennHwVelTar_Arg, float32 HwAgTrajGennHwATar_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetTrajTarPrm_Oper
 *********************************************************************************************************************/
 
	Rte_IrvWrite_SetTrajTarPrm_Oper_HwATar(HwAgTrajGennHwATar_Arg);
	Rte_IrvWrite_SetTrajTarPrm_Oper_HwAgTar(HwAgTrajGennHwAgTar_Arg);
	Rte_IrvWrite_SetTrajTarPrm_Oper_HwVelTar(HwAgTrajGennHwVelTar_Arg);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define HwAgTrajGenn_STOP_SEC_CODE
#include "HwAgTrajGenn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*******************************************************************************
* Name          :   HwAgTrajInitVaris
* Description   :   "Initialize Variables" block implementation.                 
* Inputs        :   HwPosn_HwDeg_T_f32,CalcFlg_Cnt_T_logl,HwATar_HwDegPerSecPerSec_T_f32,
*                   HwAgTar_HwDeg_T_f32, HwVelTar_HwDegPerSec_T_f32                    
* Outputs       :   None
* Usage Notes   :   None
*****************************************************************************/
static FUNC(void, HAGTRAJGENN_CODE) HwAgTrajInitVaris(float32 HwPosn_HwDeg_T_f32,
													  boolean CalcFlg_Cnt_T_logl,
													  float32 HwATar_HwDegPerSecPerSec_T_f32,
													  float32 HwAgTar_HwDeg_T_f32,
													  float32 HwVelTar_HwDegPerSec_T_f32)
{
	VAR(float32, AUTOMATIC) HwPosnFinal_HwDegPerSecPerSec_T_f32;
	VAR(float32, AUTOMATIC) MaxVelDes_HwDegPerSec_T_f32;
	VAR(float32, AUTOMATIC) HwPosnDelta_HwDegPerSecPerSec_T_f32;
	VAR(float32, AUTOMATIC) AbsltHwPosnDelta_HwDegPerSecPerSec_T_f32;
	VAR(float32, AUTOMATIC) HwPosnDeltaADes_HwDegPerSecPerSec_T_f32;
	VAR(float32, AUTOMATIC) HwPosnDeltaADesTmp_HwDegPerSecPerSec_T_f32;
	
	if((*Rte_Pim_CalcFlg() == FALSE) && (CalcFlg_Cnt_T_logl == TRUE))
	{
		(*Rte_Pim_HwPosnIni()) = HwPosn_HwDeg_T_f32;
		
		HwPosnFinal_HwDegPerSecPerSec_T_f32 = Lim_f32(HwAgTar_HwDeg_T_f32,
		                                              -Rte_Prm_HwAgTrajGennAgMax_Val(),
													  Rte_Prm_HwAgTrajGennAgMax_Val());
		
		MaxVelDes_HwDegPerSec_T_f32 = Lim_f32(HwVelTar_HwDegPerSec_T_f32,
		                                      MINVELTAR_HWDEGPERSEC_F32,
											  Rte_Prm_HwAgTrajGennVelMax_Val());		

		(*Rte_Pim_AMax()) = Lim_f32(HwATar_HwDegPerSecPerSec_T_f32,
								    MINATAR_HWDEGPERSECPERSEC_F32,
								    Rte_Prm_HwAgTrajGennAMax_Val());											  

        HwPosnDelta_HwDegPerSecPerSec_T_f32 = HwPosnFinal_HwDegPerSecPerSec_T_f32 - (*Rte_Pim_HwPosnIni());
		
		AbsltHwPosnDelta_HwDegPerSecPerSec_T_f32 = Abslt_f32_f32(HwPosnDelta_HwDegPerSecPerSec_T_f32);
		
		(*Rte_Pim_SignHwPosnDelta()) = (float32)Sign_s08_f32(HwPosnDelta_HwDegPerSecPerSec_T_f32);
		
		HwPosnDeltaADesTmp_HwDegPerSecPerSec_T_f32 = ((MaxVelDes_HwDegPerSec_T_f32 * MaxVelDes_HwDegPerSec_T_f32) / (*Rte_Pim_AMax()));
		
		HwPosnDeltaADes_HwDegPerSecPerSec_T_f32 = HwPosnDeltaADesTmp_HwDegPerSecPerSec_T_f32 * ONEOVERTWOMPLR_ULS_F32;
		
		if((AbsltHwPosnDelta_HwDegPerSecPerSec_T_f32 * ONEOVERTWOMPLR_ULS_F32) <
			HwPosnDeltaADes_HwDegPerSecPerSec_T_f32)
		{
			*Rte_Pim_TiDeltaA() = Sqrt_f32(AbsltHwPosnDelta_HwDegPerSecPerSec_T_f32 / (*Rte_Pim_AMax()));
			*Rte_Pim_VelMax() = (*Rte_Pim_TiDeltaA()) * (*Rte_Pim_AMax());
			*Rte_Pim_TiDeltaVel() = 0.0F;
		}
		else
		{
			*Rte_Pim_TiDeltaA() =  MaxVelDes_HwDegPerSec_T_f32 / (*Rte_Pim_AMax());
			*Rte_Pim_VelMax() = MaxVelDes_HwDegPerSec_T_f32;
			*Rte_Pim_TiDeltaVel() = (AbsltHwPosnDelta_HwDegPerSecPerSec_T_f32 - HwPosnDeltaADesTmp_HwDegPerSecPerSec_T_f32)/MaxVelDes_HwDegPerSec_T_f32;
		}
		
	}

	*Rte_Pim_CalcFlg() = CalcFlg_Cnt_T_logl;
}
/*******************************************************************************
* Name          :   HwAgTrajGenSigs
* Description   :   "Generate Signals" block implementation.                 
* Inputs        :   HwPosn_HwDeg_T_f32,CalcFlg_Cnt_T_logl                    
* Outputs       :   HwAgTrakgServoCmd_HwDeg_T_f32
* Usage Notes   :   None
*****************************************************************************/
static FUNC(float32, HAGTRAJGENN_CODE) HwAgTrajGenSigs(float32 HwPosn_HwDeg_T_f32,
													   boolean CalcFlg_Cnt_T_logl)
{
	VAR(HwAgTrajCmdSt1, AUTOMATIC) CmdSt_Cnt_T_enum;
	VAR(float32, AUTOMATIC) HwAgTrakgServoCmd_HwDeg_T_f32;
	
	if(CalcFlg_Cnt_T_logl == TRUE)
	{
		CmdSt_Cnt_T_enum = *Rte_Pim_CmdSt();
	}
	else
	{
		CmdSt_Cnt_T_enum = HWAGTRAJCMDST_WAIT;
	}
	
	switch (CmdSt_Cnt_T_enum)
	{			
		case(HWAGTRAJCMDST_WAIT):
		{
			if(CalcFlg_Cnt_T_logl == TRUE)
			{
				*Rte_Pim_CmdSt() = HWAGTRAJCMDST_HWAGA;
			}
			else
			{
				*Rte_Pim_CmdSt() = HWAGTRAJCMDST_WAIT;
			}
			
			*Rte_Pim_TiSt() = 0.0F;			
			*Rte_Pim_HwPosnOffs() = *Rte_Pim_HwPosnIni();			
			HwAgTrakgServoCmd_HwDeg_T_f32 = HwPosn_HwDeg_T_f32;
		}
		break;
		
		case(HWAGTRAJCMDST_HWAGA):
		{
			HwAgTrakgServoCmd_HwDeg_T_f32 = (*Rte_Pim_HwPosnOffs()) + 
											((*Rte_Pim_SignHwPosnDelta()) * 
								             (*Rte_Pim_AMax()) * (ONEOVERTWOMPLR_ULS_F32) *
								             (*Rte_Pim_TiSt()) * (*Rte_Pim_TiSt()));
				
			if((*Rte_Pim_TiSt()) >= (*Rte_Pim_TiDeltaA()))
			{				
				*Rte_Pim_CmdSt() = HWAGTRAJCMDST_CONVEL;				
				*Rte_Pim_TiSt() = 0.0F;				
				*Rte_Pim_HwPosnOffs() = HwAgTrakgServoCmd_HwDeg_T_f32;
			}
			else
			{
				*Rte_Pim_CmdSt() = HWAGTRAJCMDST_HWAGA;				
				*Rte_Pim_TiSt() = (*Rte_Pim_TiSt()) + ARCHGLBPRM_2MILLISEC_SEC_F32;			
			}
		}
		break;
		
		case(HWAGTRAJCMDST_CONVEL):
		{
			HwAgTrakgServoCmd_HwDeg_T_f32 = (*Rte_Pim_HwPosnOffs()) + 
								            ((*Rte_Pim_SignHwPosnDelta()) * 
								             (*Rte_Pim_VelMax()) *
								             (*Rte_Pim_TiSt()));
				
			if((*Rte_Pim_TiSt()) >= (*Rte_Pim_TiDeltaVel()))
			{								
				*Rte_Pim_CmdSt() = HWAGTRAJCMDST_HWAGDECEL;				
				*Rte_Pim_TiSt() = 0.0F;				
				*Rte_Pim_HwPosnOffs() = HwAgTrakgServoCmd_HwDeg_T_f32;
			}
			else
			{
				*Rte_Pim_CmdSt() = HWAGTRAJCMDST_CONVEL;				
				*Rte_Pim_TiSt() = (*Rte_Pim_TiSt()) + ARCHGLBPRM_2MILLISEC_SEC_F32;			
			}
		}
		break;

		case(HWAGTRAJCMDST_HWAGDECEL):
		{
			HwAgTrakgServoCmd_HwDeg_T_f32 = (*Rte_Pim_HwPosnOffs()) + 
								            ((*Rte_Pim_SignHwPosnDelta()) * 
								             (((*Rte_Pim_VelMax()) * (*Rte_Pim_TiSt())) -
								              ((*Rte_Pim_AMax()) * (ONEOVERTWOMPLR_ULS_F32) *
								               (*Rte_Pim_TiSt()) * (*Rte_Pim_TiSt()))));
												   
			if((*Rte_Pim_TiSt()) >= (*Rte_Pim_TiDeltaA()))
			{
				*Rte_Pim_CmdSt() = HWAGTRAJCMDST_HLD;				
				*Rte_Pim_TiSt() = 0.0F;				
				*Rte_Pim_HwPosnOffs() = HwAgTrakgServoCmd_HwDeg_T_f32;
			}
			else
			{
				*Rte_Pim_CmdSt() = HWAGTRAJCMDST_HWAGDECEL;				
				*Rte_Pim_TiSt() = (*Rte_Pim_TiSt()) + ARCHGLBPRM_2MILLISEC_SEC_F32;			
			}
			
		}
		break;
		
		case(HWAGTRAJCMDST_HLD):
		{
			*Rte_Pim_CmdSt() = HWAGTRAJCMDST_HLD;				
			*Rte_Pim_TiSt() = 0.0F;			
			HwAgTrakgServoCmd_HwDeg_T_f32 = *Rte_Pim_HwPosnOffs();
		}
		break;
		
		default:
		break;
	}
	
	return HwAgTrakgServoCmd_HwDeg_T_f32;
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
