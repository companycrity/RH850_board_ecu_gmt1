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
 *            Module: IoHwAb
 *           Program: GM Global A / Flexray (MSR_Gm_SLP2)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701311
 *    License Scope : The usage is restricted to CBD1400351_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: IoHwAb_30.c
 *   Generation Time: 2016-12-14 11:09:27
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1400351_D04
 *      Tool Version: DaVinci Configurator  5.13.16 SP2
 *
 *
 *********************************************************************************************************************/


#define IOHWAB_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/

/* ===== MODULE INCLUDES ================================================== */
#include "IoHwAb.h" 
#include "IoHwAb_Cbk.h"
#include "IoHwAb_Cfg.h"


/* ===== RTE INCLUDE ====================================================== */
#include "Rte_IoHwAb.h"


/* ===== USER INCLUDES ==================================================== */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK User Includes>
 *********************************************************************************************************************/


/**********************************************************************************************************************
* Module File Name  : IoHwAb_30.c
* Module Description: I/O Hardware Abstraction module used primarily for GPIO interface
* Project           : GM T1xx
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          3 %
* %derived_by:       nz2654 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 01/25/16  1        LWW       Initial version from new vector BSW delivery                                    EA4#3191
* 12/15/16  3        HM        Cleaned up the file change log version to sync with Synergy                     EA4#8935
**********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  VERSION CHECK
 **********************************************************************************************************************/
#define IOHWAB_C_MAJOR_VERSION  (6u) 
#define IOHWAB_C_MINOR_VERSION  (00u) 
#define IOHWAB_C_PATCH_VERSION  (00u) 

#if (  (IOHWAB_CFG_MAJOR_VERSION != IOHWAB_C_MAJOR_VERSION) \
    || (IOHWAB_CFG_MINOR_VERSION != IOHWAB_C_MINOR_VERSION) )
        #error "Version numbers of IoHwAb.c and IoHwAb_Cfg.h are inconsistent!"
#endif

#if(   (IOHWAB_SW_MAJOR_VERSION != (3u)) \
    || (IOHWAB_SW_MINOR_VERSION != (0u)) )
    #error "Version numbers of IoHwAb.c and IoHwAb.h are inconsistent!"
#endif

#if(   (IOHWAB_CBK_MAJOR_VERSION != IOHWAB_C_MAJOR_VERSION) \
    || (IOHWAB_CBK_MINOR_VERSION != IOHWAB_C_MINOR_VERSION) )
    #error "Version numbers of IoHwAb.c and IoHwAb_Cbk.h are inconsistent!"
#endif



/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK User Macros>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK User Data>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

#define IOHWAB_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/* Hint: IoHwAb_Init() has been removed from the code. Use the configuration switch 'IoHwAbUseInitFunction'
   to enable it. */



/**********************************************************************************************************************
 *  CLIENT/SERVER PORTS
 **********************************************************************************************************************/


/* ----- Operations Of Client/Server Port GetGpioMcuEna ----- */

/**********************************************************************************************************************
 *  IoHwAb_GetGpioMcuEna_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_GetGpioMcuEna_Oper is an operation of the C/S port 
 *              GetGpioMcuEna
 *  \param[out] PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_GetGpioMcuEna_Oper(
  P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK GetGpioMcuEna_Oper>
 *********************************************************************************************************************/

	*PinSt_Arg = Dio_ReadChannel(DioConf_DioChannel_McuEna);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_GetGpioMcuEna_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port GetGpioMotDrvr0Diag ----- */

/**********************************************************************************************************************
 *  IoHwAb_GetGpioMotDrvr0Diag_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_GetGpioMotDrvr0Diag_Oper is an operation of the C/S port 
 *              GetGpioMotDrvr0Diag
 *  \param[out] PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_GetGpioMotDrvr0Diag_Oper(
  P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK GetGpioMotDrvr0Diag_Oper>
 *********************************************************************************************************************/

	*PinSt_Arg = Dio_ReadChannel(DioConf_DioChannel_MotDrvr0Diag);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_GetGpioMotDrvr0Diag_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port GetGpioMotDrvr1Diag ----- */

/**********************************************************************************************************************
 *  IoHwAb_GetGpioMotDrvr1Diag_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_GetGpioMotDrvr1Diag_Oper is an operation of the C/S port 
 *              GetGpioMotDrvr1Diag
 *  \param[out] PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_GetGpioMotDrvr1Diag_Oper(
  P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK GetGpioMotDrvr1Diag_Oper>
 *********************************************************************************************************************/

	*PinSt_Arg = Dio_ReadChannel(DioConf_DioChannel_MotDrvr1Diag);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_GetGpioMotDrvr1Diag_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port GetGpioPwrOutpEnaFb ----- */

/**********************************************************************************************************************
 *  IoHwAb_GetGpioPwrOutpEnaFb_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_GetGpioPwrOutpEnaFb_Oper is an operation of the C/S port 
 *              GetGpioPwrOutpEnaFb
 *  \param[out] PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_GetGpioPwrOutpEnaFb_Oper(
  P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK GetGpioPwrOutpEnaFb_Oper>
 *********************************************************************************************************************/

	*PinSt_Arg = Dio_ReadChannel(DioConf_DioChannel_PwrOutpEnaFb);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_GetGpioPwrOutpEnaFb_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctGpioPhaALowrCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctGpioPhaALowrCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctGpioPhaALowrCmd_Oper is an operation of the C/S port 
 *              SetFctGpioPhaALowrCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctGpioPhaALowrCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctGpioPhaALowrCmd_Oper>
 *********************************************************************************************************************/

    Port_SetToDioMode(Port_PortGroup3_PortPin8);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctGpioPhaALowrCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctGpioPhaAUpprCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctGpioPhaAUpprCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctGpioPhaAUpprCmd_Oper is an operation of the C/S port 
 *              SetFctGpioPhaAUpprCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctGpioPhaAUpprCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctGpioPhaAUpprCmd_Oper>
 *********************************************************************************************************************/

    Port_SetToDioMode(Port_PortGroup3_PortPin7);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctGpioPhaAUpprCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctGpioPhaBLowrCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctGpioPhaBLowrCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctGpioPhaBLowrCmd_Oper is an operation of the C/S port 
 *              SetFctGpioPhaBLowrCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctGpioPhaBLowrCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctGpioPhaBLowrCmd_Oper>
 *********************************************************************************************************************/

    Port_SetToDioMode(Port_PortGroup3_PortPin10);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctGpioPhaBLowrCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctGpioPhaBUpprCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctGpioPhaBUpprCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctGpioPhaBUpprCmd_Oper is an operation of the C/S port 
 *              SetFctGpioPhaBUpprCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctGpioPhaBUpprCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctGpioPhaBUpprCmd_Oper>
 *********************************************************************************************************************/

    Port_SetToDioMode(Port_PortGroup3_PortPin9);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctGpioPhaBUpprCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctGpioPhaCLowrCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctGpioPhaCLowrCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctGpioPhaCLowrCmd_Oper is an operation of the C/S port 
 *              SetFctGpioPhaCLowrCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctGpioPhaCLowrCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctGpioPhaCLowrCmd_Oper>
 *********************************************************************************************************************/

    Port_SetToDioMode(Port_PortGroup3_PortPin13);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctGpioPhaCLowrCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctGpioPhaCUpprCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctGpioPhaCUpprCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctGpioPhaCUpprCmd_Oper is an operation of the C/S port 
 *              SetFctGpioPhaCUpprCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctGpioPhaCUpprCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctGpioPhaCUpprCmd_Oper>
 *********************************************************************************************************************/

    Port_SetToDioMode(Port_PortGroup3_PortPin12);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctGpioPhaCUpprCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctPeriphPhaALowrCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctPeriphPhaALowrCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctPeriphPhaALowrCmd_Oper is an operation of the C/S port 
 *              SetFctPeriphPhaALowrCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctPeriphPhaALowrCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctPeriphPhaALowrCmd_Oper>
 *********************************************************************************************************************/

    Port_SetToAlternateMode(Port_PortGroup3_PortPin8);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctPeriphPhaALowrCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctPeriphPhaAUpprCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctPeriphPhaAUpprCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctPeriphPhaAUpprCmd_Oper is an operation of the C/S port 
 *              SetFctPeriphPhaAUpprCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctPeriphPhaAUpprCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctPeriphPhaAUpprCmd_Oper>
 *********************************************************************************************************************/

    Port_SetToAlternateMode(Port_PortGroup3_PortPin7);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctPeriphPhaAUpprCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctPeriphPhaBLowrCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctPeriphPhaBLowrCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctPeriphPhaBLowrCmd_Oper is an operation of the C/S port 
 *              SetFctPeriphPhaBLowrCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctPeriphPhaBLowrCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctPeriphPhaBLowrCmd_Oper>
 *********************************************************************************************************************/

    Port_SetToAlternateMode(Port_PortGroup3_PortPin10);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctPeriphPhaBLowrCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctPeriphPhaBUpprCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctPeriphPhaBUpprCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctPeriphPhaBUpprCmd_Oper is an operation of the C/S port 
 *              SetFctPeriphPhaBUpprCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctPeriphPhaBUpprCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctPeriphPhaBUpprCmd_Oper>
 *********************************************************************************************************************/

    Port_SetToAlternateMode(Port_PortGroup3_PortPin9);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctPeriphPhaBUpprCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctPeriphPhaCLowrCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctPeriphPhaCLowrCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctPeriphPhaCLowrCmd_Oper is an operation of the C/S port 
 *              SetFctPeriphPhaCLowrCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctPeriphPhaCLowrCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctPeriphPhaCLowrCmd_Oper>
 *********************************************************************************************************************/

    Port_SetToAlternateMode(Port_PortGroup3_PortPin13);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctPeriphPhaCLowrCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctPeriphPhaCUpprCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctPeriphPhaCUpprCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctPeriphPhaCUpprCmd_Oper is an operation of the C/S port 
 *              SetFctPeriphPhaCUpprCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctPeriphPhaCUpprCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctPeriphPhaCUpprCmd_Oper>
 *********************************************************************************************************************/

    Port_SetToAlternateMode(Port_PortGroup3_PortPin12);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctPeriphPhaCUpprCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioGateDrv0Rst ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioGateDrv0Rst_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioGateDrv0Rst_Oper is an operation of the C/S port 
 *              SetGpioGateDrv0Rst
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioGateDrv0Rst_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioGateDrv0Rst_Oper>
 *********************************************************************************************************************/

	Dio_WriteChannel(DioConf_DioChannel_GateDrv0Rst, PinSt_Arg);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioGateDrv0Rst_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioGateDrv1Rst ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioGateDrv1Rst_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioGateDrv1Rst_Oper is an operation of the C/S port 
 *              SetGpioGateDrv1Rst
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioGateDrv1Rst_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioGateDrv1Rst_Oper>
 *********************************************************************************************************************/

	Dio_WriteChannel(DioConf_DioChannel_GateDrv1Rst, PinSt_Arg);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioGateDrv1Rst_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioPhaALowrCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioPhaALowrCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioPhaALowrCmd_Oper is an operation of the C/S port 
 *              SetGpioPhaALowrCmd
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioPhaALowrCmd_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioPhaALowrCmd_Oper>
 *********************************************************************************************************************/

    Dio_WriteChannel(DioConf_DioChannel_PhaALowrCmd, PinSt_Arg);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioPhaALowrCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioPhaAUpprCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioPhaAUpprCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioPhaAUpprCmd_Oper is an operation of the C/S port 
 *              SetGpioPhaAUpprCmd
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioPhaAUpprCmd_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioPhaAUpprCmd_Oper>
 *********************************************************************************************************************/

    Dio_WriteChannel(DioConf_DioChannel_PhaAUpprCmd, PinSt_Arg);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioPhaAUpprCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioPhaBLowrCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioPhaBLowrCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioPhaBLowrCmd_Oper is an operation of the C/S port 
 *              SetGpioPhaBLowrCmd
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioPhaBLowrCmd_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioPhaBLowrCmd_Oper>
 *********************************************************************************************************************/

    Dio_WriteChannel(DioConf_DioChannel_PhaBLowrCmd, PinSt_Arg);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioPhaBLowrCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioPhaBUpprCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioPhaBUpprCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioPhaBUpprCmd_Oper is an operation of the C/S port 
 *              SetGpioPhaBUpprCmd
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioPhaBUpprCmd_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioPhaBUpprCmd_Oper>
 *********************************************************************************************************************/

    Dio_WriteChannel(DioConf_DioChannel_PhaBUpprCmd, PinSt_Arg);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioPhaBUpprCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioPhaCLowrCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioPhaCLowrCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioPhaCLowrCmd_Oper is an operation of the C/S port 
 *              SetGpioPhaCLowrCmd
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioPhaCLowrCmd_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioPhaCLowrCmd_Oper>
 *********************************************************************************************************************/

    Dio_WriteChannel(DioConf_DioChannel_PhaCLowrCmd, PinSt_Arg);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioPhaCLowrCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioPhaCUpprCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioPhaCUpprCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioPhaCUpprCmd_Oper is an operation of the C/S port 
 *              SetGpioPhaCUpprCmd
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioPhaCUpprCmd_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioPhaCUpprCmd_Oper>
 *********************************************************************************************************************/

    Dio_WriteChannel(DioConf_DioChannel_PhaCUpprCmd, PinSt_Arg);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioPhaCUpprCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioPwrTurnOffCtrl ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioPwrTurnOffCtrl_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioPwrTurnOffCtrl_Oper is an operation of the C/S port 
 *              SetGpioPwrTurnOffCtrl
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioPwrTurnOffCtrl_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioPwrTurnOffCtrl_Oper>
 *********************************************************************************************************************/

	Dio_WriteChannel(DioConf_DioChannel_PwrTurnOffCtrl, PinSt_Arg);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioPwrTurnOffCtrl_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioSysFlt2A ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioSysFlt2A_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioSysFlt2A_Oper is an operation of the C/S port 
 *              SetGpioSysFlt2A
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioSysFlt2A_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioSysFlt2A_Oper>
 *********************************************************************************************************************/
	
	Dio_WriteChannel(DioConf_DioChannel_SysFlt2A, PinSt_Arg);
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioSysFlt2A_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioSysFlt2B ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioSysFlt2B_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioSysFlt2B_Oper is an operation of the C/S port 
 *              SetGpioSysFlt2B
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioSysFlt2B_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioSysFlt2B_Oper>
 *********************************************************************************************************************/

    Dio_WriteChannel(DioConf_DioChannel_SysFlt2B, PinSt_Arg);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioSysFlt2B_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioTmplMonrWdg ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioTmplMonrWdg_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioTmplMonrWdg_Oper is an operation of the C/S port 
 *              SetGpioTmplMonrWdg
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioTmplMonrWdg_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioTmplMonrWdg_Oper>
 *********************************************************************************************************************/

    Dio_WriteChannel(DioConf_DioChannel_TmplMonrWdg, PinSt_Arg);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioTmplMonrWdg_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctPrphlHwTq0 ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctPrphlHwTq0_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctPrphlHwTq0_Oper is an operation of the C/S port 
 *              SetFctPrphlHwTq0
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctPrphlHwTq0_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctPrphlHwTq0_Oper>
 *********************************************************************************************************************/

	Port_SetPinMode(Port_PortGroup5_PortPin5, APP_ALT1_OUT);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctPrphlHwTq0_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctPrphlHwTq1 ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctPrphlHwTq1_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctPrphlHwTq1_Oper is an operation of the C/S port 
 *              SetFctPrphlHwTq1
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctPrphlHwTq1_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctPrphlHwTq1_Oper>
 *********************************************************************************************************************/

	Port_SetPinMode(Port_PortGroup5_PortPin8, APP_ALT1_OUT);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctPrphlHwTq1_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctPrphlHwTq2 ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctPrphlHwTq2_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctPrphlHwTq2_Oper is an operation of the C/S port 
 *              SetFctPrphlHwTq2
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctPrphlHwTq2_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctPrphlHwTq2_Oper>
 *********************************************************************************************************************/

	Port_SetPinMode(Port_PortGroup5_PortPin11, APP_ALT2_OUT);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctPrphlHwTq2_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctPrphlHwTq3 ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctPrphlHwTq3_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctPrphlHwTq3_Oper is an operation of the C/S port 
 *              SetFctPrphlHwTq3
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctPrphlHwTq3_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctPrphlHwTq3_Oper>
 *********************************************************************************************************************/

	Port_SetPinMode(Port_PortGroup0_PortPin2, APP_ALT6_OUT);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctPrphlHwTq3_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctPrphlHwAg0 ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctPrphlHwAg0_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctPrphlHwAg0_Oper is an operation of the C/S port 
 *              SetFctPrphlHwAg0
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctPrphlHwAg0_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctPrphlHwAg0_Oper>
 *********************************************************************************************************************/

	Port_SetPinMode(Port_PortGroup0_PortPin1, APP_ALT2_OUT);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctPrphlHwAg0_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctPrphlHwAg1 ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctPrphlHwAg1_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctPrphlHwAg1_Oper is an operation of the C/S port 
 *              SetFctPrphlHwAg1
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctPrphlHwAg1_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctPrphlHwAg1_Oper>
 *********************************************************************************************************************/

	Port_SetPinMode(Port_PortGroup5_PortPin12, APP_ALT2_OUT);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctPrphlHwAg1_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */



/**********************************************************************************************************************
 *  SENDER/RECEIVER PORTS
 **********************************************************************************************************************/


/**********************************************************************************************************************
 *  RUNNABLES
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  IoHwAb_Per1
 **********************************************************************************************************************/
/*! \brief      The method Per1 is a user defined runnable entity function that will be called
 *              every 100 msec by the RTE.
 *  \retval     void
 **********************************************************************************************************************/
FUNC(void, IOHWAB_APPL_CODE) IoHwAb_Per1(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK Per1>
 *********************************************************************************************************************/

	/* Runnable intentionally empty.  Runnable is only present to allow mapping of IoHwAb component to a specific application */
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return;
} /* IoHwAb_Per1() */ 



/**********************************************************************************************************************
 *  SCHEDULABLES
 **********************************************************************************************************************/



/* Hint: IoHwAb_GetVersionInfo() has been removed from the code. Use the configuration switch 'IoHwAbVersionInfoApi'
   to enable it. */



/* Section for deleted/unregonized user blocks: */
#if 0
#endif


#define IOHWAB_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/**********************************************************************************************************************
 *  END OF FILE: IoHwAb_30.c
 **********************************************************************************************************************/
