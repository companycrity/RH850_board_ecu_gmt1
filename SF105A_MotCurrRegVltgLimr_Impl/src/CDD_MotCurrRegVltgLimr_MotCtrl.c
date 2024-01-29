 /**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotCurrRegVltgLimr_MotCtrl.c
* Module Description: Implementation of Motor Current Regulator and Voltage limiter
* Project           : CBD 
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:          9 %
* %derived_by:       nz2796 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/10/15  1        Selva       Initial Version                                                                EA4#299
* 08/21/15  2        Selva       Fixed Anomaly 1039                                                             EA4#1363
* 04/12/16  3        NS          Updated for FDD v1.4.0                                                         EA4#4494
* 04/29/16  4        NS          MotCurrLoaMtgtnEna renamed to CurrMeasLoaMtgtnEna per FDD v1.5.0               EA4#5368
* 06/15/16  5        BG          Add the range limiting for the final q-axis current command in software.		EA4#6229
* 08/25/16  6        Rijvi       Updated per design rev. 1.7.0                                                  EA4#6633
* 09/12/16  7        NS          Fixed MOTCTRLMGR_MotCtrlIvtrLoaMtgtnEna name to match DataDict                 EA4#7349
* 11/01/16  8        ML          Updated for FDD v2.1.0													        EA4#7548
* 01/04/17  9        ML			 Updated to fix Anomaly EA4#9045												EA4#9082
**********************************************************************************************************************/

#include "Rte_CDD_MotCurrRegVltgLimr.h"
#include "CDD_MotCtrlMgr_Data.h"
#include "CDD_MotCurrRegVltgLimr.h"
#include "NxtrMath.h"
#include "ElecGlbPrm.h"    
#include "ArchGlbPrm.h"
#include "MotRefMdl.h"
/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/********************************************* Embedded Local Constants **********************************************/

#define MOTCURRLOLIM_AMPR_F32       	(-200.0F)
#define MOTCURRHILIM_AMPR_F32       	200.0F
#define BRDGVLTGLOLIM_VOLT_F32      	6.0F
#define BRDGVLTGHILIM_VOLT_F32      	26.5F                                                
#define F32TOU16OVR2PI_ULS_F32      	10430.21921F
#define MODIDXHILIM_VOLT_F32        	1.0F
#define MODIDXLOLIM_VOLT_F32        	0.0F
#define MOTVLTGDQAXHILIM_VOLT_F32 		26.5F
#define MOTVLTGDQAXLOLIM_VOLT_F32 		(-26.5F)
#define PHAADVHILIM_MOTREV_F32 			65535.0F 
#define PHAADVLOLIM_MOTREV_F32 			0.0F
#define ZERO_VOLT_F32					0.0F


static FUNC(void, MotCurrRegVltgLimr_CODE)  KpKiCtrl(float32 MotPropGain_Ohm_T_f32, float32 MotIntglGain_Ohm_T_f32,
                                                        SysSt1 SysSt_Cnt_T_enum, float32 CmdErr_Ampr_T_f32,
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotVltgIntglCmdPrev_Volt_T_f32,
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotCurrRegVltgLimrMotVltgPropCmd_Volt_T_f32,
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotCurrRegVltgLimrMotVltgIntglPreLim_Volt_T_f32,
                                                        float32 MotVltgIntglLoLim_Volt_T_f32, float32 MotVltgIntglHiLim_Volt_T_f32,
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotVltgPropCmd_Volt_T_f32,
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotVltgIntglCmd_Volt_T_f32);
                                                        
static FUNC(float32, MotCurrRegVltgLimr_CODE) ErrorCalcQax(float32 QaxCurrCmd_Ampr_T_f32,
                                                            float32 QaxRplCmd_Ampr_T_f32,
                                                            float32 QaxCoggCmd_Ampr_T_f32,
                                                            float32 QaxCurrModif_Ampr_T_f32,
                                                            float32 AntiWdupCmdSca_Uls_T_f32,
                                                            P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) QaxCmdFinal_Ampr_T_f32);
                                                            
static FUNC(void, MotCurrRegVltgLimr_CODE) LoaScaFac(boolean CurrLoaMtgtnEn_Cnt_T_logl, 
                                                        boolean IvtrLoaMtgtnEn_Cnt_T_logl,
														boolean MotCtrlDualEcuMotCtrlMtgtnEna_Cnt_T_logl, 
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) CurrLoaScaFac_Uls_T_f32, 
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) IvtrLoaScaFac_Uls_T_f32,
														P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) DualEcuScaFac_Uls_T_f32);
														
static FUNC(void, MotCurrRegVltgLimr_CODE) MotCurr_Pred(float32 MotInduQaxEstimdIvs_IvsHenry_T_f32,
														float32 MotREstimd_Ohm_T_f32,
														float32 CurrQax_Ampr_T_f32,
														float32 MotVltgQaxPrev_Volt_T_f32,
														float32 CurrDax_Ampr_T_f32,
														float32 MotVltgDaxPrev_Volt_T_f32,
														float32 MotBackEmfVltg_Volt_T_f32,
														float32 ReacncQax_Ohm_T_f32,
														float32 ReacncDax_Ohm_T_f32,
														float32 MotInduDaxEstimdIvs_IvsHenry_T_f32,
														boolean MotCurrRegVltgLimrMotCurrPredEna_Cnt_T_Logl,
														float32 MotCtrlCurrPredTi_NanoSec_T_f32,
														P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotCurrQaxPred_Ampr_T_f32,
														P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotCurrDaxPred_Ampr_T_f32);

#define CDD_MotCurrRegVltgLimr_MotCtrl_START_SEC_CODE
#include "CDD_MotCurrRegVltgLimr_MotCtrl_MemMap.h" 
                                                            
 /*****************************************************************************
  * Name:   MotCurrRegVltgLimrPer1
  * Description: Created for Regulating Motor current and  limiting the voltage  
  * Inputs:      None
  * Outputs:     None
  * Usage notes: Called by Motor control ISR (Call rate 2*MotCtrlISR)
*****************************************************************************/ 
FUNC(void, CDD_MotCurrRegVltgLimr_APPL_CODE) MotCurrRegVltgLimrPer1(void)
{ 
    VAR(float32, AUTOMATIC) MotCtrlBrdgVltg_Volt_T_f32;                     
    VAR(float32, AUTOMATIC) MotCurrDax_Ampr_T_f32;
    VAR(float32, AUTOMATIC) CmdErrDax_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotCurrQax_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotCurrQaxCmd_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotCurrDaxCmd_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotIntglGainDax_Ohm_T_f32;
    VAR(float32, AUTOMATIC) MotPropGainDax_Ohm_T_f32;
    VAR(float32, AUTOMATIC) MotIntglGainQax_Ohm_T_f32;
    VAR(float32, AUTOMATIC) MotPropGainQax_Ohm_T_f32;
    VAR(float32, AUTOMATIC) MotAgElecDly_Rad_T_f32;
    VAR(float32, AUTOMATIC) MotVltgDaxFf_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgQaxFf_Volt_T_f32;
    VAR(float32, AUTOMATIC) CmdErrQax_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotVltgPropCmdQax_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgPropCmdDax_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgIntglCmdQax_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgIntglCmdDax_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgSq_VoltSq_T_f32;
    VAR(float32, AUTOMATIC) MotVltgCmdPreLim_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgCmdFinal_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgQax_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgDax_Volt_T_f32;
    VAR(float32, AUTOMATIC) ModIdx_Uls_T_f32;
    VAR(float32, AUTOMATIC) PhsAdv_Rad_T_f32;
    VAR(float32, AUTOMATIC) PhsAdvFinal_Rad_T_f32;
    VAR(uint16, AUTOMATIC) PhsAdvFinal_Rev_T_u0p16;
    VAR(float32, AUTOMATIC) MotCurrQaxCmdFinal_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotDampgDax_Ohm_T_f32;
    VAR(float32, AUTOMATIC) MotDampgQax_Ohm_T_f32;
    VAR(float32, AUTOMATIC) MotReacDax_Ohm_T_f32;
    VAR(float32, AUTOMATIC) MotReacQax_Ohm_T_f32;
    VAR(float32, AUTOMATIC) MotVltgDircFbQax_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgDircFbDax_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgQaxDampg_Volt_T_f32      ;
    VAR(float32, AUTOMATIC) MotVltgDaxDampg_Volt_T_f32      ;
    VAR(float32, AUTOMATIC) MotVltgQaxDecouplFb_Volt_T_f32  ;
    VAR(float32, AUTOMATIC) MotVltgDaxDecouplFb_Volt_T_f32  ;
    VAR(boolean, AUTOMATIC) CurrMeasLoaMtgtnEna_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) IvtrLoaMtgtnEn_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) MotCtrlDualEcuMotCtrlMtgtnEna_Cnt_T_logl;
    VAR(float32, AUTOMATIC) CurrLoaScaFac_Uls_T_f32;
    VAR(float32, AUTOMATIC) VltgSatnIvsRatio_Uls_T_f32      ;
    VAR(float32, AUTOMATIC) VltgSatnRatio_Uls_T_f32         ;
    VAR(float32, AUTOMATIC) IvtrLoaScaFac_Uls_T_f32;
    VAR(float32, AUTOMATIC) MotVltgPreLimQax_Volt_T_f32   ;
    VAR(float32, AUTOMATIC) LoaScaFac_Uls_T_f32     ;
    VAR(float32, AUTOMATIC) MotVltgPreLimDax_Volt_T_f32   ;
    VAR(float32, AUTOMATIC) SqrdVltgSatnIvsRatio_Uls_T_f32  ;
    VAR(float32, AUTOMATIC) MotCurrQaxCoggCmd_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotCurrQaxRplCmd_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotRefMdlIvtrDeadTiBrdgVltgSca_Uls_T_f32;
    VAR(SysSt1, AUTOMATIC) SysSt_Cnt_T_enum;
    VAR(float32, AUTOMATIC) MotCurrDaxCmdMax_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotCurrRegVltgLimrMotCurrCmdScaDax_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotCurrRegVltgLimrMotVltgQaxFb_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotCurrRegVltgLimrMotVltgDaxFb_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgQaxFfFild_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotCtrlBrdgVltgFild_Volt_T_f32;
	VAR(float32, AUTOMATIC) MotCtrlMotBackEmfVltg_Volt_T_f32;
	VAR(float32, AUTOMATIC) MotCtrlMotREstimd_Ohm_T_f32;
	VAR(float32, AUTOMATIC) MotCtrlMotInduDaxEstimdIvs_IvsHenry_T_f32;
	VAR(float32, AUTOMATIC) MotCtrlMotInduQaxEstimdIvs_IvsHenry_T_f32;
	VAR(float32, AUTOMATIC) DualEcuScaFac_Uls_T_f32;
	VAR(float32, AUTOMATIC) MotCurrQaxPred_Ampr_T_f32;
	VAR(float32, AUTOMATIC) MotCurrDaxPred_Ampr_T_f32;


    MotCtrlBrdgVltg_Volt_T_f32 = MOTCTRLMGR_MotCtrlBrdgVltg;    /* REQ: SF105A #58 I */ /* REQ: SF105A #166 I */       
    IvtrLoaMtgtnEn_Cnt_T_logl   = MOTCTRLMGR_MotCtrlIvtrLoaMtgtnEna; /* REQ: SF105A #153 I */ /* REQ: SF105A #168 I */  
    MotAgElecDly_Rad_T_f32       = MOTCTRLMGR_MotCtrlMotAgElecDly; /* REQ: SF105A #46 I */
    MotCurrDax_Ampr_T_f32       = MOTCTRLMGR_MotCtrlMotCurrDax;/* REQ: SF105A #57 I */
    MotCurrDaxCmd_Ampr_T_f32    = MOTCTRLMGR_MotCtrlMotCurrDaxCmd;/* REQ: SF105A #38 I */
    MotCurrDaxCmdMax_Ampr_T_f32 = MOTCTRLMGR_MotCtrlMotCurrDaxMax; /* REQ: SF105A #53 I */
    CurrMeasLoaMtgtnEna_Cnt_T_logl  = MOTCTRLMGR_MotCtrlCurrMeasLoaMtgtnEna;/* REQ: SF105A #59 I */ /* REQ: SF105A #168 I */
    MotCurrQax_Ampr_T_f32         = MOTCTRLMGR_MotCtrlMotCurrQax;/* REQ: SF105A #56 I */ 
    MotCurrQaxCmd_Ampr_T_f32      = MOTCTRLMGR_MotCtrlMotCurrQaxCmd;/* REQ: SF105A #27 I */
    MotCurrQaxCoggCmd_Ampr_T_f32  = MOTCTRLMGR_MotCtrlMotCurrQaxCoggCmd;/* REQ: SF105A #47 I */
    MotCurrQaxRplCmd_Ampr_T_f32   = MOTCTRLMGR_MotCtrlMotCurrQaxRplCmd;/* REQ: SF105A #48 I */
    MotDampgDax_Ohm_T_f32         = MOTCTRLMGR_MotCtrlMotDampgDax;/* REQ: SF105A #51 I */
    MotDampgQax_Ohm_T_f32         = MOTCTRLMGR_MotCtrlMotDampgQax;/* REQ: SF105A #52 I */
    MotIntglGainDax_Ohm_T_f32   =   MOTCTRLMGR_MotCtrlMotIntglGainDax;/* REQ: SF105A #42 I */
    MotIntglGainQax_Ohm_T_f32   =   MOTCTRLMGR_MotCtrlMotIntglGainQax;/* REQ: SF105A #40 I */
    MotPropGainDax_Ohm_T_f32    =   MOTCTRLMGR_MotCtrlMotPropGainDax;/* REQ: SF105A #43 I */
    MotPropGainQax_Ohm_T_f32    =   MOTCTRLMGR_MotCtrlMotPropGainQax;/* REQ: SF105A #41 I */
    MotReacDax_Ohm_T_f32        =   MOTCTRLMGR_MotCtrlMotReacncDax;/* REQ: SF105A #50 I */
    MotReacQax_Ohm_T_f32        =   MOTCTRLMGR_MotCtrlMotReacncQax;/* REQ: SF105A #49 I */
    MotVltgDaxFf_Volt_T_f32     =  MOTCTRLMGR_MotCtrlMotVltgDaxFf;/* REQ: SF105A #45 I */
    MotVltgQaxFf_Volt_T_f32     =  MOTCTRLMGR_MotCtrlMotVltgQaxFf;/* REQ: SF105A #44 I */
    SysSt_Cnt_T_enum  = MOTCTRLMGR_MotCtrlSysSt;/* REQ: SF105A #161 I */
	MotCtrlDualEcuMotCtrlMtgtnEna_Cnt_T_logl = MOTCTRLMGR_MotCtrlDualEcuMotCtrlMtgtnEna;
	MotCtrlMotBackEmfVltg_Volt_T_f32 = MOTCTRLMGR_MotCtrlMotBackEmfVltg;
	MotCtrlMotREstimd_Ohm_T_f32 = MOTCTRLMGR_MotCtrlMotREstimd;
	MotCtrlMotInduDaxEstimdIvs_IvsHenry_T_f32 = MOTCTRLMGR_MotCtrlMotInduDaxEstimdIvs;
	MotCtrlMotInduQaxEstimdIvs_IvsHenry_T_f32 = MOTCTRLMGR_MotCtrlMotInduQaxEstimdIvs;
	
	/**** MotCurr_Pred ****/
	MotCurr_Pred(MotCtrlMotInduQaxEstimdIvs_IvsHenry_T_f32,
				 MotCtrlMotREstimd_Ohm_T_f32,
				 MotCurrQax_Ampr_T_f32,
				 *Rte_Pim_MotCtrlMotVltgQaxPrev(),
				 MotCurrDax_Ampr_T_f32,
				 *Rte_Pim_MotCtrlMotVltgDaxPrev(),
				 MotCtrlMotBackEmfVltg_Volt_T_f32,
				 MotReacQax_Ohm_T_f32,
				 MotReacDax_Ohm_T_f32,
				 MotCtrlMotInduDaxEstimdIvs_IvsHenry_T_f32,
				 Rte_Prm_MotCurrRegVltgLimrMotCurrPredEna_Logl(),
				 Rte_Prm_MotCurrRegVltgLimrMotCurrPredTi_Val(),
				 &MotCurrQaxPred_Ampr_T_f32,
				 &MotCurrDaxPred_Ampr_T_f32);
 
    /*************************MotCurr_ErrCalc_Dax**************************************/
    /* REQ: SF105A #79 I */
    /* REQ: SF105A #80 I */

    MotCurrRegVltgLimrMotCurrCmdScaDax_Ampr_T_f32  = Lim_f32((MotCurrDaxCmdMax_Ampr_T_f32 *  ( 1.0F - (*Rte_Pim_AntiWdupCmdScaDax()) ) ) + (MotCurrDaxCmd_Ampr_T_f32 * (*Rte_Pim_AntiWdupCmdScaDax())),
                                                                0.0F,
                                                                MOTCURRHILIM_AMPR_F32);
    *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaDax() = MotCurrRegVltgLimrMotCurrCmdScaDax_Ampr_T_f32;
    CmdErrDax_Ampr_T_f32                           = MotCurrRegVltgLimrMotCurrCmdScaDax_Ampr_T_f32  - MotCurrDaxPred_Ampr_T_f32;
    *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrDax() = CmdErrDax_Ampr_T_f32;

    /* ENDREQ: SF105A #79 I */
    /* ENDREQ: SF105A #80 I */
    /*************************MotCurr_ErrorCalc_Qax**************************************/

    /* REQ: SF105A #66 I */
    /* REQ: SF105A #67 I */
    /* REQ: SF105A #68 I */
    CmdErrQax_Ampr_T_f32 = ErrorCalcQax(MotCurrQaxCmd_Ampr_T_f32,
                                        MotCurrQaxRplCmd_Ampr_T_f32,
                                        MotCurrQaxCoggCmd_Ampr_T_f32,
                                        MotCurrQaxPred_Ampr_T_f32,
                                        *Rte_Pim_AntiWdupCmdScaQax(),
                                        &MotCurrQaxCmdFinal_Ampr_T_f32);
    /* ENDREQ: SF105A #67 I */
    /* ENDREQ: SF105A #68 I */
    /* ENDREQ: SF105A #66 I */
 
    /****  Kp_Ki_Ctrl_Qax ****/ 
    /* REQ: SF105A #73 I */
    /* REQ: SF105A #135 I */
    /* REQ: SF105A #74 I */
    KpKiCtrl(MotPropGainQax_Ohm_T_f32, 
                MotIntglGainQax_Ohm_T_f32,
                SysSt_Cnt_T_enum, CmdErrQax_Ampr_T_f32,
                Rte_Pim_MotVltgIntglCmdQaxPrev(),
                Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdQax(),
                Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxIntglPreLim(),
                Rte_Prm_MotCurrRegVltgLimrMotVltgQaxIntglLoLim_Val(), 
                Rte_Prm_MotCurrRegVltgLimrMotVltgQaxIntglHiLim_Val(),
                &MotVltgPropCmdQax_Volt_T_f32,
                &MotVltgIntglCmdQax_Volt_T_f32);
    /* ENDREQ: SF105A #73 I */
    /* ENDREQ: SF105A #135 I */
    /* ENDREQ: SF105A #74 I */

    /****  Kp_Ki_Ctrl_Dax ****/ 
    /* REQ: SF105A #85 I */
    /* REQ: SF105A #137 I */
    /* REQ: SF105A #84 I */
    KpKiCtrl(MotPropGainDax_Ohm_T_f32, 
                MotIntglGainDax_Ohm_T_f32,
                SysSt_Cnt_T_enum, CmdErrDax_Ampr_T_f32,
                Rte_Pim_MotVltgIntglCmdDaxPrev(),
                Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdDax(),
                Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxIntglPreLim(),
                Rte_Prm_MotCurrRegVltgLimrMotVltgDaxIntglLoLim_Val(), 
                Rte_Prm_MotCurrRegVltgLimrMotVltgDaxIntglHiLim_Val(),
                &MotVltgPropCmdDax_Volt_T_f32,
                &MotVltgIntglCmdDax_Volt_T_f32);
    /* ENDREQ: SF105A #85 I */
    /* ENDREQ: SF105A #137 I */
    /* ENDREQ: SF105A #84 I */

    
    /* DircFb_VltgCalc*/
    /* REQ: SF105A #89 I */
    /* REQ: SF105A #94 I */

    /*** Direct feedback voltage computation***/
    if( Rte_Prm_MotRefMdlFbCtrlDi_Logl() == TRUE)
    {
       MotVltgDircFbQax_Volt_T_f32 = ZERO_VOLT_F32;
       MotVltgDircFbDax_Volt_T_f32 = ZERO_VOLT_F32;
       *Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgDax() = 0.0f;
       *Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgQax() = 0.0f;
       *Rte_Pim_dMotCurrRegVltgLimrMotVltgDecouplFbQax() =0.0f;
       *Rte_Pim_dMotCurrRegVltgLimrMotVltgDecouplFbDax() =0.0f;
    }
    else
    {
       /* REQ: SF105A #93 I */
       /* REQ: SF105A #96 I */
       /* REQ: SF105A #95 I */
       /* REQ: SF105A #97 I */
       /* REQ: SF105A #90 I */

       if(Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl() == TRUE)
       {
           MotVltgQaxDampg_Volt_T_f32 = MotDampgQax_Ohm_T_f32 * MotCurrQaxPred_Ampr_T_f32;
           MotVltgDaxDampg_Volt_T_f32 = MotDampgDax_Ohm_T_f32 * MotCurrDaxPred_Ampr_T_f32;
       }
       else
       { 
           MotVltgQaxDampg_Volt_T_f32 = Rte_Prm_MotCurrRegCfgMotRVirtQax_Val()  * MotCurrQaxPred_Ampr_T_f32;
           MotVltgDaxDampg_Volt_T_f32 = Rte_Prm_MotCurrRegCfgMotRVirtDax_Val()  * MotCurrDaxPred_Ampr_T_f32;
         
       }
       MotVltgDaxDecouplFb_Volt_T_f32 = MotCurrQaxPred_Ampr_T_f32* MotReacQax_Ohm_T_f32;
       MotVltgQaxDecouplFb_Volt_T_f32 = MotCurrDaxPred_Ampr_T_f32* MotReacDax_Ohm_T_f32;

       MotVltgDircFbQax_Volt_T_f32 = -(MotVltgQaxDecouplFb_Volt_T_f32 + MotVltgQaxDampg_Volt_T_f32);
       MotVltgDircFbDax_Volt_T_f32 =  MotVltgDaxDecouplFb_Volt_T_f32 - MotVltgDaxDampg_Volt_T_f32;
       *Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgDax() = MotVltgDaxDampg_Volt_T_f32;
       *Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgQax() = MotVltgQaxDampg_Volt_T_f32;
       *Rte_Pim_dMotCurrRegVltgLimrMotVltgDecouplFbQax() =MotVltgQaxDecouplFb_Volt_T_f32;
       *Rte_Pim_dMotCurrRegVltgLimrMotVltgDecouplFbDax() =MotVltgDaxDecouplFb_Volt_T_f32;
        /* ENDREQ: SF105A #93 I */
        /* ENDREQ: SF105A #96 I */
        /* ENDREQ: SF105A #95 I */
        /* ENDREQ: SF105A #97 I */
        /* ENDREQ: SF105A #90 I */
    }


     *Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbQax() = MotVltgDircFbQax_Volt_T_f32;
     *Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbDax() = MotVltgDircFbDax_Volt_T_f32;
    /* ENDREQ: SF105A #89 I */
    /* ENDREQ: SF105A #94 I */ 


    /*************  LOA_ScaFac**********/
    /* REQ: SF105A #102 I */
    /* REQ: SF105A #156 I */
    /* REQ: SF105A #101 I */
    /* REQ: SF105A #158 I */
    LoaScaFac(CurrMeasLoaMtgtnEna_Cnt_T_logl,	
			  IvtrLoaMtgtnEn_Cnt_T_logl, 
			  MotCtrlDualEcuMotCtrlMtgtnEna_Cnt_T_logl,
			  &CurrLoaScaFac_Uls_T_f32, 
			  &IvtrLoaScaFac_Uls_T_f32, 
			  &DualEcuScaFac_Uls_T_f32);
    /* ENDREQ: SF105A #102 I */
    /* ENDREQ: SF105A #156 I */
    /* ENDREQ: SF105A #101 I */
    /* ENDREQ: SF105A #158 I */


    /*Qax_Vltg_Sum*/
    /********QAxisVoltageSummation**********************/
    LoaScaFac_Uls_T_f32 = IvtrLoaScaFac_Uls_T_f32 * CurrLoaScaFac_Uls_T_f32 * DualEcuScaFac_Uls_T_f32;

    /**** Qax voltage computation and Limit ****/   
    /* REQ: SF105A #107 I */
    /* REQ: SF105A #108 I */ 
    MotCurrRegVltgLimrMotVltgQaxFb_Volt_T_f32 = ((MotVltgPropCmdQax_Volt_T_f32 + MotVltgIntglCmdQax_Volt_T_f32 + MotVltgDircFbQax_Volt_T_f32) * LoaScaFac_Uls_T_f32);
    *Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFb() = MotCurrRegVltgLimrMotVltgQaxFb_Volt_T_f32;
    
    MotVltgQaxFfFild_Volt_T_f32 = FilLpUpdOutp_f32(MotVltgQaxFf_Volt_T_f32, Rte_Pim_MotVltgQaxFfLpFil());
    
    if ((CurrMeasLoaMtgtnEna_Cnt_T_logl != FALSE) || 
	    (IvtrLoaMtgtnEn_Cnt_T_logl != FALSE) || 
		(Rte_Prm_MotRefMdlFbCtrlDi_Logl() != FALSE) || 
		(Rte_Prm_MotCurrRegVltgLimrMotVltgQaxFfFilEna_Logl() == FALSE) ||
		(MotCtrlDualEcuMotCtrlMtgtnEna_Cnt_T_logl != FALSE))
    {
        MotVltgPreLimQax_Volt_T_f32 = MotCurrRegVltgLimrMotVltgQaxFb_Volt_T_f32 + MotVltgQaxFf_Volt_T_f32;
        *Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFfFild() = MotVltgQaxFf_Volt_T_f32;
    }
    else
    {
        MotVltgPreLimQax_Volt_T_f32 = MotCurrRegVltgLimrMotVltgQaxFb_Volt_T_f32 + MotVltgQaxFfFild_Volt_T_f32;
        *Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFfFild() = MotVltgQaxFfFild_Volt_T_f32;
    }
    
    *Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimQax() = MotVltgPreLimQax_Volt_T_f32;
    /* ENDREQ: SF105A #107 I */
    /* ENDREQ: SF105A #108 I */

    /*Dax_Vltg_Sum*/
    /* REQ: SF105A #111 I */
    /**** Dax voltage computation and Limit****/
    MotCurrRegVltgLimrMotVltgDaxFb_Volt_T_f32 = (MotVltgPropCmdDax_Volt_T_f32 + MotVltgIntglCmdDax_Volt_T_f32  + MotVltgDircFbDax_Volt_T_f32 ) * LoaScaFac_Uls_T_f32;
    *Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxFb() = MotCurrRegVltgLimrMotVltgDaxFb_Volt_T_f32;
    MotVltgPreLimDax_Volt_T_f32 = MotCurrRegVltgLimrMotVltgDaxFb_Volt_T_f32 + MotVltgDaxFf_Volt_T_f32;
    *Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimDax() = MotVltgPreLimDax_Volt_T_f32;
    /* ENDREQ: SF105A #111 I */

    /* REQ: SF105A #116 I */
    /* REQ: SF105A #115 I */
    /* REQ: SF105A #120 I */
    /*Calc_Limit_Cmd_Final*/
    /**** Final motor output command computation and Limit -Final DQ Voltage ****/
    /*Range limit Bridge Voltage */
    MotCtrlBrdgVltg_Volt_T_f32 = Lim_f32(MotCtrlBrdgVltg_Volt_T_f32, BRDGVLTGLOLIM_VOLT_F32, BRDGVLTGHILIM_VOLT_F32);
    MotVltgSq_VoltSq_T_f32=((MotVltgPreLimQax_Volt_T_f32*MotVltgPreLimQax_Volt_T_f32)+(MotVltgPreLimDax_Volt_T_f32*MotVltgPreLimDax_Volt_T_f32)); /* REQ: SF105A #116 I */
    MotVltgCmdPreLim_Volt_T_f32 =Sqrt_f32(MotVltgSq_VoltSq_T_f32); 
    *Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdPreLim() = MotVltgCmdPreLim_Volt_T_f32;
    
    /* BrdgVltgFiltering */
    MotCtrlBrdgVltgFild_Volt_T_f32 = FilLpUpdOutp_f32(MotCtrlBrdgVltg_Volt_T_f32, Rte_Pim_MotVltgBrdgLpFil());
    MotCtrlBrdgVltgFild_Volt_T_f32 = Lim_f32(MotCtrlBrdgVltgFild_Volt_T_f32, 
                                                BRDGVLTGLOLIM_VOLT_F32, 
                                                BRDGVLTGHILIM_VOLT_F32);
    
    if (Rte_Prm_MotCurrRegVltgLimrMotVltgBrdgFilEna_Logl() != FALSE)
    {
        /* Keep MotCtrlBrdgVltgFild_Volt_T_f32 calculated above */
    }
    else
    {
        /* Use unfiltered value */
        MotCtrlBrdgVltgFild_Volt_T_f32 = MotCtrlBrdgVltg_Volt_T_f32;
    }

    *Rte_Pim_dMotCurrRegVltgLimrMotVltgBrdgFild() = MotCtrlBrdgVltgFild_Volt_T_f32;

    /*VltgSatnIvsRatioCalc*/
    /* REQ: SF105A #171 I */
    /* REQ: SF105A #172 I */
    MotRefMdlIvtrDeadTiBrdgVltgSca_Uls_T_f32  =  Lim_f32(Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val(), MOTREFMDL_INVTERDEADTIBRDGVLTGSCALOLIM_ULS_F32, MOTREFMDL_INVTERDEADTIBRDGVLTGSCAHILIM_ULS_F32);  /* REQ: SF105A #115 I */
    MotRefMdlIvtrDeadTiBrdgVltgSca_Uls_T_f32 = MotRefMdlIvtrDeadTiBrdgVltgSca_Uls_T_f32 * MotCtrlBrdgVltgFild_Volt_T_f32;
    VltgSatnRatio_Uls_T_f32 = MotVltgCmdPreLim_Volt_T_f32 /(MotRefMdlIvtrDeadTiBrdgVltgSca_Uls_T_f32);
    *Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnRat() = VltgSatnRatio_Uls_T_f32;

    if (VltgSatnRatio_Uls_T_f32 > 1.0F)
    {
        VltgSatnIvsRatio_Uls_T_f32 = 1.0F / VltgSatnRatio_Uls_T_f32;
    }
    else
    {
        VltgSatnIvsRatio_Uls_T_f32 = 1.0F;
    }
    *Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnIvsRat() = VltgSatnIvsRatio_Uls_T_f32;
    /* ENDREQ: SF105A #171 I */
    /* ENDREQ: SF105A #172 I */

    /*VltgCalcFinal*/
    MotVltgQax_Volt_T_f32 = VltgSatnIvsRatio_Uls_T_f32* MotVltgPreLimQax_Volt_T_f32;/* REQ: SF105A #118 I */
    MotVltgDax_Volt_T_f32 = VltgSatnIvsRatio_Uls_T_f32* MotVltgPreLimDax_Volt_T_f32;/* REQ: SF105A #118 I */
    MotVltgCmdFinal_Volt_T_f32 = VltgSatnIvsRatio_Uls_T_f32 *  MotVltgCmdPreLim_Volt_T_f32; /* REQ: SF105A #118 I */
    *Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdFinal() =  MotVltgCmdFinal_Volt_T_f32;
    ModIdx_Uls_T_f32=(MotVltgCmdFinal_Volt_T_f32/MotRefMdlIvtrDeadTiBrdgVltgSca_Uls_T_f32); 

    /* ENDREQ: SF105A #116 I */
    /* ENDREQ: SF105A #115 I */
    /* ENDREQ: SF105A #120 I */

    /* REQ: SF105A #121 I */
    /* REQ: SF105A #122 I */
    /* REQ: SF105A #175 I */
    PhsAdv_Rad_T_f32=Arctan2_f32(MotVltgPreLimDax_Volt_T_f32,MotVltgPreLimQax_Volt_T_f32);
    /*Correct the Calculated Phase Advance*/
    PhsAdvFinal_Rad_T_f32=PhsAdv_Rad_T_f32+MotAgElecDly_Rad_T_f32;


    if (PhsAdvFinal_Rad_T_f32 >= ARCHGLBPRM_2PI_ULS_F32)
    {
        PhsAdvFinal_Rad_T_f32 = PhsAdvFinal_Rad_T_f32 - ARCHGLBPRM_2PI_ULS_F32;
    }
    else if(PhsAdvFinal_Rad_T_f32 < 0.0F)
    {
        PhsAdvFinal_Rad_T_f32 = PhsAdvFinal_Rad_T_f32 + ARCHGLBPRM_2PI_ULS_F32;
    }
    else
    {
        
    }
    *Rte_Pim_dMotCurrRegVltgLimrPhaAdvPreDly( )= PhsAdvFinal_Rad_T_f32;
	
	PhsAdvFinal_Rev_T_u0p16 = (uint16)(uint32)(float32) ( Lim_f32( (PhsAdvFinal_Rad_T_f32 * F32TOU16OVR2PI_ULS_F32), PHAADVLOLIM_MOTREV_F32, PHAADVHILIM_MOTREV_F32) ); /* PRQA S 4395 */ 
    /* ENDREQ: SF105A #121 I */
    /* ENDREQ: SF105A #122 I */
    /* ENDREQ: SF105A #175 I */

    /* REQ: SF105A #126 I */
    /* REQ: SF105A #130 I */


    SqrdVltgSatnIvsRatio_Uls_T_f32 = VltgSatnIvsRatio_Uls_T_f32* VltgSatnIvsRatio_Uls_T_f32;

    if (Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupScagDi_Logl() == TRUE)
    {

           (*Rte_Pim_AntiWdupCmdScaQax()) = 1.0F;

    }
    else
    {
            (*Rte_Pim_AntiWdupCmdScaQax()) = (VltgSatnIvsRatio_Uls_T_f32 * (1.0F - Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupCoeff_Val() )) + (SqrdVltgSatnIvsRatio_Uls_T_f32 * Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupCoeff_Val());
        
    }

    (*Rte_Pim_AntiWdupCmdScaDax()) = (VltgSatnIvsRatio_Uls_T_f32 * (1.0F - Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupCoeff_Val())) + (SqrdVltgSatnIvsRatio_Uls_T_f32 * Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupCoeff_Val());
    /* ENDREQ: SF105A #126 I */
    /* ENDREQ: SF105A #130 I */

    
    MOTCTRLMGR_MotCtrlMotCurrQaxCmdFinal = Lim_f32(MotCurrQaxCmdFinal_Ampr_T_f32, MOTCURRLOLIM_AMPR_F32, MOTCURRHILIM_AMPR_F32); /* REQ: SF105A #61 I */
    MOTCTRLMGR_MotCtrlMotModlnIdx        = Lim_f32(ModIdx_Uls_T_f32, MODIDXLOLIM_VOLT_F32, MODIDXHILIM_VOLT_F32);/* REQ: SF105A #28 I */
    MOTCTRLMGR_MotCtrlMotPhaAdv          = PhsAdvFinal_Rev_T_u0p16;
    
	MOTCTRLMGR_MotCtrlMotVltgDax         = Lim_f32(MotVltgDax_Volt_T_f32, MOTVLTGDQAXLOLIM_VOLT_F32, MOTVLTGDQAXHILIM_VOLT_F32);/* REQ: SF105A #63 I */
	*Rte_Pim_MotCtrlMotVltgDaxPrev() = MOTCTRLMGR_MotCtrlMotVltgDax;
	
    MOTCTRLMGR_MotCtrlMotVltgQax         = Lim_f32(MotVltgQax_Volt_T_f32, MOTVLTGDQAXLOLIM_VOLT_F32, MOTVLTGDQAXHILIM_VOLT_F32);/* REQ: SF105A #62 I */
	*Rte_Pim_MotCtrlMotVltgQaxPrev() = MOTCTRLMGR_MotCtrlMotVltgQax;
}

/*****************************************************************************************************************
  * Name         :  KpKiCtrl
  * Description  :  This function calculates the motor voltage proportional command and the motor voltage integral
  *                 command for Qax or Dax.
  * Input        :  MotPropGain_Ohm_T_f32
  *                 MotIntglGain_Ohm_T_f32
  *                 SysSt_Cnt_T_enum
  *                 CmdErr_Ampr_T_f32
  *                 *MotVltgIntglCmdPrev_Volt_T_f32
  *                 *MotCurrRegVltgLimrMotVltgPropCmd_Volt_T_f32
  *                 *MotCurrRegVltgLimrMotVltgIntglPreLim_Volt_T_f32
  *                 MotVltgIntglLoLim_Volt_T_f32
  *                 MotVltgIntglHiLim_Volt_T_f32
  * Output       :  *MotVltgPropCmd_Volt_T_f32
  *                 *MotVltgIntglCmd_Volt_T_f32
  * Usage Notes  :  None
  ****************************************************************************************************************/
static FUNC(void, MotCurrRegVltgLimr_CODE)  KpKiCtrl(float32 MotPropGain_Ohm_T_f32, float32 MotIntglGain_Ohm_T_f32,
                                                        SysSt1 SysSt_Cnt_T_enum, float32 CmdErr_Ampr_T_f32,
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotVltgIntglCmdPrev_Volt_T_f32,
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotCurrRegVltgLimrMotVltgPropCmd_Volt_T_f32,
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotCurrRegVltgLimrMotVltgIntglPreLim_Volt_T_f32,
                                                        float32 MotVltgIntglLoLim_Volt_T_f32, float32 MotVltgIntglHiLim_Volt_T_f32,
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotVltgPropCmd_Volt_T_f32,
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotVltgIntglCmd_Volt_T_f32)
{
    VAR(float32, AUTOMATIC) MotVltgIntglPreLim_Volt_T_f32;
    
    *MotVltgPropCmd_Volt_T_f32 = CmdErr_Ampr_T_f32 * MotPropGain_Ohm_T_f32;
    *MotCurrRegVltgLimrMotVltgPropCmd_Volt_T_f32 = *MotVltgPropCmd_Volt_T_f32;
    
    MotVltgIntglPreLim_Volt_T_f32 = CmdErr_Ampr_T_f32 * MotIntglGain_Ohm_T_f32;
    
    if (SysSt_Cnt_T_enum == SYSST_ENA)
    {
        MotVltgIntglPreLim_Volt_T_f32 += *MotVltgIntglCmdPrev_Volt_T_f32;
    }
    else
    {
        /* MotVltgIntglPreLim_Volt_T_f32 += 0 so MotVltgIntglPreLim_Volt_T_f32 doesn't change */
    }
    
    *MotCurrRegVltgLimrMotVltgIntglPreLim_Volt_T_f32 = MotVltgIntglPreLim_Volt_T_f32;
    
    *MotVltgIntglCmd_Volt_T_f32 = Max_f32(Min_f32(MotVltgIntglPreLim_Volt_T_f32, MotVltgIntglHiLim_Volt_T_f32), 
                                            MotVltgIntglLoLim_Volt_T_f32);
                                            
    *MotVltgIntglCmd_Volt_T_f32 = Lim_f32(*MotVltgIntglCmd_Volt_T_f32,
                                            -BRDGVLTGHILIM_VOLT_F32,
                                            BRDGVLTGHILIM_VOLT_F32);
                                            
    *MotVltgIntglCmdPrev_Volt_T_f32 = *MotVltgIntglCmd_Volt_T_f32;
}

/*****************************************************************************************************************
  * Name         :  ErrorCalcQax
  * Description  :  This function calculates Qax command error.
  * Input        :  QaxCurrCmd_Ampr_T_f32
  *                 QaxRplCmd_Ampr_T_f32
  *                 QaxCoggCmd_Ampr_T_f32
  *                 QaxCurrModif_Ampr_T_f32
  * Output       :  *QaxCmdFinal_Ampr_T_f32
  *                 CmdErrQax_Ampr_T_f32
  * Usage Notes  :  None
  ****************************************************************************************************************/
static FUNC(float32, MotCurrRegVltgLimr_CODE) ErrorCalcQax(float32 QaxCurrCmd_Ampr_T_f32,
                                                            float32 QaxRplCmd_Ampr_T_f32,
                                                            float32 QaxCoggCmd_Ampr_T_f32,
                                                            float32 QaxCurrModif_Ampr_T_f32,
                                                            float32 AntiWdupCmdSca_Uls_T_f32,
                                                            P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) QaxCmdFinal_Ampr_T_f32)
{
    VAR(float32, AUTOMATIC) CmdScaQax_Ampr_T_f32;
    VAR(float32, AUTOMATIC) CmdErrQax_Ampr_T_f32;
    
    *QaxCmdFinal_Ampr_T_f32 = QaxCurrCmd_Ampr_T_f32 - QaxCoggCmd_Ampr_T_f32 - QaxRplCmd_Ampr_T_f32;
    
    if (Rte_Prm_MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna_Logl() != FALSE)
    {
        CmdScaQax_Ampr_T_f32 = *QaxCmdFinal_Ampr_T_f32 * AntiWdupCmdSca_Uls_T_f32;
    }
    else
    {
        CmdScaQax_Ampr_T_f32 = (AntiWdupCmdSca_Uls_T_f32 * QaxCurrCmd_Ampr_T_f32) - QaxCoggCmd_Ampr_T_f32 - QaxRplCmd_Ampr_T_f32;
    }
    
    CmdScaQax_Ampr_T_f32 = Lim_f32(CmdScaQax_Ampr_T_f32, MOTCURRLOLIM_AMPR_F32, MOTCURRHILIM_AMPR_F32);
    *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaQax() = CmdScaQax_Ampr_T_f32;
    
    CmdErrQax_Ampr_T_f32 = CmdScaQax_Ampr_T_f32 - QaxCurrModif_Ampr_T_f32;
    *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrQax() = CmdErrQax_Ampr_T_f32;
    
    return CmdErrQax_Ampr_T_f32;
}

/*****************************************************************************************************************
  * Name         :  LoaScaFac
  * Description  :  This function calculates the current LOA scale factor and the inverter LOA scale factor.
  * Input        :  CurrLoaMtgtnEn_Cnt_T_logl
  *                 IvtrLoaMtgtnEn_Cnt_T_logl
  *					MotCtrlDualEcuMotCtrlMtgtnEna_Cnt_T_logl
  * Output       :  *CurrLoaScaFac_Uls_T_f32
  *                 *IvtrLoaScaFac_Uls_T_f32
  *					*DualEcuScaFac_Uls_T_f32
  * Usage Notes  :  None
  ****************************************************************************************************************/
static FUNC(void, MotCurrRegVltgLimr_CODE) LoaScaFac(boolean CurrLoaMtgtnEn_Cnt_T_logl, 
                                                        boolean IvtrLoaMtgtnEn_Cnt_T_logl,
														boolean MotCtrlDualEcuMotCtrlMtgtnEna_Cnt_T_logl, 
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) CurrLoaScaFac_Uls_T_f32, 
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) IvtrLoaScaFac_Uls_T_f32,
														P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) DualEcuScaFac_Uls_T_f32)
{
    if (CurrLoaMtgtnEn_Cnt_T_logl != FALSE)
    {
        *CurrLoaScaFac_Uls_T_f32 = Lim_f32 (0.0F, 
                                            (ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * (-Rte_Prm_MotCurrRegVltgLimrCurrLoaScarSlewRate_Val())) + *Rte_Pim_CurrLoaScarPrev(), 
                                            (ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * Rte_Prm_MotCurrRegVltgLimrCurrLoaScarSlewRate_Val()) + *Rte_Pim_CurrLoaScarPrev());
    }
    else
    {
        *CurrLoaScaFac_Uls_T_f32 = Lim_f32 (1.0F, 
                                            (ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * (-Rte_Prm_MotCurrRegVltgLimrCurrLoaScarSlewRate_Val())) + *Rte_Pim_CurrLoaScarPrev(), 
                                            (ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * Rte_Prm_MotCurrRegVltgLimrCurrLoaScarSlewRate_Val()) + *Rte_Pim_CurrLoaScarPrev());
    }
    
    *Rte_Pim_CurrLoaScarPrev() =  *CurrLoaScaFac_Uls_T_f32;
    
    if (IvtrLoaMtgtnEn_Cnt_T_logl != FALSE)
    {
        *IvtrLoaScaFac_Uls_T_f32 = Lim_f32 (0.0F, 
                                            (ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * -Rte_Prm_MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val()) + *Rte_Pim_IvtrLoaScarPrev(), 
                                            (ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * Rte_Prm_MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val()) + *Rte_Pim_IvtrLoaScarPrev());
    }
    else
    {
        *IvtrLoaScaFac_Uls_T_f32 = Lim_f32 (1.0F, 
                                            (ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * -Rte_Prm_MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val()) + *Rte_Pim_IvtrLoaScarPrev(), 
                                            (ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * Rte_Prm_MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val()) + *Rte_Pim_IvtrLoaScarPrev());
    }
    
    *Rte_Pim_IvtrLoaScarPrev() =  *IvtrLoaScaFac_Uls_T_f32;
	
	if (MotCtrlDualEcuMotCtrlMtgtnEna_Cnt_T_logl != FALSE)
	{
		*DualEcuScaFac_Uls_T_f32 = Lim_f32 (0.0F,
											(ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * -Rte_Prm_MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val()) + *Rte_Pim_DualEcuLoaScarPrev(),
											(ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * Rte_Prm_MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val()) + *Rte_Pim_DualEcuLoaScarPrev());
	}
	else
	{
		*DualEcuScaFac_Uls_T_f32 = Lim_f32 (1.0F,
											(ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * -Rte_Prm_MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val()) + *Rte_Pim_DualEcuLoaScarPrev(),
											(ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * Rte_Prm_MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val()) + *Rte_Pim_DualEcuLoaScarPrev());
	}
	
	*Rte_Pim_DualEcuLoaScarPrev() = *DualEcuScaFac_Uls_T_f32;
}

/*****************************************************************************************************************
  * Name         :  MotCurr_Pred
  * Description  :  Implementation of 'MotCurr_Pred' Block
  * Input        :  MotInduQaxEstimdIvs_IvsHenry_T_f32
					MotREstimd_Ohm_T_f32
					CurrQax_Ampr_T_f32
					MotVltgQaxPrev_Volt_T_f32
					CurrDax_Ampr_T_f32
					MotVltgDaxPrev_Volt_T_f32
					MotBackEmfVltg_Volt_T_f32
					ReacncQax_Ohm_T_f32
					ReacncDax_Ohm_T_f32
					MotInduDaxEstimdIvs_IvsHenry_T_f32
					MotCurrRegVltgLimrMotCurrPredEna_Cnt_T_Logl
					MotCtrlCurrPredTi_NanoSec_T_f32
  * Output       :  *MotCurrQaxPred_Ampr_T_f32
					*MotCurrDaxPred_Ampr_T_f32
  * Usage Notes  :  None
 *****************************************************************************************************************/
static FUNC(void, MotCurrRegVltgLimr_CODE) MotCurr_Pred(float32 MotInduQaxEstimdIvs_IvsHenry_T_f32,
														float32 MotREstimd_Ohm_T_f32,
														float32 CurrQax_Ampr_T_f32,
														float32 MotVltgQaxPrev_Volt_T_f32,
														float32 CurrDax_Ampr_T_f32,
														float32 MotVltgDaxPrev_Volt_T_f32,
														float32 MotBackEmfVltg_Volt_T_f32,
														float32 ReacncQax_Ohm_T_f32,
														float32 ReacncDax_Ohm_T_f32,
														float32 MotInduDaxEstimdIvs_IvsHenry_T_f32,
														boolean MotCurrRegVltgLimrMotCurrPredEna_Cnt_T_Logl,
														float32 MotCtrlCurrPredTi_NanoSec_T_f32,
														P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotCurrQaxPred_Ampr_T_f32,
														P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotCurrDaxPred_Ampr_T_f32)
{
	VAR(float32, AUTOMATIC) QaxVltg_Volt_T_f32;
	VAR(float32, AUTOMATIC) VltgQaxTmp_Volt_T_f32;
	VAR(float32, AUTOMATIC) VltgDaxTmp_Volt_T_f32;
	
	if (MotCurrRegVltgLimrMotCurrPredEna_Cnt_T_Logl == TRUE)
	{
		*MotCurrQaxPred_Ampr_T_f32 = CurrQax_Ampr_T_f32;
		*MotCurrDaxPred_Ampr_T_f32 = CurrDax_Ampr_T_f32;
	}
	
	else
	{
		QaxVltg_Volt_T_f32 = ((MotVltgQaxPrev_Volt_T_f32 - MotBackEmfVltg_Volt_T_f32) * ARCHGLBPRM_2OVERSQRT3_ULS_F32);
		
		VltgQaxTmp_Volt_T_f32 =  QaxVltg_Volt_T_f32 + ((ReacncDax_Ohm_T_f32 * CurrDax_Ampr_T_f32) - (CurrQax_Ampr_T_f32 * MotREstimd_Ohm_T_f32));
		VltgDaxTmp_Volt_T_f32 = (MotVltgDaxPrev_Volt_T_f32 * ARCHGLBPRM_2OVERSQRT3_ULS_F32) - (ReacncQax_Ohm_T_f32 * CurrQax_Ampr_T_f32) - (CurrDax_Ampr_T_f32 * MotREstimd_Ohm_T_f32);
		
		*MotCurrQaxPred_Ampr_T_f32 = CurrQax_Ampr_T_f32 + (VltgQaxTmp_Volt_T_f32 * MotInduQaxEstimdIvs_IvsHenry_T_f32 * MotCtrlCurrPredTi_NanoSec_T_f32);
		*MotCurrDaxPred_Ampr_T_f32 = CurrDax_Ampr_T_f32 + (VltgDaxTmp_Volt_T_f32 * MotInduDaxEstimdIvs_IvsHenry_T_f32 * MotCtrlCurrPredTi_NanoSec_T_f32);
		
		
	}
}

#define CDD_MotCurrRegVltgLimr_MotCtrl_STOP_SEC_CODE
#include "CDD_MotCurrRegVltgLimr_MotCtrl_MemMap.h"                                                                  

