/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CmnMfgSrvIf.c
 *     SW-C Type:  CmnMfgSrvIf
 *  Generated at:  Tue Dec 20 14:20:43 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CmnMfgSrvIf>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: CmnMfgSrvIf.c
* Module Description: Nexteer manufacturing services transport layer interface.
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         5 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 10/15/15  1        JWJ       Initial file creation                                                        EA4#2034
* 05/19/16  2        JWJ       Updates to make buffer size configurable                                     EA4#5674
* 05/25/16  3        JWJ       Corrected buffer size check to include writes up to the max size             EA4#5674
* 07/18/16  4        JWJ       Corrected data buffer offset for type 0x10, 0x11, 0x27, and 0x3E services    EA4#6219
* 12/20/16  5        JWJ       Updated lockout strategy to disable services when NMEC hits production mode  EA4#8626
***********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************

 Data Types:
 ===========
  MfgEnaSt1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

 *********************************************************************************************************************/

#include "Rte_CmnMfgSrvIf.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "tpmc.h"
#include "tp_cfg.h"
#include "NxtrMfgSrvIf_Cfg.h"


static FUNC(boolean, CmnMfgSrvIf_CODE) CmnMfgSrvEnad(void);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Enumeration Types:
 * ==================
 * MfgEnaSt1: Enumeration of integer in interval [0...255] with enumerators
 *   MFGENAST_PRDNMOD (0U)
 *   MFGENAST_MFGMOD (1U)
 *   MFGENAST_TESTMOD (2U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   boolean *Rte_Pim_CmnMfgSrvUnlckd(void)
 *   uint8 *Rte_Pim_DataBuf(void)
 *
 *********************************************************************************************************************/


#define CmnMfgSrvIf_START_SEC_CODE
#include "CmnMfgSrvIf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CmnMfgSrvIfCmnMfgSrvIfImdtTx>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(const uint8 *CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvDataLen)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, CmnMfgSrvIf_CODE) CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(P2CONST(uint8, AUTOMATIC, RTE_CMNMFGSRVIF_APPL_DATA) CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvDataLen) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, CmnMfgSrvIf_CODE) CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(P2CONST(Ary1D_u8_CmnMfgSrvIf, AUTOMATIC, RTE_CMNMFGSRVIF_APPL_DATA) CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvDataLen) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper
 *********************************************************************************************************************/
	VAR(uint16, AUTOMATIC) Index_Cnt_T_u16;

	/* Transmission only allowed when the manufacturing services are enabled */
	if (CmnMfgSrvEnad() == TRUE)
	{
		for (Index_Cnt_T_u16 = 0U; Index_Cnt_T_u16 < CmnMfgSrvCmnMfgSrvDataLen; Index_Cnt_T_u16 += 1U)
		{
			Rte_Pim_DataBuf()[Index_Cnt_T_u16] = CmnMfgSrvCmnMfgSrvDataBufferPtr[Index_Cnt_T_u16];
		}
		(void)TpTransmit(TpRxHandleCon_EPS_HSTestTool_HS_1, Rte_Pim_DataBuf(), CmnMfgSrvCmnMfgSrvDataLen);
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CmnMfgSrvIfInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(uint8 CmnMfgSrvCmnMfgSrvSrvId, uint8 CmnMfgSrvCmnMfgSrvSubFct, uint16 CmnMfgSrvCmnMfgSrvPrmId, uint8 *CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvReqLen, uint16 *CmnMfgSrvCmnMfgSrvRespLen, uint8 *CmnMfgSrvCmnMfgSrvRespCod)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, CmnMfgSrvIf_CODE) CmnMfgSrvIfInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CmnMfgSrvIfInit1
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CmnMfgSrvIf_STOP_SEC_CODE
#include "CmnMfgSrvIf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  ApplTpRxGetBuffer
 * Description:  Callback function to retrieve a buffer to hold the received data.
 *      Inputs:  RxCh_Cnt_T_u08 : Handle of the received channel.
 *               ReqLen_Cnt_T_u16 : Length of the received data in bytes.
 *     Outputs:  Pointer to buffer into which the Transport component can load received data.
 * Usage Notes:  This function in configured in GENy under the transport layer (Tp) configuration.
 * ------------------------------------------------------------------------------------------------------------------ */
FUNC(uint8*, CmnMfgSrvIf_CODE) ApplTpRxGetBuffer(uint8 RxCh_Cnt_T_u08, uint16 ReqLen_Cnt_T_u16)
{
	P2VAR(uint8, AUTOMATIC, AUTOMATIC) DataBufPtr_Cnt_T_u08;
	VAR(boolean, AUTOMATIC) Enad_Cnt_T_logl;

	/* If Nexteer services are enabled the request must be able to fit within the configurable length buffer, but if
	 * Nexteer services are disabled, the request must fit within a single frame (7 bytes of data).  This ensures that
	 * no flow-control information will come out on the response ID when requests are made and Nexteer services are
	 * disabled.
	 */
	Enad_Cnt_T_logl = CmnMfgSrvEnad();
	if (((Enad_Cnt_T_logl == TRUE) && (ReqLen_Cnt_T_u16 <= NXTRMFGSRFIFBUFSIZE_CNT_U16)) ||
		((Enad_Cnt_T_logl == FALSE) && (ReqLen_Cnt_T_u16 <= 7U)))
	{
		/* Services are enabled, pass buffer to continue reception */
		DataBufPtr_Cnt_T_u08 = Rte_Pim_DataBuf();
	}
	else
	{
		/* Services are disabled, return NULL to terminate processing */
		DataBufPtr_Cnt_T_u08 = 0U;
	}

	return DataBufPtr_Cnt_T_u08;
}

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  ApplTpRxIndication
 * Description:  Callback function to indicate when the transport layer has completed reception of a transaction.
 *      Inputs:  RxChl_Cnt_T_u08 : Handle of the receiving channel.
 *               ReqLen_Cnt_T_u16 : Length of the received data in bytes.
 *     Outputs:  None
 * Usage Notes:  This function in configured in GENy under the transport layer (Tp) configuration.
 * ------------------------------------------------------------------------------------------------------------------ */
FUNC(void, CmnMfgSrvIf_CODE) ApplTpRxIndication(VAR(uint8, AUTOMATIC) RxChl_Cnt_T_u08, VAR(uint16, AUTOMATIC) ReqLen_Cnt_T_u16)
{
	VAR(uint8, AUTOMATIC) RespCod_Cnt_T_u08 = 0xFFU;
	VAR(uint16, AUTOMATIC) RespLen_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) RespLenOffs_Cnt_T_u16;
	VAR(uint8, AUTOMATIC) SrvId_Cnt_T_u08;
	VAR(uint16, AUTOMATIC) PrmId_Cnt_T_u16;
	VAR(uint8, AUTOMATIC) SubFct_Cnt_T_u08;
	P2VAR(uint8, AUTOMATIC, AUTOMATC) DataBufPtr_Cnt_T_u08;

	if (CmnMfgSrvEnad() == TRUE)
	{
		/* Parse request */
		SrvId_Cnt_T_u08 = Rte_Pim_DataBuf()[0U];
		if (SrvId_Cnt_T_u08 == 0x31U)
		{
			/* Sub function comes before the PID for Routine Control servies */
			SubFct_Cnt_T_u08 = Rte_Pim_DataBuf()[1U];
			PrmId_Cnt_T_u16 = (uint16)((uint16)((uint16)Rte_Pim_DataBuf()[2U] << 8U) | Rte_Pim_DataBuf()[3U]);
			DataBufPtr_Cnt_T_u08 = &Rte_Pim_DataBuf()[4U];
			RespLenOffs_Cnt_T_u16 = 4U;
		}
		else if ((SrvId_Cnt_T_u08 == 0x10U) ||
				 (SrvId_Cnt_T_u08 == 0x11U) ||
				 (SrvId_Cnt_T_u08 == 0x27U) ||
				 (SrvId_Cnt_T_u08 == 0x3EU))
		{
			SubFct_Cnt_T_u08 = Rte_Pim_DataBuf()[1U];
			PrmId_Cnt_T_u16 = 0xFFFFU;
			DataBufPtr_Cnt_T_u08 = &Rte_Pim_DataBuf()[2U];
			RespLenOffs_Cnt_T_u16 = 2U;
		}
		else
		{
			PrmId_Cnt_T_u16 = (uint16)((uint16)((uint16)Rte_Pim_DataBuf()[1U] << 8U) | Rte_Pim_DataBuf()[2U]);
			if (SrvId_Cnt_T_u08 == 0x2FU)
			{
				/* Sub function comes after the PID for Input/Output Control services */
				SubFct_Cnt_T_u08 = Rte_Pim_DataBuf()[3U];
				DataBufPtr_Cnt_T_u08 = &Rte_Pim_DataBuf()[4U];
				RespLenOffs_Cnt_T_u16 = 4U;
			}
			else
			{
				/* Don't care about sub function for any other service type */
				SubFct_Cnt_T_u08 = 0xFFU;
				DataBufPtr_Cnt_T_u08 = &Rte_Pim_DataBuf()[3U];
				RespLenOffs_Cnt_T_u16 = 3U;
			}
		}

		/* Call Service */
		ReqLen_Cnt_T_u16 -= RespLenOffs_Cnt_T_u16;
		(void)Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(
				SrvId_Cnt_T_u08,
				SubFct_Cnt_T_u08,
				PrmId_Cnt_T_u16,
				DataBufPtr_Cnt_T_u08,
				ReqLen_Cnt_T_u16,
				&RespLen_Cnt_T_u16,
				&RespCod_Cnt_T_u08
		);

		/* Format Response */
		if (RespCod_Cnt_T_u08 != 0U)
		{
			/* Handle Negative Response */
			Rte_Pim_DataBuf()[1U] = Rte_Pim_DataBuf()[0U];
			Rte_Pim_DataBuf()[0U] = 0x7FU;
			Rte_Pim_DataBuf()[2U] = RespCod_Cnt_T_u08;
			RespLen_Cnt_T_u16 = 3U;
		}
		else
		{
			/* Handle Positive Response */
			Rte_Pim_DataBuf()[0U] += 0x40U;
			RespLen_Cnt_T_u16 += RespLenOffs_Cnt_T_u16;
		}

	}
	else
	{
		/* When services are disabled, look for a sentinel to re-enable them */
		if ((Rte_Pim_DataBuf()[0] == 0x12U) &&
			(Rte_Pim_DataBuf()[1] == 0x34U) &&
			(Rte_Pim_DataBuf()[2] == 0x56U) &&
			(Rte_Pim_DataBuf()[3] == 0x78U) &&
			(Rte_Pim_DataBuf()[4] == 0x9AU) &&
			(Rte_Pim_DataBuf()[5] == 0xBCU) &&
			(Rte_Pim_DataBuf()[6] == 0xDEU))
		{
			*Rte_Pim_CmnMfgSrvUnlckd() = TRUE;
		}
	}

	/* Return Data, if applicable */
	if (RespCod_Cnt_T_u08 != 0xFFU)
	{
		/* Return response */
		TpTxSetResponse(RxChl_Cnt_T_u08, TpRxHandleCon_EPS_HSTestTool_HS_1);
		TpRxResetChannel(RxChl_Cnt_T_u08);
		(void)TpTransmit(TpRxHandleCon_EPS_HSTestTool_HS_1, Rte_Pim_DataBuf(), RespLen_Cnt_T_u16);
	}
	else
	{
		/* Suppress response - free receive channel */
		TpRxResetChannel(RxChl_Cnt_T_u08);
	}
}

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  ApplTpTxConfirmation
 * Description:  Callback function to indicate when the transport layer has completed transmission of a transaction.
 *      Inputs:  TxCh_Cnt_T_u08 : Handle of the transmitted channel.
 *               St_Cnt_T_u08 : State of the transmission.
 *     Outputs:  None
 * Usage Notes:  This function in configured in GENy under the transport layer (Tp) configuration.
 * ------------------------------------------------------------------------------------------------------------------ */
FUNC(void, CmnMfgSrvIf_CODE) ApplTpTxConfirmation(VAR(uint8, AUTOMATIC) TxCh_Cnt_T_u08, VAR(uint8, AUTOMATIC) St_Cnt_T_u08)
{
	
}

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  ApplTpRxErrorIndication
 * Description:  Callback function to indicate when an error has occurred in the transport layer during reception.
 *      Inputs:  RxCh_Cnt_T_u08 : Handle of the reception channel.
 *               ErrNr_Cnt_T_u08 : Enumerated error number provided by Transport component.
 *     Outputs:  None
 * Usage Notes:  This function in configured in GENy under the transport layer (Tp) configuration.
 * ------------------------------------------------------------------------------------------------------------------ */
FUNC(void, CmnMfgSrvIf_CODE) ApplTpRxErrorIndication(VAR(uint8, AUTOMATIC) RxCh_Cnt_T_u08, VAR(uint8, AUTOMATIC) ErrNr_Cnt_T_u08)
{
	
}

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  ApplTpTxErrorIndication
 * Description:  Callback function to indicate when an error has occurred in the transport layer during reception.
 *      Inputs:  TxCh_Cnt_T_u08 : Handle of the transmission channel.
 *               ErrNr_Cnt_T_u08 : Enumerated error number provided by Transport component.
 *     Outputs:  Boolean indicating if the transmission channel should be freed or if the transport component shall
 *               maintain it's ownership.
 * Usage Notes:  This function in configured in GENy under the transport layer (Tp) configuration.
 * ------------------------------------------------------------------------------------------------------------------ */
FUNC(uint8, CmnMfgSrvIf_CODE) ApplTpTxErrorIndication(VAR(uint8, AUTOMATIC) TxCh_Cnt_T_u08, VAR(uint8, AUTOMATIC) ErrNr_Cnt_T_u08)
{
	return kTpFreeChannel;
}


/* -------------------------------------------[ Local Functions ]----------------------------------------------------- */

static FUNC(boolean, CmnMfgSrvIf_CODE) CmnMfgSrvEnad(void)
{
	VAR(MfgEnaSt1, AUTOMATIC) NxtrMfgEnaSt_Cnt_T_enum;
	VAR(boolean, AUTOMATIC) Enad_Cnt_T_logl = FALSE;

	(void)Rte_Read_MfgEnaSt_Val(&NxtrMfgEnaSt_Cnt_T_enum);

	if ((NxtrMfgEnaSt_Cnt_T_enum != MFGENAST_PRDNMOD) ||
		(*Rte_Pim_CmnMfgSrvUnlckd() == TRUE))
	{
		Enad_Cnt_T_logl = TRUE;
	}

	return Enad_Cnt_T_logl;
}


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
