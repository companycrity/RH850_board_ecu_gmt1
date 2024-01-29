#ifndef TP_CFG_H
#define TP_CFG_H

FUNC(uint8*, CmnMfgSrvIf_CODE) ApplTpRxGetBuffer(uint8 RxCh_Cnt_T_u08, uint16 ReqLen_Cnt_T_u16);
FUNC(void, CmnMfgSrvIf_CODE) ApplTpRxIndication(VAR(uint8, AUTOMATIC) RxChl_Cnt_T_u08, VAR(uint16, AUTOMATIC) ReqLen_Cnt_T_u16);
FUNC(void, CmnMfgSrvIf_CODE) ApplTpTxConfirmation(VAR(uint8, AUTOMATIC) TxCh_Cnt_T_u08, VAR(uint8, AUTOMATIC) St_Cnt_T_u08);
FUNC(void, CmnMfgSrvIf_CODE) ApplTpRxErrorIndication(VAR(uint8, AUTOMATIC) RxCh_Cnt_T_u08, VAR(uint8, AUTOMATIC) ErrNr_Cnt_T_u08);
FUNC(uint8, CmnMfgSrvIf_CODE) ApplTpTxErrorIndication(VAR(uint8, AUTOMATIC) TxCh_Cnt_T_u08, VAR(uint8, AUTOMATIC) ErrNr_Cnt_T_u08);

#define TpRxHandleCon_EPS_HSTestTool_HS_1 1U
#define kTpFreeChannel 0U


#endif
