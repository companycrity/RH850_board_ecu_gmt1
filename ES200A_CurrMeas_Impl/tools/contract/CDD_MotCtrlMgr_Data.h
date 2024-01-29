/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotCtrlMgr_Data.h
* Module Description: MotCtrlMgr Complex Driver Header Stub
* Project           : CBD
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:          5 %
* %derived_by:       jzk9cc %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/12/15  1        Selva       Initial Version                                                                 EA4#361
* 03/26/16  5        Rijvi       Updated per design rev. 4.2.0    												 EA4#3978                                                                  
**********************************************************************************************************************/

/********************** Stubs added at component level******************/

#ifndef Rte_TypeDef_SysSt1
   typedef uint8 SysSt1;
#endif

# ifndef SYSST_DI
#  define SYSST_DI (0U)
# endif

# ifndef SYSST_OFF
#  define SYSST_OFF (1U)
# endif

# ifndef SYSST_ENA
#  define SYSST_ENA (2U)
# endif

# ifndef SYSST_WRMININ
#  define SYSST_WRMININ (3U)
# endif

/************************************* INPUTS *****************************/ 
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlBrdgVltg; 
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlCtrlrTFild; 
extern VAR(boolean, AUTOMATIC)    MOTCTRLMGR_MotCtrlDiagcStsIvtr1Inactv; 
extern VAR(boolean, AUTOMATIC)    MOTCTRLMGR_MotCtrlDiagcStsIvtr2Inactv; 
extern VAR(uint16, AUTOMATIC)     MOTCTRLMGR_MotCtrlMotAgElec;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrAdcVlyA; 
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrAdcVlyB; 
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrAdcVlyC; 
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrAdcVlyD; 
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrAdcVlyE; 
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrAdcVlyF; 
extern VAR(sint8, AUTOMATIC)      MOTCTRLMGR_MotCtrlMotElecMeclPolarity;  
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotVelMrf; 
extern VAR(uint32, AUTOMATIC)     MOTCTRLMGR_MotCtrlPhaOnTiA;  
extern VAR(uint32, AUTOMATIC)     MOTCTRLMGR_MotCtrlPhaOnTiB; 
extern VAR(uint32, AUTOMATIC)     MOTCTRLMGR_MotCtrlPhaOnTiC; 
extern VAR(uint32, AUTOMATIC)     MOTCTRLMGR_MotCtrlPwmPerd; 
extern VAR(SysSt1, AUTOMATIC)     MOTCTRLMGR_MotCtrlSysSt;  
extern VAR(SysSt1, AUTOMATIC)     MOTCTRLMGR_MotCtrlCurrMeasWrmIninTestCmpl;  

extern VAR(boolean, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrAdcVlyAAdcFaild;
extern VAR(boolean, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrAdcVlyBAdcFaild;
extern VAR(boolean, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrAdcVlyCAdcFaild;
extern VAR(boolean, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrAdcVlyDAdcFaild;
extern VAR(boolean, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrAdcVlyEAdcFaild;
extern VAR(boolean, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrAdcVlyFAdcFaild;




/*************OUTPUT**********************/
extern VAR(float32, AUTOMATIC)     MOTCTRLMGR_MotCtrlCurrMeasMotAgCorrd ;           
extern VAR(uint8, AUTOMATIC)       MOTCTRLMGR_MotCtrlMotCurrRollgCntr1;   			 
extern VAR(uint8, AUTOMATIC)       MOTCTRLMGR_MotCtrlMotCurrRollgCntr2; 			  
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrCorrdA;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrCorrdB;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrCorrdC;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrCorrdD;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrCorrdE;
extern VAR(float32, AUTOMATIC)    MOTCTRLMGR_MotCtrlMotCurrCorrdF;
extern VAR(uint16, AUTOMATIC)     MOTCTRLMGR_MotCtrlNtc5DErrCnt;
extern VAR(uint16, AUTOMATIC)     MOTCTRLMGR_MotCtrlNtc6DErrCnt;

 /********************** Stubs added at component level******************/
    
 
 
 
 
 
