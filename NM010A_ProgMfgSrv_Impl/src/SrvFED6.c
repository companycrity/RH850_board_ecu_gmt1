/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFED6.c
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
 *        Name:  ProgMfgSrv_SrvFED6Rd
 * Description:  0xFED6: GM Manufacturing Enable Counter (GM MEC) Read
 *          ID:  0xFED6
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  1 byte
 * ------------------------------------------------------------------------------------------------------------------ */
#if (PROGMFGSRV_FED6ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED6Rd(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	(void)Rte_Call_PartNrCustMfgEnaCntrRd_Oper(DataBuf_Uls_T_u08);

	return RspCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  ProgMfgSrv_SrvFED6Wr
 * Description:  0xFED6: GM Manufacturing Enable Counter (GM MEC) Write
 *          ID:  0xFED6
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  1 byte
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (PROGMFGSRV_FED6ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED6Wr(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	if (Rte_Call_PartNrCustMfgEnaCntrWr_Oper(DataBuf_Uls_T_u08[0U]) != RTE_E_OK)
	{
		RspCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}

	return RspCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFED6.c */
