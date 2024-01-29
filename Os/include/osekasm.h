/* Kernbauer Version: 2.16 Konfiguration: RH850 Erzeugungsgangnummer: 242 Zweig: 4 */

/*****************************************************************************
| Project Name: MICROSAR OS
|    File Name: osekasm.h
|
|  General code: @Version: 9.01.06@
|  Module version: $vv$=1.01
|
|  Description: contains osek assembler macros
|
|-----------------------------------------------------------------------------
|               C O P Y R I G H T
|-----------------------------------------------------------------------------
| Copyright (c) 2000-2015 Vector Informatik GmbH          All rights reserved.
|****************************************************************************/

/* CovComment 0:  file: osekasm.h */
/* MISRA RULE 19.15 VIOLATION: The QAC-Tool states a violation of rule 19.15 with 
 * message 0883 below. Anyhow, there is a double include prevention and therefore,
 * the message is considered to be wrong. */
/* double include preventer */
#ifndef _OSEKASM_H      /* PRQA S 0883 EOF */ /* see MISRA comment above */
#define _OSEKASM_H

/*lint -save Messages inhibited in this file, will be re-enabled at the end of file */
/*lint -e539 Did not expect positive indentation */

#if defined __cplusplus
extern "C"
{
#endif

/* Vector release management */
#if defined USE_QUOTE_INCLUDES
 #include "vrm.h"
#else
 #include <vrm.h>
#endif
/* KB begin vrmReleaseNumber (overwritten) */
/* Source release number */
#define osdVrmMajRelNum 1
#define osdVrmMinRelNum 6
/* KB end vrmReleaseNumber */
#if defined USE_QUOTE_INCLUDES
 #include "vrm.h"
#else
 #include <vrm.h>
#endif

/* KB begin osekStartOfHModule (overwritten) */
/* KB end osekStartOfHModule */

/* KB begin osHWCtrlVarStructAsm (overwritten) */
/* KB end osHWCtrlVarStructAsm */

/* KB begin osekHwOsekGlobalPrototypesAsm (overwritten) */
#define osAmITrusted()          (osAsmAmITrusted()==0)
#define osAmINotTrusted()       (osAsmAmITrusted()!=0)
/* KB end osekHwOsekGlobalPrototypesAsm */

/* KB begin osekHwPrototypesAsm (overwritten) */
#ifndef osdNOASM

#pragma asm
   .macro _osGetCoreSystemStackBottomAddr
   mov    _oskStackTop_SYS_c0, r11 -- r11 = oskStackTop_SYS_c0 
   ld.w   0[r11], r11   -- r11 = *(uint32*)r11
   ld.w   0[r11], r11   -- r11 = *(uint32*)r11
   .endm
   
   .macro _osSwitchToCoreSystemStack
   mov    _oskStackTop_SYS_c0, r11 -- r11 = oskStackTop_SYS_c0 
   ld.w   0[r11], r11              -- r11 = *(uint32*)r11
   ld.w   4[r11], sp    -- sp = *(uint32*)(r11+4)   
   ld.w   0[r11], r11   -- r11 = *(uint32*)r11
   ldsr   r11, MPLA0    -- MPLA0 = r11
   addi   -4, sp, r11   -- r11 = sp - 4 
   ldsr   r11, MPUA0    -- MPUA0 = r11 = osdSystemStack_c0_TOP - 4
   .endm

   .macro _osDisableFEINT
   #if osdUseFEINT==1
   stsr    PSW, r13        -- r13 = PSW
   ori     0x80, r13, r11  -- r11 = r13 | 0x80
   ldsr    r11, PSW        -- PSW = r11 -> disable FE level interrupts
   #endif   
   .endm
   .macro _osEnableFEINT
   #if osdUseFEINT==1
   ldsr    r13, PSW        -- PSW = r13 -> enable FE level interrupts
   #endif   
   .endm
#pragma endasm

/* MISRA RULE 8.5 VIOLATION: osAsmAmITrusted is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osAsmAmITrusted is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm osuint32 osAsmAmITrusted(void) /* PRQA S 1503 */
{                                  /* PRQA S 3406 */
    stsr  PSW, r10  -- r10 = PSW
    shr   30, r10   -- r10 = r10 >> 30
}

/* MISRA RULE 19.12 not violated: The operator ## is used for symbol assignment in this macro. */
#define osAsmSetMpuConfig(offset0, offset1, regnr) \
        ld.w  (offset0)[cfg_addr], r11 ;\
        ldsr  r11, MPLA##regnr         ;\
        ld.w  (offset1)[cfg_addr], r11 ;\
        ldsr  r11, MPUA##regnr /* PRQA S 881 */

#if (osdNumberOfDynamicMpuRegions_c0 > 0)
/* MISRA RULE 8.5 VIOLATION: osSetMpuConfig_c0 is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osSetMpuConfig_c0 is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm void osSetMpuConfig_c0(osuint32 cfg_addr) /* PRQA S 1503 */
{                                             /* PRQA S 3406 */
%reg cfg_addr
   osAsmSetMpuConfig(0x00, 0x04, 1)   
#if (osdNumberOfDynamicMpuRegions_c0 > 1)
   osAsmSetMpuConfig(0x08, 0x0C, 2)
#endif   
#if (osdNumberOfDynamicMpuRegions_c0 > 2)
   osAsmSetMpuConfig(0x10, 0x14, 3)
#endif   
#if (osdNumberOfDynamicMpuRegions_c0 > 3)
   osAsmSetMpuConfig(0x18, 0x1C, 4)
#endif   
#if (osdNumberOfDynamicMpuRegions_c0 > 4)
   osAsmSetMpuConfig(0x20, 0x24, 5)
#endif   
#if (osdNumberOfDynamicMpuRegions_c0 > 5)
   osAsmSetMpuConfig(0x28, 0x2C, 6)
#endif
#if (osdNumberOfDynamicMpuRegions_c0 > 6)
   osAsmSetMpuConfig(0x30, 0x34, 7)
#endif
#if (osdNumberOfDynamicMpuRegions_c0 > 7)
   osAsmSetMpuConfig(0x38, 0x3C, 8)
#endif
#if (osdNumberOfDynamicMpuRegions_c0 > 8)
   osAsmSetMpuConfig(0x40, 0x44, 9)
#endif
#if (osdNumberOfDynamicMpuRegions_c0 > 9)
   osAsmSetMpuConfig(0x48, 0x4C, 10)
#endif
#if (osdNumberOfDynamicMpuRegions_c0 > 10)
   osAsmSetMpuConfig(0x50, 0x54, 11)
#endif
#if (osdNumberOfDynamicMpuRegions_c0 > 11)
   osAsmSetMpuConfig(0x58, 0x5C, 12)
#endif
#if (osdNumberOfDynamicMpuRegions_c0 > 12)
   osAsmSetMpuConfig(0x60, 0x64, 13)
#endif
#if (osdNumberOfDynamicMpuRegions_c0 > 13)
   osAsmSetMpuConfig(0x68, 0x6C, 14)
#endif
#if (osdNumberOfDynamicMpuRegions_c0 > 14)
   osAsmSetMpuConfig(0x70, 0x74, 15)
#endif
%error
}
#endif /* osdNumberOfDynamicMpuRegions_c0 > 0 */


#ifdef osdSoftwareStackCheck
/* MISRA RULE 8.5 VIOLATION: osCheckStackPattern is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osCheckStackPattern is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm void osCheckStackPattern(void) /* PRQA S 1503 */
{                                  /* PRQA S 3406 */ 
%lab _osCheckStackPatternReturn 
   stsr  MPLA0, r11                    -- r11 = MPLA0
   ld.w  0[r11], r11                   -- r11 = *(uint32*)r11 -> get value at stack bottom address given by MPLA0
   mov   osdStackCheckPattern, r12     -- r12 = osdStackCheckPattern
   cmp   r11, r12                      -- compare r11 and r12   
   be    _osCheckStackPatternReturn    -- if r11 != r12 then branch to _osCheckStackPatternReturn
   jarl  _osStackOverflowDetected, lp  -- else branch to _osStackOverflowDetected
_osCheckStackPatternReturn:   
}

/* MISRA RULE 8.5 VIOLATION: osCheckCurrentStack is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osCheckCurrentStack is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm void osCheckCurrentStack(void) /* PRQA S 1503 */
{                                  /* PRQA S 3406 */ 
%lab _osStackErrorDetected _osStackCheckReturn
   stsr  MPLA0, r11                 -- r11 = MPLA0
   cmp   r11, sp                    -- compare sp and r11
   bl    _osStackErrorDetected      -- if sp < r11 then branch to _osStackErrorDetected   
   ld.w  0[r11], r11                -- r11 = *(uint32*)r11
   mov   osdStackCheckPattern, r12  -- r12 = osdStackCheckPattern   
   cmp   r11, r12                   -- compare r11 and r12
   bne   _osStackErrorDetected      -- if r11 == r12 then branch to _osStackErrorDetected
   stsr  MPUA0, r11                 -- r11 = MPUA0
   cmp   r11, sp                    -- compare r11 and sp
   bh    _osStackErrorDetected      -- if sp > r11 then branch to _osStackErrorDetected   
   br    _osStackCheckReturn        -- branch to _osStackCheckReturn
_osStackErrorDetected:   
   jarl   _osStackOverflowDetected, lp  -- branch to _osStackOverflowDetected
_osStackCheckReturn:
}
#endif

/* MISRA RULE 8.5 VIOLATION: osCheckIntDisabled is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osCheckIntDisabled is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm osuint32 osCheckIntDisabled(void) /* PRQA S 1503 */
{                                     /* PRQA S 3406 */ 
%lab _osCheckIntDisabledExit
   stsr  PSW, r10                 -- r10 = PSW
   andi  0x20, r10, r10           -- r10 = r10 & 0x20
   bnz   _osCheckIntDisabledExit  -- if r10 != 0 then branch to _osCheckIntDisabledExit   
   stsr  PMR, r10                 -- r10 = PMR
   mov   osdSystemLevelMask, r11  -- r11 = osdSystemLevelMask
   cmp   r11, r10                 -- compare r10 >= r11
   bnl   _osCheckIntDisabledExit  -- if r10 >= r11 then branch to _osCheckIntDisabledExit
   mov   r0, r10                  -- r10 = 0
_osCheckIntDisabledExit:
}

/* MISRA RULE 8.5 VIOLATION: osSetICRxMask is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osSetICRxMask is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm void osSetICRxMask(osuint32 addr) /* PRQA S 1503 */
{                                     /* PRQA S 3406 */
%con addr
   stsr    PSW, r12    -- r12 = PSW
   di                  -- disable interrupts
   mov     addr, r11   -- r11 = addr
   set1    7, 0[r11]   -- set bit 7 at address = r11
   ld.bu   0[r11], r11 -- dummy read
   syncm               -- sync memory
   ldsr    r12, PSW    -- PSW = r12
%reg addr
   stsr    PSW, r12    -- r12 = PSW
   di                  -- disable interrupts
   set1    7, 0[addr]  -- set bit 7 at address = addr
   ld.bu   0[addr], addr -- dummy read   
   syncm               -- sync memory
   ldsr    r12, PSW    -- PSW = r12
%error
}

/* MISRA RULE 8.5 VIOLATION: osClearICRxMask is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osClearICRxMask is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm void osClearICRxMask(osuint32 addr) /* PRQA S 1503 */
{                                       /* PRQA S 3406 */
%con addr
   stsr    PSW, r12    -- r12 = PSW
   di                  -- disable interrupts
   mov     addr, r11   -- r11 = addr
   clr1    7, 0[r11]   -- clear bit 7 at address = r11
   ld.bu   0[r11], r11 -- dummy read
   syncm               -- sync memory
   ldsr    r12, PSW    -- PSW = r12
%reg addr
   stsr    PSW, r12    -- r12 = PSW
   di                  -- disable interrupts
   clr1    7, 0[addr]  -- clear bit 7 at address = addr
   ld.bu   0[addr], addr -- dummy read   
   syncm               -- sync memory
   ldsr    r12, PSW    -- PSW = r12
%error   
}

/* MISRA RULE 8.5 VIOLATION: osGetSPR is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osGetSPR is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm osuint32 osGetSPR(osuint32 regID, osuint32 groupID) /* PRQA S 1503 */
{                                                       /* PRQA S 3406 */
%con regID %con groupID
   stsr   regID, r10, groupID  -- r10 = SPR
%error   
}

/* MISRA RULE 8.5 VIOLATION: osSetSPR is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osSetSPR is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm void osSetSPR(osuint32 regID, osuint32 groupID, osuint32 value) /* PRQA S 1503 */
{                                                                   /* PRQA S 3406 */
%con regID %con groupID %con value
   mov    value, r11                -- r11 = value
   ldsr   r11, regID, groupID       -- SPR = r11
%con regID %con groupID %reg value
   ldsr   value, regID, groupID     -- SPR = value
%error   
}

/* MISRA RULE 8.5 VIOLATION: osGetPSW is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osGetPSW is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm osuint32 osGetPSW(void) /* PRQA S 1503 */
{                           /* PRQA S 3406 */
   stsr   PSW, r10  -- r10 = PSW
}

/* MISRA RULE 8.5 VIOLATION: osSetPSW is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osSetPSW is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm void osSetPSW(osuint32 value) /* PRQA S 1503 */
{                                 /* PRQA S 3406 */
%reg value
   ldsr   value, PSW  -- PSW = value
%con value
   mov    value, r11  -- r11 = value
   ldsr   r11, PSW    -- PSW = r11
%error      
}

/* MISRA RULE 8.5 VIOLATION: osGetEIPSW is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osGetEIPSW is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm osuint32 osGetEIPSW(void) /* PRQA S 1503 */
{                             /* PRQA S 3406 */
   stsr   EIPSW, r10  -- r10 = EIPSW
}

/* MISRA RULE 8.5 VIOLATION: osSetEIPSW is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osSetEIPSW is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm void osSetEIPSW(osuint32 value) /* PRQA S 1503 */
{                                   /* PRQA S 3406 */
%reg value
   ldsr   value, EIPSW  -- EIPSW = value
%con value
   mov    value, r11    -- r11 = value
   ldsr   r11, EIPSW    -- EIPSW = r11
%error      
}

/* MISRA RULE 8.5 VIOLATION: osDispatch is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osDispatch is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm void osDispatch(void) /* PRQA S 1503 */
{                         /* PRQA S 3406 */
   nop                          -- improve interrupt latency
   syscall osdSysCallDispatcher -- syscall exception
}

/* MISRA RULE 8.5 VIOLATION: osGetHighPrioBit is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osGetHighPrioBit is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm osuint8 osGetHighPrioBit(osuint32 pattern) /* PRQA S 1503 */
{                                              /* PRQA S 3406 */ 
%con pattern
   mov    pattern, r10  -- r10 = pattern
   sch1l  r10, r10      -- get first bit from left which is set
   addi   -1, r10, r10  -- adjust position   
%mem pattern
   ld.w   pattern, r10  -- r10 = pattern
   sch1l  r10, r10      -- get first bit from left which is set
   addi   -1, r10, r10  -- adjust position
%reg pattern
   sch1l  pattern, r10  -- get first bit from left which is set
   addi   -1, r10, r10  -- adjust position     
%error      
}

/* MISRA RULE 8.5 VIOLATION: osGetCurrentSP is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osGetCurrentSP is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm osuint32 osGetCurrentSP(void) /* PRQA S 1503 */
{                                 /* PRQA S 3406 */
   mov   sp, r10  -- r10 = sp -> return value = sp
}

/* MISRA RULE 8.5 VIOLATION: osGetDisableGlobal is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osGetDisableGlobal is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm osuint32 osGetDisableGlobal(void) /* PRQA S 1503 */
{                                     /* PRQA S 3406 */
   stsr  PSW, r10        -- r10 = PSW
   di                    -- disable global interrupts
   andi  0x20, r10, r10  -- r10 = r10 & 0x20
}

/* MISRA RULE 8.5 VIOLATION: osGetIntDisableFlag is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osGetIntDisableFlag is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm osuint32 osGetIntDisableFlag(void) /* PRQA S 1503 */
{                                      /* PRQA S 3406 */
   stsr  PSW, r10        -- r10 = PSW
   andi  0x20, r10, r10  -- r10 = r10 & 0x20
}

/* MISRA RULE 8.5 VIOLATION: osGetIntDisableFlagEIPSW is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osGetIntDisableFlagEIPSW is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm osuint32 osGetIntDisableFlagEIPSW(void) /* PRQA S 1503 */
{                                           /* PRQA S 3406 */
   stsr  EIPSW, r10      -- r10 = EIPSW
   andi  0x20, r10, r10  -- r10 = r10 & 0x20
}

/* MISRA RULE 8.5 VIOLATION: osGetDisableGlobalEIPSW is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osGetDisableGlobalEIPSW is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm osuint32 osGetDisableGlobalEIPSW(void) /* PRQA S 1503 */
{                                          /* PRQA S 3406 */
   stsr  EIPSW, r11      -- r11 = EIPSW   
   andi  0x20, r11, r10  -- r10 = r11 & 0x20
   ori   0x20, r11, r11  -- r11 = r11 | 0x20
   ldsr  r11, EIPSW      -- EIPSW = r11
}

/* MISRA RULE 8.5 VIOLATION: osEnableGlobalEIPSW is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osEnableGlobalEIPSW is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm void osEnableGlobalEIPSW(void) /* PRQA S 1503 */
{                                  /* PRQA S 3406 */
   stsr  EIPSW, r11       -- r11 = EIPSW
   mov   0xFFFFFFDF, r12  -- r12 = 0xFFFFFFDF
   and   r12, r11         -- r11 = r11 & r12
   ldsr  r11, EIPSW       -- EIPSW = r11
}

/* MISRA RULE 8.5 VIOLATION: osAsmGetISPR is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osAsmGetISPR is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm osuint8 osAsmGetISPR(void) /* PRQA S 1503 */
{                           /* PRQA S 3406 */
   stsr   ISPR, r10  -- r10 = ISPR
}


/* MISRA RULE 8.5 VIOLATION: osSetPMR is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osSetPMR is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm void osSetPMR(osIntLevelType pattern) /* PRQA S 1503 */
{                                         /* PRQA S 3406 */
%reg pattern 
   stsr    PSW, r12      -- r12 = PSW
   di                    -- disable interrupts
   ldsr    pattern, PMR  -- PMR = pattern
   ldsr    r12, PSW      -- PSW = r12      
%mem pattern
   stsr    PSW, r12      -- r12 = PSW
   di                    -- disable interrupts
   ld.w    pattern, r11  -- r11 = pattern
   ldsr    r11, PMR      -- PMR = r11
   ldsr    r12, PSW      -- PSW = r12         
%error
}

/* MISRA RULE 8.5 VIOLATION: osGetLevelPMR is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osGetLevelPMR is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm osIntLevelType osGetLevelPMR(void) /* PRQA S 1503 */
{                                      /* PRQA S 3406 */
   stsr    PSW, r12          -- r12 = PSW
   di                        -- disable interrupts
   stsr    PMR, r10          -- r10 = PMR
   mov     osdPMRHiBit, r11  -- r11 = osdPMRHiBit
   or      r11, r10          -- r10 = r10 | r11
   sch1r   r10, r10          -- get first bit from right which is set
   addi    -1, r10, r10      -- adjust position
   ldsr    r12, PSW          -- PSW = r12
}

/* MISRA RULE 8.5 VIOLATION: osGetLevelISPR is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osGetLevelISPR is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm osIntLevelType osGetLevelISPR(void) /* PRQA S 1503 */
{                                       /* PRQA S 3406 */
   stsr    PSW, r12          -- r12 = PSW
   di                        -- disable interrupts
   stsr    ISPR, r10         -- r10 = ISPR
   mov     osdPMRHiBit, r11  -- r11 = osdPMRHiBit
   or      r11, r10          -- r10 = r10 | r11
   sch1r   r10, r10          -- get first bit from right which is set
   addi    -1, r10, r10      -- adjust position
   ldsr    r12, PSW          -- PSW = r12   
}

/* MISRA RULE 8.5 VIOLATION: osSetLevelPMR is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osSetLevelPMR is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm void osSetLevelPMR(osIntLevelType prioLevel) /* PRQA S 1503 */
{                                                /* PRQA S 3406 */
%reg prioLevel 
   stsr    PSW, r12        -- r12 = PSW
   di                      -- disable interrupts
   mov     osdPMRMask, r11 -- r11 = osdPMRMask
   shr     prioLevel, r11  -- r11 = r11 >> prioLevel
   shl     prioLevel, r11  -- r11 = r11 << prioLevel
   ldsr    r11, PMR        -- PMR = prioLevel
   ldsr    r12, PSW        -- PSW = r12      
%mem prioLevel
   stsr    PSW, r12        -- r12 = PSW
   di                      -- disable interrupts
   mov     osdPMRMask, r11 -- r11 = osdPMRMask   
   ld.w    prioLevel, r10  -- r10 = prioLevel
   shr     r10, r11        -- r11 = r11 >> prioLevel 
   shl     r10, r11        -- r11 = r11 << prioLevel
   ldsr    r11, PMR        -- PMR = r11
   ldsr    r12, PSW        -- PSW = r12         
%error
}

/* MISRA RULE 8.5 VIOLATION: osEnableLevel is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osEnableLevel is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm void osEnableLevel(void) /* PRQA S 1503 */
{                            /* PRQA S 3406 */
   stsr    PSW, r12  -- r12 = PSW
   di                -- disable interrupts
   ldsr    r0, PMR   -- PMR = r0 = 0
   ldsr    r12, PSW  -- PSW = r12      
}

/* MISRA RULE 8.5 VIOLATION: osDisableLevel is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osDisableLevel is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm void osDisableLevel(void) /* PRQA S 1503 */
{                             /* PRQA S 3406 */
   stsr    PSW, r12                 -- r12 = PSW
   di                               -- disable interrupts
   mov     osdSystemLevelMask, r11  -- r11 = osdSystemLevelMask
   ldsr    r11, PMR                 -- PMR = r11
   ldsr    r12, PSW                 -- PSW = r12      
}

/* MISRA RULE 8.5 VIOLATION: osGetDisableLevel is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osGetDisableLevel is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm osuint32 osGetDisableLevel(void) /* PRQA S 1503 */
{                                    /* PRQA S 3406 */
   stsr    PSW, r12                 -- r12 = PSW
   di                               -- disable interrupts
   stsr    PMR, r10                 -- r10 = PMR
   mov     osdSystemLevelMask, r11  -- r11 = osdSystemLevelMask
   ldsr    r11, PMR                 -- PMR = r11
   ldsr    r12, PSW                 -- PSW = r12      
}

/* MISRA RULE 8.5 VIOLATION: osRestoreLevel is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osRestoreLevel is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm void osRestoreLevel(osuint32 * addr) /* PRQA S 1503 */
{                                        /* PRQA S 3406 */
%reg addr                                                  
   stsr    PSW, r12     -- r12 = PSW
   di                   -- disable interrupts   
   ld.w    0[addr], r11 -- r11 = *(uint32)(addr)           
   ldsr    r11, PMR     -- PMR = r11
   ldsr    r12, PSW     -- PSW = r12         
%error                                                     
}



/* MISRA RULE 8.5 VIOLATION: osGetStackPattern is an assembler macro which is used in
   several modules and therefore the definition has to be given in the header file. */
/* MISRA RULE 14.1 not violated: osGetStackPattern is only used in some configurations.
 * As it is implemented as asm macro it does not harm in the other configurations. */
asm osuint32 osGetStackPattern(void) /* PRQA S 1503 */
{                                    /* PRQA S 3406 */
   stsr   MPLA0, r10   -- r10 = MPLA0         -> get stack bottom address
   ld.w   0[r10], r10  -- r10 = *(uint32*)r10 -> get value at stack bottom address   
}

#endif
/* KB end osekHwPrototypesAsm */


/* KB begin osekEndOfHModule (overwritten) */
/* KB end osekEndOfHModule */

#if defined __cplusplus
} /* ENDOF extern "C" */
#endif

/*lint -restore re-enable messages*/

#endif/* double include preventer */

/* END OF HEADER osek.h */

