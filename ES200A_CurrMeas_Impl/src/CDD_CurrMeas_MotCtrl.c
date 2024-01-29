/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_CurrMeas_MotCtrl.c
* Module Description: Implementation of CurrMeas
* Project           : CBD 
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:          9 %
* %derived_by:       nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/10/15  1        Selva       Initial Version                                                                EA4#361
* 07/14/15  2        Selva       Fixed Anomaly 995 and 1035                                                     EA4#1069 &EA4#1116
* 08/10/15  3        NS          Updated to reflect changes in FDD 2.0.1 - added fault inj                      EA4#1172
* 09/04/15  4        Selva       Fixed Anomaly 1467                                                             EA4#1472
* 09/22/15  5        Selva       updated to v3.1.0                                                              EA4#1667
* 10/20/15  6        Selva       Updated for v3.2.0                                                             EA4#2053
* 03/26/16  7        Rijvi       Updated per design rev. 4.2.0    												EA4#3978 
* 08/01/16  8        Rijvi       Updated per design rev. 4.4.0    												EA4#6642 
* 11/21/16  9        TATA        Updated per design rev. 4.6.0    												EA4#8299 
**********************************************************************************************************************/

#include "Rte_CDD_CurrMeas.h"
#include "CDD_MotCtrlMgr_Data.h"
#include "NxtrMath.h"
#include "CDD_CurrMeas.h"
#include "ElecGlbPrm.h"    
#include "NxtrFixdPt.h"
#include "ArchGlbPrm.h"
#include "FltInj.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 1.1  [NXTRDEV 1.1.2]: Inline functions are used for functions called from Motor Control ISR to allow for throughput optimization */
/* MISRA-C:2004 Rule 12.4 [NXTRDEV 12.4.1]: Function will not any side effects as the function maps back to constant */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value.  Applicable to all casts to void for all Rte_Read and Rte_Write and for client calls that don't have return errors. */
/********************************************* Embedded Local Constants **********************************************/
#define DEGREES30_MOTRAD_F32 0.5236F
#define NANOSECTOSEC_ULS_F32  0.000000001F
#define MAXCURRCORRD_AMPR_F32  200.0F
/******************************************** Local Function Prototypes **********************************************/

LOCAL_INLINE FUNC(boolean, CDD_CurrMeas_APPL_CODE) ProtocolChkEn(boolean MotCtrlMotCurrAdcVly1AdcFaild_Cnt_T_logl, 
															     boolean MotCtrlMotCurrAdcVly2AdcFaild_Cnt_T_logl,
															     boolean MotCtrlMotCurrAdcVly3AdcFaild_Cnt_T_logl);

LOCAL_INLINE FUNC(void, CDD_CurrMeas_APPL_CODE) OffsCalcDEF( float32 MotCtrlBrdgVltg_Volt_T_f32,
																uint32 MotCtrlPhaOnTiA_NanoSec_T_u32, 
                                                                uint32 MotCtrlPhaOnTiB_NanoSec_T_u32, 
																uint32 MotCtrlPhaOnTiC_NanoSec_T_u32,
																P2VAR(float32, AUTOMATIC, CurrMeas_APPL_VAR) MotCurrOffsD_Volt_T_f32,
																P2VAR(float32, AUTOMATIC, CurrMeas_APPL_VAR) MotCurrOffsE_Volt_T_f32,
																P2VAR(float32, AUTOMATIC, CurrMeas_APPL_VAR) MotCurrOffsF_Volt_T_f32);

LOCAL_INLINE FUNC(void, CDD_CurrMeas_APPL_CODE) OffsCalcABC( float32 MotCtrlBrdgVltg_Volt_T_f32,
																uint32 MotCtrlPhaOnTiA_NanoSec_T_u32, 
                                                                uint32 MotCtrlPhaOnTiB_NanoSec_T_u32, 
																uint32 MotCtrlPhaOnTiC_NanoSec_T_u32,
																P2VAR(float32, AUTOMATIC, CurrMeas_APPL_VAR) MotCurrOffsA_Volt_T_f32,
																P2VAR(float32, AUTOMATIC, CurrMeas_APPL_VAR) MotCurrOffsB_Volt_T_f32,
																P2VAR(float32, AUTOMATIC, CurrMeas_APPL_VAR) MotCurrOffsC_Volt_T_f32);
																
LOCAL_INLINE FUNC(float32, CDD_CurrMeas_APPL_CODE) CalcMotCurrMotAgCorrd( uint16 MotCtrlMotAgElec_Rev_T_u0p16, 
                                                                        sint8 MotCtrlMotElecMeclPolarity_Uls_T_s08, 
																	    float32 MotCtrlMotVelMrf_MtrRadpS_T_f32);
																		
LOCAL_INLINE FUNC(void, CDD_CurrMeas_APPL_CODE) CalMotCurrCorrdABC( float32 MotCurrOffsA_Volt_T_f32,
                                                                    float32 MotCurrOffsB_Volt_T_f32,
																	float32 MotCurrOffsC_Volt_T_f32
																	);
LOCAL_INLINE FUNC(void, CDD_CurrMeas_APPL_CODE) CalMotCurrCorrdDEF( float32 MotCurrOffsD_Volt_T_f32,
                                                                    float32 MotCurrOffsE_Volt_T_f32,
																	float32 MotCurrOffsF_Volt_T_f32);
															

#define CDD_CurrMeas_MotCtrl_START_SEC_CODE
#include "CDD_CurrMeas_MotCtrl_MemMap.h" 
															
 /*****************************************************************************
  * Name:   CurrMeasPer2
  * Description: Created for  Current measurement 
  * Inputs:      None
  * Outputs:     None
  * Usage notes: Called by Motor control ISR (Call rate 2*MtrCtrlISR)
*****************************************************************************/ 
FUNC(void, CDD_CurrMeas_APPL_CODE) CurrMeasPer2(void)
{ 
VAR(float32, AUTOMATIC) 	MotCtrlBrdgVltg_Volt_T_f32; 			  		
VAR(boolean, AUTOMATIC) 	MotCtrlDiagcStsIvtr1Inactv_Cnt_T_logl;
VAR(boolean, AUTOMATIC) 	MotCtrlDiagcStsIvtr2Inactv_Cnt_T_logl ;
VAR(uint16,  AUTOMATIC)  	MotCtrlMotAgElec_Rev_T_u0p16; 	 
VAR(sint8,   AUTOMATIC)  	MotCtrlMotElecMeclPolarity_Uls_T_s08; 
VAR(float32, AUTOMATIC)  	MotCtrlMotVelMrf_MtrRadpS_T_f32;  	
VAR(uint32,  AUTOMATIC)  	MotCtrlPhaOnTiA_NanoSec_T_u32; 	
VAR(uint32,  AUTOMATIC)  	MotCtrlPhaOnTiB_NanoSec_T_u32;  	
VAR(uint32,  AUTOMATIC)  	MotCtrlPhaOnTiC_NanoSec_T_u32; 	 	 
VAR(SysSt1,  AUTOMATIC)  	MotCtrlSysSt_T_enum ;	
VAR(boolean, AUTOMATIC) 	PrtclChkENABC_Cnt_T_logl;
VAR(boolean, AUTOMATIC) 	PrtclChkENDEF_Cnt_T_logl;
VAR(float32, AUTOMATIC)  	MotCurrOffsA_Volt_T_f32;
VAR(float32, AUTOMATIC)  	MotCurrOffsB_Volt_T_f32;
VAR(float32, AUTOMATIC)  	MotCurrOffsC_Volt_T_f32;
VAR(float32, AUTOMATIC)  	MotCurrOffsD_Volt_T_f32;
VAR(float32, AUTOMATIC)  	MotCurrOffsE_Volt_T_f32;
VAR(float32, AUTOMATIC)  	MotCurrOffsF_Volt_T_f32;
VAR(float32, AUTOMATIC) 	MotCtrlCurrMeasMotAgCorrd_Rad_T_f32;
VAR(boolean, AUTOMATIC) 	MotCtrlCurrMeasWrmIninTestCmpl_Cnt_T_logl;

VAR(boolean, AUTOMATIC)     MotCtrlMotCurrAdcVlyAAdcFaild_Cnt_T_logl;
VAR(boolean, AUTOMATIC)     MotCtrlMotCurrAdcVlyBAdcFaild_Cnt_T_logl;
VAR(boolean, AUTOMATIC)     MotCtrlMotCurrAdcVlyCAdcFaild_Cnt_T_logl;
VAR(boolean, AUTOMATIC)     MotCtrlMotCurrAdcVlyDAdcFaild_Cnt_T_logl;
VAR(boolean, AUTOMATIC)     MotCtrlMotCurrAdcVlyEAdcFaild_Cnt_T_logl;
VAR(boolean, AUTOMATIC)     MotCtrlMotCurrAdcVlyFAdcFaild_Cnt_T_logl;


MotCtrlBrdgVltg_Volt_T_f32 			    = MOTCTRLMGR_MotCtrlBrdgVltg;              
MotCtrlDiagcStsIvtr1Inactv_Cnt_T_logl	= MOTCTRLMGR_MotCtrlDiagcStsIvtr1Inactv;    
MotCtrlDiagcStsIvtr2Inactv_Cnt_T_logl 	= MOTCTRLMGR_MotCtrlDiagcStsIvtr2Inactv;    
MotCtrlMotAgElec_Rev_T_u0p16 			= MOTCTRLMGR_MotCtrlMotAgElec;          
MotCtrlMotElecMeclPolarity_Uls_T_s08 	= MOTCTRLMGR_MotCtrlMotElecMeclPolarity; 
MotCtrlMotVelMrf_MtrRadpS_T_f32  		= MOTCTRLMGR_MotCtrlMotVelMrf;          
MotCtrlPhaOnTiA_NanoSec_T_u32 			= MOTCTRLMGR_MotCtrlPhaOnTiA;           
MotCtrlPhaOnTiB_NanoSec_T_u32  			= MOTCTRLMGR_MotCtrlPhaOnTiB;           
MotCtrlPhaOnTiC_NanoSec_T_u32 			= MOTCTRLMGR_MotCtrlPhaOnTiC;           
MotCtrlSysSt_T_enum 				    = MOTCTRLMGR_MotCtrlSysSt;              
MotCtrlCurrMeasWrmIninTestCmpl_Cnt_T_logl = MOTCTRLMGR_MotCtrlCurrMeasWrmIninTestCmpl;  

MotCtrlMotCurrAdcVlyAAdcFaild_Cnt_T_logl  =  MOTCTRLMGR_MotCtrlMotCurrAdcVlyAAdcFaild; 
MotCtrlMotCurrAdcVlyBAdcFaild_Cnt_T_logl  =  MOTCTRLMGR_MotCtrlMotCurrAdcVlyBAdcFaild; 
MotCtrlMotCurrAdcVlyCAdcFaild_Cnt_T_logl  =  MOTCTRLMGR_MotCtrlMotCurrAdcVlyCAdcFaild; 
MotCtrlMotCurrAdcVlyDAdcFaild_Cnt_T_logl  =  MOTCTRLMGR_MotCtrlMotCurrAdcVlyDAdcFaild; 
MotCtrlMotCurrAdcVlyEAdcFaild_Cnt_T_logl  =  MOTCTRLMGR_MotCtrlMotCurrAdcVlyEAdcFaild; 
MotCtrlMotCurrAdcVlyFAdcFaild_Cnt_T_logl  =  MOTCTRLMGR_MotCtrlMotCurrAdcVlyFAdcFaild; 


if (((MotCtrlSysSt_T_enum == SYSST_ENA) || (MotCtrlSysSt_T_enum == SYSST_WRMININ)) && (MotCtrlCurrMeasWrmIninTestCmpl_Cnt_T_logl == TRUE))
{
  if(MotCtrlDiagcStsIvtr1Inactv_Cnt_T_logl == FALSE)  
  {
        PrtclChkENABC_Cnt_T_logl = ProtocolChkEn(MotCtrlMotCurrAdcVlyAAdcFaild_Cnt_T_logl, MotCtrlMotCurrAdcVlyBAdcFaild_Cnt_T_logl, MotCtrlMotCurrAdcVlyCAdcFaild_Cnt_T_logl );
        
		#if (STD_ON == FLTINJENA)  
		(void)FltInj_u08_Oper(&PrtclChkENABC_Cnt_T_logl, FLTINJ_CURRMEAS_TESTOK); 
		#endif
		
		if( PrtclChkENABC_Cnt_T_logl == TRUE) 
			 
		{
			*Rte_Pim_MotCurrRollgCnt1Prev() = *Rte_Pim_MotCurrRollgCnt1Prev() + 1U; /* Overflow is intentional*/ 
			
			(void)OffsCalcABC( MotCtrlBrdgVltg_Volt_T_f32, MotCtrlPhaOnTiA_NanoSec_T_u32, MotCtrlPhaOnTiB_NanoSec_T_u32, MotCtrlPhaOnTiC_NanoSec_T_u32,&MotCurrOffsA_Volt_T_f32,&MotCurrOffsB_Volt_T_f32,&MotCurrOffsC_Volt_T_f32);  
	     
			(void)CalMotCurrCorrdABC(MotCurrOffsA_Volt_T_f32,MotCurrOffsB_Volt_T_f32,MotCurrOffsC_Volt_T_f32);
		} 
		 
		else 
		
		{
			*Rte_Pim_MotCtrlNtc5DErrCntPrev() = *Rte_Pim_MotCtrlNtc5DErrCntPrev()+1U;
		}
		
		 
        #if (STD_ON == FLTINJENA)  
            (void)FltInj_f32_Oper(&MOTCTRLMGR_MotCtrlMotCurrCorrdA, FLTINJ_CURRMEAS_MOTCURRCORRDA);
        #endif
  }
  
  if ((ELECGLBPRM_IVTRCNT_CNT_U08 ==2U) && (MotCtrlDiagcStsIvtr2Inactv_Cnt_T_logl == FALSE))
  {
		 PrtclChkENDEF_Cnt_T_logl = ProtocolChkEn(MotCtrlMotCurrAdcVlyDAdcFaild_Cnt_T_logl, MotCtrlMotCurrAdcVlyEAdcFaild_Cnt_T_logl, MotCtrlMotCurrAdcVlyFAdcFaild_Cnt_T_logl);
		 if( PrtclChkENDEF_Cnt_T_logl == TRUE) 
			 
		 {
			*Rte_Pim_MotCurrRollgCnt2Prev() = *Rte_Pim_MotCurrRollgCnt2Prev() +1U; 
			(void)OffsCalcDEF(MotCtrlBrdgVltg_Volt_T_f32,  MotCtrlPhaOnTiA_NanoSec_T_u32,MotCtrlPhaOnTiB_NanoSec_T_u32,MotCtrlPhaOnTiC_NanoSec_T_u32,&MotCurrOffsD_Volt_T_f32,&MotCurrOffsE_Volt_T_f32,&MotCurrOffsF_Volt_T_f32 );
			(void)CalMotCurrCorrdDEF(MotCurrOffsD_Volt_T_f32, MotCurrOffsE_Volt_T_f32, MotCurrOffsF_Volt_T_f32);
		 } 
		 
		 else 
		
		 {
	  	    *Rte_Pim_MotCtrlNtc6DErrCntPrev() = *Rte_Pim_MotCtrlNtc6DErrCntPrev()+1U;
     		
		 } 
		 
		 		
        #if (STD_ON == FLTINJENA)  
            (void)FltInj_f32_Oper(&MOTCTRLMGR_MotCtrlMotCurrCorrdD, FLTINJ_CURRMEAS_MOTCURRCORRDD); 
        #endif
  }
  
  MotCtrlCurrMeasMotAgCorrd_Rad_T_f32 = CalcMotCurrMotAgCorrd(MotCtrlMotAgElec_Rev_T_u0p16, MotCtrlMotElecMeclPolarity_Uls_T_s08, MotCtrlMotVelMrf_MtrRadpS_T_f32);
  MOTCTRLMGR_MotCtrlCurrMeasMotAgCorrd = MotCtrlCurrMeasMotAgCorrd_Rad_T_f32;
  MOTCTRLMGR_MotCtrlNtc5DErrCnt =  *Rte_Pim_MotCtrlNtc5DErrCntPrev();
  MOTCTRLMGR_MotCtrlNtc6DErrCnt =  *Rte_Pim_MotCtrlNtc6DErrCntPrev();
}

MOTCTRLMGR_MotCtrlMotCurrRollgCntr1 = *Rte_Pim_MotCurrRollgCnt1Prev();
MOTCTRLMGR_MotCtrlMotCurrRollgCntr2 = *Rte_Pim_MotCurrRollgCnt2Prev();

}

/******************************** Local Functions***************************/


/*****************************************************************************
  * Name:        OffsCalcABC
  * Description: Calculate the offset for ABC
  * Inputs:      MotCtrlBrdgVltg_Volt_T_f32
  *              MotCtrlPhaOnTiA_NanoSec_T_u32
				 MotCtrlPhaOnTiB_NanoSec_T_u32
				 MotCtrlPhaOnTiC_NanoSec_T_u32
  * Inputs/Output:           None
  * Inputs/Output:           None
  * Outputs:                MotCurrOffsA_Volt_T_f32
                            MotCurrOffsB_Volt_T_f32
							MotCurrOffsC_Volt_T_f32
  *
*****************************************************************************/ 
LOCAL_INLINE FUNC(void, CDD_CurrMeas_APPL_CODE) OffsCalcABC( float32 MotCtrlBrdgVltg_Volt_T_f32,
																uint32 MotCtrlPhaOnTiA_NanoSec_T_u32, 
                                                                uint32 MotCtrlPhaOnTiB_NanoSec_T_u32, 
																uint32 MotCtrlPhaOnTiC_NanoSec_T_u32,
																P2VAR(float32, AUTOMATIC, CurrMeas_APPL_VAR) MotCurrOffsA_Volt_T_f32,
																P2VAR(float32, AUTOMATIC, CurrMeas_APPL_VAR) MotCurrOffsB_Volt_T_f32,
																P2VAR(float32, AUTOMATIC, CurrMeas_APPL_VAR) MotCurrOffsC_Volt_T_f32)
{


 *MotCurrOffsA_Volt_T_f32 = ((float32)((float32)MotCtrlPhaOnTiA_NanoSec_T_u32 -(float32)Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val()) * MotCtrlBrdgVltg_Volt_T_f32 * (*Rte_Pim_MotCurrOffsDeltaA())) +  Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgA;
 *MotCurrOffsB_Volt_T_f32 = ((float32)((float32)MotCtrlPhaOnTiB_NanoSec_T_u32 -(float32)Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val()) * MotCtrlBrdgVltg_Volt_T_f32 * (*Rte_Pim_MotCurrOffsDeltaB())) +  Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgB;
 *MotCurrOffsC_Volt_T_f32 = ((float32)((float32)MotCtrlPhaOnTiC_NanoSec_T_u32 -(float32)Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val()) * MotCtrlBrdgVltg_Volt_T_f32 * (*Rte_Pim_MotCurrOffsDeltaC())) +  Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgC;

}


/*****************************************************************************
  * Name:        OffsCalcDEF
  * Description: Calculate the offset for DEF
  * Inputs:      MotCtrlBrdgVltg_Volt_T_f32
  *              MotCtrlPhaOnTiA_NanoSec_T_u32
				 MotCtrlPhaOnTiB_NanoSec_T_u32
				 MotCtrlPhaOnTiC_NanoSec_T_u32
  * Inputs/Output:           None
  * Inputs/Output:           None
  * Outputs:                MotCurrOffsD_Volt_T_f32
                            MotCurrOffsE_Volt_T_f32
							MotCurrOffsF_Volt_T_f32
  *
*****************************************************************************/ 
LOCAL_INLINE FUNC(void, CDD_CurrMeas_APPL_CODE) OffsCalcDEF( float32 MotCtrlBrdgVltg_Volt_T_f32,
																uint32 MotCtrlPhaOnTiA_NanoSec_T_u32, 
                                                                uint32 MotCtrlPhaOnTiB_NanoSec_T_u32, 
																uint32 MotCtrlPhaOnTiC_NanoSec_T_u32,
																P2VAR(float32, AUTOMATIC, CurrMeas_APPL_VAR) MotCurrOffsD_Volt_T_f32,
																P2VAR(float32, AUTOMATIC, CurrMeas_APPL_VAR) MotCurrOffsE_Volt_T_f32,
																P2VAR(float32, AUTOMATIC, CurrMeas_APPL_VAR) MotCurrOffsF_Volt_T_f32)
{


 *MotCurrOffsD_Volt_T_f32 = ((float32)((float32)MotCtrlPhaOnTiA_NanoSec_T_u32 -(float32)Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val()) * MotCtrlBrdgVltg_Volt_T_f32 * (*Rte_Pim_MotCurrOffsDeltaD())) +  Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgD;
 *MotCurrOffsE_Volt_T_f32 = ((float32)((float32)MotCtrlPhaOnTiB_NanoSec_T_u32 -(float32)Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val()) * MotCtrlBrdgVltg_Volt_T_f32 * (*Rte_Pim_MotCurrOffsDeltaE())) +  Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgE;
 *MotCurrOffsF_Volt_T_f32 = ((float32)((float32)MotCtrlPhaOnTiC_NanoSec_T_u32 -(float32)Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val()) * MotCtrlBrdgVltg_Volt_T_f32 * (*Rte_Pim_MotCurrOffsDeltaF())) +  Rte_Pim_CurrMeasEolOffsCalSet()->CurrMeasMotCurrOffsLoAvrgF;

}   


/*****************************************************************************
  * Name:        CalMotCurrCorrdABC
  * Description: Calculate the offset for ABC
  * Inputs:      MotCurrOffsA_Volt_T_f32
  *              MotCurrOffsB_Volt_T_f32
				 MotCurrOffsC_Volt_T_f32
  * Inputs/Output:           None
  * Inputs/Output:           None
  * Outputs:                MotCtrlMotCurrCorrdA
                            MotCtrlMotCurrCorrdB
							MotCtrlMotCurrCorrdC
  *
*****************************************************************************/ 
LOCAL_INLINE FUNC(void, CDD_CurrMeas_APPL_CODE) CalMotCurrCorrdABC(float32 MotCurrOffsA_Volt_T_f32,
                                                                    float32 MotCurrOffsB_Volt_T_f32,
																	float32 MotCurrOffsC_Volt_T_f32
																	)
{

VAR(float32, AUTOMATIC)  MotCtrlMotCurrAdcVlyA_Volt_T_f32;  
VAR(float32, AUTOMATIC)  MotCtrlMotCurrAdcVlyB_Volt_T_f32;  
VAR(float32, AUTOMATIC)  MotCtrlMotCurrAdcVlyC_Volt_T_f32; 
VAR(uint32, AUTOMATIC)  MotCtrlPhaOnTiA_NanoSec_T_u32; 	
VAR(uint32, AUTOMATIC)  MotCtrlPhaOnTiB_NanoSec_T_u32;  	
VAR(uint32, AUTOMATIC)  MotCtrlPhaOnTiC_NanoSec_T_u32; 	
VAR(uint32, AUTOMATIC)  MotCtrlPwmPerd_NanoSec_T_u32; 
VAR(float32, AUTOMATIC)  MotCtrlMotCurrCorrdA_Ampr_T_f32;
VAR(float32, AUTOMATIC)  MotCtrlMotCurrCorrdB_Ampr_T_f32;
VAR(float32, AUTOMATIC)  MotCtrlMotCurrCorrdC_Ampr_T_f32;

MotCtrlMotCurrAdcVlyA_Volt_T_f32  		= MOTCTRLMGR_MotCtrlMotCurrAdcVlyA;
MotCtrlMotCurrAdcVlyB_Volt_T_f32  		= MOTCTRLMGR_MotCtrlMotCurrAdcVlyB;
MotCtrlMotCurrAdcVlyC_Volt_T_f32 		= MOTCTRLMGR_MotCtrlMotCurrAdcVlyC;
MotCtrlPhaOnTiA_NanoSec_T_u32 			= MOTCTRLMGR_MotCtrlPhaOnTiA;
MotCtrlPhaOnTiB_NanoSec_T_u32  			= MOTCTRLMGR_MotCtrlPhaOnTiB;
MotCtrlPhaOnTiC_NanoSec_T_u32 			= MOTCTRLMGR_MotCtrlPhaOnTiC;
MotCtrlPwmPerd_NanoSec_T_u32  			= MOTCTRLMGR_MotCtrlPwmPerd; 


if (((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiA_NanoSec_T_u32) >= Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()) &&
	((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiB_NanoSec_T_u32) >= Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()) &&
	((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiC_NanoSec_T_u32) >= Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()))
{
	 
	MotCtrlMotCurrCorrdA_Ampr_T_f32 = (MotCtrlMotCurrAdcVlyA_Volt_T_f32 - MotCurrOffsA_Volt_T_f32) * (-Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainA); 
	MotCtrlMotCurrCorrdB_Ampr_T_f32 = (MotCtrlMotCurrAdcVlyB_Volt_T_f32 - MotCurrOffsB_Volt_T_f32) * (-Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainB); 
	MotCtrlMotCurrCorrdC_Ampr_T_f32 = (MotCtrlMotCurrAdcVlyC_Volt_T_f32 - MotCurrOffsC_Volt_T_f32) * (-Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainC); 
	MOTCTRLMGR_MotCtrlMotCurrCorrdA =  Lim_f32(MotCtrlMotCurrCorrdA_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
	MOTCTRLMGR_MotCtrlMotCurrCorrdB =  Lim_f32(MotCtrlMotCurrCorrdB_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
	MOTCTRLMGR_MotCtrlMotCurrCorrdC =  Lim_f32(MotCtrlMotCurrCorrdC_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
}	
else if( (((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiA_NanoSec_T_u32) < Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()) &&
	((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiB_NanoSec_T_u32) >= Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()) &&
	((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiC_NanoSec_T_u32) >= Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val())))
{
    MotCtrlMotCurrCorrdB_Ampr_T_f32 = (MotCtrlMotCurrAdcVlyB_Volt_T_f32 - MotCurrOffsB_Volt_T_f32) * (-Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainB);
	MotCtrlMotCurrCorrdC_Ampr_T_f32 = (MotCtrlMotCurrAdcVlyC_Volt_T_f32 - MotCurrOffsC_Volt_T_f32) * (-Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainC);
	MotCtrlMotCurrCorrdA_Ampr_T_f32 = -MotCtrlMotCurrCorrdB_Ampr_T_f32  - MotCtrlMotCurrCorrdC_Ampr_T_f32;
	MOTCTRLMGR_MotCtrlMotCurrCorrdA =  Lim_f32(MotCtrlMotCurrCorrdA_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
	MOTCTRLMGR_MotCtrlMotCurrCorrdB =  Lim_f32(MotCtrlMotCurrCorrdB_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
	MOTCTRLMGR_MotCtrlMotCurrCorrdC =  Lim_f32(MotCtrlMotCurrCorrdC_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
	
}
else if( (((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiA_NanoSec_T_u32) >= Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()) &&
	((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiB_NanoSec_T_u32) < Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()) &&
	((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiC_NanoSec_T_u32) >= Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val())))
{ 
     MotCtrlMotCurrCorrdA_Ampr_T_f32 = (MotCtrlMotCurrAdcVlyA_Volt_T_f32 - MotCurrOffsA_Volt_T_f32) * (-Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainA);
	 MotCtrlMotCurrCorrdC_Ampr_T_f32 = (MotCtrlMotCurrAdcVlyC_Volt_T_f32 - MotCurrOffsC_Volt_T_f32) * (-Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainC);
	 MotCtrlMotCurrCorrdB_Ampr_T_f32 = -MotCtrlMotCurrCorrdA_Ampr_T_f32  - MotCtrlMotCurrCorrdC_Ampr_T_f32;
	 MOTCTRLMGR_MotCtrlMotCurrCorrdA =  Lim_f32(MotCtrlMotCurrCorrdA_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
	 MOTCTRLMGR_MotCtrlMotCurrCorrdB =  Lim_f32(MotCtrlMotCurrCorrdB_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
	 MOTCTRLMGR_MotCtrlMotCurrCorrdC =  Lim_f32(MotCtrlMotCurrCorrdC_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
}
else if( (((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiA_NanoSec_T_u32) >= Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()) &&
	((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiB_NanoSec_T_u32) >= Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()) &&
	((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiC_NanoSec_T_u32) < Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val())))
{ 
     MotCtrlMotCurrCorrdA_Ampr_T_f32 = (MotCtrlMotCurrAdcVlyA_Volt_T_f32 - MotCurrOffsA_Volt_T_f32) * (-Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainA);
     MotCtrlMotCurrCorrdB_Ampr_T_f32 =  (MotCtrlMotCurrAdcVlyB_Volt_T_f32 - MotCurrOffsB_Volt_T_f32) * (-Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainB);
	 MotCtrlMotCurrCorrdC_Ampr_T_f32 = -MotCtrlMotCurrCorrdB_Ampr_T_f32  - MotCtrlMotCurrCorrdA_Ampr_T_f32;
	 MOTCTRLMGR_MotCtrlMotCurrCorrdA =  Lim_f32(MotCtrlMotCurrCorrdA_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
	 MOTCTRLMGR_MotCtrlMotCurrCorrdB =  Lim_f32(MotCtrlMotCurrCorrdB_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
	 MOTCTRLMGR_MotCtrlMotCurrCorrdC =  Lim_f32(MotCtrlMotCurrCorrdC_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
}
else
{   
	*Rte_Pim_PhaOnTiErrCntPrev() = *Rte_Pim_PhaOnTiErrCntPrev() + 1U;
}	


}



/*****************************************************************************
  * Name:        CalMotCurrCorrdDEF
  * Description: Calculate the offset for DEF
  * Inputs:      MotCurrOffsD_Volt_T_f32
  *              MotCurrOffsE_Volt_T_f32
				 MotCurrOffsF_Volt_T_f32
  * Inputs/Output:           None
  * Inputs/Output:           None
  * Outputs:                MotCtrlMotCurrCorrdA
                            MotCtrlMotCurrCorrdB
							MotCtrlMotCurrCorrdC
  *
*****************************************************************************/ 
LOCAL_INLINE FUNC(void, CDD_CurrMeas_APPL_CODE) CalMotCurrCorrdDEF(float32 MotCurrOffsD_Volt_T_f32,
                                                                    float32 MotCurrOffsE_Volt_T_f32,
																	float32 MotCurrOffsF_Volt_T_f32)
{

	VAR(float32, AUTOMATIC)  MotCtrlMotCurrAdcVlyD_Volt_T_f32;  
	VAR(float32, AUTOMATIC)  MotCtrlMotCurrAdcVlyE_Volt_T_f32;  
	VAR(float32, AUTOMATIC)  MotCtrlMotCurrAdcVlyF_Volt_T_f32; 
	VAR(uint32, AUTOMATIC)  MotCtrlPhaOnTiA_NanoSec_T_u32; 	
	VAR(uint32, AUTOMATIC)  MotCtrlPhaOnTiB_NanoSec_T_u32;  	
	VAR(uint32, AUTOMATIC)  MotCtrlPhaOnTiC_NanoSec_T_u32; 	
	VAR(uint32, AUTOMATIC)  MotCtrlPwmPerd_NanoSec_T_u32; 
	VAR(float32, AUTOMATIC)  MotCtrlMotCurrCorrdD_Ampr_T_f32;
	VAR(float32, AUTOMATIC)  MotCtrlMotCurrCorrdE_Ampr_T_f32;
	VAR(float32, AUTOMATIC)  MotCtrlMotCurrCorrdF_Ampr_T_f32;

	MotCtrlMotCurrAdcVlyD_Volt_T_f32  		= MOTCTRLMGR_MotCtrlMotCurrAdcVlyD;
	MotCtrlMotCurrAdcVlyE_Volt_T_f32  		= MOTCTRLMGR_MotCtrlMotCurrAdcVlyE;
	MotCtrlMotCurrAdcVlyF_Volt_T_f32 		= MOTCTRLMGR_MotCtrlMotCurrAdcVlyF;
	MotCtrlPhaOnTiA_NanoSec_T_u32 			= MOTCTRLMGR_MotCtrlPhaOnTiA;
	MotCtrlPhaOnTiB_NanoSec_T_u32  			= MOTCTRLMGR_MotCtrlPhaOnTiB;
	MotCtrlPhaOnTiC_NanoSec_T_u32 			= MOTCTRLMGR_MotCtrlPhaOnTiC;
	MotCtrlPwmPerd_NanoSec_T_u32  			= MOTCTRLMGR_MotCtrlPwmPerd;

	if (((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiA_NanoSec_T_u32) >= Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()) &&
		((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiB_NanoSec_T_u32) >= Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()) &&
		((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiC_NanoSec_T_u32) >= Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()))
	{
		 
		MotCtrlMotCurrCorrdD_Ampr_T_f32 = (MotCtrlMotCurrAdcVlyD_Volt_T_f32 - MotCurrOffsD_Volt_T_f32) * (-Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainD);
		MotCtrlMotCurrCorrdE_Ampr_T_f32 = (MotCtrlMotCurrAdcVlyE_Volt_T_f32 - MotCurrOffsE_Volt_T_f32) * (-Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainE);
		MotCtrlMotCurrCorrdF_Ampr_T_f32 = (MotCtrlMotCurrAdcVlyF_Volt_T_f32 - MotCurrOffsF_Volt_T_f32) * (-Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainF);
		MOTCTRLMGR_MotCtrlMotCurrCorrdD =  Lim_f32(MotCtrlMotCurrCorrdD_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
		MOTCTRLMGR_MotCtrlMotCurrCorrdE =  Lim_f32(MotCtrlMotCurrCorrdE_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
		MOTCTRLMGR_MotCtrlMotCurrCorrdF =  Lim_f32(MotCtrlMotCurrCorrdF_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
		
	}	
	else if (((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiA_NanoSec_T_u32) < Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()) &&
		((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiB_NanoSec_T_u32) >= Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()) &&
		((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiC_NanoSec_T_u32) >= Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()))
	{
		MotCtrlMotCurrCorrdE_Ampr_T_f32 = (MotCtrlMotCurrAdcVlyE_Volt_T_f32 - MotCurrOffsE_Volt_T_f32) * (-Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainE);
		MotCtrlMotCurrCorrdF_Ampr_T_f32 = (MotCtrlMotCurrAdcVlyF_Volt_T_f32 - MotCurrOffsF_Volt_T_f32) * (-Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainF);
		MotCtrlMotCurrCorrdD_Ampr_T_f32 = -MotCtrlMotCurrCorrdE_Ampr_T_f32  - MotCtrlMotCurrCorrdF_Ampr_T_f32;
		MOTCTRLMGR_MotCtrlMotCurrCorrdD =  Lim_f32(MotCtrlMotCurrCorrdD_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
		MOTCTRLMGR_MotCtrlMotCurrCorrdE =  Lim_f32(MotCtrlMotCurrCorrdE_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
		MOTCTRLMGR_MotCtrlMotCurrCorrdF =  Lim_f32(MotCtrlMotCurrCorrdF_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
		
	}
	else if (((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiA_NanoSec_T_u32) >= Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()) &&
		((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiB_NanoSec_T_u32) < Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()) &&
		((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiC_NanoSec_T_u32) >= Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()))
	{ 
		MotCtrlMotCurrCorrdD_Ampr_T_f32 = (MotCtrlMotCurrAdcVlyD_Volt_T_f32 - MotCurrOffsD_Volt_T_f32) * (-Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainD);
		MotCtrlMotCurrCorrdF_Ampr_T_f32 = (MotCtrlMotCurrAdcVlyF_Volt_T_f32 - MotCurrOffsF_Volt_T_f32) * (-Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainF);
		MotCtrlMotCurrCorrdE_Ampr_T_f32 = -MotCtrlMotCurrCorrdD_Ampr_T_f32  - MotCtrlMotCurrCorrdF_Ampr_T_f32;
		MOTCTRLMGR_MotCtrlMotCurrCorrdD =  Lim_f32(MotCtrlMotCurrCorrdD_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
		MOTCTRLMGR_MotCtrlMotCurrCorrdE =  Lim_f32(MotCtrlMotCurrCorrdE_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
		MOTCTRLMGR_MotCtrlMotCurrCorrdF =  Lim_f32(MotCtrlMotCurrCorrdF_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
	}
	else if (((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiA_NanoSec_T_u32) >= Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()) &&
		((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiB_NanoSec_T_u32) >= Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()) &&
		((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiC_NanoSec_T_u32) < Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()))
	{ 
		 MotCtrlMotCurrCorrdD_Ampr_T_f32 = (MotCtrlMotCurrAdcVlyD_Volt_T_f32 - MotCurrOffsD_Volt_T_f32) * (-Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainD);
		 MotCtrlMotCurrCorrdE_Ampr_T_f32 =  (MotCtrlMotCurrAdcVlyE_Volt_T_f32 - MotCurrOffsE_Volt_T_f32) * (-Rte_Pim_CurrMeasEolGainCalSet()->CurrMeasMotCurrEolGainE);
		 MotCtrlMotCurrCorrdF_Ampr_T_f32 = -MotCtrlMotCurrCorrdE_Ampr_T_f32  - MotCtrlMotCurrCorrdD_Ampr_T_f32;
		 MOTCTRLMGR_MotCtrlMotCurrCorrdD =  Lim_f32(MotCtrlMotCurrCorrdD_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
		 MOTCTRLMGR_MotCtrlMotCurrCorrdE =  Lim_f32(MotCtrlMotCurrCorrdE_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
		 MOTCTRLMGR_MotCtrlMotCurrCorrdF =  Lim_f32(MotCtrlMotCurrCorrdF_Ampr_T_f32,-MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32); 
	}
	else
	{   
	 /******** Do nothing**************/
	}	

}


/*****************************************************************************
  * Name:        CalcMotCurrMotAgCorrd
  * Description: Calculate the offset for DEF
  * Inputs:      MotCtrlMotAgElec_Rev_T_u0p16                      - Electrical angle
  *              MotCtrlMotElecMeclPolarity_Uls_T_s08              - Polarity
				 MotCtrlMotVelMrf_MtrRadpS_T_f32                   - MotorVelocity
  * Inputs/Output:           None
  * Inputs/Output:           None
  * Outputs:               MotCtrlCurrMeasMotAgCorrd_Rad_T_f32  (Final Corrected angle)
                            
							
  *
*****************************************************************************/ 


LOCAL_INLINE FUNC(float32, CDD_CurrMeas_APPL_CODE) CalcMotCurrMotAgCorrd( uint16 MotCtrlMotAgElec_Rev_T_u0p16, 
                                                                        sint8 MotCtrlMotElecMeclPolarity_Uls_T_s08, 
																	    float32 MotCtrlMotVelMrf_MtrRadpS_T_f32)	

{
	
	VAR(float32, AUTOMATIC)  MotCtrlMotAgElec_Rev_T_f32;
	VAR(float32, AUTOMATIC)  MotCtrlCurrMeasMotAgCorrd_Rad_T_f32;

	MotCtrlMotAgElec_Rev_T_f32 = FixdToFloat_f32_u16(MotCtrlMotAgElec_Rev_T_u0p16, NXTRFIXDPT_P16TOFLOAT_ULS_F32);
	MotCtrlCurrMeasMotAgCorrd_Rad_T_f32 = ((MotCtrlMotAgElec_Rev_T_f32 *  ARCHGLBPRM_2PI_ULS_F32) - ((float32)MotCtrlMotElecMeclPolarity_Uls_T_s08*DEGREES30_MOTRAD_F32)) + (((float32)Rte_Prm_SysGlbPrmMotPoleCnt_Val()*0.5F) * MotCtrlMotVelMrf_MtrRadpS_T_f32 * (float32) Rte_Prm_CurrMeasMotAgCompuDly_Val() * NANOSECTOSEC_ULS_F32) ;
	
	/* +/- 2*Pi Rollover */
	if( MotCtrlCurrMeasMotAgCorrd_Rad_T_f32 > ARCHGLBPRM_2PI_ULS_F32 )
	{	
		/* 2*pi Rollover */
		MotCtrlCurrMeasMotAgCorrd_Rad_T_f32 = MotCtrlCurrMeasMotAgCorrd_Rad_T_f32 - ARCHGLBPRM_2PI_ULS_F32;
	}
	else if( MotCtrlCurrMeasMotAgCorrd_Rad_T_f32 < (-ARCHGLBPRM_2PI_ULS_F32) )
	{	
		/* -2*pi Rollover */
		MotCtrlCurrMeasMotAgCorrd_Rad_T_f32 = MotCtrlCurrMeasMotAgCorrd_Rad_T_f32 + ARCHGLBPRM_2PI_ULS_F32;
	}
	else
	{
		/* Pass Through */
	}
	
	
	return MotCtrlCurrMeasMotAgCorrd_Rad_T_f32;	

}	

/*****************************************************************************
  * Name:        ProtocolChkEn
  * Description: None 
  * Inputs:      MotCtrlMotCurrAdcVly1AdcFaild_Cnt_T_logl - Input1
  *              MotCtrlMotCurrAdcVly2AdcFaild_Cnt_T_logl --Input2
  *		         MotCtrlMotCurrAdcVly3AdcFaild_Cnt_T_logl --Input3
  * Inputs/Output:           None
  * Inputs/Output:           None
  * Outputs:                 True or False
  *
*****************************************************************************/ 
LOCAL_INLINE FUNC(boolean, CDD_CurrMeas_APPL_CODE) ProtocolChkEn(boolean MotCtrlMotCurrAdcVly1AdcFaild_Cnt_T_logl, 
															     boolean MotCtrlMotCurrAdcVly2AdcFaild_Cnt_T_logl,
															     boolean MotCtrlMotCurrAdcVly3AdcFaild_Cnt_T_logl)
{
 
 VAR(boolean, AUTOMATIC) ProtocolChkEn_Cnt_T_logl ;
 
 if( (MotCtrlMotCurrAdcVly1AdcFaild_Cnt_T_logl == FALSE) && 
     (MotCtrlMotCurrAdcVly2AdcFaild_Cnt_T_logl == FALSE) && 
	 (MotCtrlMotCurrAdcVly3AdcFaild_Cnt_T_logl == FALSE) )
 {
	 ProtocolChkEn_Cnt_T_logl = TRUE; 
 }
 else
 {
	 ProtocolChkEn_Cnt_T_logl = FALSE;
 }

 
 return(ProtocolChkEn_Cnt_T_logl);
}	

/****************************** End of Local Functions*****************************************/


#define CDD_CurrMeas_MotCtrl_STOP_SEC_CODE
#include "CDD_CurrMeas_MotCtrl_MemMap.h" 																	

