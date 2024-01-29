#ifndef OS_H
#define OS_H

/* Found in osek.h */
#define Appl10 0u
#define osdNumberOfAllTasks 13

typedef uint8  TaskType;
typedef uint16 osuint16;
typedef osuint16                NonTrustedFunctionIndexType;
typedef void*                   NonTrustedFunctionParameterRefType;

#define osSystemExtendedTask ((TaskType)0)
#define Task_InitBsw_Appl10 ((TaskType)1)
#define Task_Init_Appl10 ((TaskType)2)
#define Task_Init_Appl6 ((TaskType)3)
#define Task_4msBsw_Appl10 ((TaskType)4)
#define Task_2ms_Appl10 ((TaskType)5)
#define Task_2ms_Appl6 ((TaskType)6)
#define Task_4ms_Appl10 ((TaskType)7)
#define Task_10ms_Appl10 ((TaskType)8)
#define Task_10ms_Appl6 ((TaskType)9)
#define Task_100ms_Appl10 ((TaskType)10)
#define Task_10msBsw_Appl10 ((TaskType)11)
#define osSystemBasicTask ((TaskType)12)

/* These are filled in by the OS, but the numbers below are just picked */
#define NtWrapS_StHlthSigStc_UpdDataSample   0u
#define NtWrapS_StHlthSigStc_ClrDataSample   1u
#define NtWrapS_StHlthSigStc_UpdNvmPim       2u


extern uint8 GetApplicationID(void);
extern void CallNonTrustedFunction(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);

extern FUNC(void, StHlthSigStc_CODE) NONTRUSTED_NtWrapS_StHlthSigStc_ClrDataSample(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
extern FUNC(void, StHlthSigStc_CODE) NONTRUSTED_NtWrapS_StHlthSigStc_UpdNvmPim(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
extern FUNC(void, StHlthSigStc_CODE) NONTRUSTED_NtWrapS_StHlthSigStc_UpdDataSample(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);



#endif  /* OS_H */


