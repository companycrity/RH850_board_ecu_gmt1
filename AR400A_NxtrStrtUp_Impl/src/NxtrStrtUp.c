/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name: NxtrStrtUp.c
* Module Description: Low level microcontroller startup library
* Project           : CBD
* Author            : Jared Julien
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       kzdyfh %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 12/10/15  1        JWJ       Initial Version                                                                 EA4#9023
* 12/21/15  2        JWJ       Fixed attempted QAC warning correction resulting in endless loop                EA4#9023
**********************************************************************************************************************/

#include "NxtrStrtUp.h"


/********************************************** Function Prototypes ***************************************************/
static void MemCopy(void *s1, const void *s2, nxtrsize_t n);


/************************************************ Global Functions ****************************************************/
/*----------------------------------------------------------------------*/
/* Entry Point ___nxtr_strt_up - called from NxtrStrtUp.850 */
/*----------------------------------------------------------------------*/

void __nxtr_strt_up(void)
{
	unsigned long idx;

/*----------------------------------------------------------------------*/
/* Clear BSS */
/*----------------------------------------------------------------------*/

	/* Initialization of LRAM self area with '0' */
	for(idx = 0xfede0000U; idx < 0xfee00000U; idx += 4U)
	{
		*(unsigned long *)idx = 0UL;
	}

/*----------------------------------------------------------------------*/
/* Copy from ROM to RAM */
/*----------------------------------------------------------------------*/
#pragma ghs nowarning 1235
	void **b = (void **) ((char *)__ghsbinfo_copy);
	void **e = (void **) ((char *)__ghseinfo_copy);
#pragma ghs endnowarning 1235

	while (b != e)
	{
		void * t;  /* target pointer */
		void * s;  /* source pointer */
		nxtrsize_t n;  /* copy n bytes */
		t = (char *)(*b);
		b++;
		s = (char *)(*b++);
		n = *((nxtrsize_t *) b);
		b++;
		MemCopy(t, s, n);
	}


	/*** RAM SECTIONS ARE NOW FULLY INITIALIZED ***/
	/* IT IS NOW SAFE TO USE ARBITRARY GLOBAL VARIABLES */

	/* crt1 has been removed from the library as there is no appreciable need for it.  Instead, lets call main
	 * directly from here.  Also, because we have no use for the arguments from the main function, change the
	 * format to int/void.  The return is ignored, but the compiler doesn't like to to be void.
	 */
	(void)main();

	while (1)
	{
		/* Main should never return - capture it if it does.
		 * Note: The exit() function has been removed as there is no need for it and compiler qualification as also
		 * indicated that it cannot exist in the code. 
		 */
	}
}

/************************************************ Local Functions ****************************************************/
static void MemCopy(void *s1, const void *s2, nxtrsize_t n)
{
	if (are_both_aligned(s1, s2, int))
	{
		while (n >= (4U * sizeof(int)))
		{
			n -= 4U * sizeof(int);
			copy_four_by_type(s1, s2, int);
	    }
	    while (n >= sizeof(int))
		{
			n -= sizeof(int);
			copy_one_by_type(s1, s2, int);
		}
	}
	else if (are_both_aligned(s1, s2, short))
	{
		while (n >= (4U * sizeof(short)))
		{
			n -= 4U * sizeof(short);
			copy_four_by_type(s1, s2, short);
		}
		while (n >= sizeof(short))
		{
			n -= sizeof(short);
			copy_one_by_type(s1, s2, short);
		}
	}
	else
	{
		while (n >= (4U * sizeof(char)))
		{
			n -= 4U * sizeof(char);
			copy_four_by_type(s1, s2, char);
		}
	}

	while (((signed_nxtrsize_t)--n) >= 0)
	{
		copy_one_by_type(s1, s2, char);
	}
}

/************************************************* End of Functions ***************************************************/
