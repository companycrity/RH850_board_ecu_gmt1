/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name: ind_crt0.c
* Module Description: Low level microcontroller startup library
* Project           : CBD
* Author            : Jared Julien
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       kzdyfh %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 12/10/15  1        JWJ       Initial Version                                                                 EA4#9023
**********************************************************************************************************************/

#ifndef __NXTRSTRTUP_H
#define __NXTRSTRTUP_H

/********************************************** Local Type Definitions ************************************************/
#if __PTR_BIT == __INT_BIT
    typedef unsigned int nxtrsize_t;
    typedef signed int signed_nxtrsize_t;
#elif __PTR_BIT == __LONG_BIT
    typedef unsigned long nxtrsize_t;
    typedef signed long signed_nxtrsize_t;
#elif __PTR_BIT == __LLONG_BIT
    typedef unsigned long long nxtrsize_t;
    typedef signed long long signed_nxtrsize_t;
#else
    typedef unsigned long nxtrsize_t;
    typedef signed long signed_nxtrsize_t;
#endif

typedef void  rodata_ptr(void);


/*********************************************** Extern Statements ****************************************************/
extern void __nxtr_strt_up(void);
extern int main(void);

#pragma ghs rodata
extern rodata_ptr __ghsbinfo_copy;
#pragma ghs rodata
extern rodata_ptr __ghseinfo_copy;

/************************************************* Local Macros *******************************************************/
#define are_both_aligned(x, y, type) (((((nxtrsize_t)(x))|((nxtrsize_t)(y))) &(sizeof(type)-1U)) == 0U)

#define copy_one_by_type(x, y, type)     \
{                                        \
	type * tx = (type *)(x);             \
	const type * ty = (const type *)(y); \
	*tx++ = *ty++;                       \
	(x) = tx;                            \
	(y) = ty;                            \
} (void)0

#define copy_four_by_type(x, y, type)    \
{                                        \
	type * tx = (type *)(x);             \
	const type * ty = (const type *)(y); \
	*tx++ = *ty++;                       \
	*tx++ = *ty++;                       \
	*tx++ = *ty++;                       \
	*tx++ = *ty++;                       \
	(x) = tx;                            \
	(y) = ty;                            \
} (void)0


#endif
