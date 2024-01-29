/**********************************************************************************************************************
* Copyright 2015,2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_RamMemNonRte.c 
* Module Description: Implements the non-RTE functionality of CM103A RAM Memory
* Project           : CBD
* Author            : Kathleen Creager
***********************************************************************************************************************
* Version Control:
* %version:          5 %
* %derived_by:       rzk04c %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 10/06/15   1       KMC       Initial Version                                                                EA4#1846
* 04/07/16   2       Selva     Updated to V2.1.0 of the FDD design                                            EA4#5097
* 04/17/16   3       Selva     Remove SetMcuDiagData from "SpiDblBitEcc"                                      EA4#5097
* 06/27/16   4       Selva     Created local functions for reducing cyclometric complexity                    EA4#6263
* 08/20/16   5       AJM       Changed SPI double bit handling from Interrupt to Polling                      EA4#6658
**********************************************************************************************************************/
#include <v800_ghs.h> /* for SYNCM intrinsic */  
#include "Rte_CDD_RamMem.h"
#include "CDD_RamMem.h"
#include "ecc_regs.h" /* for ECCCPU1ERROVF*, etc. */
#include "Os.h" /* for SuspendAllInterrupts(), ResumeAllInterrupts() */
#include "NxtrMcuSuprtLib.h" /* for NxtrSwRstFromExcpn() */
#include "CDD_ExcpnHndlg.h" /* for McuDiagc1 enumeration definitions */

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 11.3 [NXTRDEV 11.3.3]: Cast of an integer to a pointer is required for reading from computed addresses as needed for micro controller diagnostics*/

#define LCLRAMBASADR_CNT_U32 0xFEB80000U  /* base address of local RAM */
/* on R7F701311, local RAM actually starts at 0xFEBE0000 -- base address is 0xFEB80000 and offset starts at 0x00060000 */

#define VLDADRTESTBITMASK_CNT_U32  0xFFFE0000U  /* mask these bits to check for valid address offset */
#define VLDADRTESTRES_CNT_U32      0x00060000U  /* passing result of valid address offset test */

#define WORDLINEADRMASK_CNT_U32    0xFFFFFF1FU  /* address mask for determining addresses in same word line */

#define BNK0ERRCLRMASK_CNT_U32     0x00000001U  /* bit mask to clear bank 0 errors */
#define BNK1ERRCLRMASK_CNT_U32     0x00000002U  /* bit mask to clear bank 1 errors */
#define BNK2ERRCLRMASK_CNT_U32     0x00000004U  /* bit mask to clear bank 2 errors */
#define BNK3ERRCLRMASK_CNT_U32     0x00000008U  /* bit mask to clear bank 3 errors */

#define BNK0SNGBITERRMASK_CNT_U32  0x00000001U  /* bit mask for bank 0 single bit ECC error flag */
#define BNK1SNGBITERRMASK_CNT_U32  0x00000100U  /* bit mask for bank 1 single bit ECC error flag */
#define BNK2SNGBITERRMASK_CNT_U32  0x00010000U  /* bit mask for bank 2 single bit ECC error flag */
#define BNK3SNGBITERRMASK_CNT_U32  0x01000000U  /* bit mask for bank 3 single bit ECC error flag */

static FUNC(void, CDD_RamMem_CODE) RamFailrModClassnChk (uint32 LclRamFailrAdr_Cnt_T_u32, uint32 ErrClrMask_Cnt_T_u32, uint32 SngBitErrMask_Cnt_T_u32);
static FUNC(void, CDD_RamMem_CODE) RamMemLclRamFailrChk( uint32 LclRamFailrAdr_Cnt_T_u32 );

#define CDD_RamMem_START_SEC_CODE 
#include "CDD_RamMem_MemMap.h"



/*****************************************************************************************************************
 * Name        :   RamMemLclRamSngBitEcc
 * Description :   Local RAM Single bit ECC exception handler callback for the CM103A RamMem component 
 * Inputs      :   None
 * Outputs     :   None
 * Usage Notes :   Called from Mcu EI interrupt handler MCU_ECM_EIC_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_RamMem_CODE) RamMemLclRamSngBitEcc(void)
{ 	
	SuspendAllInterrupts();
	
	/* Identify responsible bank - Check for Bank 0 */
	if (ECCCPU1ERROVF0 == 1U) 
	{
		/* Bank 0 Overflow detected */

		/* Check if the saved address in the valid range */
		*Rte_Pim_LclRamFailrAdr() = (uint32)(ECCCPU1LR1STEADR0_PE1 << 4);  
		RamMemLclRamFailrChk( *Rte_Pim_LclRamFailrAdr());
		
		/* Compute valid RAM address ('or' with base address of local RAM) */
		*Rte_Pim_LclRamFailrAdr() = *Rte_Pim_LclRamFailrAdr() | LCLRAMBASADR_CNT_U32; 
		
		/* Overflow detected with valid address on first error; reset and save the valid address */
		NxtrSwRstFromExcpn (MCUDIAGC_LCLRAMECCSNGBITHARDFAILR, *Rte_Pim_LclRamFailrAdr());
	}
	
	/* No overflow - check for Bank 0 single bit failure */
	else if (ECCCPU1SEDF0 == 1U)
	{
		/* Bank 0 single bit failure flagged */

		/* Check if the saved address in the valid range */
		*Rte_Pim_LclRamFailrAdr() = (uint32)(ECCCPU1LR1STEADR0_PE1 << 4);  
		RamMemLclRamFailrChk( *Rte_Pim_LclRamFailrAdr());
		/* Compute valid RAM address ('or' with base address of local RAM) */
		*Rte_Pim_LclRamFailrAdr() = *Rte_Pim_LclRamFailrAdr() | LCLRAMBASADR_CNT_U32; 

		/* Clear RAM Bank 0 error info only - overflow flag, error status flag, and error address */
		ECCCPU1STCLR0 = 1U;
				
		/* Check for multibit errors or address errors disguised as single bit */
		RamFailrModClassnChk (*Rte_Pim_LclRamFailrAdr(), BNK0ERRCLRMASK_CNT_U32, BNK0SNGBITERRMASK_CNT_U32);
	}
	else
	{
		/* do nothing */
	}
	
	/* Identify responsible bank - Check for Bank 1 */
	if (ECCCPU1ERROVF1 == 1U)  
	{
		/* Bank 1 Overflow detected */

		/* Check if the saved address in the valid range */
		*Rte_Pim_LclRamFailrAdr() = (uint32)(ECCCPU1LR1STEADR1_PE1 << 4) | 0x04U;  
		RamMemLclRamFailrChk( *Rte_Pim_LclRamFailrAdr());
		/* Compute valid RAM address ('or' with base address of local RAM) */
		*Rte_Pim_LclRamFailrAdr() = *Rte_Pim_LclRamFailrAdr() | LCLRAMBASADR_CNT_U32; 
		
		/* Overflow detected with valid address on first error; reset and save the valid address */
		NxtrSwRstFromExcpn (MCUDIAGC_LCLRAMECCSNGBITHARDFAILR, *Rte_Pim_LclRamFailrAdr());
	}
	
	/* No overflow - check for Bank 1 single bit failure */
	else if (ECCCPU1SEDF1 == 1U)
	{
		/* Bank 1 single bit failure flagged */

		/* Check if the saved address in the valid range */
		*Rte_Pim_LclRamFailrAdr() = (uint32)(ECCCPU1LR1STEADR1_PE1 << 4) | 0x04U;  
		RamMemLclRamFailrChk( *Rte_Pim_LclRamFailrAdr());
		/* Compute valid RAM address ('or' with base address of local RAM) */
		*Rte_Pim_LclRamFailrAdr() = *Rte_Pim_LclRamFailrAdr() | LCLRAMBASADR_CNT_U32; 

		/* Clear RAM Bank 1 error info only - overflow flag, error status flag, and error address */
		ECCCPU1STCLR1 = 1U;
				
		/* Check for multibit errors or address errors disguised as single bit */
		RamFailrModClassnChk (*Rte_Pim_LclRamFailrAdr(), BNK1ERRCLRMASK_CNT_U32, BNK1SNGBITERRMASK_CNT_U32);
	}
	else
	{
		/* do nothing */
	}

	/* Identify responsible bank - Check for Bank 2 */
	if (ECCCPU1ERROVF2 == 1U) 
	{
		/* Bank 2 Overflow detected */

		/* Check if the saved address in the valid range */
		*Rte_Pim_LclRamFailrAdr() = (uint32)(ECCCPU1LR1STEADR2_PE1 << 4) | 0x08U;  
		RamMemLclRamFailrChk( *Rte_Pim_LclRamFailrAdr());
		/* Compute valid RAM address ('or' with base address of local RAM) */
		*Rte_Pim_LclRamFailrAdr() = *Rte_Pim_LclRamFailrAdr() | LCLRAMBASADR_CNT_U32; 
		
		/* Overflow detected with valid address on first error; reset and save the valid address */
		NxtrSwRstFromExcpn (MCUDIAGC_LCLRAMECCSNGBITHARDFAILR, *Rte_Pim_LclRamFailrAdr());
	}
	
	/* No overflow - check for Bank 2 single bit failure */
	else if (ECCCPU1SEDF2 == 1U)
	{
		/* Bank 2 single bit failure flagged */

		/* Check if the saved address in the valid range */
		*Rte_Pim_LclRamFailrAdr() = (uint32)(ECCCPU1LR1STEADR2_PE1 << 4) | 0x08U;  
		RamMemLclRamFailrChk( *Rte_Pim_LclRamFailrAdr());
		/* Compute valid RAM address ('or' with base address of local RAM) */
		*Rte_Pim_LclRamFailrAdr() = *Rte_Pim_LclRamFailrAdr() | LCLRAMBASADR_CNT_U32; 

		/* Clear RAM Bank 2 error info only - overflow flag, error status flag, and error address */
		ECCCPU1STCLR2 = 1U;
				
		/* Check for multibit errors or address errors disguised as single bit */
		RamFailrModClassnChk (*Rte_Pim_LclRamFailrAdr(), BNK2ERRCLRMASK_CNT_U32, BNK2SNGBITERRMASK_CNT_U32);
	}
	else
	{
		/* do nothing */
	}
    
	/* Identify responsible bank - Check for Bank 3 */
	/* Identify responsible bank - Check for Bank 3 */
	if (ECCCPU1ERROVF3 == 1U) 
	{
		/* Bank 3 Overflow detected */

		/* Check if the saved address in the valid range */
		*Rte_Pim_LclRamFailrAdr() = (uint32)(ECCCPU1LR1STEADR3_PE1 << 4) | 0x0CU;  
		
		RamMemLclRamFailrChk( *Rte_Pim_LclRamFailrAdr());
		/* Compute valid RAM address ('or' with base address of local RAM) */
		*Rte_Pim_LclRamFailrAdr() = *Rte_Pim_LclRamFailrAdr() | LCLRAMBASADR_CNT_U32; 
		
		/* Overflow detected with valid address on first error; reset and save the valid address */
		NxtrSwRstFromExcpn (MCUDIAGC_LCLRAMECCSNGBITHARDFAILR, *Rte_Pim_LclRamFailrAdr());
	}
	
	/* No overflow - check for Bank 3 single bit failure */
	else if (ECCCPU1SEDF3 == 1U)
	{
		/* Bank 3 single bit failure flagged */

		/* Check if the saved address in the valid range */
		*Rte_Pim_LclRamFailrAdr() = (uint32)(ECCCPU1LR1STEADR3_PE1 << 4) | 0x0CU;  
		RamMemLclRamFailrChk( *Rte_Pim_LclRamFailrAdr());
		/* Compute valid RAM address ('or' with base address of local RAM) */
		*Rte_Pim_LclRamFailrAdr() = *Rte_Pim_LclRamFailrAdr() | LCLRAMBASADR_CNT_U32; 

		/* Clear RAM Bank 3 error info only - overflow flag, error status flag, and error address */
		ECCCPU1STCLR3 = 1U;
				
		/* Check for multibit errors or address errors disguised as single bit */
		RamFailrModClassnChk (*Rte_Pim_LclRamFailrAdr(), BNK3ERRCLRMASK_CNT_U32, BNK3SNGBITERRMASK_CNT_U32);
	}
	else
	{
		/* do nothing */
	}
	
	ResumeAllInterrupts();
}



/*****************************************************************************************************************
 * Name        :   RamFailrModClassnChk
 * Description :    for the CM103A RamMem component 
 * Inputs      :   None
 * Outputs     :   None
 * Usage Notes :   Called from RamMemLclRamSngBitEcc
 ****************************************************************************************************************/
static FUNC(void, CDD_RamMem_CODE) RamFailrModClassnChk (uint32 LclRamFailrAdr_Cnt_T_u32, uint32 ErrClrMask_Cnt_T_u32, uint32 SngBitErrMask_Cnt_T_u32)
{	
	VAR(uint32, AUTOMATIC) WordLineAdr_Cnt_T_u32;
	VAR(uint8, AUTOMATIC)  WordLineAdrIdx_Cnt_T_u08;
	
	WordLineAdr_Cnt_T_u32 = LclRamFailrAdr_Cnt_T_u32 & WORDLINEADRMASK_CNT_U32;
	
	*Rte_Pim_LclRamEccSngBitSoftFailr() = TRUE;
	for  (WordLineAdrIdx_Cnt_T_u08 = 0U;(WordLineAdrIdx_Cnt_T_u08 < 8U); WordLineAdrIdx_Cnt_T_u08 ++)
	{
		*Rte_Pim_LclRamWordLineRead() = *(uint32 *)WordLineAdr_Cnt_T_u32;
		WordLineAdr_Cnt_T_u32 = WordLineAdr_Cnt_T_u32 + 0x00000020U;
		
	}
	__SYNCM(); /* Wait until read from the RAM word line is complete */
	ECCCPU1LRSTCLR_PE1 = ErrClrMask_Cnt_T_u32;  
		
	
}

/*****************************************************************************************************************
 * Name        :   RamMemLclRamFailrChk
 * Description :    for the CM103A RamMem component 
 * Inputs      :   None
 * Outputs     :   None
 * Usage Notes :   Called from RamMemLclRamFailrChk
 ****************************************************************************************************************/
static FUNC(void, CDD_RamMem_CODE) RamMemLclRamFailrChk( uint32 LclRamFailrAdr_Cnt_T_u32 )
{
	if ((LclRamFailrAdr_Cnt_T_u32 & VLDADRTESTBITMASK_CNT_U32) != VLDADRTESTRES_CNT_U32)
		{
			/* Invalid Address Found; reset and save the invalid address */
			NxtrSwRstFromExcpn (MCUDIAGC_LCLRAMECCSNGBITHARDFAILR, LclRamFailrAdr_Cnt_T_u32);
		}
	
}	


#define CDD_RamMem_STOP_SEC_CODE 
#include "CDD_RamMem_MemMap.h"
