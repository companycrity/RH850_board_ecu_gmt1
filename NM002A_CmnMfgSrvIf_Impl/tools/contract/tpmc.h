extern uint8 TpTransmit      (uint8 tpChannel, uint8 *ptrData, uint16 count);
extern void  TpTxSetResponse (uint8 rxChannel, uint8 txChannel);
extern void  TpRxResetChannel(uint8 tpChannel);
