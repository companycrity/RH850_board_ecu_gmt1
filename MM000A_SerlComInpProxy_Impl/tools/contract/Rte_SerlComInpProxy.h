/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2014 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_SerlComInpProxy.h
 *     SW-C Type:  SerlComInpProxy
 *  Generated at:  Mon Jan  9 16:54:13 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <SerlComInpProxy> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_SERLCOMINPPROXY_H
# define _RTE_SERLCOMINPPROXY_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# define RTE_PTR2ARRAYBASETYPE_PASSING

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_SerlComInpProxy_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_SerlComInpProxy
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_SerlComInpProxy, RTE_CONST, RTE_CONST) Rte_Inst_SerlComInpProxy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_SerlComInpProxy, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AbsActvProtdProtnValRaw_Val (0U)
# define Rte_InitValue_AbsActvProtdRaw_Val (0U)
# define Rte_InitValue_AbsActvProtdRollgCntrRaw_Val (0U)
# define Rte_InitValue_AbsActvRaw_Val (0U)
# define Rte_InitValue_AbsFaildRaw_Val (0U)
# define Rte_InitValue_BackUpPwrModMstVirtDevAuthyRaw_Val (0U)
# define Rte_InitValue_BusOffChassisExp_Logl (FALSE)
# define Rte_InitValue_BusOffHiSpd_Logl (FALSE)
# define Rte_InitValue_EngOilTRaw_Val (0U)
# define Rte_InitValue_EngOilVldRaw_Val (0U)
# define Rte_InitValue_EngRunActvRaw_Val (0U)
# define Rte_InitValue_EngSpdRaw_Val (0U)
# define Rte_InitValue_EngSpdStsRaw_Val (0U)
# define Rte_InitValue_LeWhlDstPlsCntrRaw_Val (0U)
# define Rte_InitValue_LeWhlDstTiStampRaw_Val (0U)
# define Rte_InitValue_LeWhlDstVldRaw_Val (0U)
# define Rte_InitValue_LeWhlRotlStsRstRaw_Val (0U)
# define Rte_InitValue_LeWhlSeqNrRaw_Val (0U)
# define Rte_InitValue_LkaCmdProtnValRaw_Val (0U)
# define Rte_InitValue_LkaCmdRollgCntrRaw_Val (0U)
# define Rte_InitValue_LkaCmdTqReqActvRaw_Val (0U)
# define Rte_InitValue_LkaCmdTqValRaw_Val (0U)
# define Rte_InitValue_LstRxnTiMsg0C5_Val (0U)
# define Rte_InitValue_LstRxnTiMsg0C9_Val (0U)
# define Rte_InitValue_LstRxnTiMsg17D_Val (0U)
# define Rte_InitValue_LstRxnTiMsg180BusChassisExp_Val (0U)
# define Rte_InitValue_LstRxnTiMsg180BusHiSpd_Val (0U)
# define Rte_InitValue_LstRxnTiMsg182_Val (0U)
# define Rte_InitValue_LstRxnTiMsg1E9_Val (0U)
# define Rte_InitValue_LstRxnTiMsg1F1_Val (0U)
# define Rte_InitValue_LstRxnTiMsg1F5_Val (0U)
# define Rte_InitValue_LstRxnTiMsg214_Val (0U)
# define Rte_InitValue_LstRxnTiMsg232_Val (0U)
# define Rte_InitValue_LstRxnTiMsg337BusChassisExp_Val (0U)
# define Rte_InitValue_LstRxnTiMsg348BusChassisExp_Val (0U)
# define Rte_InitValue_LstRxnTiMsg348BusHiSpd_Val (0U)
# define Rte_InitValue_LstRxnTiMsg34ABusChassisExp_Val (0U)
# define Rte_InitValue_LstRxnTiMsg34ABusHiSpd_Val (0U)
# define Rte_InitValue_LstRxnTiMsg3F1_Val (0U)
# define Rte_InitValue_LstRxnTiMsg4D1_Val (0U)
# define Rte_InitValue_LstRxnTiMsg500BusHiSpd_Val (0U)
# define Rte_InitValue_OutdAirTCorrdValMaskRaw_Val (0U)
# define Rte_InitValue_OutdAirTCorrdValRaw_Val (0U)
# define Rte_InitValue_OutdAirTCorrdValVldRaw_Val (0U)
# define Rte_InitValue_PtCrkActvRaw_Val (0U)
# define Rte_InitValue_RdntVehStabyEnhmtSysActvRaw_Val (0U)
# define Rte_InitValue_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val (0U)
# define Rte_InitValue_RiWhlDstPlsCntrRaw_Val (0U)
# define Rte_InitValue_RiWhlDstTiStampRaw_Val (0U)
# define Rte_InitValue_RiWhlDstVldRaw_Val (0U)
# define Rte_InitValue_RiWhlRotlStsRstRaw_Val (0U)
# define Rte_InitValue_RiWhlSeqNrRaw_Val (0U)
# define Rte_InitValue_SerlComDi_Logl (FALSE)
# define Rte_InitValue_ShiftLvrPosnRaw_Val (0U)
# define Rte_InitValue_ShiftLvrPosnVldRaw_Val (0U)
# define Rte_InitValue_SteerSysPrfmncModReqRaw_Val (0U)
# define Rte_InitValue_SteerWhlAgReqActvRaw_Val (0U)
# define Rte_InitValue_SteerWhlAgReqActvVldRaw_Val (0U)
# define Rte_InitValue_SteerWhlAgReqProtnValRaw_Val (0U)
# define Rte_InitValue_SteerWhlAgReqRollgCntrRaw_Val (0U)
# define Rte_InitValue_SteerWhlAgReqTarAgRaw_Val (0U)
# define Rte_InitValue_SteerWhlFbReqActvProtnValRaw_Val (0U)
# define Rte_InitValue_SteerWhlFbReqActvRaw_Val (0U)
# define Rte_InitValue_SteerWhlFbReqActvRollgCntrRaw_Val (0U)
# define Rte_InitValue_SysBackUpPwrModEnaRaw_Val (0U)
# define Rte_InitValue_SysBackUpPwrModRaw_Val (0U)
# define Rte_InitValue_SysPwrModRaw_Val (0U)
# define Rte_InitValue_TqOvrlAlvRollgCntrRaw_Val (0U)
# define Rte_InitValue_TqOvrlCmdChksRaw_Val (0U)
# define Rte_InitValue_TqOvrlDeltaTqCmdActvRaw_Val (0U)
# define Rte_InitValue_TqOvrlDeltaTqCmdValRaw_Val (0U)
# define Rte_InitValue_TracCtrlSysActvRaw_Val (0U)
# define Rte_InitValue_TracCtrlSysEnaRaw_Val (0U)
# define Rte_InitValue_VehDynCtrlSysStRaw_Val (0U)
# define Rte_InitValue_VehDynOverUnderSteerVldRaw_Val (0U)
# define Rte_InitValue_VehDynYawRateRaw_Val (0U)
# define Rte_InitValue_VehDynYawRateVldRaw_Val (0U)
# define Rte_InitValue_VehStabyEnhmtActvRaw_Val (0U)
# define Rte_InitValue_VehStabyEnhmtLatARaw_Val (0U)
# define Rte_InitValue_VehStabyEnhmtLatAVldRaw_Val (0U)
# define Rte_InitValue_VehStabyEnhmtLgtALoReslRaw_Val (0U)
# define Rte_InitValue_VehStabyEnhmtLgtALoReslVldRaw_Val (0U)
# define Rte_InitValue_VehStabyEnhmtStsRaw_Val (0U)
# define Rte_InitValue_WhlGndVelLeDrvnRawBusChassisExp_Val (0U)
# define Rte_InitValue_WhlGndVelLeDrvnRawBusHiSpd_Val (0U)
# define Rte_InitValue_WhlGndVelLeDrvnVldRawBusChassisExp_Val (0U)
# define Rte_InitValue_WhlGndVelLeDrvnVldRawBusHiSpd_Val (0U)
# define Rte_InitValue_WhlGndVelLeNonDrvnRawBusChassisExp_Val (0U)
# define Rte_InitValue_WhlGndVelLeNonDrvnRawBusHiSpd_Val (0U)
# define Rte_InitValue_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val (0U)
# define Rte_InitValue_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val (0U)
# define Rte_InitValue_WhlGndVelRiDrvnRawBusChassisExp_Val (0U)
# define Rte_InitValue_WhlGndVelRiDrvnRawBusHiSpd_Val (0U)
# define Rte_InitValue_WhlGndVelRiDrvnVldRawBusChassisExp_Val (0U)
# define Rte_InitValue_WhlGndVelRiDrvnVldRawBusHiSpd_Val (0U)
# define Rte_InitValue_WhlGndVelRiNonDrvnRawBusChassisExp_Val (0U)
# define Rte_InitValue_WhlGndVelRiNonDrvnRawBusHiSpd_Val (0U)
# define Rte_InitValue_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val (0U)
# define Rte_InitValue_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val (0U)
# define Rte_InitValue_WhlPlsPerRevRaw_Val (0U)
# define Rte_InitValue_WhlRotlStsTiStampReslRaw_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SerlComInpProxy_SerlComDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_SERLCOMINPPROXY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_AbsActvProtdProtnValRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_AbsActvProtdRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_AbsActvProtdRollgCntrRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_AbsActvRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_AbsFaildRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_BackUpPwrModMstVirtDevAuthyRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_BusOffChassisExp_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_BusOffHiSpd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_EngOilTRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_EngOilVldRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_EngRunActvRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_EngSpdRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_EngSpdStsRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LeWhlDstPlsCntrRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LeWhlDstTiStampRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LeWhlDstVldRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LeWhlRotlStsRstRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LeWhlSeqNrRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LkaCmdProtnValRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LkaCmdRollgCntrRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LkaCmdTqReqActvRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LkaCmdTqValRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LstRxnTiMsg0C5_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LstRxnTiMsg0C9_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LstRxnTiMsg17D_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LstRxnTiMsg180BusChassisExp_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LstRxnTiMsg180BusHiSpd_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LstRxnTiMsg182_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LstRxnTiMsg1E9_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LstRxnTiMsg1F1_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LstRxnTiMsg1F5_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LstRxnTiMsg214_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LstRxnTiMsg232_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LstRxnTiMsg337BusChassisExp_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LstRxnTiMsg348BusChassisExp_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LstRxnTiMsg348BusHiSpd_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LstRxnTiMsg34ABusChassisExp_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LstRxnTiMsg34ABusHiSpd_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LstRxnTiMsg3F1_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LstRxnTiMsg4D1_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_LstRxnTiMsg500BusHiSpd_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_OutdAirTCorrdValMaskRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_OutdAirTCorrdValRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_OutdAirTCorrdValVldRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_PtCrkActvRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_RdntVehStabyEnhmtSysActvRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_RiWhlDstPlsCntrRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_RiWhlDstTiStampRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_RiWhlDstVldRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_RiWhlRotlStsRstRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_RiWhlSeqNrRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_ShiftLvrPosnRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_ShiftLvrPosnVldRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_SteerSysPrfmncModReqRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_SteerWhlAgReqActvRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_SteerWhlAgReqActvVldRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_SteerWhlAgReqProtnValRaw_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_SteerWhlAgReqRollgCntrRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_SteerWhlAgReqTarAgRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_SteerWhlFbReqActvProtnValRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_SteerWhlFbReqActvRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_SteerWhlFbReqActvRollgCntrRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_SysBackUpPwrModEnaRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_SysBackUpPwrModRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_SysPwrModRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_TqOvrlAlvRollgCntrRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_TqOvrlCmdChksRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_TqOvrlDeltaTqCmdActvRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_TqOvrlDeltaTqCmdValRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_TracCtrlSysActvRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_TracCtrlSysEnaRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_VehDynCtrlSysStRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_VehDynOverUnderSteerVldRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_VehDynYawRateRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_VehDynYawRateVldRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_VehStabyEnhmtActvRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_VehStabyEnhmtLatARaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_VehStabyEnhmtLatAVldRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_VehStabyEnhmtLgtALoReslRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_VehStabyEnhmtLgtALoReslVldRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_VehStabyEnhmtStsRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_WhlGndVelLeDrvnRawBusChassisExp_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_WhlGndVelLeDrvnRawBusHiSpd_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_WhlGndVelLeDrvnVldRawBusChassisExp_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_WhlGndVelLeDrvnVldRawBusHiSpd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_WhlGndVelLeNonDrvnRawBusChassisExp_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_WhlGndVelLeNonDrvnRawBusHiSpd_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_WhlGndVelRiDrvnRawBusChassisExp_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_WhlGndVelRiDrvnRawBusHiSpd_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_WhlGndVelRiDrvnVldRawBusChassisExp_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_WhlGndVelRiDrvnVldRawBusHiSpd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_WhlGndVelRiNonDrvnRawBusChassisExp_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_WhlGndVelRiNonDrvnRawBusHiSpd_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_WhlPlsPerRevRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SerlComInpProxy_WhlRotlStsTiStampReslRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SerlComInpProxy_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_SERLCOMINPPROXY_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_SerlComDi_Logl Rte_Read_SerlComInpProxy_SerlComDi_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_AbsActvProtdProtnValRaw_Val Rte_Write_SerlComInpProxy_AbsActvProtdProtnValRaw_Val
# define Rte_Write_AbsActvProtdRaw_Val Rte_Write_SerlComInpProxy_AbsActvProtdRaw_Val
# define Rte_Write_AbsActvProtdRollgCntrRaw_Val Rte_Write_SerlComInpProxy_AbsActvProtdRollgCntrRaw_Val
# define Rte_Write_AbsActvRaw_Val Rte_Write_SerlComInpProxy_AbsActvRaw_Val
# define Rte_Write_AbsFaildRaw_Val Rte_Write_SerlComInpProxy_AbsFaildRaw_Val
# define Rte_Write_BackUpPwrModMstVirtDevAuthyRaw_Val Rte_Write_SerlComInpProxy_BackUpPwrModMstVirtDevAuthyRaw_Val
# define Rte_Write_BusOffChassisExp_Logl Rte_Write_SerlComInpProxy_BusOffChassisExp_Logl
# define Rte_Write_BusOffHiSpd_Logl Rte_Write_SerlComInpProxy_BusOffHiSpd_Logl
# define Rte_Write_EngOilTRaw_Val Rte_Write_SerlComInpProxy_EngOilTRaw_Val
# define Rte_Write_EngOilVldRaw_Val Rte_Write_SerlComInpProxy_EngOilVldRaw_Val
# define Rte_Write_EngRunActvRaw_Val Rte_Write_SerlComInpProxy_EngRunActvRaw_Val
# define Rte_Write_EngSpdRaw_Val Rte_Write_SerlComInpProxy_EngSpdRaw_Val
# define Rte_Write_EngSpdStsRaw_Val Rte_Write_SerlComInpProxy_EngSpdStsRaw_Val
# define Rte_Write_LeWhlDstPlsCntrRaw_Val Rte_Write_SerlComInpProxy_LeWhlDstPlsCntrRaw_Val
# define Rte_Write_LeWhlDstTiStampRaw_Val Rte_Write_SerlComInpProxy_LeWhlDstTiStampRaw_Val
# define Rte_Write_LeWhlDstVldRaw_Val Rte_Write_SerlComInpProxy_LeWhlDstVldRaw_Val
# define Rte_Write_LeWhlRotlStsRstRaw_Val Rte_Write_SerlComInpProxy_LeWhlRotlStsRstRaw_Val
# define Rte_Write_LeWhlSeqNrRaw_Val Rte_Write_SerlComInpProxy_LeWhlSeqNrRaw_Val
# define Rte_Write_LkaCmdProtnValRaw_Val Rte_Write_SerlComInpProxy_LkaCmdProtnValRaw_Val
# define Rte_Write_LkaCmdRollgCntrRaw_Val Rte_Write_SerlComInpProxy_LkaCmdRollgCntrRaw_Val
# define Rte_Write_LkaCmdTqReqActvRaw_Val Rte_Write_SerlComInpProxy_LkaCmdTqReqActvRaw_Val
# define Rte_Write_LkaCmdTqValRaw_Val Rte_Write_SerlComInpProxy_LkaCmdTqValRaw_Val
# define Rte_Write_LstRxnTiMsg0C5_Val Rte_Write_SerlComInpProxy_LstRxnTiMsg0C5_Val
# define Rte_Write_LstRxnTiMsg0C9_Val Rte_Write_SerlComInpProxy_LstRxnTiMsg0C9_Val
# define Rte_Write_LstRxnTiMsg17D_Val Rte_Write_SerlComInpProxy_LstRxnTiMsg17D_Val
# define Rte_Write_LstRxnTiMsg180BusChassisExp_Val Rte_Write_SerlComInpProxy_LstRxnTiMsg180BusChassisExp_Val
# define Rte_Write_LstRxnTiMsg180BusHiSpd_Val Rte_Write_SerlComInpProxy_LstRxnTiMsg180BusHiSpd_Val
# define Rte_Write_LstRxnTiMsg182_Val Rte_Write_SerlComInpProxy_LstRxnTiMsg182_Val
# define Rte_Write_LstRxnTiMsg1E9_Val Rte_Write_SerlComInpProxy_LstRxnTiMsg1E9_Val
# define Rte_Write_LstRxnTiMsg1F1_Val Rte_Write_SerlComInpProxy_LstRxnTiMsg1F1_Val
# define Rte_Write_LstRxnTiMsg1F5_Val Rte_Write_SerlComInpProxy_LstRxnTiMsg1F5_Val
# define Rte_Write_LstRxnTiMsg214_Val Rte_Write_SerlComInpProxy_LstRxnTiMsg214_Val
# define Rte_Write_LstRxnTiMsg232_Val Rte_Write_SerlComInpProxy_LstRxnTiMsg232_Val
# define Rte_Write_LstRxnTiMsg337BusChassisExp_Val Rte_Write_SerlComInpProxy_LstRxnTiMsg337BusChassisExp_Val
# define Rte_Write_LstRxnTiMsg348BusChassisExp_Val Rte_Write_SerlComInpProxy_LstRxnTiMsg348BusChassisExp_Val
# define Rte_Write_LstRxnTiMsg348BusHiSpd_Val Rte_Write_SerlComInpProxy_LstRxnTiMsg348BusHiSpd_Val
# define Rte_Write_LstRxnTiMsg34ABusChassisExp_Val Rte_Write_SerlComInpProxy_LstRxnTiMsg34ABusChassisExp_Val
# define Rte_Write_LstRxnTiMsg34ABusHiSpd_Val Rte_Write_SerlComInpProxy_LstRxnTiMsg34ABusHiSpd_Val
# define Rte_Write_LstRxnTiMsg3F1_Val Rte_Write_SerlComInpProxy_LstRxnTiMsg3F1_Val
# define Rte_Write_LstRxnTiMsg4D1_Val Rte_Write_SerlComInpProxy_LstRxnTiMsg4D1_Val
# define Rte_Write_LstRxnTiMsg500BusHiSpd_Val Rte_Write_SerlComInpProxy_LstRxnTiMsg500BusHiSpd_Val
# define Rte_Write_OutdAirTCorrdValMaskRaw_Val Rte_Write_SerlComInpProxy_OutdAirTCorrdValMaskRaw_Val
# define Rte_Write_OutdAirTCorrdValRaw_Val Rte_Write_SerlComInpProxy_OutdAirTCorrdValRaw_Val
# define Rte_Write_OutdAirTCorrdValVldRaw_Val Rte_Write_SerlComInpProxy_OutdAirTCorrdValVldRaw_Val
# define Rte_Write_PtCrkActvRaw_Val Rte_Write_SerlComInpProxy_PtCrkActvRaw_Val
# define Rte_Write_RdntVehStabyEnhmtSysActvRaw_Val Rte_Write_SerlComInpProxy_RdntVehStabyEnhmtSysActvRaw_Val
# define Rte_Write_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val Rte_Write_SerlComInpProxy_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val
# define Rte_Write_RiWhlDstPlsCntrRaw_Val Rte_Write_SerlComInpProxy_RiWhlDstPlsCntrRaw_Val
# define Rte_Write_RiWhlDstTiStampRaw_Val Rte_Write_SerlComInpProxy_RiWhlDstTiStampRaw_Val
# define Rte_Write_RiWhlDstVldRaw_Val Rte_Write_SerlComInpProxy_RiWhlDstVldRaw_Val
# define Rte_Write_RiWhlRotlStsRstRaw_Val Rte_Write_SerlComInpProxy_RiWhlRotlStsRstRaw_Val
# define Rte_Write_RiWhlSeqNrRaw_Val Rte_Write_SerlComInpProxy_RiWhlSeqNrRaw_Val
# define Rte_Write_ShiftLvrPosnRaw_Val Rte_Write_SerlComInpProxy_ShiftLvrPosnRaw_Val
# define Rte_Write_ShiftLvrPosnVldRaw_Val Rte_Write_SerlComInpProxy_ShiftLvrPosnVldRaw_Val
# define Rte_Write_SteerSysPrfmncModReqRaw_Val Rte_Write_SerlComInpProxy_SteerSysPrfmncModReqRaw_Val
# define Rte_Write_SteerWhlAgReqActvRaw_Val Rte_Write_SerlComInpProxy_SteerWhlAgReqActvRaw_Val
# define Rte_Write_SteerWhlAgReqActvVldRaw_Val Rte_Write_SerlComInpProxy_SteerWhlAgReqActvVldRaw_Val
# define Rte_Write_SteerWhlAgReqProtnValRaw_Val Rte_Write_SerlComInpProxy_SteerWhlAgReqProtnValRaw_Val
# define Rte_Write_SteerWhlAgReqRollgCntrRaw_Val Rte_Write_SerlComInpProxy_SteerWhlAgReqRollgCntrRaw_Val
# define Rte_Write_SteerWhlAgReqTarAgRaw_Val Rte_Write_SerlComInpProxy_SteerWhlAgReqTarAgRaw_Val
# define Rte_Write_SteerWhlFbReqActvProtnValRaw_Val Rte_Write_SerlComInpProxy_SteerWhlFbReqActvProtnValRaw_Val
# define Rte_Write_SteerWhlFbReqActvRaw_Val Rte_Write_SerlComInpProxy_SteerWhlFbReqActvRaw_Val
# define Rte_Write_SteerWhlFbReqActvRollgCntrRaw_Val Rte_Write_SerlComInpProxy_SteerWhlFbReqActvRollgCntrRaw_Val
# define Rte_Write_SysBackUpPwrModEnaRaw_Val Rte_Write_SerlComInpProxy_SysBackUpPwrModEnaRaw_Val
# define Rte_Write_SysBackUpPwrModRaw_Val Rte_Write_SerlComInpProxy_SysBackUpPwrModRaw_Val
# define Rte_Write_SysPwrModRaw_Val Rte_Write_SerlComInpProxy_SysPwrModRaw_Val
# define Rte_Write_TqOvrlAlvRollgCntrRaw_Val Rte_Write_SerlComInpProxy_TqOvrlAlvRollgCntrRaw_Val
# define Rte_Write_TqOvrlCmdChksRaw_Val Rte_Write_SerlComInpProxy_TqOvrlCmdChksRaw_Val
# define Rte_Write_TqOvrlDeltaTqCmdActvRaw_Val Rte_Write_SerlComInpProxy_TqOvrlDeltaTqCmdActvRaw_Val
# define Rte_Write_TqOvrlDeltaTqCmdValRaw_Val Rte_Write_SerlComInpProxy_TqOvrlDeltaTqCmdValRaw_Val
# define Rte_Write_TracCtrlSysActvRaw_Val Rte_Write_SerlComInpProxy_TracCtrlSysActvRaw_Val
# define Rte_Write_TracCtrlSysEnaRaw_Val Rte_Write_SerlComInpProxy_TracCtrlSysEnaRaw_Val
# define Rte_Write_VehDynCtrlSysStRaw_Val Rte_Write_SerlComInpProxy_VehDynCtrlSysStRaw_Val
# define Rte_Write_VehDynOverUnderSteerVldRaw_Val Rte_Write_SerlComInpProxy_VehDynOverUnderSteerVldRaw_Val
# define Rte_Write_VehDynYawRateRaw_Val Rte_Write_SerlComInpProxy_VehDynYawRateRaw_Val
# define Rte_Write_VehDynYawRateVldRaw_Val Rte_Write_SerlComInpProxy_VehDynYawRateVldRaw_Val
# define Rte_Write_VehStabyEnhmtActvRaw_Val Rte_Write_SerlComInpProxy_VehStabyEnhmtActvRaw_Val
# define Rte_Write_VehStabyEnhmtLatARaw_Val Rte_Write_SerlComInpProxy_VehStabyEnhmtLatARaw_Val
# define Rte_Write_VehStabyEnhmtLatAVldRaw_Val Rte_Write_SerlComInpProxy_VehStabyEnhmtLatAVldRaw_Val
# define Rte_Write_VehStabyEnhmtLgtALoReslRaw_Val Rte_Write_SerlComInpProxy_VehStabyEnhmtLgtALoReslRaw_Val
# define Rte_Write_VehStabyEnhmtLgtALoReslVldRaw_Val Rte_Write_SerlComInpProxy_VehStabyEnhmtLgtALoReslVldRaw_Val
# define Rte_Write_VehStabyEnhmtStsRaw_Val Rte_Write_SerlComInpProxy_VehStabyEnhmtStsRaw_Val
# define Rte_Write_WhlGndVelLeDrvnRawBusChassisExp_Val Rte_Write_SerlComInpProxy_WhlGndVelLeDrvnRawBusChassisExp_Val
# define Rte_Write_WhlGndVelLeDrvnRawBusHiSpd_Val Rte_Write_SerlComInpProxy_WhlGndVelLeDrvnRawBusHiSpd_Val
# define Rte_Write_WhlGndVelLeDrvnVldRawBusChassisExp_Val Rte_Write_SerlComInpProxy_WhlGndVelLeDrvnVldRawBusChassisExp_Val
# define Rte_Write_WhlGndVelLeDrvnVldRawBusHiSpd_Val Rte_Write_SerlComInpProxy_WhlGndVelLeDrvnVldRawBusHiSpd_Val
# define Rte_Write_WhlGndVelLeNonDrvnRawBusChassisExp_Val Rte_Write_SerlComInpProxy_WhlGndVelLeNonDrvnRawBusChassisExp_Val
# define Rte_Write_WhlGndVelLeNonDrvnRawBusHiSpd_Val Rte_Write_SerlComInpProxy_WhlGndVelLeNonDrvnRawBusHiSpd_Val
# define Rte_Write_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val Rte_Write_SerlComInpProxy_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val
# define Rte_Write_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val Rte_Write_SerlComInpProxy_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val
# define Rte_Write_WhlGndVelRiDrvnRawBusChassisExp_Val Rte_Write_SerlComInpProxy_WhlGndVelRiDrvnRawBusChassisExp_Val
# define Rte_Write_WhlGndVelRiDrvnRawBusHiSpd_Val Rte_Write_SerlComInpProxy_WhlGndVelRiDrvnRawBusHiSpd_Val
# define Rte_Write_WhlGndVelRiDrvnVldRawBusChassisExp_Val Rte_Write_SerlComInpProxy_WhlGndVelRiDrvnVldRawBusChassisExp_Val
# define Rte_Write_WhlGndVelRiDrvnVldRawBusHiSpd_Val Rte_Write_SerlComInpProxy_WhlGndVelRiDrvnVldRawBusHiSpd_Val
# define Rte_Write_WhlGndVelRiNonDrvnRawBusChassisExp_Val Rte_Write_SerlComInpProxy_WhlGndVelRiNonDrvnRawBusChassisExp_Val
# define Rte_Write_WhlGndVelRiNonDrvnRawBusHiSpd_Val Rte_Write_SerlComInpProxy_WhlGndVelRiNonDrvnRawBusHiSpd_Val
# define Rte_Write_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val Rte_Write_SerlComInpProxy_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val
# define Rte_Write_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val Rte_Write_SerlComInpProxy_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val
# define Rte_Write_WhlPlsPerRevRaw_Val Rte_Write_SerlComInpProxy_WhlPlsPerRevRaw_Val
# define Rte_Write_WhlRotlStsTiStampReslRaw_Val Rte_Write_SerlComInpProxy_WhlRotlStsTiStampReslRaw_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_SerlComInpProxy_GetRefTmr100MicroSec32bit_Oper




# define SerlComInpProxy_START_SEC_CODE
# include "SerlComInpProxy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: SerlComInpProxyGmLanIdRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SerlComInpProxyGmLanIdRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SerlComInpProxyGmLanIdRd_Oper(uint8 *GmLanId)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SerlComInpProxyGmLanIdRd_Oper SerlComInpProxyGmLanIdRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, SerlComInpProxy_CODE) SerlComInpProxyGmLanIdRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMINPPROXY_APPL_VAR) GmLanId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, SerlComInpProxy_CODE) SerlComInpProxyGmLanIdRd_Oper(P2VAR(Ary1D_u8_12, AUTOMATIC, RTE_SERLCOMINPPROXY_APPL_VAR) GmLanId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SerlComInpProxyInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SerlComInpProxyInit1 SerlComInpProxyInit1
FUNC(void, SerlComInpProxy_CODE) SerlComInpProxyInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SerlComInpProxyPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_SerlComDi_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AbsActvProtdProtnValRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_AbsActvProtdRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_AbsActvProtdRollgCntrRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_AbsActvRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_AbsFaildRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_BackUpPwrModMstVirtDevAuthyRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_BusOffChassisExp_Logl(boolean data)
 *   Std_ReturnType Rte_Write_BusOffHiSpd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_EngOilTRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_EngOilVldRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_EngRunActvRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_EngSpdRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_EngSpdStsRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LeWhlDstPlsCntrRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LeWhlDstTiStampRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LeWhlDstVldRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LeWhlRotlStsRstRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LeWhlSeqNrRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LkaCmdProtnValRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LkaCmdRollgCntrRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LkaCmdTqReqActvRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LkaCmdTqValRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg0C5_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg0C9_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg17D_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg180BusChassisExp_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg180BusHiSpd_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg182_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg1E9_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg1F1_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg1F5_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg214_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg232_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg337BusChassisExp_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg348BusChassisExp_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg348BusHiSpd_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg34ABusChassisExp_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg34ABusHiSpd_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg3F1_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg4D1_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LstRxnTiMsg500BusHiSpd_Val(uint32 data)
 *   Std_ReturnType Rte_Write_OutdAirTCorrdValMaskRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_OutdAirTCorrdValRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_OutdAirTCorrdValVldRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_PtCrkActvRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_RdntVehStabyEnhmtSysActvRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_RiWhlDstPlsCntrRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_RiWhlDstTiStampRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_RiWhlDstVldRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_RiWhlRotlStsRstRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_RiWhlSeqNrRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_ShiftLvrPosnRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_ShiftLvrPosnVldRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerSysPrfmncModReqRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgReqActvRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgReqActvVldRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgReqProtnValRaw_Val(uint32 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgReqRollgCntrRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlAgReqTarAgRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_SteerWhlFbReqActvProtnValRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlFbReqActvRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SteerWhlFbReqActvRollgCntrRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SysBackUpPwrModEnaRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SysBackUpPwrModRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SysPwrModRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TqOvrlAlvRollgCntrRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TqOvrlCmdChksRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_TqOvrlDeltaTqCmdActvRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TqOvrlDeltaTqCmdValRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_TracCtrlSysActvRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_TracCtrlSysEnaRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_VehDynCtrlSysStRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_VehDynOverUnderSteerVldRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_VehDynYawRateRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_VehDynYawRateVldRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_VehStabyEnhmtActvRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_VehStabyEnhmtLatARaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_VehStabyEnhmtLatAVldRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_VehStabyEnhmtLgtALoReslRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_VehStabyEnhmtLgtALoReslVldRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_VehStabyEnhmtStsRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeDrvnRawBusChassisExp_Val(uint16 data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeDrvnRawBusHiSpd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeDrvnVldRawBusChassisExp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeDrvnVldRawBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeNonDrvnRawBusChassisExp_Val(uint16 data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeNonDrvnRawBusHiSpd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiDrvnRawBusChassisExp_Val(uint16 data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiDrvnRawBusHiSpd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiDrvnVldRawBusChassisExp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiDrvnVldRawBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiNonDrvnRawBusChassisExp_Val(uint16 data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiNonDrvnRawBusHiSpd_Val(uint16 data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlPlsPerRevRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WhlRotlStsTiStampReslRaw_Val(uint16 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SerlComInpProxyPer1 SerlComInpProxyPer1
FUNC(void, SerlComInpProxy_CODE) SerlComInpProxyPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define SerlComInpProxy_STOP_SEC_CODE
# include "SerlComInpProxy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1484004533
#    error "The magic number of the generated file <C:/Hari/Work/SynergyProjects/EA4/MM000A_SerlComInpProxy_Impl/tools/contract/Rte_SerlComInpProxy.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1484004533
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_SERLCOMINPPROXY_H */
