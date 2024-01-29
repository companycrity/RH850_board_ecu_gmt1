/**********************************************************************************************************************
* Copyright 2015,2016 Nexteer 
* Nexteer Confidential
*
* Module File Name: CDD_FlsMemNonRte.c
* Module Description: Flash Memory Complex Driver NonRte Functionality
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          8 %
* %derived_by:       rzk04c %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 10/05/15  1        LWW       Initial Version                                                                 EA4#1830
* 01/11/16  2        AJM       Changes for Flash CRC Region check					       					   EA4#3245 
* 01/15/16  3        AJM       Changes DTS interrupt enable on second last channel							   EA4#3245
* 03/09/16  4        Selva     Updated to FDD v2.2 (ChkForStrtUpTest added at Init)							   EA4#3820
* 03/29/16  5		 AJM       Added the DTS Transfer Flag Clear functionality   							   EA4#5005
* 03/31/16  6	     AJM       Removed Code Flash Single Bit ECC error handler and disabling the DTS after use EA4#4960 
* 08/20/16  7	     AJM       Added ISR handler for single bit ECC error			 						   EA4#6660
* 08/31/16  8	     AJM       Added handling for code flash hard fault				 						   EA4#7340
**********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include "CDD_FlsMem.h"
#include "CDD_FlsMem_Cfg_private.h"
#include "Rte_CDD_FlsMem.h" 
#include "CDD_SyncCrc.h"
#include "CDD_NxtrTi.h"
#include "ecc_regs.h"
#include "CDD_ExcpnHndlg.h"
#include "dma_regs.h"
#include "NxtrMcuSuprtLib.h"
#include "Os.h"
#include "intc_regs.h"

/* MISRA-C:2004 Rule 11.3 [NXTRDEV 11.3.2]	Cast of a variable address to an integer type required for writing a variable address to a register. */
 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

VAR(uint32, AUTOMATIC) HwCrcCalcdRes_C[8] = {0U,0U,0U,0U,0U,0U,0U,0U};
    
#define CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"
    
 
#define CPU1PEID_CNT_U32 				((uint32)0x01U)
#define CODFLSTOCRCSPID_CNT_U32			((uint32)0x02U)  			/* Code Flash to CRC Peripheral SPID = 2U */
#define CRCTOLCLRAMSPID_CNT_U32			((uint32)0x00U)  			/* CRC Peripheral to Local RAM SPID = 0U */
  
#define USRMODDIS_CNT_U32				((uint32)0x0U)  			/* User Mode Bit : 1: User Mode Access Disabled */

#define FLSBLKLEN_CNT_U32				((uint32)0x0003FFFCU)		/* Max Transfer is 0xFFFF * 4 bytes per transfer */
#define DTSDATALEN_CNT_U32				((uint32)4U)		

#define DUMMYREADADDR1_CNT_U32			(0xFFFFFE1FU)
#define DUMMYREADADDR2_CNT_U32			(0xFFFFFE2FU)
#define DUMMYREADADDR3_CNT_U32			(0xFFFFFE4FU)
#define DUMMYREADADDR4_CNT_U32			(0xFFFFFE8FU)

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/

/******************************************** Module Specific Variables **********************************************/
#define CDD_FlsMem_START_SEC_CODE
#include "CDD_FlsMem_MemMap.h"

static const uint32 CrcClrData_M = 0U;	/* Clear variable for the CRC HW */

#define CDD_FlsMem_STOP_SEC_CODE
#include "CDD_FlsMem_MemMap.h"
/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/
#define CDD_FlsMem_START_SEC_CODE
#include "CDD_FlsMem_MemMap.h"

/**********************************************************************************************************************
  * Name:        FlsMemInit2
  * Description: Non-RTE Function to Initilaize the DTS after allocating a CRC hardware
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: To be called from Startup Sequence
  ********************************************************************************************************************/
FUNC(void, CDD_FlsMem_CODE) FlsMemInit2(void)
{

	VAR (uint32, AUTOMATIC) CrcHwIdxInReg_T_u32 = (uint32)0U;
	VAR (uint32, AUTOMATIC) CrcHwIdxOutReg_T_u32 = (uint32)0U;
	VAR (Std_ReturnType, AUTOMATIC) RetVal_T_StdType;
	VAR(boolean,AUTOMATIC) ExecStrtUpTest_Cnt_T_logl; 
	
    (void)ChkForStrtUpTest_Oper(&ExecStrtUpTest_Cnt_T_logl);
	if(ExecStrtUpTest_Cnt_T_logl == TRUE)
	{
		*Rte_Pim_CrcHwIdxKey() = 0U;
	
		RetVal_T_StdType = ResvCrcHwUnit_Oper(CRCHWRESVMOD_RESV, CRCHWRESVCFG_32BITCRC32BITWIDTH, &CrcHwIdxInReg_T_u32, &CrcHwIdxOutReg_T_u32, 0u, Rte_Pim_CrcHwIdxKey());

		if( E_OK == RetVal_T_StdType )
		{
			/* DTS_Init is called as a trusted function */
			Call_DtsInin(CrcHwIdxInReg_T_u32,CrcHwIdxOutReg_T_u32);
		}
		
		/* capture the system time and store to PIM */
		GetRefTmr100MicroSec32bit_Oper(Rte_Pim_CodFlsCrcChkStrtTi());
	}
	else
	{
		*Rte_Pim_PwrOnRstCrcChkCmpl() = TRUE;
	}

}

/**********************************************************************************************************************
  * Name:        DtsInin
  * Description: DTS Register Setup Function
  * Inputs:      CrcHwIdxInReg,CrcHwIdxOutReg
  * Outputs:     NONE
  * Usage Notes: To be called from FlsMemInit2
                 Need to run in Supervisor mode
  ********************************************************************************************************************/

FUNC(void, CDD_FlsMem_CODE) DtsInin(uint32 CrcHwIdxInReg, uint32 CrcHwIdxOutReg) 
{
 
	VAR (uint8, AUTOMATIC) NrOfChPerRegn_Cnt_T_u08 = (uint8)0U;
	VAR (uint8, AUTOMATIC) Loop_Cnt_T_u08 = (uint8)0U;
	VAR (uint8, AUTOMATIC) ChNr_Cnt_T_u08  = (uint8)0U;
	VAR (uint8, AUTOMATIC) NrOfCrcRegn_Cnt_T_u08 ;
	VAR (sint32, AUTOMATIC) TempCrcFlsBlkLen_Cnt_T_s32;
	
	for (NrOfCrcRegn_Cnt_T_u08 = 0U; NrOfCrcRegn_Cnt_T_u08 < NROFFLSCRCREGNS_CNT_U08; NrOfCrcRegn_Cnt_T_u08++)
	{
        TempCrcFlsBlkLen_Cnt_T_s32 = (sint32)FlsCfgTbl[NrOfCrcRegn_Cnt_T_u08].CrcFlsBlkLen;
		
	    while(TempCrcFlsBlkLen_Cnt_T_s32 > 0)
		{
		    NrOfChPerRegn_Cnt_T_u08++;
		    TempCrcFlsBlkLen_Cnt_T_s32 -= (sint32)FLSBLKLEN_CNT_U32;
		}
		
		while(0U < NrOfChPerRegn_Cnt_T_u08 )
		{
			DTSMstrCfg[ChNr_Cnt_T_u08].DTSnnnCM.UINT32 = ((uint32)CPU1PEID_CNT_U32 << 4)
														| ((uint32)CODFLSTOCRCSPID_CNT_U32 << 2)
														| ((uint32)USRMODDIS_CNT_U32 << 1);
			/* Clear the DTSFSL transfer request bit */
			DTSCfg[ChNr_Cnt_T_u08].DMASSDTFSC.BIT.DRQC = (uint32)1U;
		
			/* Start address of the block */
			DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTSA.UINT32 = (uint32)((FlsCfgTbl[NrOfCrcRegn_Cnt_T_u08].CrcFlsBlkStrtAdr+
														(Loop_Cnt_T_u08 * FLSBLKLEN_CNT_U32))) ;
			
			/* Destination address is the CRC input register address which shall be 
			returned by the Reserve CRC function */
			DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTDA.UINT32 = CrcHwIdxInReg;				
			
			/* Set the count register with 0xFFFF if there is a chain down for the 
			block of flash. If not get the length of the transfer block in the 
			last chain and set it in the transfer count register */
			if(1U == NrOfChPerRegn_Cnt_T_u08 )
			{
				DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTTC.UINT32 = 
								(uint32)((FlsCfgTbl[NrOfCrcRegn_Cnt_T_u08].CrcFlsBlkLen - (Loop_Cnt_T_u08 *FLSBLKLEN_CNT_U32))/DTSDATALEN_CNT_U32);
			}
			else
			{
				DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTTC.UINT32 = 
								(uint32)(FLSBLKLEN_CNT_U32/DTSDATALEN_CNT_U32);
			}
			
			DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTTCT.UINT32 = ((uint32)0x00U << 28)				/* Reserved */
											|	((uint32)0x00U << 27)				/* DMA transfer when transfer errored */
											|	(((uint32)((uint32)ChNr_Cnt_T_u08 +1U)<< 18)	/* Next Channel in Chain */
											|	((uint32)0x01U << 16))				/* Chain Enable: Chain at last Transfer */
											|	((uint32)0x00U << 15)				/* Disable - Transfer count match interrupt  */
											|	((uint32)0x00U << 14)				/* Disable - Transfer completion interrupt  */
											|	((uint32)0x00U << 11)				/* Disable -Reload function 2 */
											|	((uint32)0x00U << 9)				/* Disable- Reload Function 1 */
											|	((uint32)0x02U << 7)				/* Fixed -Destinable address count direction */
											|	((uint32)0x00U << 5)				/* Increment - Source Address count direction */
											|	((uint32)0x02U << 2)				/* Transfer Data Size - 32 bits */
											|	((uint32)0x01U << 0);				/* Block transfer 1 by transfer count */


			/* Enable - Channel Operation */										
			DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTFSL.BIT.REQEN = (uint32)1U;							
			
			NrOfChPerRegn_Cnt_T_u08--;
			/* Next Chain in DTS */
			ChNr_Cnt_T_u08++;
			
			Loop_Cnt_T_u08++;
		}
		
		Loop_Cnt_T_u08 = 0U;
		
		/* DTS to transfer the Data from the CRC module to the local RAM*/
		DTSMstrCfg[ChNr_Cnt_T_u08 ].DTSnnnCM.UINT32 = ((uint32)CPU1PEID_CNT_U32 << 4)
												| ((uint32)CRCTOLCLRAMSPID_CNT_U32 << 2)
												| ((uint32)USRMODDIS_CNT_U32 << 1);
		/* Clear the DTSFSL transfer request bit */										
		DTSCfg[ChNr_Cnt_T_u08].DMASSDTFSC.BIT.DRQC = (uint32)1U;
												
		/* Start address of the DTS transfer is the CRC HW output address*/
		DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTSA.UINT32 = CrcHwIdxOutReg;   
		
		/* Destination address is the destination register address where 
		the calculated CRC shall be saved */
		DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTDA.UINT32 = (uint32)&(HwCrcCalcdRes_C[NrOfCrcRegn_Cnt_T_u08]);
		
		/* Transfer Count is one 32 bit CRC data */
		DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTTC.UINT32 = (uint32)0x1U;
		
		DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTTCT.UINT32 = 	((uint32)0x00U << 28)				/* Reserved */
											|	((uint32)0x00U << 27)				/* DMA transfer when transfer errored */
											|	((uint32)((uint32)ChNr_Cnt_T_u08 +1U)<< 18)		/* Next Channel in Chain */
											|	((uint32)0x01U << 16)				/* Chain Enable */
											|	((uint32)0x00U << 15)				/* Disable - Transfer count match interrupt  */
											|	((uint32)0x00U << 14)				/* Disable - Transfer completion interrupt  */
											|	((uint32)0x00U << 11)				/* Disable -Reload function 2 */
											|	((uint32)0x00U << 9)				/* Disable- Reload Function 1 */
											|	((uint32)0x02U << 7)				/* Fixed -Destinable address count direction */
											|	((uint32)0x00U << 5)				/* Increment - Source Address count direction */
											|	((uint32)0x02U << 2)				/* Transfer Data Size - 32 bits */
											|	((uint32)0x01U << 0);				/* Block transfer 1 by transfer count */
		
		/* Enable - Channel Operation */	
		DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTFSL.BIT.REQEN = (uint32)1U;
		/* Next Chain in DTS */
		ChNr_Cnt_T_u08 ++;

		/* DTS to clear the CRC hardware registers by transferring data from 
		a Zero Array to the CRC registers*/
		DTSMstrCfg[ChNr_Cnt_T_u08 ].DTSnnnCM.UINT32 = ((uint32)CPU1PEID_CNT_U32 << 4)
					| ((uint32)CODFLSTOCRCSPID_CNT_U32 << 2)
					| ((uint32)USRMODDIS_CNT_U32 << 1);
		/* Clear the DTSFSL transfer request bit */
		DTSCfg[ChNr_Cnt_T_u08].DMASSDTFSC.BIT.DRQC = (uint32)1U;
					
		/* Start address of the DTS transfer is the Zero Constant address*/
		DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTSA.UINT32 = (uint32)&(CrcClrData_M);  
		
		/* Destination address is the output CRC Register Address */
		DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTDA.UINT32 = CrcHwIdxOutReg;	
		
		/* Transfer Count is 1 for the Output Register of the CRC HW */
		DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTTC.UINT32 = (uint32)0x1U;
		
		DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTTCT.UINT32 = 	((uint32)0x00U << 28)				/* Reserved */
											|	((uint32)0x00U << 27)				/* DMA transfer when transfer errored */
											|	((uint32)((uint32)ChNr_Cnt_T_u08 +1U)<< 18)		/* Next Channel in Chain */
											|	((uint32)0x01U << 16)				/* Chain Enable */
											|	((uint32)0x00U << 15)				/* Disable - Transfer count match interrupt  */
											|	((uint32)0x00U << 14)				/* Disable - Transfer completion interrupt  */
											|	((uint32)0x00U << 11)				/* Disable -Reload function 2 */
											|	((uint32)0x00U << 9)				/* Disable- Reload Function 1 */
											|	((uint32)0x02U << 7)				/* Fixed -Destinable address count direction */
											|	((uint32)0x00U << 5)				/* Increment - Source Address count direction */
											|	((uint32)0x02U << 2)				/* Transfer Data Size - 32 bits */
											|	((uint32)0x01U << 0);				/* Block transfer 1 by transfer count */
		
		/* Enable - Channel Operation */	
		DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTFSL.BIT.REQEN = 1U;
		/* Next Chain in DTS */
		ChNr_Cnt_T_u08++;
	}
				
	DTSCfg[ChNr_Cnt_T_u08  -1U].DMASSDTTCT.BIT.CHNE = 	0U	;			/* Chain Disable */
	DTSCfg[ChNr_Cnt_T_u08  -1U].DMASSDTTCT.BIT.TCE  = 	1U	;			/* Enable - Transfer completion interrupt on last transfer  */

	/* Clear the DTS Interrupt flag */
	INTIFPINTCLR0 = 0xFFFFFFFFU;
	/* Start transfer from the first chain */
	DTSCfg[0U].DMASSDTFSS.BIT.DRQS = 1U;
}

/**********************************************************************************************************************
  * Name:        CodFlsSngBitEcc
  * Description: Code flash Ecc Single bit error handler
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: To be called from FlsMemPer2
                 Need to run in Supervisor mode
  ********************************************************************************************************************/
FUNC(void, CDD_FlsMem_CODE) CodFlsSngBitEcc(void) 
{
	VAR(uint32, AUTOMATIC) CodFlsErrAdr_Cnt_T_u32;
	volatile VAR(uint32, AUTOMATIC) DummyRead1_Cnt_T_u32;
	volatile VAR(uint32, AUTOMATIC) DummyRead2_Cnt_T_u32;
	volatile VAR(uint32, AUTOMATIC) DummyRead3_Cnt_T_u32;
	volatile VAR(uint32, AUTOMATIC) DummyRead4_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) RegVal_Cnt_T_u32;
	
	SuspendAllInterrupts();

	*Rte_Pim_CodFlsSngBitErr() = TRUE;

	/* Clear the Error from ECM Status Register */
	RegVal_Cnt_T_u32 = 0x00000010U;
	WrProtdRegEcm_u32 (RegVal_Cnt_T_u32, &ECMESSTC1);
		
	if(ECCFLICFOVFSTR_PE1 != 0U)
	{
		/* Save Address for debug purpose */
		CodFlsErrAdr_Cnt_T_u32 = ECCFLICF1STEADR0_PE1;
		/* Overflow detected do a software reset */
		NxtrSwRstFromExcpn(MCUDIAGC_CODFLSSNGBITHARDFLT, CodFlsErrAdr_Cnt_T_u32);
	}
	else if((ECCFLICF1STERSTR_PE1 & 0x00000001U) !=0U)
	{
		CodFlsErrAdr_Cnt_T_u32 = ECCFLICF1STEADR0_PE1;

		/* Read from 4 other locations to make sure its not an address decoder fault */
		DummyRead1_Cnt_T_u32 = *(uint32*)(CodFlsErrAdr_Cnt_T_u32 & DUMMYREADADDR1_CNT_U32);
		DummyRead2_Cnt_T_u32 = *(uint32*)(CodFlsErrAdr_Cnt_T_u32 & DUMMYREADADDR2_CNT_U32);
		DummyRead3_Cnt_T_u32 = *(uint32*)(CodFlsErrAdr_Cnt_T_u32 & DUMMYREADADDR3_CNT_U32);
		DummyRead4_Cnt_T_u32 = *(uint32*)(CodFlsErrAdr_Cnt_T_u32 & DUMMYREADADDR4_CNT_U32);

		/* Clear the Error from CF Status Register */
		ECCFLICFSTCLR_PE1 = 0x00000001U;
	}
	else
	{
		/* Do Nothing */
	}
	if(ECCFLICFOVFSTR_VCI != 0u)
	{
		/* Save Address for debug purpose */
		CodFlsErrAdr_Cnt_T_u32 = ECCFLICF1STEADR0_VCI;
		/* Overflow detected do a software reset */
		NxtrSwRstFromExcpn(MCUDIAGC_CODFLSSNGBITHARDFLT, CodFlsErrAdr_Cnt_T_u32);
	}
	else if ((ECCFLICF1STERSTR_VCI & 0x00000001U) !=0U)
	{
		CodFlsErrAdr_Cnt_T_u32 = ECCFLICF1STEADR0_VCI;

		/* Read from 4 other locations to make sure its not an address decoder fault */
		DummyRead1_Cnt_T_u32 = *(uint32*)(CodFlsErrAdr_Cnt_T_u32 & DUMMYREADADDR1_CNT_U32);
		DummyRead2_Cnt_T_u32 = *(uint32*)(CodFlsErrAdr_Cnt_T_u32 & DUMMYREADADDR2_CNT_U32);
		DummyRead3_Cnt_T_u32 = *(uint32*)(CodFlsErrAdr_Cnt_T_u32 & DUMMYREADADDR3_CNT_U32);
		DummyRead4_Cnt_T_u32 = *(uint32*)(CodFlsErrAdr_Cnt_T_u32 & DUMMYREADADDR4_CNT_U32);

		/* Clear the Error from CF Status Register */
		ECCFLICFSTCLR_VCI = 0x00000001U;
	}
	else
	{
		/* Do Nothing */
	}
	
	ResumeAllInterrupts();

}
#define CDD_FlsMem_STOP_SEC_CODE
#include "CDD_FlsMem_MemMap.h"

