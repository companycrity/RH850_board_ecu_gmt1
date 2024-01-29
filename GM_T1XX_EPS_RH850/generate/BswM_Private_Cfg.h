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
 *              File: BswM_Private_Cfg.h
 *   Generation Time: 2016-12-22 15:17:50
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1400351_D04
 *      Tool Version: DaVinci Configurator  5.13.16 SP2
 *
 *
 *********************************************************************************************************************/


#if !defined(BSWM_PRIVATE_CFG_H)
#define BSWM_PRIVATE_CFG_H


/* -----------------------------------------------------------------------------
    &&&~ INCLUDE
 ----------------------------------------------------------------------------- */
#include "BswM_Cfg.h"

#include "BswM_UserTypes.h" 
#include "Rte_Main.h" 
#include "Fee.h" 
#include "NvM.h" 
#include "Fls.h" 
#include "NxtrWdgM.h" 
#include "Os.h" 
#include "Dem.h" 
#include "osekext.h" 
#include "CDD_GuardCfgAndDiagc.h" 
#include "ostm_regs.h" 
#include "CDD_SyncCrc.h" 
#include "CDD_FlsMem.h" 
#include "DiagcMgr.h" 


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
#define BSWM_INIT_GEN                STD_ON 
#define BSWM_MODENOTIFICATIONFCT     STD_OFF 
#define BSWM_SWCMODEREQUESTUPDATEFCT STD_OFF 


#if (BSWM_CONFIGURATION_VARIANT == BSWM_CONFIGURATION_VARIANT_PRECOMPILE && BSWM_POSTBUILD_VARIANT_SUPPORT == STD_OFF)
# define BSWM_FUNCTION_BASED STD_ON
#else
# define BSWM_FUNCTION_BASED STD_OFF
#endif

#if (defined (BSWM_ACTIONLISTSTRUEIDXOFRULES))
# if ((BSWM_ACTIONLISTSTRUEIDXOFRULES == STD_ON) && defined (BSWM_NO_ACTIONLISTSTRUEIDXOFRULES))
#  define BSWM_NO_ACTIONLIST BSWM_NO_ACTIONLISTSTRUEIDXOFRULES
# endif
#endif
#if (defined(BSWM_NO_ACTIONLIST))
#else
# if(defined(BSWM_ACTIONLISTSFALSEIDXOFRULES))
#  if ((BSWM_ACTIONLISTSFALSEIDXOFRULES == STD_ON) && defined (BSWM_NO_ACTIONLISTSFALSEIDXOFRULES))
#   define BSWM_NO_ACTIONLIST BSWM_NO_ACTIONLISTSFALSEIDXOFRULES
#  endif
# endif
#endif
#if (defined(BSWM_NO_ACTIONLIST))
#else
# if(defined(BSWM_SIZEOFACTIONLISTS))
#  if (BSWM_SIZEOFACTIONLISTS == STD_ON)
#   define BSWM_NO_ACTIONLIST BswM_GetSizeOfActionLists()
#  endif
# endif
#endif
#if (defined(BSWM_NO_ACTIONLIST))
#else
# define BSWM_NO_ACTIONLIST 255
#endif




#define BSWM_ID_RULE_BSWM_GOOFFONE     0U 
#define BSWM_ID_RULE_BSWM_PREPSHUTDOWN 1U 
#define BSWM_ID_RULE_BSWM_RUN          2U 
#define BSWM_ID_RULE_EnaCdnA           3U 
#define BSWM_ID_RULE_EnaCdnB           4U 
#define BSWM_ID_RULE_EnaCdnC           5U 
#define BSWM_ID_RULE_EnaCdnD           6U 
#define BSWM_ID_RULE_EnaCdnE           7U 
#define BSWM_ID_RULE_EnaCdnF           8U 
#define BSWM_ID_RULE_EnaCdnG           9U 
#define BSWM_ID_RULE_EnaCdnH           10U 
#define BSWM_ID_RULE_EnaCdnI           11U 
#define BSWM_ID_RULE_EnaCdnFTiOut      12U 
#define BSWM_ID_RULE_EnaCdnStrtUp      13U 
#define BSWM_ID_RULE_EnaCdnJ           14U 
#define BSWM_ID_RULE_EnaCdnJTiOut      15U 
#define BSWM_ID_RULE_EnaCdnK           16U 
#define BSWM_ID_RULE_BSWM_RESTART      17U 

#define BSWM_ID_AL_GOOFFONE           0U 
#define BSWM_ID_AL_INIT_AL_Initialize 1U 
#define BSWM_ID_AL_PREPSHUTDOWN       2U 
#define BSWM_ID_AL_RUN                3U 
#define BSWM_ID_AL_EnaCdnATrue        4U 
#define BSWM_ID_AL_EnaCdnAFalse       5U 
#define BSWM_ID_AL_EnaCdnBTrue        6U 
#define BSWM_ID_AL_EnaCdnBFalse       7U 
#define BSWM_ID_AL_EnaCdnCTrue        8U 
#define BSWM_ID_AL_EnaCdnCFalse       9U 
#define BSWM_ID_AL_EnaCdnDTrue        10U 
#define BSWM_ID_AL_EnaCdnDFalse       11U 
#define BSWM_ID_AL_EnaCdnETrue        12U 
#define BSWM_ID_AL_EnaCdnEFalse       13U 
#define BSWM_ID_AL_EnaCdnFTrue        14U 
#define BSWM_ID_AL_EnaCdnGTrue        15U 
#define BSWM_ID_AL_EnaCdnGFalse       16U 
#define BSWM_ID_AL_EnaCdnHTrue        17U 
#define BSWM_ID_AL_EnaCdnHFalse       18U 
#define BSWM_ID_AL_EnaCdnITrue        19U 
#define BSWM_ID_AL_EnaCdnIFalse       20U 
#define BSWM_ID_AL_EnaCdnFStrt        21U 
#define BSWM_ID_AL_EnaCdnStrtUp       22U 
#define BSWM_ID_AL_EnaCdnJTrue        23U 
#define BSWM_ID_AL_EnaCdnJFalse       24U 
#define BSWM_ID_AL_EnaCdnJDly         25U 
#define BSWM_ID_AL_EnaCdnKTrue        26U 
#define BSWM_ID_AL_EnaCdnKFalse       27U 
#define BSWM_ID_AL_RESTART            28U 


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  BswMPCGetConstantDuplicatedRootDataMacros  BswM Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define BswM_GetActionListQueueOfPCConfig()                           BswM_ActionListQueue.raw  /**< the pointer to BswM_ActionListQueue */
#define BswM_GetActionListsOfPCConfig()                               BswM_ActionLists  /**< the pointer to BswM_ActionLists */
#define BswM_GetDeferredRulesOfPCConfig()                             BswM_DeferredRules  /**< the pointer to BswM_DeferredRules */
#define BswM_GetGenericMappingOfPCConfig()                            BswM_GenericMapping  /**< the pointer to BswM_GenericMapping */
#define BswM_GetGenericStateOfPCConfig()                              BswM_GenericState  /**< the pointer to BswM_GenericState */
#define BswM_GetImmediateUserOfPCConfig()                             BswM_ImmediateUser  /**< the pointer to BswM_ImmediateUser */
#define BswM_GetInitializedOfPCConfig()                               BswM_Initialized  /**< the pointer to BswM_Initialized */
#define BswM_GetModeRequestQueueOfPCConfig()                          BswM_ModeRequestQueue  /**< the pointer to BswM_ModeRequestQueue */
#define BswM_GetRuleStatesOfPCConfig()                                BswM_RuleStates  /**< the pointer to BswM_RuleStates */
#define BswM_GetRulesIndOfPCConfig()                                  BswM_RulesInd  /**< the pointer to BswM_RulesInd */
#define BswM_GetRulesOfPCConfig()                                     BswM_Rules  /**< the pointer to BswM_Rules */
#define BswM_GetSizeOfActionListsOfPCConfig()                         29U  /**< the number of accomplishable value elements in BswM_ActionLists */
#define BswM_GetSizeOfDeferredRulesOfPCConfig()                       15U  /**< the number of accomplishable value elements in BswM_DeferredRules */
#define BswM_GetSizeOfGenericMappingOfPCConfig()                      3U  /**< the number of accomplishable value elements in BswM_GenericMapping */
#define BswM_GetSizeOfImmediateUserOfPCConfig()                       2U  /**< the number of accomplishable value elements in BswM_ImmediateUser */
#define BswM_GetSizeOfRulesIndOfPCConfig()                            2U  /**< the number of accomplishable value elements in BswM_RulesInd */
#define BswM_GetSizeOfRulesOfPCConfig()                               18U  /**< the number of accomplishable value elements in BswM_Rules */
#define BswM_GetSizeOfTimerStateOfPCConfig()                          2U  /**< the number of accomplishable value elements in BswM_TimerState */
#define BswM_GetSizeOfTimerValueOfPCConfig()                          2U  /**< the number of accomplishable value elements in BswM_TimerValue */
#define BswM_GetTimerStateOfPCConfig()                                BswM_TimerState.raw  /**< the pointer to BswM_TimerState */
#define BswM_GetTimerValueOfPCConfig()                                BswM_TimerValue.raw  /**< the pointer to BswM_TimerValue */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGetDuplicatedRootDataMacros  BswM Get Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated root data elements.
  \{
*/ 
#define BswM_GetSizeOfActionListQueueOfPCConfig()                     BswM_GetSizeOfActionListsOfPCConfig()  /**< the number of accomplishable value elements in BswM_ActionListQueue */
#define BswM_GetSizeOfGenericStateOfPCConfig()                        BswM_GetSizeOfGenericMappingOfPCConfig()  /**< the number of accomplishable value elements in BswM_GenericState */
#define BswM_GetSizeOfModeRequestQueueOfPCConfig()                    BswM_GetSizeOfImmediateUserOfPCConfig()  /**< the number of accomplishable value elements in BswM_ModeRequestQueue */
#define BswM_GetSizeOfRuleStatesOfPCConfig()                          BswM_GetSizeOfRulesOfPCConfig()  /**< the number of accomplishable value elements in BswM_RuleStates */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGetDataMacros  BswM Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define BswM_GetActionListQueue(Index)                                (BswM_GetActionListQueueOfPCConfig()[(Index)])
#define BswM_GetFctPtrOfActionLists(Index)                            (BswM_GetActionListsOfPCConfig()[(Index)].FctPtrOfActionLists)
#define BswM_GetRulesIdxOfDeferredRules(Index)                        (BswM_GetDeferredRulesOfPCConfig()[(Index)].RulesIdxOfDeferredRules)
#define BswM_GetExternalIdOfGenericMapping(Index)                     (BswM_GetGenericMappingOfPCConfig()[(Index)].ExternalIdOfGenericMapping)
#define BswM_GetImmediateUserEndIdxOfGenericMapping(Index)            (BswM_GetGenericMappingOfPCConfig()[(Index)].ImmediateUserEndIdxOfGenericMapping)
#define BswM_GetImmediateUserStartIdxOfGenericMapping(Index)          (BswM_GetGenericMappingOfPCConfig()[(Index)].ImmediateUserStartIdxOfGenericMapping)
#define BswM_GetInitValueOfGenericMapping(Index)                      (BswM_GetGenericMappingOfPCConfig()[(Index)].InitValueOfGenericMapping)
#define BswM_GetGenericState(Index)                                   (BswM_GetGenericStateOfPCConfig()[(Index)])
#define BswM_GetMaskedBitsOfImmediateUser(Index)                      (BswM_GetImmediateUserOfPCConfig()[(Index)].MaskedBitsOfImmediateUser)
#define BswM_GetRulesIndEndIdxOfImmediateUser(Index)                  (BswM_GetImmediateUserOfPCConfig()[(Index)].RulesIndEndIdxOfImmediateUser)
#define BswM_GetRulesIndStartIdxOfImmediateUser(Index)                (BswM_GetImmediateUserOfPCConfig()[(Index)].RulesIndStartIdxOfImmediateUser)
#define BswM_IsInitialized()                                          ((BswM_GetInitializedOfPCConfig()) != FALSE)
#define BswM_GetModeRequestQueue(Index)                               (BswM_GetModeRequestQueueOfPCConfig()[(Index)])
#define BswM_GetRuleStates(Index)                                     (BswM_GetRuleStatesOfPCConfig()[(Index)])
#define BswM_GetFctPtrOfRules(Index)                                  (BswM_GetRulesOfPCConfig()[(Index)].FctPtrOfRules)
#define BswM_GetIdOfRules(Index)                                      (BswM_GetRulesOfPCConfig()[(Index)].IdOfRules)
#define BswM_GetInitOfRules(Index)                                    (BswM_GetRulesOfPCConfig()[(Index)].InitOfRules)
#define BswM_GetRulesInd(Index)                                       (BswM_GetRulesIndOfPCConfig()[(Index)])
#define BswM_GetTimerState(Index)                                     (BswM_GetTimerStateOfPCConfig()[(Index)])
#define BswM_GetTimerValue(Index)                                     (BswM_GetTimerValueOfPCConfig()[(Index)])
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGetBitDataMacros  BswM Get Bit Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read bitcoded data elements.
  \{
*/ 
#define BswM_IsForcedOfImmediateUser(Index)                           (BSWM_FORCEDOFIMMEDIATEUSER_MASK == (BswM_GetMaskedBitsOfImmediateUser(Index) & BSWM_FORCEDOFIMMEDIATEUSER_MASK))  /**< Forced immediate request (will never be queued). */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGetDeduplicatedDataMacros  BswM Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define BswM_IsImmediateUserUsedOfGenericMapping(Index)               (((boolean)(BswM_GetImmediateUserStartIdxOfGenericMapping(Index) != BSWM_NO_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to BswM_ImmediateUser */
#define BswM_IsRulesIndUsedOfImmediateUser(Index)                     (((boolean)(BswM_GetRulesIndStartIdxOfImmediateUser(Index) != BSWM_NO_RULESINDSTARTIDXOFIMMEDIATEUSER)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to BswM_RulesInd */
#define BswM_GetSizeOfActionListQueue()                               BswM_GetSizeOfActionListQueueOfPCConfig()
#define BswM_GetSizeOfActionLists()                                   BswM_GetSizeOfActionListsOfPCConfig()
#define BswM_GetSizeOfDeferredRules()                                 BswM_GetSizeOfDeferredRulesOfPCConfig()
#define BswM_GetSizeOfGenericMapping()                                BswM_GetSizeOfGenericMappingOfPCConfig()
#define BswM_GetSizeOfGenericState()                                  BswM_GetSizeOfGenericStateOfPCConfig()
#define BswM_GetSizeOfImmediateUser()                                 BswM_GetSizeOfImmediateUserOfPCConfig()
#define BswM_GetSizeOfModeRequestQueue()                              BswM_GetSizeOfModeRequestQueueOfPCConfig()
#define BswM_GetSizeOfRuleStates()                                    BswM_GetSizeOfRuleStatesOfPCConfig()
#define BswM_GetSizeOfRules()                                         BswM_GetSizeOfRulesOfPCConfig()
#define BswM_GetSizeOfRulesInd()                                      BswM_GetSizeOfRulesIndOfPCConfig()
#define BswM_GetSizeOfTimerState()                                    BswM_GetSizeOfTimerStateOfPCConfig()
#define BswM_GetSizeOfTimerValue()                                    BswM_GetSizeOfTimerValueOfPCConfig()
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCSetDataMacros  BswM Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define BswM_SetActionListQueue(Index, Value)                         BswM_GetActionListQueueOfPCConfig()[(Index)] = (Value)
#define BswM_SetGenericState(Index, Value)                            BswM_GetGenericStateOfPCConfig()[(Index)] = (Value)
#define BswM_SetInitialized(Value)                                    BswM_GetInitializedOfPCConfig() = (Value)
#define BswM_SetModeRequestQueue(Index, Value)                        BswM_GetModeRequestQueueOfPCConfig()[(Index)] = (Value)
#define BswM_SetRuleStates(Index, Value)                              BswM_GetRuleStatesOfPCConfig()[(Index)] = (Value)
#define BswM_SetTimerState(Index, Value)                              BswM_GetTimerStateOfPCConfig()[(Index)] = (Value)
#define BswM_SetTimerValue(Index, Value)                              BswM_GetTimerValueOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCHasMacros  BswM Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define BswM_HasActionListQueue()                                     (TRUE != FALSE)
#define BswM_HasActionLists()                                         (TRUE != FALSE)
#define BswM_HasFctPtrOfActionLists()                                 (TRUE != FALSE)
#define BswM_HasDeferredRules()                                       (TRUE != FALSE)
#define BswM_HasRulesIdxOfDeferredRules()                             (TRUE != FALSE)
#define BswM_HasGenericMapping()                                      (TRUE != FALSE)
#define BswM_HasExternalIdOfGenericMapping()                          (TRUE != FALSE)
#define BswM_HasImmediateUserEndIdxOfGenericMapping()                 (TRUE != FALSE)
#define BswM_HasImmediateUserStartIdxOfGenericMapping()               (TRUE != FALSE)
#define BswM_HasImmediateUserUsedOfGenericMapping()                   (TRUE != FALSE)
#define BswM_HasInitValueOfGenericMapping()                           (TRUE != FALSE)
#define BswM_HasGenericState()                                        (TRUE != FALSE)
#define BswM_HasImmediateUser()                                       (TRUE != FALSE)
#define BswM_HasForcedOfImmediateUser()                               (TRUE != FALSE)
#define BswM_HasMaskedBitsOfImmediateUser()                           (TRUE != FALSE)
#define BswM_HasRulesIndEndIdxOfImmediateUser()                       (TRUE != FALSE)
#define BswM_HasRulesIndStartIdxOfImmediateUser()                     (TRUE != FALSE)
#define BswM_HasRulesIndUsedOfImmediateUser()                         (TRUE != FALSE)
#define BswM_HasInitialized()                                         (TRUE != FALSE)
#define BswM_HasModeRequestQueue()                                    (TRUE != FALSE)
#define BswM_HasRuleStates()                                          (TRUE != FALSE)
#define BswM_HasRules()                                               (TRUE != FALSE)
#define BswM_HasFctPtrOfRules()                                       (TRUE != FALSE)
#define BswM_HasIdOfRules()                                           (TRUE != FALSE)
#define BswM_HasInitOfRules()                                         (TRUE != FALSE)
#define BswM_HasRulesInd()                                            (TRUE != FALSE)
#define BswM_HasSizeOfActionListQueue()                               (TRUE != FALSE)
#define BswM_HasSizeOfActionLists()                                   (TRUE != FALSE)
#define BswM_HasSizeOfDeferredRules()                                 (TRUE != FALSE)
#define BswM_HasSizeOfGenericMapping()                                (TRUE != FALSE)
#define BswM_HasSizeOfGenericState()                                  (TRUE != FALSE)
#define BswM_HasSizeOfImmediateUser()                                 (TRUE != FALSE)
#define BswM_HasSizeOfModeRequestQueue()                              (TRUE != FALSE)
#define BswM_HasSizeOfRuleStates()                                    (TRUE != FALSE)
#define BswM_HasSizeOfRules()                                         (TRUE != FALSE)
#define BswM_HasSizeOfRulesInd()                                      (TRUE != FALSE)
#define BswM_HasSizeOfTimerState()                                    (TRUE != FALSE)
#define BswM_HasSizeOfTimerValue()                                    (TRUE != FALSE)
#define BswM_HasTimerState()                                          (TRUE != FALSE)
#define BswM_HasTimerValue()                                          (TRUE != FALSE)
#define BswM_HasPCConfig()                                            (TRUE != FALSE)
#define BswM_HasActionListQueueOfPCConfig()                           (TRUE != FALSE)
#define BswM_HasActionListsOfPCConfig()                               (TRUE != FALSE)
#define BswM_HasDeferredRulesOfPCConfig()                             (TRUE != FALSE)
#define BswM_HasGenericMappingOfPCConfig()                            (TRUE != FALSE)
#define BswM_HasGenericStateOfPCConfig()                              (TRUE != FALSE)
#define BswM_HasImmediateUserOfPCConfig()                             (TRUE != FALSE)
#define BswM_HasInitializedOfPCConfig()                               (TRUE != FALSE)
#define BswM_HasModeRequestQueueOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasRuleStatesOfPCConfig()                                (TRUE != FALSE)
#define BswM_HasRulesIndOfPCConfig()                                  (TRUE != FALSE)
#define BswM_HasRulesOfPCConfig()                                     (TRUE != FALSE)
#define BswM_HasSizeOfActionListQueueOfPCConfig()                     (TRUE != FALSE)
#define BswM_HasSizeOfActionListsOfPCConfig()                         (TRUE != FALSE)
#define BswM_HasSizeOfDeferredRulesOfPCConfig()                       (TRUE != FALSE)
#define BswM_HasSizeOfGenericMappingOfPCConfig()                      (TRUE != FALSE)
#define BswM_HasSizeOfGenericStateOfPCConfig()                        (TRUE != FALSE)
#define BswM_HasSizeOfImmediateUserOfPCConfig()                       (TRUE != FALSE)
#define BswM_HasSizeOfModeRequestQueueOfPCConfig()                    (TRUE != FALSE)
#define BswM_HasSizeOfRuleStatesOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasSizeOfRulesIndOfPCConfig()                            (TRUE != FALSE)
#define BswM_HasSizeOfRulesOfPCConfig()                               (TRUE != FALSE)
#define BswM_HasSizeOfTimerStateOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasSizeOfTimerValueOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasTimerStateOfPCConfig()                                (TRUE != FALSE)
#define BswM_HasTimerValueOfPCConfig()                                (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCIncrementDataMacros  BswM Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define BswM_IncActionListQueue(Index)                                BswM_GetActionListQueue(Index)++
#define BswM_IncGenericState(Index)                                   BswM_GetGenericState(Index)++
#define BswM_IncModeRequestQueue(Index)                               BswM_GetModeRequestQueue(Index)++
#define BswM_IncRuleStates(Index)                                     BswM_GetRuleStates(Index)++
#define BswM_IncTimerState(Index)                                     BswM_GetTimerState(Index)++
#define BswM_IncTimerValue(Index)                                     BswM_GetTimerValue(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCDecrementDataMacros  BswM Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define BswM_DecActionListQueue(Index)                                BswM_GetActionListQueue(Index)--
#define BswM_DecGenericState(Index)                                   BswM_GetGenericState(Index)--
#define BswM_DecModeRequestQueue(Index)                               BswM_GetModeRequestQueue(Index)--
#define BswM_DecRuleStates(Index)                                     BswM_GetRuleStates(Index)--
#define BswM_DecTimerState(Index)                                     BswM_GetTimerState(Index)--
#define BswM_DecTimerValue(Index)                                     BswM_GetTimerValue(Index)--
/** 
  \}
*/ 

  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/* PRQA S 3451 EXTERNDECLARATIONS */ /* MD_BswM_3451 */ 
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
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
extern CONST(BswM_ActionListsType, BSWM_CONST) BswM_ActionLists[29];
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
extern CONST(BswM_DeferredRulesType, BSWM_CONST) BswM_DeferredRules[15];
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
extern CONST(BswM_GenericMappingType, BSWM_CONST) BswM_GenericMapping[3];
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
extern CONST(BswM_ImmediateUserType, BSWM_CONST) BswM_ImmediateUser[2];
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
extern CONST(BswM_RulesType, BSWM_CONST) BswM_Rules[18];
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
extern CONST(BswM_RulesIndType, BSWM_CONST) BswM_RulesInd[2];
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
extern VAR(uBswM_ActionListQueueType, BSWM_VAR_NOINIT) BswM_ActionListQueue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
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
extern VAR(BswM_ModeType, BSWM_VAR_NOINIT) BswM_GenericState[3];
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
extern VAR(BswM_InitializedType, BSWM_VAR_ZERO_INIT) BswM_Initialized;
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
extern VAR(BswM_ModeRequestQueueType, BSWM_VAR_NOINIT) BswM_ModeRequestQueue[2];
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
extern VAR(BswM_RuleStatesType, BSWM_VAR_NOINIT) BswM_RuleStates[18];
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
extern VAR(uBswM_TimerStateType, BSWM_VAR_NOINIT) BswM_TimerState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
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
extern VAR(uBswM_TimerValueType, BSWM_VAR_NOINIT) BswM_TimerValue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define BSWM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */



/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/* PRQA L:EXTERNDECLARATIONS */


#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#if (BSWM_USE_INIT_POINTER == STD_ON)
extern  P2CONST(BswM_ConfigType, AUTOMATIC, BSWM_PBCFG) BswM_ConfigPtr;
#endif

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/* -----------------------------------------------------------------------------
    &&&~ EXTERNAL DECLARATIONS
 ----------------------------------------------------------------------------- */

#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/*! \addtogroup    BswMGeneratedFunctions BswM Generated Functions
 * \{
 */
/* PRQA S 0779 FUNCTIONDECLARATIONS */ /* MD_BswM_0779 */

/**********************************************************************************************************************
 *  Init
 *********************************************************************************************************************/
/*! \defgroup    Init
 * \{
 */
/**********************************************************************************************************************
 *  BswM_Init_Gen
 *********************************************************************************************************************/
/*!
 * \brief       Initializes BswM.
 * \details     Part of the BswM_Init. Initializes all generated variables and executes action lists for initialization.
 * \pre         -
 * \reentrant   FALSE
 * \synchronous TRUE
 * \note        May only be called by BswM_Init.
 */
extern FUNC(void, BSWM_CODE) BswM_Init_Gen(void);
/*! \} */ /* End of group Init */
/* PRQA L:FUNCTIONDECLARATIONS */
/*! \} */ /* End of group BswMGeneratedFunctions */


#if (BSWM_FUNCTION_BASED == STD_OFF)
/**********************************************************************************************************************
 *  BswM_Action_ActionListHandler()
 **********************************************************************************************************************/
/*!
 * \brief       Executes an action list.
 * \details     Executes all actions of an action list.
 * \param[in]   handleId  Id of the action list to execute.
 * \return      E_OK      Action list was completely executed.
 * \return      E_NOT_OK  Action list was aborted because an action failed.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
extern FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ActionListHandler(BswM_HandleType handleId);
#endif

#if ((BSWM_RULES == STD_ON)  && (BSWM_FUNCTION_BASED == STD_OFF))
/**********************************************************************************************************************
 *  BswM_ArbitrateRule()
 **********************************************************************************************************************/
/*!
 * \brief       Arbitrates a rule.
 * \details     Evaluates the logical expression of the rule and determines the action list to execute.
 * \param[in]   ruleId  Id of the rule to aribtrate
 * \return      ID of action list to execute (BSWM_NO_ACTIONLIST if no action list shall be executed)
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
extern FUNC(BswM_SizeOfActionListsType, BSWM_CODE) BswM_ArbitrateRule(BswM_HandleType ruleId);
#endif

#if(BSWM_IMMEDIATEUSER == STD_ON)
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
/**********************************************************************************************************************
 *  BswM_ImmediateModeRequest()
 **********************************************************************************************************************/
/*!
 * \brief       Processes an immediate mode request.
 * \details     Queues mode request and starts arbitration of depending rules if no other request is currently active.
 * \param[in]   start   Handle of first mode request.
 * \param[in]   end     Handle of last mode request.
 * \param[in]   sid     Service Id of calling API. Only available if BSWM_DEV_ERROR_REPORT is STD_ON.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
extern FUNC(void, BSWM_CODE) BswM_ImmediateModeRequest(BswM_SizeOfImmediateUserType start, BswM_SizeOfImmediateUserType end, uint8 sid);
# else
extern FUNC(void, BSWM_CODE) BswM_ImmediateModeRequest(BswM_SizeOfImmediateUserType start, BswM_SizeOfImmediateUserType end);
# endif
#endif

#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#endif /* BSWM_PRIVATE_CFG_H */


