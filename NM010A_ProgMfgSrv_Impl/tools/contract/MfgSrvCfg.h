/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: MfgSrvCfg.h
* Module Description: Manufacturing Services Configuration - Contract Header
* Project           : Common Manufacturing Services
* Author            : KZDYFH
************************************************************************************************************************
* Version Control:
* %version:         3 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 11/30/15  1        KZDYFH    Initial file creation                                                        EA4#
***********************************************************************************************************************/
#ifndef MFGSRVCFG_H
#define MFGSRVCFG_H

#include "CmnMfgSrvTyp.h"

extern CONST(uint32, CmnMfgSrv_CONST) CmnMfgSrv_PsrId_Cnt_u32;
extern CONST(uint8, CmnMfgSrv_CONST) CmnMfgSrv_PsrRev_Cnt_u08;
extern CONST(uint8, CmnMfgSrv_CONST) CmnMfgSrv_PsrAuthor_Cnt_u08[6U];
extern CONST(uint8, CmnMfgSrv_CONST) CmnMfgSrv_BuildDate_Cnt_str[11U];
extern CONST(uint8, CmnMfgSrv_CONST) CmnMfgSrv_BuildTi_Cnt_str[8U];

extern CONST(MfgSrvTblRec, AUTOMATIC) CmnMfgSrv_MfgSrvTbl_Cnt_str[2u];
extern CONSTP2VAR(boolean, AUTOMATIC, AUTOMATIC) CmnMfgSrv_DiTbl[64U];
extern CONST(uint16, AUTOMATIC) CmnMfgSrvCfg_NtFctPtrTbl[1U];

/* Service Enable/Disable */
#define PROGMFGSRV_FEE1ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define PROGMFGSRV_FED2ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define PROGMFGSRV_FEE4ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define PROGMFGSRV_FED9ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define PROGMFGSRV_FED7ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define PROGMFGSRV_FEDAENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define PROGMFGSRV_FED6ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define PROGMFGSRV_FED3ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define PROGMFGSRV_FED0ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define PROGMFGSRV_FEDBENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define PROGMFGSRV_FED8ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define PROGMFGSRV_FED5ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define PROGMFGSRV_FEE0ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define PROGMFGSRV_FED4ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define PROGMFGSRV_FED1ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define PROGMFGSRV_FEDCENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC


/* Prototypes for enabled services */
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFEE1Wr(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFEE1Rd(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED2Rd(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED2Wr(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFEE4Wr(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFEE4Rd(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED9Wr(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED9Rd(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED7Wr(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED7Rd(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFEDAWr(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFEDARd(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED6Wr(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED6Rd(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED3Wr(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED3Rd(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED0Rd(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED0Wr(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFEDBRd(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFEDBWr(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED8Rd(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED8Wr(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED5Rd(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED5Wr(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFEE0Wr(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFEE0Rd(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED4Rd(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED4Wr(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED1Wr(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFED1Rd(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFEDCWr(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, ProgMfgSrv_CODE) ProgMfgSrv_SrvFEDCRd(VAR(uint8, ProgMfgSrv_VAR) DataBuf_Uls_T_u08[]);


#endif
/* End of File: MfgSrvCfg.h */
