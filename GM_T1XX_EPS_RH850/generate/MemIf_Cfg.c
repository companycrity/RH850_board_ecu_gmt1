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
 *            Module: MemIf
 *           Program: GM Global A / Flexray (MSR_Gm_SLP2)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701311
 *    License Scope : The usage is restricted to CBD1400351_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: MemIf_Cfg.c
 *   Generation Time: 2016-12-14 11:09:27
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1400351_D04
 *      Tool Version: DaVinci Configurator  5.13.16 SP2
 *
 *
 *********************************************************************************************************************/

    
/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "MemIf.h"

/****  Include of MemHwA Modules  ************************************************************************************/
#include "Fee.h" 



/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/
 
#if (   (MEMIF_CFG_MAJOR_VERSION != (5u)) \
     || (MEMIF_CFG_MINOR_VERSION != (1u)))
# error "Version numbers of MemIf_Cfg.c and MemIf_Cfg.h are inconsistent!"
#endif

#if (   (MEMIF_SW_MAJOR_VERSION != (3u)) \
     || (MEMIF_SW_MINOR_VERSION != (3u)))
# error "Version numbers of MemIf_Cfg.c and MemIf.h are inconsistent!"
#endif


/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/
 
#define MEMIF_START_SEC_CONST_8BIT
#include "MemMap.h"	/* PRQA S 5087 */ /* MD_MSR_19.1 */

CONST(uint8, MEMIF_CONST) MemIf_NumberOfDevices = MEMIF_NUMBER_OF_DEVICES;

#define MEMIF_STOP_SEC_CONST_8BIT
#include "MemMap.h"	/* PRQA S 5087 */ /* MD_MSR_19.1 */



#define MEMIF_START_SEC_CONST_32BIT
#include "MemMap.h"	/* PRQA S 5087 */ /* MD_MSR_19.1 */

CONST(MemIf_MemHwAApi_Type, MEMIF_CONST) MemIf_MemHwaApis[MEMIF_NUMBER_OF_DEVICES] =
{
   /*  Fee  */ {
    Fee_Read, 
    Fee_Write, 
    Fee_EraseImmediateBlock, 
    Fee_InvalidateBlock, 
    Fee_Cancel, 
    Fee_GetStatus, 
    Fee_GetJobResult, 
    Fee_SetMode
  }
};
    
#define MEMIF_STOP_SEC_CONST_32BIT
#include "MemMap.h"	/* PRQA S 5087 */ /* MD_MSR_19.1 */
        
/**********************************************************************************************************************
 *  END OF FILE: MemIf_Cfg.c
 *********************************************************************************************************************/   

