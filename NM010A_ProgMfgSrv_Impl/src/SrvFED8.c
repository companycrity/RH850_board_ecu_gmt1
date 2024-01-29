/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: SrvFED8.c
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
 *        Name:  ProgMfgSrv_SrvFED8Rd
 * Description:  0xFED8: Repair Shop Codes Read
 *          ID:  0xFED8
 *        Type:  0x22 (Read)
 *    Sub-Func:  N/A
 *    Req. Len:  0 bytes
 *   Resp. Len:  20 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (PROGMFGSRV_FED8ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED8Rd(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	(void)Rte_Call_PartNrRepairShopCodRd_Oper(DataBuf_Uls_T_u08);

	return RspCod_Cnt_T_enum;
}
#endif

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  ProgMfgSrv_SrvFED8Wr
 * Description:  0xFED8: Repair Shop Codes Write
 *          ID:  0xFED8
 *        Type:  0x2E (Write)
 *    Sub-Func:  N/A
 *    Req. Len:  20 bytes
 *   Resp. Len:  0 bytes
 * ------------------------------------------------------------------------------------------------------------------ */
#if (PROGMFGSRV_FED8ENA_CNT_LGC == CMNMFGSRV_ENAD_CNT_LGC)
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED8Wr(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[])
{
	VAR(NegRespCodEnum, AUTOMATIC) RspCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	/* The write function shifts the previous value and then writes the current value, so to take advantage of
	 * writing both as part of this service we must write the previous value first.  The codes send in via this service
	 * are in order, so the offset to the tenth character is given to write the "previous" value first. */
	(void)Rte_Call_PartNrRepairShopCodWr_Oper(&DataBuf_Uls_T_u08[10U]);
	(void)Rte_Call_PartNrRepairShopCodWr_Oper(&DataBuf_Uls_T_u08[0U]);

	return RspCod_Cnt_T_enum;
}
#endif



/* End of File: SrvFED8.c */
