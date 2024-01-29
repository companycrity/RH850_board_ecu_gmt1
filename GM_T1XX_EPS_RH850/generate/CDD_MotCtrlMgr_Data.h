
/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotCtrlMgr_Data.h
* Module Description: Motor Control Manager Data
* Project           : CBD
* Author            : Lucas Wendling
* Generator         : artt 2.0.2.0
* Generation Time   : 26.01.2017 17:39:21
***********************************************************************************************************************
* Version Control:
* %version:          31 %
* %derived_by:       nz2654 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/05/15  1        LWW       Initial Version                                                                 EA4#511
* 06/10/15  2        LWW       Template update for macro name fix                                              EA4#765
* 10/29/15  3        LWW       Template update for signal mapping changes                                      EA4#3428
* 08/08/16  4        LWW       Template update for compatibility with MotCtrlMgr Configuration Tool            EA4#6787
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_MOTCTRLMGR_DATA_H
#define CDD_MOTCTRLMGR_DATA_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 5.3 [NXTRDEV 5.3.1]:  Typedef of enumerations the RTE may define may be duplicated in CDD_MotCtrlMgr_Data.h 
                                           for use by non-RTE functions since the RTE definition cannot be guaranteed to be visible 
										   to these non-RTE functions.  The typedef definitions, however, will be the same in 
										   both definitions and therefore will not impact functionality */

/***************************************** Non-Rte Enumeration Definitions *******************************************/
#ifndef Rte_TypeDef_MotCurrEolCalSt2
	typedef uint8 MotCurrEolCalSt2;
#endif

#ifndef MCECS_OFFSCMDSTRT
	#define MCECS_OFFSCMDSTRT (0U)
#endif
#ifndef MCECS_GAINCMDCF
	#define MCECS_GAINCMDCF (7U)
#endif
#ifndef MCECS_GAINCMDBE
	#define MCECS_GAINCMDBE (6U)
#endif
#ifndef MCECS_GAINCMDAD
	#define MCECS_GAINCMDAD (5U)
#endif
#ifndef MCECS_OFFSCMDEND
	#define MCECS_OFFSCMDEND (4U)
#endif
#ifndef MCECS_OFFSCMDZERO
	#define MCECS_OFFSCMDZERO (3U)
#endif
#ifndef MCECS_OFFSCMDLO
	#define MCECS_OFFSCMDLO (2U)
#endif
#ifndef MCECS_OFFSCMDHI
	#define MCECS_OFFSCMDHI (1U)
#endif
#ifndef MCECS_CMDSAFEST
	#define MCECS_CMDSAFEST (8U)
#endif

#ifndef Rte_TypeDef_SigQlfr1
	typedef uint8 SigQlfr1;
#endif

#ifndef SIGQLFR_NORES
	#define SIGQLFR_NORES (0U)
#endif
#ifndef SIGQLFR_FAILD
	#define SIGQLFR_FAILD (2U)
#endif
#ifndef SIGQLFR_PASSD
	#define SIGQLFR_PASSD (1U)
#endif

#ifndef Rte_TypeDef_SysSt1
	typedef uint8 SysSt1;
#endif

#ifndef SYSST_DI
	#define SYSST_DI (0U)
#endif
#ifndef SYSST_OFF
	#define SYSST_OFF (1U)
#endif
#ifndef SYSST_ENA
	#define SYSST_ENA (2U)
#endif
#ifndef SYSST_WRMININ
	#define SYSST_WRMININ (3U)
#endif

/*********************************************** Exported Declarations ***********************************************/
/* Type Declarations */
typedef struct
{ 
	VAR(uint16, TYPEDEF)     MotCtrlAdc1RawRes[24];
	VAR(float32, TYPEDEF)     MotCtrlAdc0SelfDiag0;
	VAR(float32, TYPEDEF)     MotCtrlAdc0SelfDiag2;
	VAR(float32, TYPEDEF)     MotCtrlAdc0SelfDiag4;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrAdcVlyA;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrAdcVlyB;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrAdcVlyC;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrAdcVlyD;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrAdcVlyE;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrAdcVlyF;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrDax;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrQax;
	VAR(uint32, TYPEDEF)     MotCtrlPhaOnTiSumA;
	VAR(uint32, TYPEDEF)     MotCtrlPhaOnTiSumB;
	VAR(uint32, TYPEDEF)     MotCtrlPhaOnTiSumC;
	VAR(uint32, TYPEDEF)     MotCtrlMotAg0ErrReg;
	VAR(sint32, TYPEDEF)     MotCtrlMotAgCumvAlgndMrfRev;
	VAR(uint32, TYPEDEF)     MotCtrlMotAgTiBuf[8];
	VAR(float32, TYPEDEF)     MotCtrlMotCurrCorrdA;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrCorrdB;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrCorrdC;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrCorrdD;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrCorrdE;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrCorrdF;
	VAR(uint32, TYPEDEF)     MotCtrlMotAg1ErrReg;
	VAR(float32, TYPEDEF)     MotCtrlAdc0ScanGroup3Ref0;
	VAR(float32, TYPEDEF)     MotCtrlAdc0ScanGroup3Ref1;
	VAR(float32, TYPEDEF)     MotCtrlAdc0ScanGroup2Ref1;
	VAR(float32, TYPEDEF)     MotCtrlAdc0ScanGroup2Ref0;
	VAR(uint16, TYPEDEF)     MotCtrlMotAg0Mecl;
	VAR(uint16, TYPEDEF)     MotCtrlMotAg0ParFltCnt;
	VAR(uint16, TYPEDEF)     MotCtrlMotAgBuf[8];
	VAR(uint16, TYPEDEF)     MotCtrlMotAg0VltgFltCnt;
	VAR(uint16, TYPEDEF)     MotCtrlMotAg1Mecl;
	VAR(uint16, TYPEDEF)     MotCtrlMotAg1ParFltCnt;
	VAR(uint16, TYPEDEF)     MotCtrlMotAg1VltgFltCnt;
	VAR(uint16, TYPEDEF)     MotCtrlNtc5DErrCnt;
	VAR(uint16, TYPEDEF)     MotCtrlNtc6DErrCnt;
	VAR(uint16, TYPEDEF)     MotCtrlFastLoopCntr;
	VAR(uint16, TYPEDEF)     MotCtrlSlowLoopCntr;
	VAR(uint8, TYPEDEF)     MotCtrlMotAg0MeclRollgCntr;
	VAR(uint8, TYPEDEF)     MotCtrlMotAgBufIdx;
	VAR(uint8, TYPEDEF)     MotCtrlMotCurrRollgCntr1;
	VAR(uint8, TYPEDEF)     MotCtrlMotCurrRollgCntr2;
	VAR(uint8, TYPEDEF)     MotCtrlMotAg1MeclRollgCntr;
	VAR(boolean, TYPEDEF)     MotCtrlMotAgCumvInid;
	VAR(uint8, TYPEDEF)     AlgnResd1[10]; 
}MotCtrlToTwoMilliSecRec1;

typedef struct
{ 
	VAR(uint16, TYPEDEF)     Adc1RawRes[24];
	VAR(float32, TYPEDEF)     Adc0SelfDiag0;
	VAR(float32, TYPEDEF)     Adc0SelfDiag2;
	VAR(float32, TYPEDEF)     Adc0SelfDiag4;
	VAR(float32, TYPEDEF)     MotCurrAdcVlyA;
	VAR(float32, TYPEDEF)     MotCurrAdcVlyB;
	VAR(float32, TYPEDEF)     MotCurrAdcVlyC;
	VAR(float32, TYPEDEF)     MotCurrAdcVlyD;
	VAR(float32, TYPEDEF)     MotCurrAdcVlyE;
	VAR(float32, TYPEDEF)     MotCurrAdcVlyF;
	VAR(float32, TYPEDEF)     MotCurrDax;
	VAR(float32, TYPEDEF)     MotCurrQax;
	VAR(uint32, TYPEDEF)     PhaOnTiSumA;
	VAR(uint32, TYPEDEF)     PhaOnTiSumB;
	VAR(uint32, TYPEDEF)     PhaOnTiSumC;
	VAR(uint32, TYPEDEF)     MotAg0ErrReg;
	VAR(sint32, TYPEDEF)     MotAgCumvAlgndMrfRev;
	VAR(uint32, TYPEDEF)     MotAgTiBuf[8];
	VAR(float32, TYPEDEF)     MotCurrCorrdA;
	VAR(float32, TYPEDEF)     MotCurrCorrdB;
	VAR(float32, TYPEDEF)     MotCurrCorrdC;
	VAR(float32, TYPEDEF)     MotCurrCorrdD;
	VAR(float32, TYPEDEF)     MotCurrCorrdE;
	VAR(float32, TYPEDEF)     MotCurrCorrdF;
	VAR(uint32, TYPEDEF)     MotAg1ErrReg;
	VAR(float32, TYPEDEF)     Adc0ScanGroup3Ref0;
	VAR(float32, TYPEDEF)     Adc0ScanGroup3Ref1;
	VAR(float32, TYPEDEF)     Adc0ScanGroup2Ref1;
	VAR(float32, TYPEDEF)     Adc0ScanGroup2Ref0;
	VAR(uint16, TYPEDEF)     MotAg0Mecl;
	VAR(uint16, TYPEDEF)     MotAg0ParFltCnt;
	VAR(uint16, TYPEDEF)     MotAgBuf[8];
	VAR(uint16, TYPEDEF)     MotAg0VltgFltCnt;
	VAR(uint16, TYPEDEF)     MotAg1Mecl;
	VAR(uint16, TYPEDEF)     MotAg1ParFltCnt;
	VAR(uint16, TYPEDEF)     MotAg1VltgFltCnt;
	VAR(uint16, TYPEDEF)     Ntc5DErrCnt;
	VAR(uint16, TYPEDEF)     Ntc6DErrCnt;
	VAR(uint16, TYPEDEF)     FastLoopCntr;
	VAR(uint16, TYPEDEF)     SlowLoopCntr;
	VAR(uint8, TYPEDEF)     MotAg0MeclRollgCntr;
	VAR(uint8, TYPEDEF)     MotAgBufIdx;
	VAR(uint8, TYPEDEF)     MotCurrRollgCntr1;
	VAR(uint8, TYPEDEF)     MotCurrRollgCntr2;
	VAR(uint8, TYPEDEF)     MotAg1MeclRollgCntr;
	VAR(boolean, TYPEDEF)     MotAgCumvInid;
	VAR(uint8, TYPEDEF)     AlgnResd2[10]; 
}TwoMilliSecFromMotCtrlRec1;

typedef struct
{ 
	VAR(float32, TYPEDEF)     BrdgVltg;
	VAR(float32, TYPEDEF)     MotVelMrf;
	VAR(float32, TYPEDEF)     EcuTFild;
	VAR(float32, TYPEDEF)     MotAgElecDly;
	VAR(float32, TYPEDEF)     MotCurrDaxCmd;
	VAR(float32, TYPEDEF)     MotCurrDaxMax;
	VAR(float32, TYPEDEF)     MotCurrQaxCmd;
	VAR(float32, TYPEDEF)     MotDampgDax;
	VAR(float32, TYPEDEF)     MotDampgQax;
	VAR(float32, TYPEDEF)     MotIntglGainDax;
	VAR(float32, TYPEDEF)     MotIntglGainQax;
	VAR(float32, TYPEDEF)     MotPropGainDax;
	VAR(float32, TYPEDEF)     MotPropGainQax;
	VAR(float32, TYPEDEF)     MotReacncDax;
	VAR(float32, TYPEDEF)     MotReacncQax;
	VAR(float32, TYPEDEF)     MotVltgDaxFf;
	VAR(float32, TYPEDEF)     MotVltgQaxFf;
	VAR(float32, TYPEDEF)     MotAgElecDlyRpl;
	VAR(float32, TYPEDEF)     MotCurrQaxToMotTqGain;
	VAR(float32, TYPEDEF)     MotTqRplCoggOrder1Mgn;
	VAR(float32, TYPEDEF)     MotTqRplCoggOrder1Pha;
	VAR(float32, TYPEDEF)     MotTqRplCoggOrder2Mgn;
	VAR(float32, TYPEDEF)     MotTqRplCoggOrder2Pha;
	VAR(float32, TYPEDEF)     MotTqRplCoggOrder3Mgn;
	VAR(float32, TYPEDEF)     MotTqRplCoggOrder3Pha;
	VAR(float32, TYPEDEF)     MotREstimd;
	VAR(uint16, TYPEDEF)     LoopCntr2MilliSec;
	VAR(MotCurrEolCalSt2, TYPEDEF)     MotCurrEolCalSt;
	VAR(boolean, TYPEDEF)     DiagcStsIvtr1Inactv;
	VAR(boolean, TYPEDEF)     DiagcStsIvtr2Inactv;
	VAR(sint8, TYPEDEF)     MotElecMeclPolarity;
	VAR(SysSt1, TYPEDEF)     SysSt;
	VAR(uint8, TYPEDEF)     CurrMeasCorrlnSts;
	VAR(sint8, TYPEDEF)     MotAgMecl0Polarity;
	VAR(SigQlfr1, TYPEDEF)     MotCurrQlfr1;
	VAR(SigQlfr1, TYPEDEF)     MotCurrQlfr2;
	VAR(boolean, TYPEDEF)     IvtrLoaMtgtnEna;
	VAR(boolean, TYPEDEF)     CurrMeasLoaMtgtnEna;
	VAR(sint8, TYPEDEF)     MotAgMecl1Polarity;
	VAR(uint8, TYPEDEF)     MotAgMeclCorrlnSt;
	VAR(SigQlfr1, TYPEDEF)     MotAg0MeclQlfr;
	VAR(SigQlfr1, TYPEDEF)     MotAg1MeclQlfr;
	VAR(boolean, TYPEDEF)     CurrMeasWrmIninTestCmpl;
	VAR(boolean, TYPEDEF)     MotCurrAdcVlyAAdcFaild;
	VAR(boolean, TYPEDEF)     MotCurrAdcVlyBAdcFaild;
	VAR(boolean, TYPEDEF)     MotCurrAdcVlyCAdcFaild;
	VAR(boolean, TYPEDEF)     MotCurrAdcVlyDAdcFaild;
	VAR(boolean, TYPEDEF)     MotCurrAdcVlyEAdcFaild;
	VAR(boolean, TYPEDEF)     MotCurrAdcVlyFAdcFaild;
	VAR(uint8, TYPEDEF)     AdcDiagcStrtPtrOutp;
	VAR(uint8, TYPEDEF)     AdcDiagcEndPtrOutp;
	VAR(uint8, TYPEDEF)     AlgnResd3[14]; 
}TwoMilliSecToMotCtrlRec1;

typedef struct
{ 
	VAR(float32, TYPEDEF)     MotCtrlBrdgVltg;
	VAR(float32, TYPEDEF)     MotCtrlMotVelMrf;
	VAR(float32, TYPEDEF)     MotCtrlEcuTFild;
	VAR(float32, TYPEDEF)     MotCtrlMotAgElecDly;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrDaxCmd;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrDaxMax;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrQaxCmd;
	VAR(float32, TYPEDEF)     MotCtrlMotDampgDax;
	VAR(float32, TYPEDEF)     MotCtrlMotDampgQax;
	VAR(float32, TYPEDEF)     MotCtrlMotIntglGainDax;
	VAR(float32, TYPEDEF)     MotCtrlMotIntglGainQax;
	VAR(float32, TYPEDEF)     MotCtrlMotPropGainDax;
	VAR(float32, TYPEDEF)     MotCtrlMotPropGainQax;
	VAR(float32, TYPEDEF)     MotCtrlMotReacncDax;
	VAR(float32, TYPEDEF)     MotCtrlMotReacncQax;
	VAR(float32, TYPEDEF)     MotCtrlMotVltgDaxFf;
	VAR(float32, TYPEDEF)     MotCtrlMotVltgQaxFf;
	VAR(float32, TYPEDEF)     MotCtrlMotAgElecDlyRpl;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrQaxToMotTqGain;
	VAR(float32, TYPEDEF)     MotCtrlMotTqRplCoggOrder1Mgn;
	VAR(float32, TYPEDEF)     MotCtrlMotTqRplCoggOrder1Pha;
	VAR(float32, TYPEDEF)     MotCtrlMotTqRplCoggOrder2Mgn;
	VAR(float32, TYPEDEF)     MotCtrlMotTqRplCoggOrder2Pha;
	VAR(float32, TYPEDEF)     MotCtrlMotTqRplCoggOrder3Mgn;
	VAR(float32, TYPEDEF)     MotCtrlMotTqRplCoggOrder3Pha;
	VAR(float32, TYPEDEF)     MotCtrlMotREstimd;
	VAR(uint16, TYPEDEF)     MotCtrlLoopCntr2MilliSec;
	VAR(MotCurrEolCalSt2, TYPEDEF)     MotCtrlMotCurrEolCalSt;
	VAR(boolean, TYPEDEF)     MotCtrlDiagcStsIvtr1Inactv;
	VAR(boolean, TYPEDEF)     MotCtrlDiagcStsIvtr2Inactv;
	VAR(sint8, TYPEDEF)     MotCtrlMotElecMeclPolarity;
	VAR(SysSt1, TYPEDEF)     MotCtrlSysSt;
	VAR(uint8, TYPEDEF)     MotCtrlCurrMeasCorrlnSts;
	VAR(sint8, TYPEDEF)     MotCtrlMotAgMecl0Polarity;
	VAR(SigQlfr1, TYPEDEF)     MotCtrlMotCurrQlfr1;
	VAR(SigQlfr1, TYPEDEF)     MotCtrlMotCurrQlfr2;
	VAR(boolean, TYPEDEF)     MotCtrlIvtrLoaMtgtnEna;
	VAR(boolean, TYPEDEF)     MotCtrlCurrMeasLoaMtgtnEna;
	VAR(sint8, TYPEDEF)     MotCtrlMotAgMecl1Polarity;
	VAR(uint8, TYPEDEF)     MotCtrlMotAgMeclCorrlnSt;
	VAR(SigQlfr1, TYPEDEF)     MotCtrlMotAg0MeclQlfr;
	VAR(SigQlfr1, TYPEDEF)     MotCtrlMotAg1MeclQlfr;
	VAR(boolean, TYPEDEF)     MotCtrlCurrMeasWrmIninTestCmpl;
	VAR(boolean, TYPEDEF)     MotCtrlMotCurrAdcVlyAAdcFaild;
	VAR(boolean, TYPEDEF)     MotCtrlMotCurrAdcVlyBAdcFaild;
	VAR(boolean, TYPEDEF)     MotCtrlMotCurrAdcVlyCAdcFaild;
	VAR(boolean, TYPEDEF)     MotCtrlMotCurrAdcVlyDAdcFaild;
	VAR(boolean, TYPEDEF)     MotCtrlMotCurrAdcVlyEAdcFaild;
	VAR(boolean, TYPEDEF)     MotCtrlMotCurrAdcVlyFAdcFaild;
	VAR(uint8, TYPEDEF)     MotCtrlAdcDiagcStrtPtrOutp;
	VAR(uint8, TYPEDEF)     MotCtrlAdcDiagcEndPtrOutp;
	VAR(uint8, TYPEDEF)     AlgnResd4[14]; 
}MotCtrlFromTwoMilliSecRec1;

typedef struct
{ 
	VAR(uint16, TYPEDEF)     MotCtrlAdc0RawRes[24];
	VAR(uint32, TYPEDEF)     MotCtrlTSG31DCMP0E;
	VAR(uint32, TYPEDEF)     MotCtrlTSG31CMP0E;
	VAR(uint32, TYPEDEF)     MotCtrlTSG31CMP12E;
	VAR(uint32, TYPEDEF)     MotCtrlTSG31CMPWE;
	VAR(uint32, TYPEDEF)     MotCtrlTSG31CMPVE;
	VAR(uint32, TYPEDEF)     MotCtrlTSG31CMPUE;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrAdcPeakA;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrAdcPeakB;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrAdcPeakC;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrAdcPeakD;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrAdcPeakE;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrAdcPeakF;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrSnsrOffs1;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrSnsrOffs2;
	VAR(uint32, TYPEDEF)     MotCtrlPhaOnTiA;
	VAR(uint32, TYPEDEF)     MotCtrlPhaOnTiB;
	VAR(uint32, TYPEDEF)     MotCtrlPhaOnTiC;
	VAR(uint32, TYPEDEF)     MotCtrlPwmPerd;
	VAR(float32, TYPEDEF)     MotCtrlCurrMeasMotAgCorrd;
	VAR(uint32, TYPEDEF)     MotCtrlMotAg0RawRes[3];
	VAR(uint32, TYPEDEF)     MotCtrlMotAgMeasTi;
	VAR(float32, TYPEDEF)     MotCtrlMotModlnIdx;
	VAR(uint32, TYPEDEF)     MotCtrlCmuOffs;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrQaxCmdFinal;
	VAR(float32, TYPEDEF)     MotCtrlMotVltgDax;
	VAR(float32, TYPEDEF)     MotCtrlMotVltgQax;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrQaxCoggCmd;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrQaxRplCmd;
	VAR(uint32, TYPEDEF)     MotCtrlMotAg1RawRes[3];
	VAR(float32, TYPEDEF)     MotCtrlMotBackEmfVltg;
	VAR(float32, TYPEDEF)     MotCtrlMotInduDaxEstimdIvs;
	VAR(float32, TYPEDEF)     MotCtrlMotInduQaxEstimdIvs;
	VAR(uint16, TYPEDEF)     MotCtrlMotAgMecl;
	VAR(uint16, TYPEDEF)     MotCtrlMotAgElec;
	VAR(uint16, TYPEDEF)     MotCtrlMotPhaAdv;
	VAR(uint8, TYPEDEF)     MotCtrlRegInpADCD0SGSR1;
	VAR(boolean, TYPEDEF)     MotCtrlDualEcuMotCtrlMtgtnEna;
	VAR(uint8, TYPEDEF)     AlgnResd5[8]; 
}MotCtrlIntRec1;

/* Global Variable Declarations */
#define CDD_MotCtrlMgr_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"
extern VAR(MotCtrlToTwoMilliSecRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_MotCtrlToTwoMilliSec_Rec;
#define CDD_MotCtrlMgr_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

#define CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"
extern VAR(TwoMilliSecFromMotCtrlRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec;
#define CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

#define CDD_MotCtrlMgr_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"
extern VAR(TwoMilliSecToMotCtrlRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_TwoMilliSecToMotCtrl_Rec;
#define CDD_MotCtrlMgr_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

#define CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"
extern VAR(MotCtrlFromTwoMilliSecRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec;
#define CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

#define CDD_MotCtrlMgr_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"
extern VAR(MotCtrlIntRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_MotCtrlInt_Rec;
#define CDD_MotCtrlMgr_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

/* Macro Definitions */
#define MOTCTRLMGR_MotCtrlAdc0RawRes     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlAdc0RawRes)
#define MOTCTRLMGR_MotCtrlAdc1RawRes     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlAdc1RawRes)
#define MOTCTRLMGR_MotCtrlTSG31DCMP0E     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlTSG31DCMP0E)
#define MOTCTRLMGR_MotCtrlTSG31CMP0E     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlTSG31CMP0E)
#define MOTCTRLMGR_MotCtrlTSG31CMP12E     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlTSG31CMP12E)
#define MOTCTRLMGR_MotCtrlTSG31CMPWE     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlTSG31CMPWE)
#define MOTCTRLMGR_MotCtrlTSG31CMPVE     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlTSG31CMPVE)
#define MOTCTRLMGR_MotCtrlTSG31CMPUE     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlTSG31CMPUE)
#define MOTCTRLMGR_MotCtrlAdc0SelfDiag0     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlAdc0SelfDiag0)
#define MOTCTRLMGR_MotCtrlAdc0SelfDiag2     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlAdc0SelfDiag2)
#define MOTCTRLMGR_MotCtrlAdc0SelfDiag4     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlAdc0SelfDiag4)
#define MOTCTRLMGR_MotCtrlMotCurrAdcPeakA     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrAdcPeakA)
#define MOTCTRLMGR_MotCtrlMotCurrAdcPeakB     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrAdcPeakB)
#define MOTCTRLMGR_MotCtrlMotCurrAdcPeakC     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrAdcPeakC)
#define MOTCTRLMGR_MotCtrlMotCurrAdcPeakD     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrAdcPeakD)
#define MOTCTRLMGR_MotCtrlMotCurrAdcPeakE     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrAdcPeakE)
#define MOTCTRLMGR_MotCtrlMotCurrAdcPeakF     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrAdcPeakF)
#define MOTCTRLMGR_MotCtrlMotCurrAdcVlyA     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrAdcVlyA)
#define MOTCTRLMGR_MotCtrlMotCurrAdcVlyB     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrAdcVlyB)
#define MOTCTRLMGR_MotCtrlMotCurrAdcVlyC     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrAdcVlyC)
#define MOTCTRLMGR_MotCtrlMotCurrAdcVlyD     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrAdcVlyD)
#define MOTCTRLMGR_MotCtrlMotCurrAdcVlyE     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrAdcVlyE)
#define MOTCTRLMGR_MotCtrlMotCurrAdcVlyF     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrAdcVlyF)
#define MOTCTRLMGR_MotCtrlMotCurrSnsrOffs1     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrSnsrOffs1)
#define MOTCTRLMGR_MotCtrlMotCurrSnsrOffs2     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrSnsrOffs2)
#define MOTCTRLMGR_MotCtrlMotCurrEolCalSt     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrEolCalSt)
#define MOTCTRLMGR_MotCtrlBrdgVltg     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlBrdgVltg)
#define MOTCTRLMGR_MotCtrlDiagcStsIvtr1Inactv     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlDiagcStsIvtr1Inactv)
#define MOTCTRLMGR_MotCtrlDiagcStsIvtr2Inactv     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlDiagcStsIvtr2Inactv)
#define MOTCTRLMGR_MotCtrlMotElecMeclPolarity     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotElecMeclPolarity)
#define MOTCTRLMGR_MotCtrlMotVelMrf     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotVelMrf)
#define MOTCTRLMGR_MotCtrlSysSt     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlSysSt)
#define MOTCTRLMGR_MotCtrlPhaOnTiA     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlPhaOnTiA)
#define MOTCTRLMGR_MotCtrlPhaOnTiB     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlPhaOnTiB)
#define MOTCTRLMGR_MotCtrlPhaOnTiC     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlPhaOnTiC)
#define MOTCTRLMGR_MotCtrlPwmPerd     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlPwmPerd)
#define MOTCTRLMGR_MotCtrlCurrMeasMotAgCorrd     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlCurrMeasMotAgCorrd)
#define MOTCTRLMGR_MotCtrlMotCurrDax     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrDax)
#define MOTCTRLMGR_MotCtrlMotCurrQax     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrQax)
#define MOTCTRLMGR_MotCtrlMotAg0RawRes     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotAg0RawRes)
#define MOTCTRLMGR_MotCtrlMotAg0Mecl     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAg0Mecl)
#define MOTCTRLMGR_MotCtrlMotAgMeasTi     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotAgMeasTi)
#define MOTCTRLMGR_MotCtrlMotAgMecl     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotAgMecl)
#define MOTCTRLMGR_MotCtrlMotAgElec     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotAgElec)
#define MOTCTRLMGR_MotCtrlMotModlnIdx     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotModlnIdx)
#define MOTCTRLMGR_MotCtrlMotPhaAdv     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotPhaAdv)
#define MOTCTRLMGR_MotCtrlMotAg0MeclRollgCntr     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAg0MeclRollgCntr)
#define MOTCTRLMGR_MotCtrlCmuOffs     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlCmuOffs)
#define MOTCTRLMGR_MotCtrlPhaOnTiSumA     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlPhaOnTiSumA)
#define MOTCTRLMGR_MotCtrlPhaOnTiSumB     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlPhaOnTiSumB)
#define MOTCTRLMGR_MotCtrlPhaOnTiSumC     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlPhaOnTiSumC)
#define MOTCTRLMGR_MotCtrlMotCurrQaxCmdFinal     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrQaxCmdFinal)
#define MOTCTRLMGR_MotCtrlMotVltgDax     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotVltgDax)
#define MOTCTRLMGR_MotCtrlMotVltgQax     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotVltgQax)
#define MOTCTRLMGR_MotCtrlEcuTFild     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlEcuTFild)
#define MOTCTRLMGR_MotCtrlCurrMeasCorrlnSts     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlCurrMeasCorrlnSts)
#define MOTCTRLMGR_MotCtrlMotAgMecl0Polarity     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAgMecl0Polarity)
#define MOTCTRLMGR_MotCtrlMotAg0ErrReg     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAg0ErrReg)
#define MOTCTRLMGR_MotCtrlMotAg0ParFltCnt     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAg0ParFltCnt)
#define MOTCTRLMGR_MotCtrlMotAgCumvAlgndMrfRev     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAgCumvAlgndMrfRev)
#define MOTCTRLMGR_MotCtrlMotAgBuf     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAgBuf)
#define MOTCTRLMGR_MotCtrlMotAgBufIdx     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAgBufIdx)
#define MOTCTRLMGR_MotCtrlMotAgTiBuf     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAgTiBuf)
#define MOTCTRLMGR_MotCtrlMotCurrCorrdA     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrCorrdA)
#define MOTCTRLMGR_MotCtrlMotCurrCorrdB     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrCorrdB)
#define MOTCTRLMGR_MotCtrlMotCurrCorrdC     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrCorrdC)
#define MOTCTRLMGR_MotCtrlMotCurrCorrdD     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrCorrdD)
#define MOTCTRLMGR_MotCtrlMotCurrCorrdE     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrCorrdE)
#define MOTCTRLMGR_MotCtrlMotCurrCorrdF     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrCorrdF)
#define MOTCTRLMGR_MotCtrlMotCurrQlfr1     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrQlfr1)
#define MOTCTRLMGR_MotCtrlMotCurrQlfr2     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrQlfr2)
#define MOTCTRLMGR_MotCtrlMotCurrRollgCntr1     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrRollgCntr1)
#define MOTCTRLMGR_MotCtrlMotCurrRollgCntr2     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrRollgCntr2)
#define MOTCTRLMGR_MotCtrlIvtrLoaMtgtnEna     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlIvtrLoaMtgtnEna)
#define MOTCTRLMGR_MotCtrlMotAgElecDly     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAgElecDly)
#define MOTCTRLMGR_MotCtrlMotCurrDaxCmd     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrDaxCmd)
#define MOTCTRLMGR_MotCtrlMotCurrDaxMax     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrDaxMax)
#define MOTCTRLMGR_MotCtrlCurrMeasLoaMtgtnEna     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlCurrMeasLoaMtgtnEna)
#define MOTCTRLMGR_MotCtrlMotCurrQaxCmd     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrQaxCmd)
#define MOTCTRLMGR_MotCtrlMotCurrQaxCoggCmd     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrQaxCoggCmd)
#define MOTCTRLMGR_MotCtrlMotCurrQaxRplCmd     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrQaxRplCmd)
#define MOTCTRLMGR_MotCtrlMotDampgDax     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotDampgDax)
#define MOTCTRLMGR_MotCtrlMotDampgQax     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotDampgQax)
#define MOTCTRLMGR_MotCtrlMotIntglGainDax     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotIntglGainDax)
#define MOTCTRLMGR_MotCtrlMotIntglGainQax     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotIntglGainQax)
#define MOTCTRLMGR_MotCtrlMotPropGainDax     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotPropGainDax)
#define MOTCTRLMGR_MotCtrlMotPropGainQax     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotPropGainQax)
#define MOTCTRLMGR_MotCtrlMotReacncDax     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotReacncDax)
#define MOTCTRLMGR_MotCtrlMotReacncQax     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotReacncQax)
#define MOTCTRLMGR_MotCtrlMotVltgDaxFf     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotVltgDaxFf)
#define MOTCTRLMGR_MotCtrlMotVltgQaxFf     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotVltgQaxFf)
#define MOTCTRLMGR_MotCtrlMotAg0VltgFltCnt     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAg0VltgFltCnt)
#define MOTCTRLMGR_MotCtrlMotAg1RawRes     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotAg1RawRes)
#define MOTCTRLMGR_MotCtrlMotAgMecl1Polarity     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAgMecl1Polarity)
#define MOTCTRLMGR_MotCtrlMotAg1ErrReg     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAg1ErrReg)
#define MOTCTRLMGR_MotCtrlMotAg1Mecl     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAg1Mecl)
#define MOTCTRLMGR_MotCtrlMotAg1MeclRollgCntr     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAg1MeclRollgCntr)
#define MOTCTRLMGR_MotCtrlMotAg1ParFltCnt     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAg1ParFltCnt)
#define MOTCTRLMGR_MotCtrlMotAg1VltgFltCnt     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAg1VltgFltCnt)
#define MOTCTRLMGR_MotCtrlMotAgMeclCorrlnSt     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAgMeclCorrlnSt)
#define MOTCTRLMGR_MotCtrlMotAg0MeclQlfr     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg0MeclQlfr)
#define MOTCTRLMGR_MotCtrlMotAg1MeclQlfr     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg1MeclQlfr)
#define MOTCTRLMGR_MotCtrlNtc5DErrCnt     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlNtc5DErrCnt)
#define MOTCTRLMGR_MotCtrlNtc6DErrCnt     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlNtc6DErrCnt)
#define MOTCTRLMGR_MotCtrlCurrMeasWrmIninTestCmpl     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlCurrMeasWrmIninTestCmpl)
#define MOTCTRLMGR_MotCtrlMotAgElecDlyRpl     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAgElecDlyRpl)
#define MOTCTRLMGR_MotCtrlMotCurrQaxToMotTqGain     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrQaxToMotTqGain)
#define MOTCTRLMGR_MotCtrlMotTqRplCoggOrder1Mgn     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotTqRplCoggOrder1Mgn)
#define MOTCTRLMGR_MotCtrlMotTqRplCoggOrder1Pha     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotTqRplCoggOrder1Pha)
#define MOTCTRLMGR_MotCtrlMotTqRplCoggOrder2Mgn     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotTqRplCoggOrder2Mgn)
#define MOTCTRLMGR_MotCtrlMotTqRplCoggOrder2Pha     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotTqRplCoggOrder2Pha)
#define MOTCTRLMGR_MotCtrlMotTqRplCoggOrder3Mgn     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotTqRplCoggOrder3Mgn)
#define MOTCTRLMGR_MotCtrlMotTqRplCoggOrder3Pha     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotTqRplCoggOrder3Pha)
#define MOTCTRLMGR_MotCtrlMotCurrAdcVlyAAdcFaild     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrAdcVlyAAdcFaild)
#define MOTCTRLMGR_MotCtrlMotCurrAdcVlyBAdcFaild     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrAdcVlyBAdcFaild)
#define MOTCTRLMGR_MotCtrlMotCurrAdcVlyCAdcFaild     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrAdcVlyCAdcFaild)
#define MOTCTRLMGR_MotCtrlMotCurrAdcVlyDAdcFaild     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrAdcVlyDAdcFaild)
#define MOTCTRLMGR_MotCtrlMotCurrAdcVlyEAdcFaild     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrAdcVlyEAdcFaild)
#define MOTCTRLMGR_MotCtrlMotCurrAdcVlyFAdcFaild     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrAdcVlyFAdcFaild)
#define MOTCTRLMGR_MotCtrlFastLoopCntr     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlFastLoopCntr)
#define MOTCTRLMGR_MotCtrlSlowLoopCntr     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlSlowLoopCntr)
#define MOTCTRLMGR_MotCtrlLoopCntr2MilliSec     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlLoopCntr2MilliSec)
#define MOTCTRLMGR_MotCtrlAdcDiagcStrtPtrOutp     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlAdcDiagcStrtPtrOutp)
#define MOTCTRLMGR_MotCtrlAdcDiagcEndPtrOutp     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlAdcDiagcEndPtrOutp)
#define MOTCTRLMGR_MotCtrlAdc0ScanGroup3Ref0     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlAdc0ScanGroup3Ref0)
#define MOTCTRLMGR_MotCtrlAdc0ScanGroup3Ref1     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlAdc0ScanGroup3Ref1)
#define MOTCTRLMGR_MotCtrlAdc0ScanGroup2Ref1     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlAdc0ScanGroup2Ref1)
#define MOTCTRLMGR_MotCtrlAdc0ScanGroup2Ref0     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlAdc0ScanGroup2Ref0)
#define MOTCTRLMGR_MotCtrlRegInpADCD0SGSR1     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlRegInpADCD0SGSR1)
#define MOTCTRLMGR_MotCtrlMotAgCumvInid     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAgCumvInid)
#define MOTCTRLMGR_MotCtrlDualEcuMotCtrlMtgtnEna     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlDualEcuMotCtrlMtgtnEna)
#define MOTCTRLMGR_MotCtrlMotBackEmfVltg     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotBackEmfVltg)
#define MOTCTRLMGR_MotCtrlMotInduDaxEstimdIvs     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotInduDaxEstimdIvs)
#define MOTCTRLMGR_MotCtrlMotInduQaxEstimdIvs     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotInduQaxEstimdIvs)
#define MOTCTRLMGR_MotCtrlMotREstimd     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotREstimd)
#define MOTCTRLMGR_MotCtrlMotAgAMeclQlfr     (MOTCTRLMGR_MotCtrlMotAg0MeclQlfr)
#define MOTCTRLMGR_MotCtrlMotAgBMeclQlfr     (MOTCTRLMGR_MotCtrlMotAg1MeclQlfr)
#define MOTCTRLMGR_MotCtrlMotAgAMecl     (MOTCTRLMGR_MotCtrlMotAg0Mecl)
#define MOTCTRLMGR_MotCtrlMotAgBMecl     (MOTCTRLMGR_MotCtrlMotAg1Mecl)
#define MOTCTRLMGR_MotCtrlMotAgAMeclRollgCntr     (MOTCTRLMGR_MotCtrlMotAg0MeclRollgCntr)
#define MOTCTRLMGR_MotCtrlMotAgBMeclRollgCntr     (MOTCTRLMGR_MotCtrlMotAg1MeclRollgCntr)

/**************************************** End Of Multiple Include Protection *****************************************/
#endif
