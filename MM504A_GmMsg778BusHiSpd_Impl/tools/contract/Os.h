

typedef uint16 NonTrustedFunctionIndexType;
typedef void * NonTrustedFunctionParameterRefType;

#define NtWrapS_GmMsg778BusHiSpd_DtcStsChgd  1U

extern FUNC(Std_ReturnType, AUTOMATIC) CallNonTrustedFunction(NonTrustedFunctionIndexType ID, NonTrustedFunctionParameterRefType Params);
extern FUNC(uint8, AUTOMATIC) GetApplicationID(void);

extern FUNC(void, GmMsg778BusHiSpd_CODE) NONTRUSTED_NtWrapS_GmMsg778BusHiSpd_DtcStsChgd(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);

#define Appl6 2U
