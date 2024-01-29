//
//            FEE Collection Library
//
//    Copyright (C) 2011-2013 Green Hills Software, Inc.
//
//    This program is the property of Green Hills Software, Inc,
//    its contents are proprietary information and no part of it
//    is to be disclosed to anyone except employees of Green Hills
//    Software, Inc., or as agreed in writing signed by the President
//    of Green Hills Software, Inc.
//
///////////////////////////////////////////////////////////////////////////////
//                                  Purpose                                  //
///////////////////////////////////////////////////////////////////////////////
// The GHS Eagle Collection Library records information about any x86 Linux or
// Windows program that it is linked to. This information includes function
// entry and exit (FEE) data and custom variable data stored by the
// user program through the interface described here. The library works with
// any user program with minimal impact on performance. This library is
// thread-safe and signal-safe. The data in the buffer is meant to be accessed
// by MULTI through the __history_start command.
//
///////////////////////////////////////////////////////////////////////////////
//                                   Usage                                   //
///////////////////////////////////////////////////////////////////////////////
// In order to use the GHS_Eagle library, it must be linked into the user
// program statically. It must not be linked with any other libraries which
// implement the __ghs_prologue_func and __ghs_epilogue_func (even if FEE
// logging is not enabled). -DGHS_FEE_COLLECT must also be included in the gpj
// file for the user program, in order to allow access to all of the functions
// that this library provides.
//
// In order to log FEE data, the -Xprologue_epilogue_hooks_noinline compiler
// flag must be set. Note that the user program may choose to either log FEE
// data, variable data, or both.
//
// If longjmps occur in the user program, and FEE data is to be collected,
// -lnk0="--wrap=longjmp" -Wl,-whole-archive -Wl,-lghseagle
// -Wl,-no-whole-archive compiler flags must be used in place of the -lghseagle
// needed to link in this library statically.
//
// The user program may also call into any of the functions below to control
// what is logged more precisely. These functions allow the user program to
// log custom variables and reset the buffer to a new size, erasing previous
// data.
//
// Note that all logs are allocated in the library itself, and no allocation or
// freeing of memory is required by the user program.
//
///////////////////////////////////////////////////////////////////////////////
//                         Current Known Limitations                         //
///////////////////////////////////////////////////////////////////////////////
// 1. This library is not meant to work with 64-bit programs.
// 2. Do not rely on this library to gather data from signal handlers.
// 3. If used with a shared object which may be loaded by a multi-threaded
//    program, the shared object must be built with -pthead.
// 4. All characters in input strings are assumed to be ASCII.
// 5. The only supported threading libraries this may be used with are pthreads
//    on Linux, and WinThreads on Windows.
// 6. Longjmp in Windows is not supported.
// 7. Must be run on an Intel x86 chip with constant_tsc flag enabled (can be
//    determined through /proc/cpuinfo file in Linux).
// 8. Thread-safety is not guaranteed on Windows when using VC below version 9.
// 9. In Windows, multi-fiber systems may include this library, but only the
//    first fiber will have viewable data.
//    

#ifndef __GHS_EAGLE__H_
#define __GHS_EAGLE__H_

#if defined GHS_FEE_COLLECT && (HOST==GHS_WIN32 || HOST==GHS_LINUX86)
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif
///////////////////////////////////////////////////////////////////////////////
//                                 Logging API                               //
///////////////////////////////////////////////////////////////////////////////
// Each logging function (of the form EAGLE_LogX) takes in the name of the
// variable, as well as the value which should be logged. No checking is done
// for variable name collisions, and the type of the variable is determined by
// the logging function used. All functions have a stateful parameter, which,
// when true, makes the variable's value stay in effect until the next log
// point for that variable, as opposed to being in effect for a single instance
// in time otherwise. The variable name must be non-null, but NULL may be
// passed as the value into EAGLE_LogStr. When the variable is stateful and
// NULL is passed as the value, the variable is stateless until a new state
// is given. If the variable is not stateful, the effect is the same as passing
// in the empty string. The name of any given variable will be cut off after
// 256 characters, and any string variable value will be cut off after 16 KB.
// An example of some code which uses these functions is as follows:
//
// Code:
// int fib(int n)
// { // <--- If FEE logging is enabled, function entry is logged
//      int returnVal = 0;   
// 	EAGLE_LogStr("State", "Logging Variables", true);
//  	EAGLE_LogU32("nValue", n, false);
// 	EAGLE_LogStr("State", "Find Fibonacci Value", true);
// 	if(n == 0)
//		returnVal = 0;
// 	else if(n == 1)
//		returnVal = 1;
//	else
//		returnVal = fib(n - 1) + fib(n - 2);
//	EAGLE_LogU32("returnVal", returnVal);
//	EAGLE_LogStr("State", NULL, true);
// } // <--- If FEE logging is enabled, function exit is logged.
//
// The history view of this code for fib(1) might look like:
#if 0
 State:        |Logging Variables| Find Fibonacci Value |
 nValue:                1
 returnVal:                                          1
 FEE:	      |                        main                         |
            '-----------------------------------------------------'
             |                    fib                     |
             '--------------------------------------------'
#endif
void EAGLE_LogU32(const char* name, uint32_t    value, bool stateful);
void EAGLE_LogI32(const char* name, int32_t     value, bool stateful);
void EAGLE_LogU64(const char* name, uint64_t    value, bool stateful);
void EAGLE_LogI64(const char* name, int64_t     value, bool stateful);
void EAGLE_LogFlt(const char* name, float       value, bool stateful);
void EAGLE_LogDbl(const char* name, double      value, bool stateful);
void EAGLE_LogStr(const char* name, const char* value, bool stateful);

///////////////////////////////////////////////////////////////////////////////
//                         Buffer Control Functions                          //
///////////////////////////////////////////////////////////////////////////////
// EAGLE_ResetBuffer erases the current buffer's contents, changing the size of
// the buffer from the default 10 MB to the given size. If the buffer cannot be
// created to the given size, the current buffer is kept without modification.
// The buffer size change is in effect for the current process or thread and
// any child processes created after the call to EAGLE_ResetBuffer. Any child
// threads use the buffer size which was last passed into this function.
// Note that a FEE entry takes up 12 bytes, and a variable entry takes up
// 12 - 20 bytes (depending on the type of variable), plus the length of the
// name and the length of the value (if a string or state variable). This
// means that the default 10 MB will allow 873,813 FEE entries, or 349,525
// 64 bit variable entries with a variable name of 10 characters long.
// Depending on the program itself, this might allow between 10 ms - 5 seconds
// worth of data.
void EAGLE_ResetBuffer(int newSize);

#ifdef __cplusplus
}
#endif

#else
// If we are not linking the GHS_Eagle library (i.e. GHS_FEE_COLLECT is not
// defined, as mentioned above), or we are on a platform that is not supported
// yet, we just #define the above functions to be nothing, so that
// the code will not affect the compiled executable.
#define EAGLE_LogU32(name, value, stateful);
#define EAGLE_LogI32(name, value, stateful);
#define EAGLE_LogU64(name, value, stateful);
#define EAGLE_LogI64(name, value, stateful);
#define EAGLE_LogStr(name, value, stateful);
#define EAGLE_LogDbl(name, value, stateful);
#define EAGLE_LogFlt(name, value, stateful);
#define EAGLE_ResetBuffer(newSize);
#endif // defined GHS_FEE_COLLECT && (HOST==GHS_WIN32 || HOST==GHS_LINUX86)
#endif // #ifndef __GHS_EAGLE__H_
