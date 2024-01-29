#define GetApplicationID()   0U
typedef uint16 NonTrustedFunctionIndexType;
typedef void * NonTrustedFunctionParameterRefType;
extern Std_ReturnType CallNonTrustedFunction(uint16 x, void * y);
FUNC(void, CmnMfgSrv_CODE) NONTRUSTED_NtWrapS_CmnMfgSrv_Init(NonTrustedFunctionIndexType, NonTrustedFunctionParameterRefType);
FUNC(void, CmnMfgSrv_CODE) NONTRUSTED_NtWrapS_CmnMfgSrv_DiAssi(NonTrustedFunctionIndexType, NonTrustedFunctionParameterRefType);
#define NtWrapS_BswM_RequestMode 1U
