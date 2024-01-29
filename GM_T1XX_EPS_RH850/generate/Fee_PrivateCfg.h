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
 *            Module: Fee
 *           Program: GM Global A / Flexray (MSR_Gm_SLP2)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701311
 *    License Scope : The usage is restricted to CBD1400351_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Fee_PrivateCfg.h
 *   Generation Time: 2016-12-14 11:09:27
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1400351_D04
 *      Tool Version: DaVinci Configurator  5.13.16 SP2
 *
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  PRIVATE SECTION
 *********************************************************************************************************************/
#if (!defined FEE_PRIVATE_CFG_H)
# define FEE_PRIVATE_CFG_H

  /****************************************************************************
   * VERSION IDENTIFICATION
   ***************************************************************************/
# define FEE_PRIVATE_CFG_MAJOR_VERSION                                (8u)
# define FEE_PRIVATE_CFG_MINOR_VERSION                                (1u)
# define FEE_PRIVATE_CFG_PATCH_VERSION                                (0u)

#ifndef FEE_USE_DUMMY_FUNCTIONS
#define FEE_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef FEE_USE_DUMMY_STATEMENT
#define FEE_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef FEE_DUMMY_STATEMENT
#define FEE_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef FEE_DUMMY_STATEMENT_CONST
#define FEE_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef FEE_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define FEE_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef FEE_ATOMIC_VARIABLE_ACCESS
#define FEE_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef FEE_PROCESSOR_RH850_1311
#define FEE_PROCESSOR_RH850_1311
#endif
#ifndef FEE_COMP_GREENHILLS
#define FEE_COMP_GREENHILLS
#endif
#ifndef FEE_GEN_GENERATOR_MSR
#define FEE_GEN_GENERATOR_MSR
#endif
#ifndef FEE_CPUTYPE_BITORDER_LSB2MSB
#define FEE_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef FEE_CONFIGURATION_VARIANT_PRECOMPILE
#define FEE_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef FEE_CONFIGURATION_VARIANT_LINKTIME
#define FEE_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef FEE_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define FEE_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef FEE_CONFIGURATION_VARIANT
#define FEE_CONFIGURATION_VARIANT FEE_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef FEE_POSTBUILD_VARIANT_SUPPORT
#define FEE_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


  /****************************************************************************
   * Data consistency 
   ***************************************************************************/
#include "SchM_Fee.h"

#define Fee_GlobalSuspend() SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_0() 
#define Fee_GlobalRestore() SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_0() 


  /****************************************************************************
   * Configurations for Development mode
   ***************************************************************************/

#include "Det.h"

/* PRQA S 3453 1 *//* MD_MSR_19.7 */
#define Fee_Errorhook(funcId, errId) Det_ReportError((FEE_MODULE_ID), (FEE_INSTANCE_ID), (funcId), (errId))


  /*******************************************************************************************************************
   *  GLOBAL CONSTANT MACROS
   ******************************************************************************************************************/
   
# define FEE_INTERNAL_BUFFER_SIZE                        			  (128U)
   
  /****************************************************************************
   * LOWER LAYER CONFIGURATION PARAMETERS
   ***************************************************************************/
# define FEE_POLLING_MODE                              (STD_ON)

# define Fee_FlsRead                                          Fls_Read
# define Fee_FlsWrite                                         Fls_Write
# define Fee_FlsErase                                         Fls_Erase
# define Fee_FlsCompare                                       Fls_Compare
# define Fee_FlsCancel                                        Fls_Cancel
# define Fee_FlsGetStatus                                     Fls_GetStatus
# define Fee_FlsGetJobResult                                  Fls_GetJobResult


  /****************************************************************************
   * UPPER LAYER CONFIGURATION PARAMETERS
   ***************************************************************************/
# define FEE_NVM_POLLING_MODE                          (STD_ON)

# if (STD_OFF == FEE_NVM_POLLING_MODE)
#  define Fee_NvMJobEndNotification()         			NULL_PTR()
#  define Fee_NvMJobErrorNotification()     			NULL_PTR()
# endif

  /****************************************************************************
   * Error Callback Notification
   ***************************************************************************/
# define FEE_USE_APPL_ERROR_CALLBACK            		(STD_ON)

# if (STD_ON == FEE_USE_APPL_ERROR_CALLBACK)
#  include "Fee_Callouts.h"
# endif

  /********************************************************************************************************************
   *  INCLUDES
   *******************************************************************************************************************/


#include "Fls.h" 


# if (STD_OFF == FEE_NVM_POLLING_MODE)

# endif

#endif /* (!defined FEE_PRIVATE_CFG_H) */

/**********************************************************************************************************************
 *  END OF FILE: Fee_PrivateCfg.h
 *********************************************************************************************************************/
 
