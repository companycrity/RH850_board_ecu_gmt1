/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TSC_TunSelnMngt.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit read services */
Std_ReturnType TSC_TunSelnMngt_Rte_Read_DesIninIdx_Val(uint8 *data);
Std_ReturnType TSC_TunSelnMngt_Rte_Read_DesRtIdx_Val(uint8 *data);
Std_ReturnType TSC_TunSelnMngt_Rte_Read_DesRtIdx_Val(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_TunSelnMngt_Rte_Write_ActvIninIdx_Val(uint8 data);
Std_ReturnType TSC_TunSelnMngt_Rte_Write_ActvRtIdx_Val(uint8 data);
Std_ReturnType TSC_TunSelnMngt_Rte_Write_ActvGroup_Val(uint8 data);
Std_ReturnType TSC_TunSelnMngt_Rte_Write_ActvRtIdx_Val(uint8 data);
Std_ReturnType TSC_TunSelnMngt_Rte_Write_CalCopySts_Val(CalCopySts1 data);

/** Client server interfaces */
Std_ReturnType TSC_TunSelnMngt_Rte_Call_Calc32BitCrc_u32_Oper(uint32 *DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, uint32 *CalcCrcRes_Arg);
Std_ReturnType TSC_TunSelnMngt_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);
Std_ReturnType TSC_TunSelnMngt_Rte_Call_Calc32BitCrc_u32_Oper(uint32 *DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, uint32 *CalcCrcRes_Arg);
Std_ReturnType TSC_TunSelnMngt_Rte_Call_RtCalChgReq_Oper(void);
Std_ReturnType TSC_TunSelnMngt_Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg);

/** Exclusive Areas */
void TSC_TunSelnMngt_Rte_Enter_TunSelnMngtIntDataProtnExclsvArea(void);
void TSC_TunSelnMngt_Rte_Exit_TunSelnMngtIntDataProtnExclsvArea(void);

/** Per Instance Memories */
uint8 *TSC_TunSelnMngt_Rte_Pim_PrevActvIninIdx(void);
uint8 *TSC_TunSelnMngt_Rte_Pim_PrevActvRtIdx(void);
uint8 *TSC_TunSelnMngt_Rte_Pim_PrevRamPageAcs(void);
uint8 *TSC_TunSelnMngt_Rte_Pim_RamTblSwt(void);
OnlineCalStsRec1 *TSC_TunSelnMngt_Rte_Pim_OnlineCalSts(void);



