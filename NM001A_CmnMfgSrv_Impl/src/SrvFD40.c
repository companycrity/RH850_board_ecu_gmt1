/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFD40.c
* Module Description: 0xFD40 - Manual Torque Command
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 06/10/15  1        JWJ       Initial file creation                                                        EA4#881
* 01/26/16  2        JWJ       Updates for newly generated function names                                   EA4#2518
***********************************************************************************************************************/

/* ================================================================================================================== */
/* Includes */
/* ------------------------------------------------------------------------------------------------------------------ */
#include "Rte_CmnMfgSrv.h"
#include "CmnMfgSrv.h"
#include "CmnMfgSrvTyp.h"
#include "MfgSrvCfg.h"
#include "CmnMfgSrvFct.h"


/* ================================================================================================================== */
/* Service Function Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFD40CtrlRtn
 * Description:  0xFD40: Manual Torque Command Return Control
 *          ID:  0xFD40
 *        Type:  0x2F (Control)
 *    Sub-Func:  0x00 (Return)
 *    Req. Len:  0 bytes
 *   Resp. Len:  4 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FD40ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD40CtrlRtn(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	(void)Rte_Call_SetManTqCmd_Oper(0.0f, FALSE);

	return RspCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  CmnMfgSrv_SrvFD40CtrlAdj
 * Description:  0xFD40: Manual Torque Command Set
 *          ID:  0xFD40
 *        Type:  0x2F (Control)
 *    Sub-Func:  0x03 (Adjust)
 *    Req. Len:  4 bytes
 *   Resp. Len:  4 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (CMNMFGSRV_FD40ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD40CtrlAdj(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(float32, AUTOMATIC) TqCmd_HwNm_T_f32;

	TqCmd_HwNm_T_f32 = CmnMfgSrvFct_SynthesizeFloat(&DataBuf_Uls_T_u08[0U]);

	(void)Rte_Call_SetManTqCmd_Oper(TqCmd_HwNm_T_f32, TRUE);

	return RspCod_Cnt_T_enum;
}
#endif


/* End of File: SrvFD40.c */
