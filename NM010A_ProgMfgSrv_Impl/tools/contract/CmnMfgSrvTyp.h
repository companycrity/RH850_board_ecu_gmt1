#ifndef CMNMFGSRVTYP_H
#define CMNMFGSRVTYP_H

#include "Rte_Type.h"

#define CMNMFGSRV_ENAD_CNT_LGC	TRUE
#define CMNMFGSRV_DISAD_CNT_LGC	FALSE


/* Available negative response code (follows ISO-14229 standard) */
typedef enum
{
	MFGSRVNRCPOSRSP                = 0x00U,
	MFGSRVNRCSERVICENOTSUPPORTED   = 0x11U,
	MFGSRVNRCSUBFUNCNOTSUPPORTED   = 0x12U,
	MFGSRVNRCINCORRECTLENGTH       = 0x13U,
	MFGSRVNRCCONDITIONSNOTCORRECT  = 0x22U,
	MFGSRVNRCREQSEQUENCERROR       = 0x24U,
	MFGSRVNRCREQUESTOUTOFRANGE     = 0x31U,
	MFGSRVNRCSECURITYACCESSDENIED  = 0x33U,
	MFGSRVNRCINVALIDKEY            = 0x35U,
	MFGSRVNRCEXCEEDEDNUMOFATTEMPTS = 0x36U,
	MFGSRVNRCTIMEDELAYNOTEXPIRED   = 0x37U,
	MFGSRVNRCRESPONSEPENDING       = 0x78U,
	MFGSRVNRCSUBFUNCNOTINSESSION   = 0x7EU,
	MFGSRVNRCSERVICENOTINSESSION   = 0x7FU,
	MFGSRVNRCRPMTOOHIGH            = 0x81U,
	MFGSRVNRCRPMTOOLOW             = 0x82U,
	MFGSRVNRCENGINERUNNING         = 0x83U,
	MFGSRVNRCENGINENOTRUNNING      = 0x84U,
	MFGSRVNRCENGINERUNTIMELOW      = 0x85U,
	MFGSRVNRCTEMPERATURETOOHIGH    = 0x86U,
	MFGSRVNRCTEMPERATURETOOLOW     = 0x87U,
	MFGSRVNRCVEHICLESPEEDTOOHIGH   = 0x88U,
	MFGSRVNRCVEHICLESPEEDTOOLOW    = 0x89U,
	MFGSRVNRCTHROTTLETOOHIGH       = 0x8AU,
	MFGSRVNRCTHROTTLETOOLOW        = 0x8BU,
	MFGSRVNRCTRANSNOTINNEUTRAL     = 0x8CU,
	MFGSRVNRCTRANSNOTINGEAR        = 0x8DU,
	MFGSRVNRCBRAKENOTAPPLIED       = 0x8FU,
	MFGSRVNRCTRANSNOTINPARK        = 0x90U,
	MFGSRVNRCVOLTAGETOOHIGH        = 0x92U,
	MFGSRVNRCVOLTAGETOOLOW         = 0x93U,
	MFGSRVNRCSUPPRSP               = 0xFFU
} NegRespCodEnum;


/* Environmental check structure */
typedef struct
{
	uint16 NxtrSession : 1;
	uint16 SecuAcs : 1;
	uint16 Unused : 14;
} MfgSrvChkRec;


/* Service function type - all manufacturing services with entries in the LUT shall use this structure */
typedef NegRespCodEnum (*MfgSrvFuncRef)(P2VAR(uint8, CmnMfgSrv_VAR, CmnMfgSrv_VAR) DataBuffer_Uls_T_u08);


/* Service lookup table structure */
typedef struct
{
	uint8          SvcTyp;
	uint16         SvcId;
	uint8          SubFunc;
	uint16         ReqLen;
	uint16         RespLen;
	MfgSrvChkRec   Chk;
	uint8          Appl;
	MfgSrvFuncRef  SvcFunc;
} MfgSrvTblRec;


#endif
