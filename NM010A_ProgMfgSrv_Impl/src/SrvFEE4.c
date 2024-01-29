/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFEE4.c
* Module Description: Service processing
* Project           : Program Specific Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 02/26/16  1        JWJ       Initial file creation                                                        EA4#2585
***********************************************************************************************************************/

/* ================================================================================================================== */
/* Includes */
/* ------------------------------------------------------------------------------------------------------------------ */
#include "Rte_ProgMfgSrv.h"
#include "CmnMfgSrvTyp.h"
#include "MfgSrvCfg.h"
#include "CmnMfgSrvFct.h"


/* ================================================================================================================== */
/* Service Function Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  ProgMfgSrv_SrvFEE4Rd
 * Description:  0xFEE4: GM LOA Ignition Counter Read
 *          ID:  0xFEE4
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  2 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (PROGMFGSRV_FEE4ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFEE4Rd(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint16, AUTOMATIC) IgnCntr_Cnt_T_u16;

	(void)Rte_Call_GetGmLoaIgnCntr_Oper(&IgnCntr_Cnt_T_u16);

	CmnMfgSrvFct_Decompose16(IgnCntr_Cnt_T_u16, &DataBuf_Uls_T_u08[0U]);

	return RespCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  ProgMfgSrv_SrvFEE4Wr
 * Description:  0xFEE4: GM LOA Ignition Counter Write
 *          ID:  0xFEE4
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  2 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (PROGMFGSRV_FEE4ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFEE4Wr(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint16, AUTOMATIC) IgnCntr_Cnt_T_u16;

	IgnCntr_Cnt_T_u16 = CmnMfgSrvFct_Synthesize16(&DataBuf_Uls_T_u08[0U]);

	(void)Rte_Call_SetGmLoaIgnCntr_Oper(IgnCntr_Cnt_T_u16);

	return RespCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFEE4.c */
