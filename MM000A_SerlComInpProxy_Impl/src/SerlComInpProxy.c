/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  SerlComInpProxy.c
 *     SW-C Type:  SerlComInpProxy
 *  Generated at:  Mon Jan  9 16:54:13 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <SerlComInpProxy>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SerlComInpProxy.c
* Module Description: Serial Communications Input Proxy
* Project           : Component Based Design
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         7 %
* %derived_by:      nz2654 %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 08/14/15  1        JWJ       Initial file creation                                                        EA4#1321
* 09/10/15  2        JWJ       Added GMLAN database revision server runnable                                EA4#
* 11/04/15  3        JWJ       Added bus off fault processing and outputs                                   EA4#
* 01/29/16  4        JWJ       Reordered macro reads to unconditionally copy data to RTE                    EA4#
* 05/17/16  5        JWJ       Moved Bus Off logic processing over to SerlComOutpProxy                      EA4#5525
* 01/09/17  7        HM        EA4#8917: Added logic to continuously increment the latest reception time
*                                        output, if serial communication is disabled                        EA4#9004
***********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_SerlComInpProxy.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "can_par.h"
#include "il_cfg.h"
#include "il_par.h"


static CONST(uint8, AUTOMATIC) SerlComInpProxyGmLanId[12u] = {
	2U, 3U, 0U, 19U, 19U, 126U, 3U, 3U, 0U, 19U, 19U, 126U
};

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Array Types:
 * ============
 * Ary1D_u8_12: Array with 12 element(s) of type uint8
 *
 *********************************************************************************************************************/


#define SerlComInpProxy_START_SEC_CODE
#include "SerlComInpProxy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

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

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, SerlComInpProxy_CODE) SerlComInpProxyGmLanIdRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_SERLCOMINPPROXY_APPL_VAR) GmLanId) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, SerlComInpProxy_CODE) SerlComInpProxyGmLanIdRd_Oper(P2VAR(Ary1D_u8_12, AUTOMATIC, RTE_SERLCOMINPPROXY_APPL_VAR) GmLanId) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SerlComInpProxyGmLanIdRd_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < 12U; Index_Cnt_T_u08 += 1U)
	{
		GmLanId[Index_Cnt_T_u08] = SerlComInpProxyGmLanId[Index_Cnt_T_u08];
	}


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SerlComInpProxyInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, SerlComInpProxy_CODE) SerlComInpProxyInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SerlComInpProxyInit1
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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

FUNC(void, SerlComInpProxy_CODE) SerlComInpProxyPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SerlComInpProxyPer1
 *********************************************************************************************************************/

	VAR(boolean, AUTOMATIC) SerlComDi_Cnt_T_logl;
	VAR(uint32, AUTOMATIC) TiStamp_100uS_T_u32;

	(void)Rte_Read_SerlComDi_Logl(&SerlComDi_Cnt_T_logl);
	(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(&TiStamp_100uS_T_u32);

	/* MM001A - Msg 0x0C5 HS - PPEI_NonDrivn_Whl_Rotationl_Stat */
	(void)CanRxFullCANObjTask(CanRxPPEI_NonDrivn_Whl_Rotationl_Stat_HW_CHANNEL, CanRxPPEI_NonDrivn_Whl_Rotationl_Stat_HW_OBJ);
	IlGetRxWhlRotStatLftNDrvn();
	IlGetRxWhlRotStatRghtNDrvn();
	(void)Rte_Write_LeWhlDstPlsCntrRaw_Val(IlGetRxWRSLNDWhlDistPCntr());
	(void)Rte_Write_LeWhlDstTiStampRaw_Val(IlGetRxWRSLNDWhlDistTstm());
	(void)Rte_Write_LeWhlDstVldRaw_Val(IlGetRxWRSLNDWhlDistVal());
	(void)Rte_Write_LeWhlRotlStsRstRaw_Val(IlGetRxWRSLNDWhlRotStRst());
	(void)Rte_Write_LeWhlSeqNrRaw_Val(IlGetRxWRSLNDSeqNum());
	(void)Rte_Write_RiWhlDstPlsCntrRaw_Val(IlGetRxWRSRNDWhlDistPCntr());
	(void)Rte_Write_RiWhlDstTiStampRaw_Val(IlGetRxWRSRNDWhlDistTstm());
	(void)Rte_Write_RiWhlDstVldRaw_Val(IlGetRxWRSRNDWhlDistVal());
	(void)Rte_Write_RiWhlRotlStsRstRaw_Val(IlGetRxWRSRNDWhlRotStRst());
	(void)Rte_Write_RiWhlSeqNrRaw_Val(IlGetRxWRSRNDSeqNum());
	if ((PPEI_NonDrivn_Whl_Rotationl_Stat_ind_b != 0U) || (TRUE == SerlComDi_Cnt_T_logl))
	{
		(void)Rte_Write_LstRxnTiMsg0C5_Val(TiStamp_100uS_T_u32);
		CanWriteSyncPPEI_NonDrivn_Whl_Rotationl_Stat_ind_b(0U);
	}

	/* MM002A - Msg 0x0C9 HS - PPEI_Engine_General_Status_1 */
	(void)CanRxFullCANObjTask(CanRxPPEI_Engine_General_Status_1_HW_CHANNEL, CanRxPPEI_Engine_General_Status_1_HW_OBJ);
	(void)Rte_Write_EngRunActvRaw_Val(IlGetRxEngRunAtv());
	(void)Rte_Write_EngSpdRaw_Val(IlGetRxEngSpd());
	(void)Rte_Write_EngSpdStsRaw_Val(IlGetRxEngSpdStat());
	(void)Rte_Write_PtCrkActvRaw_Val(IlGetRxPT_CrnkAct());
	if ((PPEI_Engine_General_Status_1_ind_b != 0U) || (TRUE == SerlComDi_Cnt_T_logl))
	{
		(void)Rte_Write_LstRxnTiMsg0C9_Val(TiStamp_100uS_T_u32);
		CanWriteSyncPPEI_Engine_General_Status_1_ind_b(0U);
	}

	/* MM004A - Msg 17D HS - Antilock_Brake_and_TC_Status_HS */
	(void)CanRxFullCANObjTask(CanRxAntilock_Brake_and_TC_Status_HS_HW_CHANNEL, CanRxAntilock_Brake_and_TC_Status_HS_HW_OBJ);
	(void)Rte_Write_VehStabyEnhmtStsRaw_Val(IlGetRxVehStabEnhmntStat_0());
	if ((Antilock_Brake_and_TC_Status_HS_ind_b != 0U) || (TRUE == SerlComDi_Cnt_T_logl))
	{
		(void)Rte_Write_LstRxnTiMsg17D_Val(TiStamp_100uS_T_u32);
		CanWriteSyncAntilock_Brake_and_TC_Status_HS_ind_b(0U);
	}

	/* MM005A - Msg 180 HS - LKA_Steering_Torque_Cmd_HS */
	(void)CanRxFullCANObjTask(CanRxLKA_Steering_Torque_Cmd_HS_HW_CHANNEL, CanRxLKA_Steering_Torque_Cmd_HS_HW_OBJ);
	IlGetRxLKATqOvrDltCmd();
	(void)Rte_Write_LkaCmdProtnValRaw_Val(IlGetRxLKATqOvrDltCmdPrtVl());
	(void)Rte_Write_LkaCmdRollgCntrRaw_Val(IlGetRxLKATqOvrDltCmdRC());
	(void)Rte_Write_LkaCmdTqReqActvRaw_Val(IlGetRxLKATODC_TrqRqAct());
	(void)Rte_Write_LkaCmdTqValRaw_Val(IlGetRxLKATODC_TrqVl());
	if ((LKA_Steering_Torque_Cmd_HS_ind_b != 0U) || (TRUE == SerlComDi_Cnt_T_logl))
	{
		(void)Rte_Write_LstRxnTiMsg180BusHiSpd_Val(TiStamp_100uS_T_u32);
		CanWriteSyncLKA_Steering_Torque_Cmd_HS_ind_b(0U);
	}

	/* MM006A - Msg 1E9 HS - PPEI_Chassis_General_Status_1 */
	(void)CanRxFullCANObjTask(CanRxPPEI_Chassis_General_Status_1_HW_CHANNEL, CanRxPPEI_Chassis_General_Status_1_HW_OBJ);
	IlGetRxVSELatAccGroup();
	IlGetRxBrkPdlDrvAppPrsDetcdGroup();
	IlGetRxVehDynYawRateGroup();
	IlGetRxVehDynOvrUndrStrGroup_0();
	(void)Rte_Write_AbsActvRaw_Val(IlGetRxABSAtv_0());
	(void)Rte_Write_AbsFaildRaw_Val(IlGetRxABSFld());
	(void)Rte_Write_TracCtrlSysActvRaw_Val(IlGetRxTCSysAtv());
	(void)Rte_Write_TracCtrlSysEnaRaw_Val(IlGetRxTCSysEnbld());
	(void)Rte_Write_VehDynCtrlSysStRaw_Val(IlGetRxVhDynCntlSysSt());
	(void)Rte_Write_VehDynYawRateRaw_Val(IlGetRxVehDynYawRate());
	(void)Rte_Write_VehDynYawRateVldRaw_Val(IlGetRxVehDynYawRateV());
	(void)Rte_Write_VehStabyEnhmtActvRaw_Val(IlGetRxVSEAct_0());
	(void)Rte_Write_VehStabyEnhmtLatARaw_Val(IlGetRxVSELatAcc());
	(void)Rte_Write_VehStabyEnhmtLatAVldRaw_Val(IlGetRxVSELatAccV());
	if ((PPEI_Chassis_General_Status_1_ind_b != 0U) || (TRUE == SerlComDi_Cnt_T_logl))
	{
		(void)Rte_Write_LstRxnTiMsg1E9_Val(TiStamp_100uS_T_u32);
		CanWriteSyncPPEI_Chassis_General_Status_1_ind_b(0U);
	}

	/* MM007A - Msg 0x1F1 HS - PPEI_Platform_General_Status */
	(void)CanRxFullCANObjTask(CanRxPPEI_Platform_General_Status_HW_CHANNEL, CanRxPPEI_Platform_General_Status_HW_OBJ);
	IlGetRxBkupPwrModeMstrGroup();
	(void)Rte_Write_SysPwrModRaw_Val(IlGetRxSysPwrMd());
	(void)Rte_Write_SysBackUpPwrModRaw_Val(IlGetRxSysBkUpPwrMd());
	(void)Rte_Write_SysBackUpPwrModEnaRaw_Val(IlGetRxSysBkupPwrMdEn());
	(void)Rte_Write_BackUpPwrModMstVirtDevAuthyRaw_Val(IlGetRxBkupPwrModeMstrVDA());
	if ((PPEI_Platform_General_Status_ind_b != 0U) || (TRUE == SerlComDi_Cnt_T_logl))
	{
		(void)Rte_Write_LstRxnTiMsg1F1_Val(TiStamp_100uS_T_u32);
		CanWriteSyncPPEI_Platform_General_Status_ind_b(0U);
	}

	/* MM008A - Msg 1F5 HS - PPEI_Trans_General_Status_2 */
	(void)CanRxFullCANObjTask(CanRxPPEI_Trans_General_Status_2_HW_CHANNEL, CanRxPPEI_Trans_General_Status_2_HW_OBJ);
	IlGetRxTrnsShftLvrPosGroup();
	IlGetRxTransEstGearGroup();
	(void)Rte_Write_ShiftLvrPosnRaw_Val(IlGetRxTrnsShftLvrPos());
	(void)Rte_Write_ShiftLvrPosnVldRaw_Val(IlGetRxTrnsShftLvrPosV());
	if ((PPEI_Trans_General_Status_2_ind_b != 0U) || (TRUE == SerlComDi_Cnt_T_logl))
	{
		(void)Rte_Write_LstRxnTiMsg1F5_Val(TiStamp_100uS_T_u32);
		CanWriteSyncPPEI_Trans_General_Status_2_ind_b(0U);
	}

	/* MM009A - Msg 214 HS - Brake_Pedal_Driver_Status_HS */
	(void)CanRxFullCANObjTask(CanRxBrake_Pedal_Driver_Status_HS_HW_CHANNEL, CanRxBrake_Pedal_Driver_Status_HS_HW_OBJ);
	(void)Rte_Write_AbsActvProtdProtnValRaw_Val(IlGetRxABSActvProtPVal());
	(void)Rte_Write_AbsActvProtdRaw_Val(IlGetRxABSActvProt());
	(void)Rte_Write_AbsActvProtdRollgCntrRaw_Val(IlGetRxABSActvProtARC());
	(void)Rte_Write_RdntVehStabyEnhmtSysActvRaw_Val(IlGetRxRedntVSEAct());
	(void)Rte_Write_RdntVehStabyEnhmtSysActvRollgCntrRaw_Val(IlGetRxRedntVSEActARC());
	if ((Brake_Pedal_Driver_Status_HS_ind_b != 0U) || (TRUE == SerlComDi_Cnt_T_logl))
	{
		(void)Rte_Write_LstRxnTiMsg214_Val(TiStamp_100uS_T_u32);
		CanWriteSyncBrake_Pedal_Driver_Status_HS_ind_b(0U);
	}

	/* MM010A - Msg 232 HS - Driving_Mode_Control_HS */
	(void)CanRxFullCANObjTask(CanRxDriving_Mode_Control_HS_HW_CHANNEL, CanRxDriving_Mode_Control_HS_HW_OBJ);
	(void)Rte_Write_SteerSysPrfmncModReqRaw_Val(IlGetRxStgSysPerfMdRq());
	if ((Driving_Mode_Control_HS_ind_b != 0U) || (TRUE == SerlComDi_Cnt_T_logl))
	{
		(void)Rte_Write_LstRxnTiMsg232_Val(TiStamp_100uS_T_u32);
		CanWriteSyncDriving_Mode_Control_HS_ind_b(0U);
	}

	/* MM011A - Msg 348 HS - Driven_Wheel_Grnd_Velocity_HS */
	(void)CanRxFullCANObjTask(CanRxDriven_Wheel_Grnd_Velocity_HS_HW_CHANNEL, CanRxDriven_Wheel_Grnd_Velocity_HS_HW_OBJ);
	IlGetRxWhlGrndVlctyLftDrvnGroup_0();
	IlGetRxWhlGrndVlctyRtDrvnGroup_0();
	(void)Rte_Write_WhlGndVelLeDrvnRawBusHiSpd_Val(IlGetRxWhlGrndVlctyLftDrvn_0());
	(void)Rte_Write_WhlGndVelLeDrvnVldRawBusHiSpd_Val(IlGetRxWhlGrndVlctyLftDrvnV_0());
	(void)Rte_Write_WhlGndVelRiDrvnRawBusHiSpd_Val(IlGetRxWhlGrndVlctyRtDrvn_0());
	(void)Rte_Write_WhlGndVelRiDrvnVldRawBusHiSpd_Val(IlGetRxWhlGrndVlctyRtDrvnV_0());
	if ((Driven_Wheel_Grnd_Velocity_HS_ind_b != 0U) || (TRUE == SerlComDi_Cnt_T_logl))
	{
		(void)Rte_Write_LstRxnTiMsg348BusHiSpd_Val(TiStamp_100uS_T_u32);
		CanWriteSyncDriven_Wheel_Grnd_Velocity_HS_ind_b(0U);
	}

	/* MM012A - Msg 34A HS - NonDriven_Wheel_Grnd_Velocity_HS */
	(void)CanRxFullCANObjTask(CanRxNonDriven_Wheel_Grnd_Velocity_HS_HW_CHANNEL, CanRxNonDriven_Wheel_Grnd_Velocity_HS_HW_OBJ);
	IlGetRxWhlGrndVlctyLftNnDrvnGroup_0();
	IlGetRxWhlGrndVlctyRtNnDrvnGroup_0();
	(void)Rte_Write_WhlGndVelLeNonDrvnRawBusHiSpd_Val(IlGetRxWhlGrndVlctyLftNnDrvn_0());
	(void)Rte_Write_WhlGndVelLeNonDrvnVldRawBusHiSpd_Val(IlGetRxWhlGrndVlctyLftNnDrvnV_0());
	(void)Rte_Write_WhlGndVelRiNonDrvnRawBusHiSpd_Val(IlGetRxWhlGrndVlctyRtNnDrvn_0());
	(void)Rte_Write_WhlGndVelRiNonDrvnVldRawBusHiSpd_Val(IlGetRxWhlGrndVlctyRtNnDrvnV_0());
	if ((NonDriven_Wheel_Grnd_Velocity_HS_ind_b != 0U) || (TRUE == SerlComDi_Cnt_T_logl))
	{
		(void)Rte_Write_LstRxnTiMsg34ABusHiSpd_Val(TiStamp_100uS_T_u32);
		CanWriteSyncNonDriven_Wheel_Grnd_Velocity_HS_ind_b(0U);
	}

	/* MM014A - Msg 3F1 HS - PPEI_Platform_Eng_Cntrl_Requests */
	(void)CanRxFullCANObjTask(CanRxPPEI_Platform_Eng_Cntrl_Requests_HW_CHANNEL, CanRxPPEI_Platform_Eng_Cntrl_Requests_HW_OBJ);
	IlGetRxOtsAirTmpCrValGroup();
	IlGetRxEngOffTmExtRngGroup();
	(void)Rte_Write_OutdAirTCorrdValRaw_Val(IlGetRxOtsAirTmpCrVal());
	(void)Rte_Write_OutdAirTCorrdValMaskRaw_Val(IlGetRxOtsAirTmpCrValMsk());
	(void)Rte_Write_OutdAirTCorrdValVldRaw_Val(IlGetRxOtsAirTmpCrValV());
	if ((PPEI_Platform_Eng_Cntrl_Requests_ind_b != 0U) || (TRUE == SerlComDi_Cnt_T_logl))
	{
		(void)Rte_Write_LstRxnTiMsg3F1_Val(TiStamp_100uS_T_u32);
		CanWriteSyncPPEI_Platform_Eng_Cntrl_Requests_ind_b(0U);
	}

	/* MM016A - Msg 500 HS - Wheel_Pulses_HS */
	(void)CanRxFullCANObjTask(CanRxWheel_Pulses_HS_HW_CHANNEL, CanRxWheel_Pulses_HS_HW_OBJ);
	(void)Rte_Write_WhlPlsPerRevRaw_Val(IlGetRxWhlPlsPerRevNonDrvn_0());
	(void)Rte_Write_WhlRotlStsTiStampReslRaw_Val(IlGetRxWhlRotStatTmstmpRes());
	if ((Wheel_Pulses_HS_ind_b != 0U) || (TRUE == SerlComDi_Cnt_T_logl))
	{
		(void)Rte_Write_LstRxnTiMsg500BusHiSpd_Val(TiStamp_100uS_T_u32);
		CanWriteSyncWheel_Pulses_HS_ind_b(0U);
	}

	/* MM017A - Msg 180 CE - Steering_Torque_Command_CE */
	(void)CanRxFullCANObjTask(CanRxSteering_Torque_Command_CE_HW_CHANNEL, CanRxSteering_Torque_Command_CE_HW_OBJ);
	(void)Rte_Write_TqOvrlAlvRollgCntrRaw_Val(IlGetRxTrqOvrlARC());
	(void)Rte_Write_TqOvrlCmdChksRaw_Val(IlGetRxTrqOvrlCmdChksm());
	(void)Rte_Write_TqOvrlDeltaTqCmdActvRaw_Val(IlGetRxTqOvrDltTqCmdAct());
	(void)Rte_Write_TqOvrlDeltaTqCmdValRaw_Val(IlGetRxTqOvrDltTqCmdVl());
	if ((Steering_Torque_Command_CE_ind_b != 0U) || (TRUE == SerlComDi_Cnt_T_logl))
	{
		(void)Rte_Write_LstRxnTiMsg180BusChassisExp_Val(TiStamp_100uS_T_u32);
		CanWriteSyncSteering_Torque_Command_CE_ind_b(0U);
	}

	/* MM018A - Msg 182 CE - Vehicle_Dynamics_ESC_Hyb_CE */
	(void)CanRxFullCANObjTask(CanRxVehicle_Dynamics_ESC_Hyb_CE_HW_CHANNEL, CanRxVehicle_Dynamics_ESC_Hyb_CE_HW_OBJ);
	IlGetRxVSELongAccLoResGroup();
	IlGetRxVehDynOvrUndrStrGroup_1();
	(void)Rte_Write_VehDynOverUnderSteerVldRaw_Val(IlGetRxVehDynOvrUndrStrV_0());
	(void)Rte_Write_VehStabyEnhmtLgtALoReslRaw_Val(IlGetRxVSELongAccLoRes());
	(void)Rte_Write_VehStabyEnhmtLgtALoReslVldRaw_Val(IlGetRxVSELongAccLoResV());
	if ((Vehicle_Dynamics_ESC_Hyb_CE_ind_b != 0U) || (TRUE == SerlComDi_Cnt_T_logl))
	{
		(void)Rte_Write_LstRxnTiMsg182_Val(TiStamp_100uS_T_u32);
		CanWriteSyncVehicle_Dynamics_ESC_Hyb_CE_ind_b(0U);
	}

	/* MM019A - Msg 337 CE - Park_Assist_Parallel_CE */
	(void)CanRxFullCANObjTask(CanRxPark_Assist_Parallel_CE_HW_CHANNEL, CanRxPark_Assist_Parallel_CE_HW_OBJ);
	IlGetRxStrWhlAngReq();
	(void)Rte_Write_SteerWhlAgReqActvRaw_Val(IlGetRxSWAR_ReqAct());
	(void)Rte_Write_SteerWhlAgReqActvVldRaw_Val(IlGetRxSWAR_ReqActV());
	(void)Rte_Write_SteerWhlAgReqProtnValRaw_Val(IlGetRxStrWhlAngReqPrtVal());
	(void)Rte_Write_SteerWhlAgReqRollgCntrRaw_Val(IlGetRxStrWhlAngReqARC());
	(void)Rte_Write_SteerWhlAgReqTarAgRaw_Val(IlGetRxSWAR_TrgtAng());
	(void)Rte_Write_SteerWhlFbReqActvProtnValRaw_Val(IlGetRxStrWhlTctlFdbkReqActProtVal());
	(void)Rte_Write_SteerWhlFbReqActvRaw_Val(IlGetRxStrWhlTctlFdbkReqAct());
	(void)Rte_Write_SteerWhlFbReqActvRollgCntrRaw_Val(IlGetRxStrWhlTctlFdbkReqActRC());
	if ((Park_Assist_Parallel_CE_ind_b != 0U) || (TRUE == SerlComDi_Cnt_T_logl))
	{
		(void)Rte_Write_LstRxnTiMsg337BusChassisExp_Val(TiStamp_100uS_T_u32);
		CanWriteSyncPark_Assist_Parallel_CE_ind_b(0U);
	}

	/* MM020A - Msg 348 CE - Driven_Wheel_Grnd_Velocity_CE */
	(void)CanRxFullCANObjTask(CanRxDriven_Wheel_Grnd_Velocity_CE_HW_CHANNEL, CanRxDriven_Wheel_Grnd_Velocity_CE_HW_OBJ);
	IlGetRxWhlGrndVlctyLftDrvnGroup_1();
	IlGetRxWhlGrndVlctyRtDrvnGroup_1();
	(void)Rte_Write_WhlGndVelLeDrvnRawBusChassisExp_Val(IlGetRxWhlGrndVlctyLftDrvn_1());
	(void)Rte_Write_WhlGndVelLeDrvnVldRawBusChassisExp_Val(IlGetRxWhlGrndVlctyLftDrvnV_1());
	(void)Rte_Write_WhlGndVelRiDrvnRawBusChassisExp_Val(IlGetRxWhlGrndVlctyRtDrvn_1());
	(void)Rte_Write_WhlGndVelRiDrvnVldRawBusChassisExp_Val(IlGetRxWhlGrndVlctyRtDrvnV_1());
	if ((Driven_Wheel_Grnd_Velocity_CE_ind_b != 0U) || (TRUE == SerlComDi_Cnt_T_logl))
	{
		(void)Rte_Write_LstRxnTiMsg348BusChassisExp_Val(TiStamp_100uS_T_u32);
		CanWriteSyncDriven_Wheel_Grnd_Velocity_CE_ind_b(0U);
	}

	/* MM021A - Msg 34A CE - NonDriven_Wheel_Grnd_Velocity_CE */
	(void)CanRxFullCANObjTask(CanRxNonDriven_Wheel_Grnd_Velocity_CE_HW_CHANNEL, CanRxNonDriven_Wheel_Grnd_Velocity_CE_HW_OBJ);
	IlGetRxWhlGrndVlctyLftNnDrvnGroup_1();
	IlGetRxWhlGrndVlctyRtNnDrvnGroup_1();
	(void)Rte_Write_WhlGndVelLeNonDrvnRawBusChassisExp_Val(IlGetRxWhlGrndVlctyLftNnDrvn_1());
	(void)Rte_Write_WhlGndVelLeNonDrvnVldRawBusChassisExp_Val(IlGetRxWhlGrndVlctyLftNnDrvnV_1());
	(void)Rte_Write_WhlGndVelRiNonDrvnRawBusChassisExp_Val(IlGetRxWhlGrndVlctyRtNnDrvn_1());
	(void)Rte_Write_WhlGndVelRiNonDrvnVldRawBusChassisExp_Val(IlGetRxWhlGrndVlctyRtNnDrvnV_1());
	if ((NonDriven_Wheel_Grnd_Velocity_CE_ind_b != 0U) || (TRUE == SerlComDi_Cnt_T_logl))
	{
		(void)Rte_Write_LstRxnTiMsg34ABusChassisExp_Val(TiStamp_100uS_T_u32);
		CanWriteSyncNonDriven_Wheel_Grnd_Velocity_CE_ind_b(0U);
	}

	/* MM022A - Msg 4D1 HS - PPEI_Engine_General_Status_5 */
	(void)CanRxFullCANObjTask(CanRxPPEI_Engine_General_Status_5_HW_CHANNEL, CanRxPPEI_Engine_General_Status_5_HW_OBJ);
	IlGetRxEngOilTmpGroup();
	(void)Rte_Write_EngOilTRaw_Val(IlGetRxEngOilTmp());
	(void)Rte_Write_EngOilVldRaw_Val(IlGetRxEngOilTmpV());
	if ((PPEI_Engine_General_Status_5_ind_b != 0U) || (TRUE == SerlComDi_Cnt_T_logl))
	{
		(void)Rte_Write_LstRxnTiMsg4D1_Val(TiStamp_100uS_T_u32);
		CanWriteSyncPPEI_Engine_General_Status_5_ind_b(0U);
	}


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define SerlComInpProxy_STOP_SEC_CODE
#include "SerlComInpProxy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
