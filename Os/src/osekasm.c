/* Kernbauer Version: 2.16 Konfiguration: RH850 Erzeugungsgangnummer: 242 Zweig: 4 */

/*****************************************************************************
| Project Name: MICROSAR OS
|    File Name: osekasm.c
|
|  General code: @Version: 9.01.06@
|  Module version: $vv$=1.02
|
|  Description: osek assembler parts
|
|-----------------------------------------------------------------------------
|               C O P Y R I G H T
|-----------------------------------------------------------------------------
| Copyright (c) 2000-2015 Vector Informatik GmbH          All rights reserved.
|****************************************************************************/
/* KB begin VeryFirstTokenInAllCSourceFiles (default) */
/* KB end VeryFirstTokenInAllCSourceFiles */


/* next define is set in the makefile
 * switches of the include of (generated) tcb.h, includes instead
 * the library config file
 */

#if defined USE_QUOTE_INCLUDES
 #include "osek.h"
 #include "osekext.h"
#else
 #include <osek.h>
 #include <osekext.h>
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

/* CovComment 0:  file: osekasm.c */

/* KB begin osekStartOfCModule (overwritten) */
#pragma ghs section bss=".os_bss"
#pragma ghs section data=".os_data"
#pragma ghs section sbss=".os_sbss"
#pragma ghs section sdata=".os_sdata"
#pragma ghs section text=".os_text"
#pragma ghs section rodata=".os_rodata"
#pragma ghs section rosdata=".os_rosdata"
/* KB end osekStartOfCModule */

/* KB begin osekHWAdditionalAPIFunctionsAsm (overwritten) */

/* This file contains compiler specific code which causes MISRA warnings.
   This cannot be prevented. Therefore this file is excluded from MISRA checking. 
*/
/* PRQA S 1-9999 EOF */

#ifndef osdNOASM

/*****************************************************************************/
/* Function osStartOSasm                                                     */
/*****************************************************************************/
#pragma asm  
   .section ".os_text", "ax"
   .align  4
   .globl  _osStartOSasm
_osStartOSasm:
   di                                  -- disable interrupts global
   ldsr    r0, MPM                     -- MPM = 0 -> disable MPU
   mov     r6, r25                     -- r25 = r6 -> prevent overwrite
   
   _osSwitchToCoreSystemStack          -- switch to system stack
         
   jarl    _osInitialize, lp           -- call osInitialize
   jarl    _osInitStacks, lp           -- call osInitStacks   
   jarl    _osInitINTC, lp             -- call osInitINTC
   jarl    _osInitMPU, lp              -- call osInitMPU     

   mov     osdSystemLevelMask, r11     -- r11 = osdSystemLevelMask
   ldsr    r11, PMR                    -- PMR = r11
   ei                                  -- enable interrupts global
   mov     r25, r6                     -- r6 = r25
   jarl    _osStartOSc, lp             -- call osStartOSc
#pragma endasm

/*****************************************************************************/
/* Wrapper for osDispatcher                                                  */
/*****************************************************************************/
#pragma asm
   .section ".os_text", "ax"
   .align  4
   .globl  _osTrapDispatcher_c0
_osTrapDispatcher_c0:
   pushsp  r1-r2                        -- push r1 and r2 onto stack     
   mov     _ptrToCallDispatcher_c0, r1  -- r1 = &ptrToCallDispatcher
   ld.w    0[r1], r1                    -- r1 = (uint32)*r1 = &osCtrlVarsCore0.LockIsNotNeeded.ossCallDispatcher
   ld.bu   0[r1], r1                    -- r1 = (uint8)*r1 = osCtrlVarsCore0.LockIsNotNeeded.ossCallDispatcher
   cmp     r0, r1                       -- compare r1 == 0
   be      _osReturnFromDispatcher      -- if r1 == 0 then branch to _osReturnFromDispatcher
   
   mov     _ptrToNestingDepth_c0, r1    -- r1 = ptrToNestingDepth
   ld.w    0[r1], r1                    -- r1 = (uint32)*r1 = &osCtrlVarsCore0.LockIsNotNeeded.ossIntNestingDepth
   ld.bu   0[r1], r1                    -- r1 = (uint8)*r1 = osCtrlVarsCore0.LockIsNotNeeded.ossIntNestingDepth
   cmp     r0, r1                       -- compare r1 != 0
   bne     _osReturnFromDispatcher      -- if r1 != 0 then branch to _osReturnFromDispatcher   

   #ifdef osdSoftwareStackCheck
   stsr    MPLA0, r1                 -- r1 = MPLA0
   addi    -osdTaskContext, sp, r2   -- r2 = sp - osdTaskContext -> calculate sp after saving context
   cmp     r1, r2                    -- compare r2 < r1
   bl      _osStackOverflowDetected  -- if r2 < r1 then branch to _osStackOverflowDetected
   ld.w    0[r1], r1                 -- r1 = (uint32)*r1 -> get value at stack bottom address
   mov     osdStackCheckPattern, r2  -- r2 = osdStackCheckPattern
   cmp     r1, r2                    -- compare r1 == r2
   bne     _osStackOverflowDetected  -- if r1 != r2 then branch to _osStackOverflowDetected   
   #endif
   
   pushsp  r4-r31                    -- push r4 ... r31 onto stack
   stsr    EIPC,  r11                -- r11 = EIPC  
   stsr    EIPSW, r12                -- r12 = EIPSW 
   stsr    CTPC,  r13                -- r13 = CTPC  
   stsr    CTPSW, r14                -- r14 = CTPSW 
   stsr    MPLA0, r15                -- r15 = MPLA0 
   stsr    MPUA0, r16                -- r16 = MPUA0 
   pushsp  r11-r16                   -- push r11 ... r16 onto stack    
   #if osdRH850_FPU
   stsr    FPSR,  r11                -- r11 = FPSR
   stsr    FPEPC, r12                -- r12 = FPEPC
   pushsp  r11-r12                   -- push FPSR and FPEPC onto stack    
   #endif   

   _osDisableFEINT                   -- disable FE level interrupts
   mov     sp, r6                    -- r6 = sp   
   mov     _oskStackTop_SYS_c0, r11  -- r11 = oskStackTop_SYS_c0
   ld.w    0[r11], r11               -- r11 = *(uint32*)r11
   ld.w    4[r11], sp                -- sp =  *(uint32*)(r11+4)
   ld.w    0[r11], r11               -- r11 = *(uint32*)r11      
   ldsr    r11, MPLA0                -- MPLA0 = r11
   addi    -4, sp, r11               -- r11 = sp - 4 
   ldsr    r11, MPUA0                -- MPUA0 = r11 = osdSystemStack_c0_TOP - 4
   _osEnableFEINT                    -- enable FE level interrupts   
   
   jarl    _osDispatcher, lp         -- call osDispatcher
   _osDisableFEINT                   -- disable FE level interrupts   
   mov     r10, sp                   -- sp = r10 -> switch to stack of task to be resumed
   
   #ifdef osdSoftwareStackCheck   
   stsr    MPLA0, r11                 -- r11 = MPLA0
   ld.w    0[r11], r11                -- r11 = *(uint32*)r11 -> get value from system stack bottom address
   mov     osdStackCheckPattern, r12  -- r12 = osdStackCheckPattern
   cmp     r11, r12                   -- compare r11 and r12
   bne     _osStackOverflowDetected   -- if r11 != r12 then branch to _osStackOverflowDetected   
   #endif   
                                     
   #if osdRH850_FPU
   popsp   r11-r12                   -- restore FPSR and FPEPC from stack       
   ldsr    r11, FPSR                 -- FPSR = r11
   ldsr    r12, FPEPC                -- FPEPC = r12
   #endif                                     
   popsp   r11-r16                   -- restore r11 ... r16 from stack 
   ldsr    r11, EIPC                 -- EIPC  = r11 
   ldsr    r12, EIPSW                -- EIPSW = r12 
   ldsr    r13, CTPC                 -- CTPC  = r13 
   ldsr    r14, CTPSW                -- CTPSW = r14 
   ldsr    r15, MPLA0                -- MPLA0 = r15 
   ldsr    r16, MPUA0                -- MPUA0 = r16 
   popsp   r4-r31                    -- restore r4 ... r31 from stack
   popsp   r1-r2                     -- restore r1 and r2 from stack
   eiret                             -- return from exception 

_osReturnFromDispatcher:
   popsp   r1-r2                     -- restore r1 and r2 from stack
   eiret                             -- return from exception 
#pragma endasm



#if (osdNumberOfCat2ISRs > 0)
/*****************************************************************************/
/* CAT2 ISR Wrapper osCat2IsrWrapper                                         */
/*****************************************************************************/
#pragma asm
   .section ".os_text", "ax"
   .align  4
   .globl  _osCat2IsrWrapper
_osCat2IsrWrapper:
   -- r1, r2 and r4 ... r31 are already saved onto stack by CAT2 ISR prologue
   -- r6 contains the ISR index   
   -- r7 contains the ISR stack lower address
   -- r8 contains the ISR stack upper address      
   
   #ifdef osdSoftwareStackCheck
   stsr    MPLA0, r1                   -- r1 = MPLA0
   addi    -osdIsrContext, sp, r2      -- r2 = sp - osdIsrContext -> calculate sp with stored context
   cmp     r1, r2                      -- compare r1 and r2
   bl      _osStackOverflowDetected    -- if r2 < r1 then branch to _osStackOverflowDetected   
   #endif
   
   stsr    EIPC,  r11                  -- r11 = EIPC 
   stsr    EIPSW, r12                  -- r12 = EIPSW
   stsr    CTPC,  r13                  -- r13 = CTPC 
   stsr    CTPSW, r14                  -- r14 = CTPSW
   stsr    MPLA0, r15                  -- r15 = MPLA0
   stsr    MPUA0, r16                  -- r16 = MPUA0
   pushsp  r11-r16                     -- push r11 ... r16 onto stack
   #if osdRH850_FPU
   stsr    FPSR,  r11                  -- r11 = FPSR
   stsr    FPEPC, r12                  -- r12 = FPEPC
   pushsp  r11-r12                     -- push FPSR and FPEPC onto stack    
   #endif
   _osDisableFEINT                     -- disable FE level interrupts
   mov     sp, r11                     -- r11 = sp
   mov     r8, sp                      -- sp = r8 -> switch to ISR level stack
   addi    -4, r8, r8                  -- r8 -= 4 -> adjustment for MPU   
   ldsr    r7, MPLA0                   -- MPLA0 = r7 -> set MPU stack start address
   ldsr    r8, MPUA0                   -- MPUA0 = r8 -> set MPU stack end address   
   pushsp  r11-r11                     -- push r11 onto stack -> save old stack pointer
   _osEnableFEINT                      -- enable FE level interrupts

   jarl    _osCallCat2ISR, lp          -- call osCallCat2ISR with r6 = ISRID
   
   _osDisableFEINT                     -- disable FE level interrupts
   ld.w    0[sp], sp                   -- sp = *(sp) -> switch back to previous stack         
   cmp     r0, r10                     -- compare r10 == 0 (r10 = return value of ISR-C-Wrapper)
   be      _osReturnFromIsrWrapper     -- if r10 == 0 then branch to _osReturnFromIsrWrapper
   mov     sp, r6                      -- r6 = sp -> parameter stackPtr for osDispatcher
   _osSwitchToCoreSystemStack          -- switch to system stack
   _osEnableFEINT                      -- enable FE level interrupts

   jarl    _osDispatcher, lp           -- call osDispatcher   

   _osDisableFEINT                     -- disable FE level interrupts   
   mov     r10, sp                     -- sp = r10 -> switch to stack of task to be resumed

_osReturnFromIsrWrapper:
   #if osdRH850_FPU
   popsp   r11-r12                     -- restore FPSR and FPEPC from stack       
   ldsr    r11, FPSR                   -- FPSR = r11
   ldsr    r12, FPEPC                  -- FPEPC = r12
   #endif
   popsp   r11-r16                     -- restore r11 ... r16 from stack
   ldsr    r11, EIPC                   -- EIPC  = r11 
   ldsr    r12, EIPSW                  -- EIPSW = r12 
   ldsr    r13, CTPC                   -- CTPC  = r13 
   ldsr    r14, CTPSW                  -- CTPSW = r14 
   ldsr    r15, MPLA0                  -- MPLA0 = r15 
   ldsr    r16, MPUA0                  -- MPUA0 = r16 
   popsp   r4-r31                      -- restore r4 to r31 from stack
   popsp   r1-r2                       -- restore r1 and r2 from stack
   eiret                               -- return from exception
#pragma endasm

/*****************************************************************************/
/* Function osStartTrustedISR                                                */
/*****************************************************************************/
#pragma asm
   .section ".os_text", "ax"
   .align  4
   .globl  _osStartTrustedISR
_osStartTrustedISR:
   -- r6 contains ISR function address
   -- r7 contains new PSW
   -- r8 contains new PMR
   pushsp  lp-lp                        -- push lp onto stack
   mov     _osReturnFromTrustedIsr, lp  -- lp = _osReturnFromTrustedIsr -> prepare return address
   ldsr    r7, PSW                      -- PSW = r7
   jmp     [r6]                         -- branch to function given by address in r6
_osReturnFromTrustedIsr:
   di                                -- disable global interrupts
   #ifdef osdSoftwareStackCheck   
   stsr    MPLA0, r6                 -- r6 = MPLA0
   ld.w    0[r6], r6                 -- r6 = *(uint32*)r6 -> get value on stack bottom address
   mov     osdStackCheckPattern, r7  -- r7 = osdStackCheckPattern
   cmp     r6, r7                    -- compare r7 and r8
   bne     _osStackOverflowDetected  -- if r7 != r8 then branch to _osStackOverflowDetected   
   #endif
   popsp   lp-lp                     -- restore lp from stack
   jmp     [lp]                      -- return to caller
#pragma endasm
#endif

/*****************************************************************************/
/* Function osStartTrustedTask                                               */
/*****************************************************************************/
#pragma asm
   .section ".os_text", "ax"
   .align  4
   .globl  _osStartTrustedTask
_osStartTrustedTask:
   -- r6 contains task stack start address
   -- r7 contains task stack end address   
   -- r8 contains task function start address
   #ifdef osdSoftwareStackCheck   
   stsr    MPLA0, r11                       -- r11 = MPLA0
   ld.w    0[r11], r11                      -- r11 = *(uint32*)r11 -> get value from system stack bottom address
   mov     osdStackCheckPattern, r12        -- r12 = osdStackCheckPattern
   cmp     r11, r12                         -- compare r11 and r12
   bne     _osStackOverflowDetected         -- if r11 != r12 then branch to _osStackOverflowDetected   
   #endif
   _osDisableFEINT                          -- disable FE level interrupts
   ldsr    r6, MPLA0                        -- MLPA0 = r6 -> stack bottom address
   mov     r7, sp                           -- sp = r7 -> switch to task stack  
   addi    -4, r7, r7                       -- r7 = r7 - 4 -> MPU granularity adjustment  
   ldsr    r7, MPUA0                        -- MPUA0 = r7 -> stack top address
   ldsr    r8, EIPC                         -- EIPC = r8 -> set task start address
   stsr    EIPSW, r8                        -- r8 = EIPSW
   mov     0xBFFFFF5F, r7                   -- r7 = 0xBFFFFF5F -> prepare mask for supervisor mode with global EI and FE interrupts enabled
   and     r7, r8                           -- r8 = r7 & r8 
   ldsr    r8, EIPSW                        -- EIPSW = r8
   #if (STATUS_LEVEL == EXTENDED_STATUS) && (osdNumberOfAllTasks > 0)   
   mov     _osPsysMissingTerminateTask, lp  -- lp = _osPsysMissingTerminateTask -> prepare missing terminate error   
   #endif
   eiret                                    -- return from exception
#pragma endasm

#if (STATUS_LEVEL == EXTENDED_STATUS) && (osdNumberOfAllTasks > 0)
/*****************************************************************************/
/* Function osSysCallMissingTerminateTask                                    */
/*****************************************************************************/
#pragma asm
   .section ".os_text", "ax"
   .align  4
   .globl  _osSysCallMissingTerminateTask
_osSysCallMissingTerminateTask:
   di                                    -- disable EI level interrupts
   _osDisableFEINT                       -- disable FE level interrupts
   _osSwitchToCoreSystemStack            -- switch to system stack
   jarl    _osMissingTerminateError, lp  -- call osMissingTerminateError
#pragma endasm
#endif

/*****************************************************************************/
/* Function osUnhandledCoreException                                         */
/*****************************************************************************/
#pragma asm
   .section ".os_text", "ax"
   .align  4
   .globl  _osUnhandledCoreException
_osUnhandledCoreException:
   syncp                                -- synchronize pipeline due to ESCAN00084350
   _osDisableFEINT                      -- disable FE level interrupts
   _osSwitchToCoreSystemStack           -- switch to system stack
   stsr    FEIC, r6                     -- r6 = FEIC
   jarl    _osCoreExceptionHandler, lp  -- call osCoreExceptionHandler
#pragma endasm

/*****************************************************************************/
/* Function osUnhandledDirectBranchException                                 */
/*****************************************************************************/
#pragma asm
   .section ".os_text", "ax"
   .align  4
   .globl  _osUnhandledDirectBranchException
_osUnhandledDirectBranchException:
   syncp                                        -- synchronize pipeline due to ESCAN00084350
   _osDisableFEINT                              -- disable FE level interrupts
   _osSwitchToCoreSystemStack                   -- switch to system stack
   stsr    EIIC, r6                             -- r6 = EIIC   
   jarl    _osDirectBranchExceptionHandler, lp  -- call osDirectBranchExceptionHandler
#pragma endasm

/*****************************************************************************/
/* Function osUnhandledEIINTException                                        */
/*****************************************************************************/
#pragma asm
   .section ".os_text", "ax"
   .align  4
   .globl  _osUnhandledEIINTException
_osUnhandledEIINTException:
   _osDisableFEINT                       -- disable FE level interrupts
   _osSwitchToCoreSystemStack            -- switch to system stack
   stsr    EIIC, r6                      -- r6 = EIIC   
   jarl    _osEIINTExceptionHandler, lp  -- call osEIINTExceptionHandler
#pragma endasm

/*****************************************************************************/
/* Function osEnterSafeState                                                 */
/*****************************************************************************/
#pragma asm
   .section ".os_text", "ax"
   .align  4      
   .globl  _osEnterSafeState
_osEnterSafeState:
   di                                     -- CPU is in supervisor mode and interrupts are disabled
   _osDisableFEINT                        -- disable FE level interrupts   
   _osSwitchToCoreSystemStack             -- switch to system stack
   jarl    _osUnrecoverableError, lp      -- call osUnrecoverableError 
_osSysShutdownLoop:                       -- we expect not to return here
   di                                     -- disable interrupts
   jr      _osSysShutdownLoop             -- therefore the watchdog is triggered via endless loop
#pragma endasm

#ifdef osdSoftwareStackCheck
/*****************************************************************************/
/* Function osStackOverflowDetected                                          */
/*****************************************************************************/
#pragma asm
   .section ".os_text", "ax"
   .align  4
   .globl  _osStackOverflowDetected
_osStackOverflowDetected:
   di                                -- disable global interrupts
   _osDisableFEINT                   -- disable FE level interrupts   
   mov     0, r6                     -- r6 = 0
   _osGetCoreSystemStackBottomAddr   -- r11 = system stack bottom address
   stsr    MPLA0, r12                -- r12 = MPLA0
   cmp     r11, r12                  -- compare r11 == r12
   bne     _osSwitchToSystemStack    -- if r11 != r12 then branch to _osSwitchToSystemStack
   mov     1, r6                     -- r6 = 1 -> system stack overflow
_osSwitchToSystemStack:
   _osSwitchToCoreSystemStack        -- switch to system stack
   stsr    MPLA0, r11                -- r11 = MPLA0
   mov     osdStackCheckPattern, r12 -- r12 = osdStackCheckPattern
   st.w    r12, 0[r11]               -- *(uint32* r11) = (uint32)r12 -> osSystemStack[0] = osdStackCheckPattern
   jarl    _osStackError, lp         -- branch to osStackError
#pragma endasm
#endif

#endif /* #ifndef osdNOASM */
/* KB end osekHWAdditionalAPIFunctionsAsm */

/* KB begin osekEndOfCModule (overwritten) */
#pragma ghs section bss=default
#pragma ghs section data=default
#pragma ghs section sbss=default
#pragma ghs section sdata=default
#pragma ghs section text=default
#pragma ghs section rodata=default
#pragma ghs section rosdata=default
/* KB end osekEndOfCModule */

/* END OF MODULE osekasm.c */

