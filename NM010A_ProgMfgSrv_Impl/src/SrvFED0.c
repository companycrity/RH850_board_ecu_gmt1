/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFED0.c
* Module Description: Service processing
* Project           : Program Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 11/30/15  1        kzdyfh    Initial file creation                                                        EA4#
***********************************************************************************************************************/

/* ================================================================================================================== */
/* Includes */
/* ------------------------------------------------------------------------------------------------------------------ */
#include "Rte_ProgMfgSrv.h"
#include "CmnMfgSrvTyp.h"
#include "MfgSrvCfg.h"


/* ================================================================================================================== */
/* Service Function Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  ProgMfgSrv_SrvFED0Rd
 * Description:  0xFED0: Base Model Part Number Read
 *          ID:  0xFED0
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  6 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (PROGMFGSRV_FED0ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED0Rd(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	(void)Rte_Call_PartNrBasMdlPartNrRd_Oper(&DataBuf_Uls_T_u08[0U]);
	(void)Rte_Call_PartNrBasMdlPartNrAlphaCodRd_Oper(&DataBuf_Uls_T_u08[4U]);

	return RspCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  ProgMfgSrv_SrvFED0Wr
 * Description:  0xFED0: Base Model Part Number Write
 *          ID:  0xFED0
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  6 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (PROGMFGSRV_FED0ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED0Wr(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	(void)Rte_Call_PartNrBasMdlPartNrWr_Oper(&DataBuf_Uls_T_u08[0U]);
	(void)Rte_Call_PartNrBasMdlPartNrAlphaCodWr_Oper(&DataBuf_Uls_T_u08[4U]);

	return RspCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFED0.c */
