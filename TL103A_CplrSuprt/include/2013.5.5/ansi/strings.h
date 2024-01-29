/*
			ISO C Runtime Library

	Copyright (c) 1983-2013 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef _STRINGS_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _STRINGS_H

#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

#if defined(__STDC__) || defined(__cplusplus)
#define __ARGS(x)               x
#define __VOIDPTR               void
#elif defined(__PROTOTYPES__) || defined(__EDG__)
#define __ARGS(x)               x
#define __VOIDPTR               char
#else
#define __ARGS(x)               ()
#define __VOIDPTR               char
#endif

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log push on
#endif

int bcmp	__ARGS((const void *, const void *, size_t));
void bcopy	__ARGS((const void *, void *, size_t));
void bzero	__ARGS((void *, size_t));
#if !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)
char*index  	__ARGS((const char *, int));
char*rindex 	__ARGS((const char *, int));
int  ffs    	__ARGS((int));
#endif

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log pop
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif	/* _STRINGS_H */
