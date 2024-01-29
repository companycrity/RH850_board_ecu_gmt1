
/* Found in osek.h */
typedef uint16 osuint16;
typedef osuint16                NonTrustedFunctionIndexType;
typedef void*                   NonTrustedFunctionParameterRefType;

/* Found in nontrustfct.h */
extern void NONTRUSTED_NtWrapS_SyncCrc_GetAvlCrcHwUnit(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
extern void NONTRUSTED_NtWrapS_SyncCrc_RelsCrcHwUnit(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);

/* These are filled in by the OS, but the numbers below are just picked */
#define NtWrapS_SyncCrc_RelsCrcHwUnit   0u
#define NtWrapS_SyncCrc_GetAvlCrcHwUnit   1u
#define Appl10 0u


extern void GetTaskID(uint16* TaskRefType);
extern uint8 GetApplicationID(void);
extern void CallNonTrustedFunction(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);

