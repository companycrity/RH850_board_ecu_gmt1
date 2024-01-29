#ifndef CMNMFGSRVFCT_H
#define CMNMFGSRVFCT_H

FUNC(float32, CmnMfgSrv_CODE) CmnMfgSrvFct_SynthesizeFloat(CONST(uint8, AUTOMATIC) Ary_Cnt_T_u08[]);
FUNC(void, CmnMfgSrv_CODE) CmnMfgSrvFct_DecomposeFloat(VAR(float32, AUTOMATIC) Input_Cnt_T_f32, VAR(uint8, AUTOMATIC) Ary_Cnt_T_u08[]);
FUNC(uint32, CmnMfgSrv_CODE) CmnMfgSrvFct_Synthesize32(CONST(uint8, AUTOMATIC) Ary_Cnt_T_u08[]);
FUNC(void, CmnMfgSrv_CODE) CmnMfgSrvFct_Decompose32(VAR(uint32, AUTOMATIC) Input_Cnt_T_u32, VAR(uint8, AUTOMATIC) Ary_Cnt_T_u08[]);
FUNC(uint16, CmnMfgSrv_CODE) CmnMfgSrvFct_Synthesize16(CONST(uint8, AUTOMATIC) Ary_Cnt_T_u08[]);
FUNC(void, CmnMfgSrv_CODE) CmnMfgSrvFct_Decompose16(VAR(uint16, AUTOMATIC) Input_Cnt_T_u16, VAR(uint8, AUTOMATIC) Ary_Cnt_T_u08[]);

#endif
