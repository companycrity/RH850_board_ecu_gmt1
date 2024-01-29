/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name: StHlthSigStc_Cfg.c
* Module Description: Code generator for user configurations of State of Health Signal Statistics
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
* 05/05/16  2        AR        Updated for EA4#5553                                                             EA4#5553
**********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include "Rte_StHlthSigStc.h"
#include "Std_Types.h"
#include "os.h"
#include "osek.h"
#include "StHlthSigStc_Cfg.h"


/******************************************** File Level Rule Deviations *********************************************/

/****************************************************** Macros *******************************************************/
#define StHlthSigStc_START_SEC_CODE
#include "StHlthSigStc_MemMap.h" 

/* Wrapper function to get State of Health Signal data for the signal CtrlrTStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetCtrlrTStHlthVal(void);
/* Wrapper function to get State of Health Signal data for the signal OutpAssiStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetOutpAssiStHlthVal(void);
/* Wrapper function to get State of Health Signal data for the signal AbsltMotPosABDifStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetAbsltMotPosABDifStHlthVal(void);
/* Wrapper function to get State of Health Signal data for the signal AbsltMotPosBCDifStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetAbsltMotPosBCDifStHlthVal(void);
/* Wrapper function to get State of Health Signal data for the signal AbsltMotPosACDifStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetAbsltMotPosACDifStHlthVal(void);
/* Wrapper function to get State of Health Signal data for the signal DigTqSnsrAStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetDigTqSnsrAStHlthVal(void);
/* Wrapper function to get State of Health Signal data for the signal DutyCycStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetDutyCycStHlthVal(void);
/* Wrapper function to get State of Health Signal data for the signal DigTqSnsrBStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetDigTqSnsrBStHlthVal(void);
/* Wrapper function to get State of Health Signal data for the signal PhaAStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetPhaAStHlthVal(void);
/* Wrapper function to get State of Health Signal data for the signal RamEccSngBitCorrnStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetRamEccSngBitCorrnStHlthVal(void);
/* Wrapper function to get State of Health Signal data for the signal MotPosStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetMotPosStHlthVal(void);
/* Wrapper function to get State of Health Signal data for the signal EotImpctStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetEotImpctStHlthVal(void);
/* Wrapper function to get State of Health Signal data for the signal PhaBStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetPhaBStHlthVal(void);
/* Wrapper function to get State of Health Signal data for the signal PhaCStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetPhaCStHlthVal(void);
/* Wrapper function to get State of Health Signal data for the signal PhaDStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetPhaDStHlthVal(void);
/* Wrapper function to get State of Health Signal data for the signal PhaEStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetPhaEStHlthVal(void);
/* Wrapper function to get State of Health Signal data for the signal PhaFStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetPhaFStHlthVal(void);
/* Wrapper function to get State of Health Signal data for the signal DigTqIdptSigStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetDigTqIdptSigStHlthVal(void);
/* Wrapper function to get State of Health Signal data for the signal CurrMotSumABCStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetCurrMotSumABCStHlthVal(void);
/* Wrapper function to get State of Health Signal data for the signal CurrMotSumDEFStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetCurrMotSumDEFStHlthVal(void);
/* Wrapper function to get State of Health Signal data for the signal FricEstimnStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetFricEstimnStHlthVal(void);
/* Wrapper function to get State of Health Signal data for the signal WhlImbMaxCmpStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetWhlImbMaxCmpStHlthVal(void);



/* CRC Symbols to be referred from configuration */
extern CONST(uint32, AUTOMATIC) CCT_Range_01_Address;

/****************************** State of Health Signal Configurations ****************************************/
CONST(StHlthSigStcPrmRec1, StHlthSigStc_CONST) StHlthSigStcPrmRecInst[SIGCNT_ULS_U08] =
{
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetCtrlrTStHlthVal, 
        /* Samples per second */                              10U,	
        /* Task in which signal is updated */                 Task_100ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0x0U,
        /* Start sample location of the signal in the NVM*/   1U,	
    },
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetOutpAssiStHlthVal, 
        /* Samples per second */                              500U,	
        /* Task in which signal is updated */                 Task_2ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0x3U,
        /* Start sample location of the signal in the NVM*/   9U,	
    },
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetAbsltMotPosABDifStHlthVal, 
        /* Samples per second */                              500U,	
        /* Task in which signal is updated */                 Task_2ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0x6U,
        /* Start sample location of the signal in the NVM*/   17U,	
    },
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetAbsltMotPosBCDifStHlthVal, 
        /* Samples per second */                              500U,	
        /* Task in which signal is updated */                 Task_2ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0x9U,
        /* Start sample location of the signal in the NVM*/   25U,	
    },
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetAbsltMotPosACDifStHlthVal, 
        /* Samples per second */                              500U,	
        /* Task in which signal is updated */                 Task_2ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0xcU,
        /* Start sample location of the signal in the NVM*/   33U,	
    },
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetDigTqSnsrAStHlthVal, 
        /* Samples per second */                              250U,	
        /* Task in which signal is updated */                 Task_4ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0xfU,
        /* Start sample location of the signal in the NVM*/   41U,	
    },
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetDutyCycStHlthVal, 
        /* Samples per second */                              10U,	
        /* Task in which signal is updated */                 Task_100ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0x12U,
        /* Start sample location of the signal in the NVM*/   49U,	
    },
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetDigTqSnsrBStHlthVal, 
        /* Samples per second */                              250U,	
        /* Task in which signal is updated */                 Task_4ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0x15U,
        /* Start sample location of the signal in the NVM*/   57U,	
    },
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetPhaAStHlthVal, 
        /* Samples per second */                              500U,	
        /* Task in which signal is updated */                 Task_2ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0x18U,
        /* Start sample location of the signal in the NVM*/   65U,	
    },
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetRamEccSngBitCorrnStHlthVal, 
        /* Samples per second */                              500U,	
        /* Task in which signal is updated */                 Task_2ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0x1bU,
        /* Start sample location of the signal in the NVM*/   73U,	
    },
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetMotPosStHlthVal, 
        /* Samples per second */                              500U,	
        /* Task in which signal is updated */                 Task_2ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0x1eU,
        /* Start sample location of the signal in the NVM*/   81U,	
    },
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetEotImpctStHlthVal, 
        /* Samples per second */                              100U,	
        /* Task in which signal is updated */                 Task_10ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0x21U,
        /* Start sample location of the signal in the NVM*/   89U,	
    },
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetPhaBStHlthVal, 
        /* Samples per second */                              500U,	
        /* Task in which signal is updated */                 Task_2ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0x24U,
        /* Start sample location of the signal in the NVM*/   97U,	
    },
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetPhaCStHlthVal, 
        /* Samples per second */                              500U,	
        /* Task in which signal is updated */                 Task_2ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0x27U,
        /* Start sample location of the signal in the NVM*/   105U,	
    },
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetPhaDStHlthVal, 
        /* Samples per second */                              500U,	
        /* Task in which signal is updated */                 Task_2ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0x2aU,
        /* Start sample location of the signal in the NVM*/   113U,	
    },
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetPhaEStHlthVal, 
        /* Samples per second */                              500U,	
        /* Task in which signal is updated */                 Task_2ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0x2dU,
        /* Start sample location of the signal in the NVM*/   121U,	
    },
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetPhaFStHlthVal, 
        /* Samples per second */                              500U,	
        /* Task in which signal is updated */                 Task_2ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0x30U,
        /* Start sample location of the signal in the NVM*/   129U,	
    },
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetDigTqIdptSigStHlthVal, 
        /* Samples per second */                              250U,	
        /* Task in which signal is updated */                 Task_4ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0x33U,
        /* Start sample location of the signal in the NVM*/   137U,	
    },
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetCurrMotSumABCStHlthVal, 
        /* Samples per second */                              500U,	
        /* Task in which signal is updated */                 Task_2ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0x36U,
        /* Start sample location of the signal in the NVM*/   145U,	
    },
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetCurrMotSumDEFStHlthVal, 
        /* Samples per second */                              500U,	
        /* Task in which signal is updated */                 Task_2ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0x39U,
        /* Start sample location of the signal in the NVM*/   153U,	
    },
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetFricEstimnStHlthVal, 
        /* Samples per second */                              100U,	
        /* Task in which signal is updated */                 Task_10ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0x3cU,
        /* Start sample location of the signal in the NVM*/   161U,	
    },
    {
   
        /* State of Health data get function */               &StHlthSigStc_GetWhlImbMaxCmpStHlthVal, 
        /* Samples per second */                              500U,	
        /* Task in which signal is updated */                 Task_2ms_Appl10,         
        /* Sample storage offset in the SoHS RAM buffer */    0x3fU,
        /* Start sample location of the signal in the NVM*/   169U,	
    },
};

/* CRC configurations */
CONST(StHlthSigStcCrcAdrRec1, StHlthSigStc_CONST) StHlthSigStcCrcAdrRecInst[NROFCRCAREA_CNT_U08] =
{
    {
        (P2CONST(uint32, AUTOMATIC, AUTOMATIC))&CCT_Range_01_Address,
    },
};
/* Overall configuration structure */
CONST(StHlthSigStcCfgRec1, StHlthSigStc_CONST) StHlthSigStcCfgRecInst =
{
  &StHlthSigStcPrmRecInst[0],
  &StHlthSigStcCrcAdrRecInst[0]
};


/* Wrapper function to get State of Health Signal data for the signal CtrlrTStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetCtrlrTStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_CtrlrTStHlth_Val(&RetVal);
     
     return(RetVal);
}
/* Wrapper function to get State of Health Signal data for the signal OutpAssiStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetOutpAssiStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_OutpAssiStHlth_Val(&RetVal);
     
     return(RetVal);
}
/* Wrapper function to get State of Health Signal data for the signal AbsltMotPosABDifStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetAbsltMotPosABDifStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_AbsltMotPosABDifStHlth_Val(&RetVal);
     
     return(RetVal);
}
/* Wrapper function to get State of Health Signal data for the signal AbsltMotPosBCDifStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetAbsltMotPosBCDifStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_AbsltMotPosBCDifStHlth_Val(&RetVal);
     
     return(RetVal);
}
/* Wrapper function to get State of Health Signal data for the signal AbsltMotPosACDifStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetAbsltMotPosACDifStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_AbsltMotPosACDifStHlth_Val(&RetVal);
     
     return(RetVal);
}
/* Wrapper function to get State of Health Signal data for the signal DigTqSnsrAStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetDigTqSnsrAStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_DigTqSnsrAStHlth_Val(&RetVal);
     
     return(RetVal);
}
/* Wrapper function to get State of Health Signal data for the signal DutyCycStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetDutyCycStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_DutyCycStHlth_Val(&RetVal);
     
     return(RetVal);
}
/* Wrapper function to get State of Health Signal data for the signal DigTqSnsrBStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetDigTqSnsrBStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_DigTqSnsrBStHlth_Val(&RetVal);
     
     return(RetVal);
}
/* Wrapper function to get State of Health Signal data for the signal PhaAStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetPhaAStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_PhaAStHlth_Val(&RetVal);
     
     return(RetVal);
}
/* Wrapper function to get State of Health Signal data for the signal RamEccSngBitCorrnStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetRamEccSngBitCorrnStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_RamEccSngBitCorrnStHlth_Val(&RetVal);
     
     return(RetVal);
}
/* Wrapper function to get State of Health Signal data for the signal MotPosStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetMotPosStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_MotPosStHlth_Val(&RetVal);
     
     return(RetVal);
}
/* Wrapper function to get State of Health Signal data for the signal EotImpctStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetEotImpctStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_EotImpctStHlth_Val(&RetVal);
     
     return(RetVal);
}
/* Wrapper function to get State of Health Signal data for the signal PhaBStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetPhaBStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_PhaBStHlth_Val(&RetVal);
     
     return(RetVal);
}
/* Wrapper function to get State of Health Signal data for the signal PhaCStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetPhaCStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_PhaCStHlth_Val(&RetVal);
     
     return(RetVal);
}
/* Wrapper function to get State of Health Signal data for the signal PhaDStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetPhaDStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_PhaDStHlth_Val(&RetVal);
     
     return(RetVal);
}
/* Wrapper function to get State of Health Signal data for the signal PhaEStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetPhaEStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_PhaEStHlth_Val(&RetVal);
     
     return(RetVal);
}
/* Wrapper function to get State of Health Signal data for the signal PhaFStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetPhaFStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_PhaFStHlth_Val(&RetVal);
     
     return(RetVal);
}
/* Wrapper function to get State of Health Signal data for the signal DigTqIdptSigStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetDigTqIdptSigStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_DigTqIdptSigStHlth_Val(&RetVal);
     
     return(RetVal);
}
/* Wrapper function to get State of Health Signal data for the signal CurrMotSumABCStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetCurrMotSumABCStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_CurrMotSumABCStHlth_Val(&RetVal);
     
     return(RetVal);
}
/* Wrapper function to get State of Health Signal data for the signal CurrMotSumDEFStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetCurrMotSumDEFStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_CurrMotSumDEFStHlth_Val(&RetVal);
     
     return(RetVal);
}
/* Wrapper function to get State of Health Signal data for the signal FricEstimnStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetFricEstimnStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_FricEstimnStHlth_Val(&RetVal);
     
     return(RetVal);
}
/* Wrapper function to get State of Health Signal data for the signal WhlImbMaxCmpStHlth */ 
static FUNC(uint8, RTE_STHLTHSIGSTC_APPL_CODE) StHlthSigStc_GetWhlImbMaxCmpStHlthVal(void)
{
    uint8 RetVal = 0U;
    
    (void)Rte_Read_WhlImbMaxCmpStHlth_Val(&RetVal);
     
     return(RetVal);
}

#define StHlthSigStc_STOP_SEC_CODE
#include "StHlthSigStc_MemMap.h"


