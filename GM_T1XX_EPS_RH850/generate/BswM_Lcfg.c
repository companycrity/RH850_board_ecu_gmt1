/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: BswM
 *           Program: GM Global A / Flexray (MSR_Gm_SLP2)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701311
 *    License Scope : The usage is restricted to CBD1400351_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: BswM_Lcfg.c
 *   Generation Time: 2016-12-22 15:17:50
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1400351_D04
 *      Tool Version: DaVinci Configurator  5.13.16 SP2
 *
 *
 *********************************************************************************************************************/

    
/* -----------------------------------------------------------------------------
    &&&~ INCLUDE
 ----------------------------------------------------------------------------- */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
#include "BswM.h"
#include "BswM_Private_Cfg.h"
#include "SchM_BswM.h"

#if !defined (BSWM_LOCAL)
# define BSWM_LOCAL static
#endif

#if !defined (BSWM_LOCAL_INLINE) /* COV_BSWM_LOCAL_INLINE */
# define BSWM_LOCAL_INLINE LOCAL_INLINE
#endif



#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ LOCAL FUNCTION DECLARATIONS
 ----------------------------------------------------------------------------- */
/**********************************************************************************************************************
 *  BswM_Action_RuleHandler()
 **********************************************************************************************************************/
/*!
 * \brief       Executes a rule.
 * \details     Arbitrates a rule and executes corresponding action list.
 * \param[in]   handleId  Id of the rule to execute.
 * \return      E_OK      No action list was executed or corresponding action list was completely executed.
 * \return      E_NOT_OK  Action list was aborted because an action failed.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_RuleHandler(BswM_HandleType handleId);

/**********************************************************************************************************************
 *  BswM_UpdateRuleStates()
 **********************************************************************************************************************/
/*!
 * \brief       Updates the state of a rule.
 * \details     Set rule state of passed ruleId to passed state.
 * \param[in]   ruleId    Id of the rule to update.
 * \param[in]   state     New state of the rule.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateRuleStates(BswM_SizeOfRuleStatesType ruleId, BswM_RuleStatesType state);

/**********************************************************************************************************************
 *  BswM_UpdateTimer()
 **********************************************************************************************************************/
/*!
 * \brief       Updates a timer.
 * \details     Set timer value of passed timerId to passed value and calculates the new state.
 * \param[in]   timerId   Id of the timer to update.
 * \param[in]   value     New value of the timer.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateTimer(BswM_SizeOfTimerValueType timerId, BswM_TimerValueType value);

/*! \addtogroup    BswMGeneratedFunctions BswM Generated Functions
 * \{
 */
/* PRQA S 0779 FUNCTIONDECLARATIONS */ /* MD_BswM_0779 */

/**********************************************************************************************************************
 *  BswMActionListFunctions
 *********************************************************************************************************************/
/*! \defgroup    BswMActionListFunctions
 * \{
 */

/*!
 * \{
 * \brief       Execute actions of action list.
 * \details     Generated function which depends on the configuration. Executes the actions of the action list in the
 *              configured order.
 * \return      E_OK      Action list was completely executed.
 * \return      E_NOT_OK  Action list was aborted because an action failed.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_GOOFFONE(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_INIT_AL_Initialize(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_PREPSHUTDOWN(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_RUN(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnATrue(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnAFalse(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnBTrue(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnBFalse(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnCTrue(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnCFalse(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnDTrue(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnDFalse(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnETrue(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnEFalse(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnFTrue(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnGTrue(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnGFalse(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnHTrue(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnHFalse(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnITrue(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnIFalse(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnFStrt(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnStrtUp(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnJTrue(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnJFalse(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnJDly(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnKTrue(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnKFalse(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_RESTART(void);
/*! \} */ /* End of sharing description for BswMActionListFunctions */
/*! \} */ /* End of group BswMActionListFunctions */

/**********************************************************************************************************************
 *  BswMRuleFunctions
 *********************************************************************************************************************/
/*! \defgroup    BswMRuleFunctions
 * \{
 */

/*!
 * \{
 * \brief       Arbitrates the configured rule.
 * \details     Generated function which depends on the configuration. Arbitrates the rule and returns the action list
 *              which shall be executed.
 * \return      ID of action list to execute (BSWM_NO_ACTIONLIST if no ActionList shall be executed)
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BSWM_GOOFFONE(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BSWM_PREPSHUTDOWN(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BSWM_RUN(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnA(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnB(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnC(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnD(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnE(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnF(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnG(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnH(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnI(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnFTiOut(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnStrtUp(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnJ(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnJTiOut(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnK(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BSWM_RESTART(void);
/*! \} */ /* End of sharing description for BswMRuleFunctions */
/*! \} */ /* End of group BswMRuleFunctions */
/* PRQA L:FUNCTIONDECLARATIONS */
/*! \} */ /* End of group BswMGeneratedFunctions */

#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ LOCAL VARIABLE DECLARATIONS
 ----------------------------------------------------------------------------- */

/* PRQA S 0779 VARIABLEDECLARATIONS */ /* MD_BswM_0779 */ 

#define BSWM_START_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"






#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* PRQA L:VARIABLEDECLARATIONS */

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/



/**********************************************************************************************************************
 *  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA
**********************************************************************************************************************/
/* PRQA S 0310 GLOBALDATADECLARATIONS */ /* MD_BswM_0310 */ 
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  BswM_ActionLists
**********************************************************************************************************************/
/** 
  \var    BswM_ActionLists
  \details
  Element    Description
  FctPtr     Pointer to the array list function.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ActionListsType, BSWM_CONST) BswM_ActionLists[29] = {
    /* Index    FctPtr                                    Comment                   Referable Keys */
  { /*     0 */ BswM_ActionList_GOOFFONE           },  /* [Priority: 0] */  /* [AL_GOOFFONE] */
  { /*     1 */ BswM_ActionList_INIT_AL_Initialize },  /* [Priority: 0] */  /* [AL_INIT_AL_Initialize] */
  { /*     2 */ BswM_ActionList_PREPSHUTDOWN       },  /* [Priority: 0] */  /* [AL_PREPSHUTDOWN] */
  { /*     3 */ BswM_ActionList_RUN                },  /* [Priority: 0] */  /* [AL_RUN] */
  { /*     4 */ BswM_ActionList_EnaCdnATrue        },  /* [Priority: 0] */  /* [AL_EnaCdnATrue] */
  { /*     5 */ BswM_ActionList_EnaCdnAFalse       },  /* [Priority: 0] */  /* [AL_EnaCdnAFalse] */
  { /*     6 */ BswM_ActionList_EnaCdnBTrue        },  /* [Priority: 0] */  /* [AL_EnaCdnBTrue] */
  { /*     7 */ BswM_ActionList_EnaCdnBFalse       },  /* [Priority: 0] */  /* [AL_EnaCdnBFalse] */
  { /*     8 */ BswM_ActionList_EnaCdnCTrue        },  /* [Priority: 0] */  /* [AL_EnaCdnCTrue] */
  { /*     9 */ BswM_ActionList_EnaCdnCFalse       },  /* [Priority: 0] */  /* [AL_EnaCdnCFalse] */
  { /*    10 */ BswM_ActionList_EnaCdnDTrue        },  /* [Priority: 0] */  /* [AL_EnaCdnDTrue] */
  { /*    11 */ BswM_ActionList_EnaCdnDFalse       },  /* [Priority: 0] */  /* [AL_EnaCdnDFalse] */
  { /*    12 */ BswM_ActionList_EnaCdnETrue        },  /* [Priority: 0] */  /* [AL_EnaCdnETrue] */
  { /*    13 */ BswM_ActionList_EnaCdnEFalse       },  /* [Priority: 0] */  /* [AL_EnaCdnEFalse] */
  { /*    14 */ BswM_ActionList_EnaCdnFTrue        },  /* [Priority: 0] */  /* [AL_EnaCdnFTrue] */
  { /*    15 */ BswM_ActionList_EnaCdnGTrue        },  /* [Priority: 0] */  /* [AL_EnaCdnGTrue] */
  { /*    16 */ BswM_ActionList_EnaCdnGFalse       },  /* [Priority: 0] */  /* [AL_EnaCdnGFalse] */
  { /*    17 */ BswM_ActionList_EnaCdnHTrue        },  /* [Priority: 0] */  /* [AL_EnaCdnHTrue] */
  { /*    18 */ BswM_ActionList_EnaCdnHFalse       },  /* [Priority: 0] */  /* [AL_EnaCdnHFalse] */
  { /*    19 */ BswM_ActionList_EnaCdnITrue        },  /* [Priority: 0] */  /* [AL_EnaCdnITrue] */
  { /*    20 */ BswM_ActionList_EnaCdnIFalse       },  /* [Priority: 0] */  /* [AL_EnaCdnIFalse] */
  { /*    21 */ BswM_ActionList_EnaCdnFStrt        },  /* [Priority: 0] */  /* [AL_EnaCdnFStrt] */
  { /*    22 */ BswM_ActionList_EnaCdnStrtUp       },  /* [Priority: 0] */  /* [AL_EnaCdnStrtUp] */
  { /*    23 */ BswM_ActionList_EnaCdnJTrue        },  /* [Priority: 0] */  /* [AL_EnaCdnJTrue] */
  { /*    24 */ BswM_ActionList_EnaCdnJFalse       },  /* [Priority: 0] */  /* [AL_EnaCdnJFalse] */
  { /*    25 */ BswM_ActionList_EnaCdnJDly         },  /* [Priority: 0] */  /* [AL_EnaCdnJDly] */
  { /*    26 */ BswM_ActionList_EnaCdnKTrue        },  /* [Priority: 0] */  /* [AL_EnaCdnKTrue] */
  { /*    27 */ BswM_ActionList_EnaCdnKFalse       },  /* [Priority: 0] */  /* [AL_EnaCdnKFalse] */
  { /*    28 */ BswM_ActionList_RESTART            }   /* [Priority: 0] */  /* [AL_RESTART] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_DeferredRules
**********************************************************************************************************************/
/** 
  \var    BswM_DeferredRules
  \details
  Element     Description
  RulesIdx    the index of the 1:1 relation pointing to BswM_Rules
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_DeferredRulesType, BSWM_CONST) BswM_DeferredRules[15] = {
    /* Index    RulesIdx        Referable Keys */
  { /*     0 */       1U },  /* [R_BSWM_PREPSHUTDOWN] */
  { /*     1 */       3U },  /* [R_EnaCdnA] */
  { /*     2 */       4U },  /* [R_EnaCdnB] */
  { /*     3 */       5U },  /* [R_EnaCdnC] */
  { /*     4 */       6U },  /* [R_EnaCdnD] */
  { /*     5 */       7U },  /* [R_EnaCdnE] */
  { /*     6 */       8U },  /* [R_EnaCdnF] */
  { /*     7 */       9U },  /* [R_EnaCdnG] */
  { /*     8 */      10U },  /* [R_EnaCdnH] */
  { /*     9 */      11U },  /* [R_EnaCdnI] */
  { /*    10 */      12U },  /* [R_EnaCdnFTiOut] */
  { /*    11 */      13U },  /* [R_EnaCdnStrtUp] */
  { /*    12 */      14U },  /* [R_EnaCdnJ] */
  { /*    13 */      15U },  /* [R_EnaCdnJTiOut] */
  { /*    14 */      16U }   /* [R_EnaCdnK] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_GenericMapping
**********************************************************************************************************************/
/** 
  \var    BswM_GenericMapping
  \brief  Maps the external id of BswMGenericRequest to an internal id and references immediate request ports.
  \details
  Element                  Description
  ExternalId               External id of BswMGenericRequest.
  ImmediateUserEndIdx      the end index of the 0:n relation pointing to BswM_ImmediateUser
  ImmediateUserStartIdx    the start index of the 0:n relation pointing to BswM_ImmediateUser
  InitValue                Initialization value of port.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_GenericMappingType, BSWM_CONST) BswM_GenericMapping[3] = {
    /* Index    ExternalId  ImmediateUserEndIdx                          ImmediateUserStartIdx                          InitValue                                                   Referable Keys */
  { /*     0 */ 0         ,                                          1U,                                            0U, BSWM_GENERICVALUE_BSWM_STATE_BSWM_STARTUP_TWO_A      },  /* [GENERIC_0, MRP_BSWM_STATE] */
  { /*     1 */ 1         ,                                          2U,                                            1U, BSWM_GENERICVALUE_BswM_ShutdownStates_DEFAULT        },  /* [GENERIC_1, MRP_BswM_ShutdownStates] */
  { /*     2 */ 2         , BSWM_NO_IMMEDIATEUSERENDIDXOFGENERICMAPPING, BSWM_NO_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING, BSWM_GENERICVALUE_BswM_PrepShutdownStatesDef_DEFAULT }   /* [GENERIC_2, MRP_BswM_PrepShutdownStatesDef] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ImmediateUser
**********************************************************************************************************************/
/** 
  \var    BswM_ImmediateUser
  \brief  Contains all immediate request ports.
  \details
  Element             Description
  MaskedBits          contains bitcoded the boolean data of BswM_ForcedOfImmediateUser, BswM_RulesIndUsedOfImmediateUser
  RulesIndEndIdx      the end index of the 0:n relation pointing to BswM_RulesInd
  RulesIndStartIdx    the start index of the 0:n relation pointing to BswM_RulesInd
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ImmediateUserType, BSWM_CONST) BswM_ImmediateUser[2] = {
    /* Index    MaskedBits  RulesIndEndIdx                         RulesIndStartIdx                               Comment                                 Referable Keys */
  { /*     0 */      0x03U,                                    2U,                                      0U },  /* [Name: BSWM_STATE]          */  /* [MRP_BSWM_STATE, GENERIC_0] */
  { /*     1 */      0x00U, BSWM_NO_RULESINDENDIDXOFIMMEDIATEUSER, BSWM_NO_RULESINDSTARTIDXOFIMMEDIATEUSER }   /* [Name: BswM_ShutdownStates] */  /* [MRP_BswM_ShutdownStates, GENERIC_1] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_Rules
**********************************************************************************************************************/
/** 
  \var    BswM_Rules
  \details
  Element    Description
  Id         External id of rule.
  Init       Initialization value of rule state (TRUE, FALSE, UNDEFINED or DEACTIVATED).
  FctPtr     Pointer to the rule function which does the arbitration.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_RulesType, BSWM_CONST) BswM_Rules[18] = {
    /* Index    Id   Init            FctPtr                             Referable Keys */
  { /*     0 */  0U, BSWM_FALSE    , BswM_Rule_BSWM_GOOFFONE     },  /* [R_BSWM_GOOFFONE] */
  { /*     1 */  1U, BSWM_FALSE    , BswM_Rule_BSWM_PREPSHUTDOWN },  /* [R_BSWM_PREPSHUTDOWN, MRP_BswM_PrepShutdownStatesDef, MRP_ModeRequest_SysStMod] */
  { /*     2 */  3U, BSWM_FALSE    , BswM_Rule_BSWM_RUN          },  /* [R_BSWM_RUN, MRP_BSWM_STATE] */
  { /*     3 */  4U, BSWM_UNDEFINED, BswM_Rule_EnaCdnA           },  /* [R_EnaCdnA, MRP_ModeRequest_SysPwrMod, MRP_ModeRequest_MissMsg1F1, MRP_ModeRequest_BusOffHiSpd] */
  { /*     4 */  5U, BSWM_UNDEFINED, BswM_Rule_EnaCdnB           },  /* [R_EnaCdnB, MRP_ModeRequest_MissMsg0C9, MRP_ModeRequest_BusOffHiSpd, MRP_ModeRequest_EngRunActv] */
  { /*     5 */  6U, BSWM_UNDEFINED, BswM_Rule_EnaCdnC           },  /* [R_EnaCdnC, MRP_ModeRequest_BattVltgLow] */
  { /*     6 */  7U, BSWM_UNDEFINED, BswM_Rule_EnaCdnD           },  /* [R_EnaCdnD, MRP_ModeRequest_BattVltgMed] */
  { /*     7 */  8U, BSWM_UNDEFINED, BswM_Rule_EnaCdnE           },  /* [R_EnaCdnE, MRP_ModeRequest_BattVltgHigh] */
  { /*     8 */  9U, BSWM_UNDEFINED, BswM_Rule_EnaCdnF           },  /* [R_EnaCdnF, MRP_ModeRequest_SysPwrMod, MRP_ModeRequest_Dtc480012Faild] */
  { /*     9 */ 11U, BSWM_UNDEFINED, BswM_Rule_EnaCdnG           },  /* [R_EnaCdnG, MRP_ModeRequest_BusOffHiSpd] */
  { /*    10 */ 12U, BSWM_UNDEFINED, BswM_Rule_EnaCdnH           },  /* [R_EnaCdnH, MRP_ModeRequest_BusOffChassisExp] */
  { /*    11 */ 13U, BSWM_UNDEFINED, BswM_Rule_EnaCdnI           },  /* [R_EnaCdnI, MRP_ModeRequest_CustMfgEnaSt] */
  { /*    12 */ 10U, BSWM_UNDEFINED, BswM_Rule_EnaCdnFTiOut      },  /* [R_EnaCdnFTiOut, MRP_EnaCdnFTmr] */
  { /*    13 */ 17U, BSWM_UNDEFINED, BswM_Rule_EnaCdnStrtUp      },  /* [R_EnaCdnStrtUp, MRP_ModeRequest_AlwaysTrue] */
  { /*    14 */ 14U, BSWM_UNDEFINED, BswM_Rule_EnaCdnJ           },  /* [R_EnaCdnJ, MRP_ModeRequest_SerlComDi] */
  { /*    15 */ 15U, BSWM_UNDEFINED, BswM_Rule_EnaCdnJTiOut      },  /* [R_EnaCdnJTiOut, MRP_EnaCdnJTmr] */
  { /*    16 */ 16U, BSWM_UNDEFINED, BswM_Rule_EnaCdnK           },  /* [R_EnaCdnK, MRP_ModeRequest_SysPwrMod, MRP_ModeRequest_EngRunActv] */
  { /*    17 */  2U, BSWM_FALSE    , BswM_Rule_BSWM_RESTART      }   /* [R_BSWM_RESTART, MRP_BSWM_STATE] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_RulesInd
**********************************************************************************************************************/
/** 
  \var    BswM_RulesInd
  \brief  the indexes of the 1:1 sorted relation pointing to BswM_Rules
*/ 
#define BSWM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_RulesIndType, BSWM_CONST) BswM_RulesInd[2] = {
  /* Index    RulesInd      Referable Keys */
  /*     0 */       2U,  /* [MRP_BSWM_STATE] */
  /*     1 */      17U   /* [MRP_BSWM_STATE] */
};
#define BSWM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ActionListQueue
**********************************************************************************************************************/
/** 
  \var    BswM_ActionListQueue
  \brief  Variable to store action lists which shall be executed.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uBswM_ActionListQueueType, BSWM_VAR_NOINIT) BswM_ActionListQueue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [AL_GOOFFONE] */
  /*     1 */  /* [AL_INIT_AL_Initialize] */
  /*     2 */  /* [AL_PREPSHUTDOWN] */
  /*     3 */  /* [AL_RUN] */
  /*     4 */  /* [AL_EnaCdnATrue] */
  /*     5 */  /* [AL_EnaCdnAFalse] */
  /*     6 */  /* [AL_EnaCdnBTrue] */
  /*     7 */  /* [AL_EnaCdnBFalse] */
  /*     8 */  /* [AL_EnaCdnCTrue] */
  /*     9 */  /* [AL_EnaCdnCFalse] */
  /*    10 */  /* [AL_EnaCdnDTrue] */
  /*    11 */  /* [AL_EnaCdnDFalse] */
  /*    12 */  /* [AL_EnaCdnETrue] */
  /*    13 */  /* [AL_EnaCdnEFalse] */
  /*    14 */  /* [AL_EnaCdnFTrue] */
  /*    15 */  /* [AL_EnaCdnGTrue] */
  /*    16 */  /* [AL_EnaCdnGFalse] */
  /*    17 */  /* [AL_EnaCdnHTrue] */
  /*    18 */  /* [AL_EnaCdnHFalse] */
  /*    19 */  /* [AL_EnaCdnITrue] */
  /*    20 */  /* [AL_EnaCdnIFalse] */
  /*    21 */  /* [AL_EnaCdnFStrt] */
  /*    22 */  /* [AL_EnaCdnStrtUp] */
  /*    23 */  /* [AL_EnaCdnJTrue] */
  /*    24 */  /* [AL_EnaCdnJFalse] */
  /*    25 */  /* [AL_EnaCdnJDly] */
  /*    26 */  /* [AL_EnaCdnKTrue] */
  /*    27 */  /* [AL_EnaCdnKFalse] */
  /*    28 */  /* [AL_RESTART] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_GenericState
**********************************************************************************************************************/
/** 
  \var    BswM_GenericState
  \brief  Variable to store current mode of BswMGenericRequest mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_ModeType, BSWM_VAR_NOINIT) BswM_GenericState[3];
  /* Index        Referable Keys  */
  /*     0 */  /* [GENERIC_0, MRP_BSWM_STATE] */
  /*     1 */  /* [GENERIC_1, MRP_BswM_ShutdownStates] */
  /*     2 */  /* [GENERIC_2, MRP_BswM_PrepShutdownStatesDef] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_Initialized
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_InitializedType, BSWM_VAR_ZERO_INIT) BswM_Initialized = FALSE;
#define BSWM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ModeRequestQueue
**********************************************************************************************************************/
/** 
  \var    BswM_ModeRequestQueue
  \brief  Variable to store an immediate mode request which must be queued because of a current active arbitration.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_ModeRequestQueueType, BSWM_VAR_NOINIT) BswM_ModeRequestQueue[2];
  /* Index        Referable Keys  */
  /*     0 */  /* [MRP_BSWM_STATE, GENERIC_0] */
  /*     1 */  /* [MRP_BswM_ShutdownStates, GENERIC_1] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_RuleStates
**********************************************************************************************************************/
/** 
  \var    BswM_RuleStates
  \brief  Stores the last execution state of the rule.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_RuleStatesType, BSWM_VAR_NOINIT) BswM_RuleStates[18];
  /* Index        Referable Keys  */
  /*     0 */  /* [R_BSWM_GOOFFONE] */
  /*     1 */  /* [R_BSWM_PREPSHUTDOWN, MRP_BswM_PrepShutdownStatesDef, MRP_ModeRequest_SysStMod] */
  /*     2 */  /* [R_BSWM_RUN, MRP_BSWM_STATE] */
  /*     3 */  /* [R_EnaCdnA, MRP_ModeRequest_SysPwrMod, MRP_ModeRequest_MissMsg1F1, MRP_ModeRequest_BusOffHiSpd] */
  /*     4 */  /* [R_EnaCdnB, MRP_ModeRequest_MissMsg0C9, MRP_ModeRequest_BusOffHiSpd, MRP_ModeRequest_EngRunActv] */
  /*     5 */  /* [R_EnaCdnC, MRP_ModeRequest_BattVltgLow] */
  /*     6 */  /* [R_EnaCdnD, MRP_ModeRequest_BattVltgMed] */
  /*     7 */  /* [R_EnaCdnE, MRP_ModeRequest_BattVltgHigh] */
  /*     8 */  /* [R_EnaCdnF, MRP_ModeRequest_SysPwrMod, MRP_ModeRequest_Dtc480012Faild] */
  /*     9 */  /* [R_EnaCdnG, MRP_ModeRequest_BusOffHiSpd] */
  /*    10 */  /* [R_EnaCdnH, MRP_ModeRequest_BusOffChassisExp] */
  /*    11 */  /* [R_EnaCdnI, MRP_ModeRequest_CustMfgEnaSt] */
  /*    12 */  /* [R_EnaCdnFTiOut, MRP_EnaCdnFTmr] */
  /*    13 */  /* [R_EnaCdnStrtUp, MRP_ModeRequest_AlwaysTrue] */
  /*    14 */  /* [R_EnaCdnJ, MRP_ModeRequest_SerlComDi] */
  /*    15 */  /* [R_EnaCdnJTiOut, MRP_EnaCdnJTmr] */
  /*    16 */  /* [R_EnaCdnK, MRP_ModeRequest_SysPwrMod, MRP_ModeRequest_EngRunActv] */
  /*    17 */  /* [R_BSWM_RESTART, MRP_BSWM_STATE] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_TimerState
**********************************************************************************************************************/
/** 
  \var    BswM_TimerState
  \brief  Variable to store current state of BswMTimer (STARTED, STOPPER OR EXPIRED).
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uBswM_TimerStateType, BSWM_VAR_NOINIT) BswM_TimerState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [MRP_EnaCdnFTmr] */
  /*     1 */  /* [MRP_EnaCdnJTmr] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_TimerValue
**********************************************************************************************************************/
/** 
  \var    BswM_TimerValue
  \brief  Variable to store current timer values.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uBswM_TimerValueType, BSWM_VAR_NOINIT) BswM_TimerValue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [MRP_EnaCdnFTmr] */
  /*     1 */  /* [MRP_EnaCdnJTmr] */

#define BSWM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/* PRQA L:GLOBALDATADECLARATIONS */


#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ FUNCTIONS
 ----------------------------------------------------------------------------- */

/**********************************************************************************************************************
 *  BswM_Action_RuleHandler()
 **********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_RuleHandler(BswM_HandleType handleId)
{
  BswM_HandleType actionListIndex;
  Std_ReturnType retVal = E_NOT_OK;
  
  if (handleId < BswM_GetSizeOfRules())
  {
    SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    actionListIndex = BswM_GetFctPtrOfRules(handleId)(); /* SBSW_BSWM_RULEFCTPTR */
    SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    if(actionListIndex < BswM_GetSizeOfActionLists())
    {
      retVal = BswM_GetFctPtrOfActionLists(actionListIndex)(); /* SBSW_BSWM_ACTIONLISTFCTPTR */
    }
    else
    {
      retVal = E_OK;
    }
  }
  return retVal;
} 

/**********************************************************************************************************************
 *  BswM_UpdateRuleStates()
 **********************************************************************************************************************/
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateRuleStates(BswM_SizeOfRuleStatesType ruleId, BswM_RuleStatesType state)
{
  if (ruleId < BswM_GetSizeOfRuleStates())
  {
    BswM_SetRuleStates(ruleId, state); /* SBSW_BSWM_SETRULESTATE */
  }
}

/**********************************************************************************************************************
 *  BswM_UpdateTimer()
 **********************************************************************************************************************/
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateTimer(BswM_SizeOfTimerValueType timerId, BswM_TimerValueType value)
{
  if (timerId < BswM_GetSizeOfTimerValue())
  {
      SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
      BswM_SetTimerValue(timerId, value); /* SBSW_BSWM_SETTIMER */
      BswM_SetTimerState(timerId, (BswM_TimerStateType)((value != 0u) ? BSWM_TIMER_STARTED : BSWM_TIMER_STOPPED)); /* SBSW_BSWM_SETTIMER */
      SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
}

/**********************************************************************************************************************
 *  BswM_Init_Gen
 *********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_Init_Gen(void)
{


  (void)BswM_ActionList_INIT_AL_Initialize();
}

/**********************************************************************************************************************
 *  BswMActionListFunctions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  BswM_ActionList_GOOFFONE
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_GOOFFONE(void)
{
  BswM_RequestMode(BSWM_GENERIC_BSWM_STATE, BSWM_GENERICVALUE_BSWM_STATE_BSWM_GO_OFF_ONE);
  BswM_SHUTDOWN_NvMWriteAll();
  BswM_FinalizeShtdwn();
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_INIT_AL_Initialize
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_INIT_AL_Initialize(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Fee_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  NvM_Init();
  /*lint -restore */
  BswM_INIT_NvMReadAll();
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_Init(NULL_PTR);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Call_NxtrWdgM_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  (void)CallNonTrustedFunction(NtWrapS_GMLANInit , NULL_PTR);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Rte_Start();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  osClearIMRmEI(16U);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  OSTM0TS = 1U;
  /*lint -restore */
  BswM_RequestMode(BSWM_GENERIC_BSWM_STATE, BSWM_GENERICVALUE_BSWM_STATE_BSWM_RUN);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  GuardCfgAndDiagcInit1();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  SyncCrcInit0();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  FlsMemInit2();
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_PREPSHUTDOWN
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_PREPSHUTDOWN(void)
{
  BswM_RequestMode(BSWM_GENERIC_BSWM_STATE, BSWM_GENERICVALUE_BSWM_STATE_BSWM_PREP_SHUTDOWN);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_Shutdown();
  /*lint -restore */
  BwmM_GetShutdownOngoing();
  BswM_ShtdwnHndlg_PrepShutdown();
  BswM_DiagcMgrPwrDwn();
  (void)BswM_Action_RuleHandler(BSWM_ID_RULE_BSWM_GOOFFONE);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_RUN
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_RUN(void)
{
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnATrue
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnATrue(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(TRUE, 0);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionA, TRUE);
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnAFalse
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnAFalse(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(FALSE, 0);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionA, FALSE);
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnBTrue
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnBTrue(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(TRUE, 1);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionB, TRUE);
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnBFalse
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnBFalse(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(FALSE, 1);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionB, FALSE);
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnCTrue
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnCTrue(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(TRUE, 2);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionC, TRUE);
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnCFalse
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnCFalse(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(FALSE, 2);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionC, FALSE);
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnDTrue
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnDTrue(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(TRUE, 3);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionD, TRUE);
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnDFalse
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnDFalse(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(FALSE, 3);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionD, FALSE);
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnETrue
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnETrue(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(TRUE, 4);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionE, TRUE);
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnEFalse
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnEFalse(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(FALSE, 4);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionE, FALSE);
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnFTrue
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnFTrue(void)
{
  BswM_UpdateTimer(BSWM_TMR_EnaCdnFTmr, 0U);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(TRUE, 5);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionF, TRUE);
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnGTrue
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnGTrue(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(TRUE, 6);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionG, TRUE);
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnGFalse
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnGFalse(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(FALSE, 6);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionG, FALSE);
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnHTrue
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnHTrue(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(TRUE, 7);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionH, TRUE);
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnHFalse
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnHFalse(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(FALSE, 7);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionH, FALSE);
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnITrue
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnITrue(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(TRUE, 8);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionI, TRUE);
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnIFalse
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnIFalse(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(FALSE, 8);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionI, FALSE);
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnFStrt
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnFStrt(void)
{
  BswM_UpdateTimer(BSWM_TMR_EnaCdnFTmr, 500UL);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(FALSE, 5);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionF, FALSE);
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnStrtUp
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnStrtUp(void)
{
  BswM_UpdateTimer(BSWM_TMR_EnaCdnFTmr, 500UL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnJTrue
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnJTrue(void)
{
  BswM_UpdateTimer(BSWM_TMR_EnaCdnJTmr, 50UL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnJFalse
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnJFalse(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(FALSE, 9);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionJ, FALSE);
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnJDly
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnJDly(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(TRUE, 9);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionJ, TRUE);
  /*lint -restore */
  BswM_UpdateTimer(BSWM_TMR_EnaCdnJTmr, 0U);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnKTrue
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnKTrue(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(TRUE, 10);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionK, TRUE);
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_EnaCdnKFalse
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_EnaCdnKFalse(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  UpdDtcEnaCdn(FALSE, 10);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_SetEnableCondition(DemConf_DemEnableCondition_DemEnableConditionK, FALSE);
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_RESTART
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_RESTART(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_Init(NULL_PTR);
  /*lint -restore */
  BswM_RequestMode(BSWM_GENERIC_BSWM_STATE, BSWM_GENERICVALUE_BSWM_STATE_BSWM_RUN);
  BswM_Restart();
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswMRuleFunctions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  BswM_Rule_BSWM_GOOFFONE
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BSWM_GOOFFONE(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  if( BswM_GetRuleStates(BSWM_ID_RULE_BSWM_GOOFFONE) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LogicalExpression_GoOff. */
    if((BswM_GetGenericState(1) == BSWM_GENERICVALUE_BswM_ShutdownStates_GOOFFONE_HARDRESET) || (BswM_GetGenericState(1) == BSWM_GENERICVALUE_BswM_ShutdownStates_GOOFFONE_REPROGRAM) || (BswM_GetGenericState(1) == BSWM_GENERICVALUE_BswM_ShutdownStates_GOOFFONE_SWITCHOFF) || (BswM_GetGenericState(1) == BSWM_GENERICVALUE_BswM_ShutdownStates_GOOFFONE_SOFTRESET))
    {
      /* Return conditional action list BswM_ActionList_GOOFFONE. */
      retVal = BSWM_ID_AL_GOOFFONE;
    }
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_BSWM_PREPSHUTDOWN
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BSWM_PREPSHUTDOWN(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  if( BswM_GetRuleStates(BSWM_ID_RULE_BSWM_PREPSHUTDOWN) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LogicalExpression_Prepshutdown. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
    if((BswM_GetGenericState(2) == BSWM_GENERICVALUE_BswM_PrepShutdownStatesDef_PREPSHUTDOWN_REPROGRAM) || (Rte_SysStMod_SysSt_Val == 1u) || (BswM_GetGenericState(2) == BSWM_GENERICVALUE_BswM_PrepShutdownStatesDef_PREPSHUTDOWN_SOFTRESET) || (BswM_GetGenericState(2) == BSWM_GENERICVALUE_BswM_PrepShutdownStatesDef_PREPSHUTDOWN_HARDRESET))
    {
      /* Return conditional action list BswM_ActionList_PREPSHUTDOWN. */
      retVal = BSWM_ID_AL_PREPSHUTDOWN;
    }
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_BSWM_RUN
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BSWM_RUN(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  if( BswM_GetRuleStates(BSWM_ID_RULE_BSWM_RUN) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LogicalExpression_Run. */
    if(BswM_GetGenericState(0) == BSWM_GENERICVALUE_BSWM_STATE_BSWM_RUN)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_BSWM_RUN) != BSWM_TRUE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_BSWM_RUN, BSWM_TRUE);
        /* Return triggered action list BswM_ActionList_RUN. */
        retVal = BSWM_ID_AL_RUN;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_BSWM_RUN, BSWM_FALSE);
      /* No false action list configured. */
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_EnaCdnA
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnA(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnA) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LogicalExpression_EnaCdnA. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
    if((Rte_GmMsg1F1BusHiSpd_SysPwrMod_Val == GMSYSPWRMOD_RUN) || ((Rte_GmMsg1F1BusHiSpd_MissMsg1F1_Logl == TRUE) && (Rte_SerlComOutpProxy_BusOffHiSpd_Logl == FALSE)))
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnA) != BSWM_TRUE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnA, BSWM_TRUE);
        /* Return triggered action list BswM_ActionList_EnaCdnATrue. */
        retVal = BSWM_ID_AL_EnaCdnATrue;
      }
    }
    else
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnA) != BSWM_FALSE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnA, BSWM_FALSE);
        /* Return triggered action list BswM_ActionList_EnaCdnAFalse. */
        retVal = BSWM_ID_AL_EnaCdnAFalse;
      }
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_EnaCdnB
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnB(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnB) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LogicalExpression_EnaCdnB. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
    if(((Rte_GmMsg0C9BusHiSpd_MissMsg0C9_Logl == TRUE) && (Rte_SerlComOutpProxy_BusOffHiSpd_Logl == FALSE)) || (Rte_GmMsg0C9BusHiSpd_EngRunActv_Logl == TRUE))
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnB) != BSWM_TRUE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnB, BSWM_TRUE);
        /* Return triggered action list BswM_ActionList_EnaCdnBTrue. */
        retVal = BSWM_ID_AL_EnaCdnBTrue;
      }
    }
    else
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnB) != BSWM_FALSE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnB, BSWM_FALSE);
        /* Return triggered action list BswM_ActionList_EnaCdnBFalse. */
        retVal = BSWM_ID_AL_EnaCdnBFalse;
      }
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_EnaCdnC
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnC(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnC) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LogicalExpression_EnaCdnC. */
    if((Rte_BattVltg_BrdgVltg_Val > 6.0f) == TRUE)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnC) != BSWM_TRUE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnC, BSWM_TRUE);
        /* Return triggered action list BswM_ActionList_EnaCdnCTrue. */
        retVal = BSWM_ID_AL_EnaCdnCTrue;
      }
    }
    else
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnC) != BSWM_FALSE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnC, BSWM_FALSE);
        /* Return triggered action list BswM_ActionList_EnaCdnCFalse. */
        retVal = BSWM_ID_AL_EnaCdnCFalse;
      }
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_EnaCdnD
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnD(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnD) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LogicalExpression_EnaCdnD. */
    if((Rte_BattVltg_BrdgVltg_Val > 9.0f) == TRUE)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnD) != BSWM_TRUE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnD, BSWM_TRUE);
        /* Return triggered action list BswM_ActionList_EnaCdnDTrue. */
        retVal = BSWM_ID_AL_EnaCdnDTrue;
      }
    }
    else
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnD) != BSWM_FALSE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnD, BSWM_FALSE);
        /* Return triggered action list BswM_ActionList_EnaCdnDFalse. */
        retVal = BSWM_ID_AL_EnaCdnDFalse;
      }
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_EnaCdnE
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnE(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnE) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LogicalExpression_EnaCdnE. */
    if((Rte_BattVltg_BrdgVltg_Val < 16.0f) == TRUE)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnE) != BSWM_TRUE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnE, BSWM_TRUE);
        /* Return triggered action list BswM_ActionList_EnaCdnETrue. */
        retVal = BSWM_ID_AL_EnaCdnETrue;
      }
    }
    else
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnE) != BSWM_FALSE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnE, BSWM_FALSE);
        /* Return triggered action list BswM_ActionList_EnaCdnEFalse. */
        retVal = BSWM_ID_AL_EnaCdnEFalse;
      }
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_EnaCdnF
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnF(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnF) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LogicalExpression_EnaCdnF. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
    if((Rte_GmMsg1F1BusHiSpd_SysPwrMod_Val == GMSYSPWRMOD_CRK) || (BswMUser_GetDtcFailed(DemConf_DemEventParameter_DevPwrVltgUnderMinThd) == TRUE))
    {
      /* Return conditional action list BswM_ActionList_EnaCdnFStrt. */
      retVal = BSWM_ID_AL_EnaCdnFStrt;
    }
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_EnaCdnG
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnG(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnG) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LogicalExpression_EnaCdnG. */
    if(Rte_SerlComOutpProxy_BusOffHiSpd_Logl == FALSE)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnG) != BSWM_TRUE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnG, BSWM_TRUE);
        /* Return triggered action list BswM_ActionList_EnaCdnGTrue. */
        retVal = BSWM_ID_AL_EnaCdnGTrue;
      }
    }
    else
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnG) != BSWM_FALSE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnG, BSWM_FALSE);
        /* Return triggered action list BswM_ActionList_EnaCdnGFalse. */
        retVal = BSWM_ID_AL_EnaCdnGFalse;
      }
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_EnaCdnH
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnH(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnH) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LogicalExpression_EnaCdnH. */
    if(Rte_SerlComOutpProxy_BusOffChassisExp_Logl == FALSE)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnH) != BSWM_TRUE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnH, BSWM_TRUE);
        /* Return triggered action list BswM_ActionList_EnaCdnHTrue. */
        retVal = BSWM_ID_AL_EnaCdnHTrue;
      }
    }
    else
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnH) != BSWM_FALSE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnH, BSWM_FALSE);
        /* Return triggered action list BswM_ActionList_EnaCdnHFalse. */
        retVal = BSWM_ID_AL_EnaCdnHFalse;
      }
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_EnaCdnI
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnI(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnI) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LogicalExpression_EnaCdnI. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
    if((Rte_PartNr_CustMfgEnSt_Val == MFGENAST_PRDNMOD) || (Rte_PartNr_CustMfgEnSt_Val == MFGENAST_TESTMOD))
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnI) != BSWM_TRUE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnI, BSWM_TRUE);
        /* Return triggered action list BswM_ActionList_EnaCdnITrue. */
        retVal = BSWM_ID_AL_EnaCdnITrue;
      }
    }
    else
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnI) != BSWM_FALSE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnI, BSWM_FALSE);
        /* Return triggered action list BswM_ActionList_EnaCdnIFalse. */
        retVal = BSWM_ID_AL_EnaCdnIFalse;
      }
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_EnaCdnFTiOut
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnFTiOut(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnFTiOut) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LogicalExpression_EnaCdnFTiOut. */
    if(BswM_GetTimerState(0) == BSWM_TIMER_EXPIRED)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnFTiOut) != BSWM_TRUE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnFTiOut, BSWM_TRUE);
        /* Return triggered action list BswM_ActionList_EnaCdnFTrue. */
        retVal = BSWM_ID_AL_EnaCdnFTrue;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnFTiOut, BSWM_FALSE);
      /* No false action list configured. */
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_EnaCdnStrtUp
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnStrtUp(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnStrtUp) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LogicalExpression_AlwaysTrue. */
    if(TRUE == TRUE)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnStrtUp) != BSWM_TRUE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnStrtUp, BSWM_TRUE);
        /* Return triggered action list BswM_ActionList_EnaCdnStrtUp. */
        retVal = BSWM_ID_AL_EnaCdnStrtUp;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnStrtUp, BSWM_FALSE);
      /* No false action list configured. */
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_EnaCdnJ
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnJ(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnJ) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LogicalExpression_EnaCdnJ. */
    if(Rte_CustDiagc_SerlComDi_Logl == FALSE)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnJ) != BSWM_TRUE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnJ, BSWM_TRUE);
        /* Return triggered action list BswM_ActionList_EnaCdnJTrue. */
        retVal = BSWM_ID_AL_EnaCdnJTrue;
      }
    }
    else
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnJ) != BSWM_FALSE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnJ, BSWM_FALSE);
        /* Return triggered action list BswM_ActionList_EnaCdnJFalse. */
        retVal = BSWM_ID_AL_EnaCdnJFalse;
      }
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_EnaCdnJTiOut
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnJTiOut(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnJTiOut) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LogicalExpression_EnaCdnJTiOut. */
    if(BswM_GetTimerState(1) == BSWM_TIMER_EXPIRED)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnJTiOut) != BSWM_TRUE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnJTiOut, BSWM_TRUE);
        /* Return triggered action list BswM_ActionList_EnaCdnJDly. */
        retVal = BSWM_ID_AL_EnaCdnJDly;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnJTiOut, BSWM_FALSE);
      /* No false action list configured. */
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_EnaCdnK
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_EnaCdnK(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnK) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LogicalExpression_EnaCdnK. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
    if((Rte_GmMsg1F1BusHiSpd_SysPwrMod_Val == GMSYSPWRMOD_RUN) && (Rte_GmMsg0C9BusHiSpd_EngRunActv_Logl == TRUE))
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnK) != BSWM_TRUE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnK, BSWM_TRUE);
        /* Return triggered action list BswM_ActionList_EnaCdnKTrue. */
        retVal = BSWM_ID_AL_EnaCdnKTrue;
      }
    }
    else
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_EnaCdnK) != BSWM_FALSE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_EnaCdnK, BSWM_FALSE);
        /* Return triggered action list BswM_ActionList_EnaCdnKFalse. */
        retVal = BSWM_ID_AL_EnaCdnKFalse;
      }
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_BSWM_RESTART
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_BSWM_RESTART(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  if( BswM_GetRuleStates(BSWM_ID_RULE_BSWM_RESTART) != BSWM_DEACTIVATED )
  {
    /* Evaluate logical expression LogicalExpression_Restart. */
    if(BswM_GetGenericState(0) == BSWM_GENERICVALUE_BSWM_STATE_BSWM_RESTART)
    {
      if( BswM_GetRuleStates(BSWM_ID_RULE_BSWM_RESTART) != BSWM_TRUE )
      {
        BswM_UpdateRuleStates(BSWM_ID_RULE_BSWM_RESTART, BSWM_TRUE);
        /* Return triggered action list BswM_ActionList_RESTART. */
        retVal = BSWM_ID_AL_RESTART;
      }
    }
    else
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_BSWM_RESTART, BSWM_FALSE);
      /* No false action list configured. */
    }
  }
  return retVal;
}



#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

