
/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotAgArbn_MotCtrl.c
* Module Description: Implementation of Motor Angle Arbitration FDD ES248A 
                       Motor Control Loop runnable(s) for Motor Angle Arbitration
* Project           : CBD
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:           1 %
* %derived_by:        gzkys7 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 06/02/15   1       SB        Initial version                                                                EA4#845
**********************************************************************************************************************/

#include "Rte_CDD_MotAgArbn.h"
#include "CDD_MotAgArbn.h"
#include "CDD_MotCtrlMgr_Data.h"

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define  CORRLNSTSMASKSIGA_CNT_U08      0x01u
#define  CORRLNSTSMASKSIGB_CNT_U08      0x02u
#define  MAXSTALL_CNT_U08		       (10U)
#define  MAXSTALLCNTR_CNT_U08          (255U)

static FUNC(boolean, MotAgArbn_CODE) SigAvlChkRev(uint8 SigCorrChk_Cnt_T_u08,
                                                  uint8 SigRollgCnt_Cnt_T_u08, 
                                                  SigQlfr1 SigQlfr_Cnt_T_enum,                                                                                                    
                                                  P2VAR(uint8, AUTOMATIC, MotAgArbn_APPL_VAR) LstRollgCnt_Cnt_T_u08,
                                                  P2VAR(uint8, AUTOMATIC, MotAgArbn_APPL_VAR) StallCnt_Cnt_T_u08);
#define MotAgArbn_MotCtrl_START_SEC_CODE
#include "CDD_MotAgArbn_MotCtrl_MemMap.h" 

/**********************************************************************************************************************
  * Name        : MotAgArbnPer1
  * Description : MotAgArbn periodic processing in the motor control loop
  * Inputs      : MOTCTRLMGR_MotCtrlMotAgAMeclRollgCntr, MOTCTRLMGR_MotCtrlMotAgAMecl, MOTCTRLMGR_MotCtrlMotAgAMeclQlfr, 
                  MOTCTRLMGR_MotCtrlMotAgBMeclRollgCntr, MOTCTRLMGR_MotCtrlMotAgBMecl, MOTCTRLMGR_MotCtrlMotAgBMeclQlfr,
                  MOTCTRLMGR_MotCtrlMotAgMeclCorrlnSt
  * Outputs     : MOTCTRLMGR_MotCtrlMotAgMecl 
  * Usage Notes : Called at Motor Control loop rate 
  **********************************************************************************************************************/
FUNC (void, MotAgArbn_CODE) MotAgArbnPer1 (void)
{
     VAR(uint16, AUTOMATIC)   MotCtrlMotAgAMecl_MotRev_T_u0p16;
     VAR(uint16, AUTOMATIC)   MotCtrlMotAgBMecl_MotRev_T_u0p16;   
     VAR(uint8,  AUTOMATIC)   MotCtrlMotAgMeclCorrlnSt_Cnt_T_u08;
     VAR(uint8,  AUTOMATIC)   MotCtrlMotAgAMeclRollgCntr_Cnt_T_u08; 
     VAR(uint8,  AUTOMATIC)   MotCtrlMotAgBMeclRollgCntr_Cnt_T_u08; 
     VAR(SigQlfr1, AUTOMATIC) MotCtrlMotAgAMeclQlfr_T_enum;
     VAR(SigQlfr1, AUTOMATIC) MotCtrlMotAgBMeclQlfr_T_enum; 
     VAR(uint16,  AUTOMATIC)  MotCtrlMotAgMecl_MotRev_T_u0p16;   
     VAR(boolean, AUTOMATIC)  MotAgASigAvl_Cnt_T_lgc;
     VAR(boolean, AUTOMATIC)  MotAgBSigAvl_Cnt_T_lgc;        

     MotCtrlMotAgAMecl_MotRev_T_u0p16       = MOTCTRLMGR_MotCtrlMotAgAMecl;
     MotCtrlMotAgBMecl_MotRev_T_u0p16       = MOTCTRLMGR_MotCtrlMotAgBMecl; 
     MotCtrlMotAgMeclCorrlnSt_Cnt_T_u08     = MOTCTRLMGR_MotCtrlMotAgMeclCorrlnSt;
     MotCtrlMotAgAMeclRollgCntr_Cnt_T_u08   = MOTCTRLMGR_MotCtrlMotAgAMeclRollgCntr;
     MotCtrlMotAgBMeclRollgCntr_Cnt_T_u08   = MOTCTRLMGR_MotCtrlMotAgBMeclRollgCntr; 
     MotCtrlMotAgAMeclQlfr_T_enum           = MOTCTRLMGR_MotCtrlMotAgAMeclQlfr;
     MotCtrlMotAgBMeclQlfr_T_enum           = MOTCTRLMGR_MotCtrlMotAgBMeclQlfr;
     
     /** Motor Angle A Sensor Availability **/
     /* REQ: ES248A #74 I */
     MotAgASigAvl_Cnt_T_lgc = SigAvlChkRev((MotCtrlMotAgMeclCorrlnSt_Cnt_T_u08 & CORRLNSTSMASKSIGA_CNT_U08),
                                            MotCtrlMotAgAMeclRollgCntr_Cnt_T_u08, 
                                            MotCtrlMotAgAMeclQlfr_T_enum,                                     
                                            Rte_Pim_MotAgARollgCntPrev(),
                                            Rte_Pim_MotAgAStallCntPrev());                                    
     /** Motor Angle B Sensor Availability **/
     /* REQ: ES248A #75 I */
     MotAgBSigAvl_Cnt_T_lgc = SigAvlChkRev((MotCtrlMotAgMeclCorrlnSt_Cnt_T_u08 & CORRLNSTSMASKSIGB_CNT_U08),
                                            MotCtrlMotAgBMeclRollgCntr_Cnt_T_u08, 
                                            MotCtrlMotAgBMeclQlfr_T_enum,                                     
                                            Rte_Pim_MotAgBRollgCntPrev(),
                                            Rte_Pim_MotAgBStallCntPrev());  
     /* Arbitration */  /* REQ: ES248A #14 I */ /* REQ: ES248A #72 I */ /* REQ: ES248A #73 I */                               
     if(MotAgASigAvl_Cnt_T_lgc == TRUE)
     {
         MotCtrlMotAgMecl_MotRev_T_u0p16 = MotCtrlMotAgAMecl_MotRev_T_u0p16;
     }
     else if(MotAgBSigAvl_Cnt_T_lgc == TRUE)
     {
         MotCtrlMotAgMecl_MotRev_T_u0p16 = MotCtrlMotAgBMecl_MotRev_T_u0p16;
     }
     else
     {
         MotCtrlMotAgMecl_MotRev_T_u0p16 = *Rte_Pim_MotAgMeclPrev();
     }
     *Rte_Pim_MotAgMeclPrev() = MotCtrlMotAgMecl_MotRev_T_u0p16;
     MOTCTRLMGR_MotCtrlMotAgMecl = MotCtrlMotAgMecl_MotRev_T_u0p16;
}

/**********************************************************************************************************************
* Name:             SigAvlChkRev
* Description:      Check availability of the signal based on 'RollingCounter', 'StallCounter' and 'SignalQualifier'.
* Inputs:           SigCorrChk_Cnt_T_u08,  SigRollgCnt_Cnt_T_u08, SigQlfr_Cnt_T_enum                
* Inputs/Outputs:   *LstRollgCnt_Cnt_T_u08, *StallCnt_Cnt_T_u08
* Outputs:          SigAvl_Cnt_T_lgc 
* Usage Notes:      None
**********************************************************************************************************************/
static FUNC(boolean, MotAgArbn_CODE) SigAvlChkRev(uint8 SigCorrChk_Cnt_T_u08,
                                                  uint8 SigRollgCnt_Cnt_T_u08, 
                                                  SigQlfr1 SigQlfr_Cnt_T_enum,                                                                                                    
                                                  P2VAR(uint8, AUTOMATIC, MotAgArbn_APPL_VAR) LstRollgCnt_Cnt_T_u08,
                                                  P2VAR(uint8, AUTOMATIC, MotAgArbn_APPL_VAR) StallCnt_Cnt_T_u08)
{
     VAR(boolean,  AUTOMATIC)  SigAvl_Cnt_T_lgc;     
     if( SigRollgCnt_Cnt_T_u08 == (*LstRollgCnt_Cnt_T_u08))
     {
         if((*StallCnt_Cnt_T_u08) < MAXSTALLCNTR_CNT_U08)
         {
             (*StallCnt_Cnt_T_u08) = (*StallCnt_Cnt_T_u08) + 1U;
         }
     }
     else
     {
         (*StallCnt_Cnt_T_u08) = 0U;
     }  
     (*LstRollgCnt_Cnt_T_u08) = SigRollgCnt_Cnt_T_u08;  
     if((*StallCnt_Cnt_T_u08) >= MAXSTALL_CNT_U08) 
     {
         SigAvl_Cnt_T_lgc = FALSE;
     }
     else
     {
         if((SigQlfr_Cnt_T_enum < SIGQLFR_FAILD)&&(SigCorrChk_Cnt_T_u08 > 0U))
         {
             SigAvl_Cnt_T_lgc = TRUE;
         }
         else
         {
             SigAvl_Cnt_T_lgc = FALSE;
         }
     }
     return SigAvl_Cnt_T_lgc;                                                 
}
    
#define MotAgArbn_MotCtrl_STOP_SEC_CODE
#include "CDD_MotAgArbn_MotCtrl_MemMap.h" 
