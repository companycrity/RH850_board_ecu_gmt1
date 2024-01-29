/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  NvM_Crc.c
 *      Project:  MemService_AsrNvM
 *       Module:  NvM - Submodule Crc (Crc processing)
 *    Generator:  -
 *
 *  Description:  This sub-module implements the CRC recalculation FSM that
 *                recalculates the CRC piece-wise
 *
 *********************************************************************************************************************/

/* Do not modify this file! */

/**********************************************************************************************************************
 *  MODULE SWITCH
 *********************************************************************************************************************/
#define NVM_IMPLEMENTATION

/* PRQA S 5087 inclusions */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"

/**********************************************************************************************************************
 *  INCLUDE OF CONFIGURATION (ALL SECTIONS)
 *********************************************************************************************************************/
#include "NvM_Cfg.h"
#include "NvM_PrivateCfg.h"

/**********************************************************************************************************************
 *  INCLUDE OF THE CENTRAL INTERNAL INCLUDE
 *********************************************************************************************************************/
#include "NvM_JobProc.h"

/**********************************************************************************************************************
 *  MODULE HEADER INCLUDES
 *********************************************************************************************************************/
#include "NvM_Crc.h"

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/
#if ((NVM_CRC_MAJOR_VERSION != (5u)) \
        || (NVM_CRC_MINOR_VERSION != (5u)))
# error "Version numbers of NvM_Crc.c and NvM_Crc.h are inconsistent!"
#endif

#if ((NVM_CFG_MAJOR_VERSION != (5u)) \
        || (NVM_CFG_MINOR_VERSION != (5u)))
# error "Version numbers of NvM_Crc.c and NvM_Cfg.h are inconsistent!"
#endif

/**********************************************************************************************************************
 *  INTERNAL MACROS
 **********************************************************************************************************************/
#define NVM_CRC_CLASS_NONE  0x00u
#define NVM_CRC_CLASS_16    0x01u
#define NVM_CRC_CLASS_32    0x02u

#ifndef NVM_LOCAL /* COV_NVM_COMPATIBILITY */
# define NVM_LOCAL static
#endif

/**********************************************************************************************************************
 *  INTERNAL TYPE DEFINITIONS
 **********************************************************************************************************************/
#if((NVM_SET_RAM_BLOCK_STATUS_API == STD_ON) && (NVM_CALC_RAM_CRC_USED == STD_ON))
typedef P2VAR(NvM_CrcQueueEntryType, AUTOMATIC, NVM_CONFIG_DATA) NvM_CrcQueueEntryPtr;
#endif

/**********************************************************************************************************************
 *  INTERNAL FORWARD DECLARATIONS
 **********************************************************************************************************************/
#define NVM_START_SEC_CODE
#include "MemMap.h"

/**********************************************************************************************************************
 * NvM_Crc_NoCrc_Calculate
 *********************************************************************************************************************/
/*! \brief Do nothing, function is a dummy (blocks without Crc).
 *  \details Do nothing, function is a dummy (blocks without Crc).
 *  \param[in] data_ptr
 *  \param[in] length
 *  \param[in] currentValue
 *  \context TASK
 *  \reentrant FALSE
 *  \synchronous TRUE
 *  \pre -
 */
NVM_LOCAL FUNC(void, NVM_PRIVATE_CODE) NvM_Crc_NoCrc_Calculate (NvM_ConstRamAddressType, uint16, NvM_CrcValuePtrType);

/**********************************************************************************************************************
 * NvM_Crc_NoCrc_Compare
 *********************************************************************************************************************/
/*! \brief Do nothing, function is a dummy (blocks without Crc).
 *  \details Do nothing, function is a dummy (blocks without Crc).
 *  \param[in] crcBuff
 *  \param[in] currentValue
 *  \return TRUE always
 *  \context TASK
 *  \reentrant FALSE
 *  \synchronous TRUE
 *  \pre -
 */
NVM_LOCAL FUNC(boolean, NVM_PRIVATE_CODE) NvM_Crc_NoCrc_Compare (NvM_CrcBufferConstPtrType, NvM_CrcValueRefType);

/**********************************************************************************************************************
 * NvM_Crc_NoCrc_CopyToBuffer
 *********************************************************************************************************************/
/*! \brief Do nothing, function is a dummy (blocks without Crc).
 *  \details Do nothing, function is a dummy (blocks without Crc).
 *  \param[in] dest
 *  \param[in] src
 *  \context TASK
 *  \reentrant FALSE
 *  \synchronous TRUE
 *  \pre -
 */
NVM_LOCAL FUNC(void, NVM_PRIVATE_CODE) NvM_Crc_NoCrc_CopyToBuffer (NvM_CrcBufferPtrType, NvM_CrcValueRefType);

#if ((NVM_SET_RAM_BLOCK_STATUS_API == STD_ON) && (NVM_CALC_RAM_CRC_USED == STD_ON))
/**********************************************************************************************************************
 * NvM_CrcQueueCountTrailingZeros
 *********************************************************************************************************************/
/*! \brief Removes all lower bits with value 0 from given parameter.
 *  \details Removes all lower bits with value 0 from given parameter.
 *  \param[in] word
 *  \return given parameter without any lower bits with 0
 *  \context TASK
 *  \reentrant FALSE
 *  \synchronous TRUE
 *  \pre -
 */
NVM_LOCAL uint8 NvM_CrcQueueCountTrailingZeros(NvM_CrcQueueEntryType word);
#endif /* ((NVM_SET_RAM_BLOCK_STATUS_API == STD_ON) && (NVM_CALC_RAM_CRC_USED == STD_ON)) */

#define NVM_STOP_SEC_CODE
#include "MemMap.h"

/**********************************************************************************************************************
 *  INTERNAL MODULE GLOBAL VARIABLES
 *********************************************************************************************************************/
#define NVM_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"

/* "Dummy" Handler for Disabled CRC -> always exists */
CONST(struct NvM_CrcHandlerClass, NVM_PRIVATE_CONST) NvM_Crc_NoCrcHandler_t =
{
    NvM_Crc_NoCrc_Calculate,
    NvM_Crc_NoCrc_Compare,
    NvM_Crc_NoCrc_CopyToBuffer,
    0, /* initial value */
    0  /* crc length */
};

#define NVM_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"

/**********************************************************************************************************************
 *  Queue enabling/disabled via preprocessor
 *********************************************************************************************************************/
#if((NVM_SET_RAM_BLOCK_STATUS_API == STD_ON) && (NVM_CALC_RAM_CRC_USED == STD_ON))

#define NVM_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

NVM_LOCAL VAR(NvM_BlockIdType, NVM_PRIVATE_DATA) NvM_CrcQueueScanStart_u16;

#define NVM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define NVM_START_SEC_CODE
#include "MemMap.h"

/**********************************************************************************************************************
 *  IMPLEMENTATION
 *********************************************************************************************************************/

/**********************************************************************************************************************
*  NvM_CrcQueueInit
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
FUNC(void, NVM_PRIVATE_CODE) NvM_CrcQueueInit(void)
{
    uint16_least counter = (NvM_CrcQueueSize_u16 + NVM_CRC_QUEUE_BITINDEX_MASK) >> NVM_CRC_QUEUE_ENTRY_SHIFT;

    do
    {
        --counter;
        NvM_CrcQueue_at[counter] = 0u; /* SBSW_NvM_AccessCrcQueue */
    } while (counter > 0);

    /* start queue scan with block 1, since block ID 0 is a reserved block, never requesting CRC re-calculation */
    NvM_CrcQueueScanStart_u16 = 1u;
}

/**********************************************************************************************************************
*  NvM_CrcQueueJob
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
FUNC(void, NVM_PRIVATE_CODE) NvM_CrcQueueJob(NvM_BlockIdType BlockId)
{
    /* perform calculations outside of Critical section, in order to make it as short as possible */
    const NvM_CrcQueueEntryType bitMask = (NvM_CrcQueueEntryType)(1u << (BlockId & NVM_CRC_QUEUE_BITINDEX_MASK));
    const NvM_CrcQueueEntryPtr queueEntry = &NvM_CrcQueue_at[BlockId >> NVM_CRC_QUEUE_ENTRY_SHIFT];

    NvM_EnterCriticalSection();

    /* #21 process the actual queuing (set corresponding bit) */
    *queueEntry |= bitMask; /* SBSW_NvM_AccessCrcQueue */

    NvM_ExitCriticalSection();
}

/**********************************************************************************************************************
*  NvM_CrcGetQueuedBlockId
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
FUNC(NvM_BlockIdType, NVM_PRIVATE_CODE) NvM_CrcGetQueuedBlockId(void)
{
    /* #10 Setup required values */

    /* set the block Id whether to begin searching - set in previous search correctly or begin from block Id 1 */
    uint16 newBlockId = (NvM_CrcQueueScanStart_u16 < NvM_CrcQueueSize_u16) ? NvM_CrcQueueScanStart_u16 : 1u;
    /* calculate number of queue elements (each with 32 bits) */
    const uint16 queueSizeWords = (NvM_CrcQueueSize_u16 + NVM_CRC_QUEUE_BITINDEX_MASK) >> NVM_CRC_QUEUE_ENTRY_SHIFT;

    uint8 bitPos = (uint8)(newBlockId & NVM_CRC_QUEUE_BITINDEX_MASK);
    const NvM_CrcQueueEntryType entryMask = (NvM_CrcQueueEntryType)~((1u << bitPos) - 1u);
    
    /* shift out lowest 5 bits to get the queue element with current newBlockId */
    newBlockId >>= NVM_CRC_QUEUE_ENTRY_SHIFT;

    bitPos = NvM_CrcQueueCountTrailingZeros(entryMask & NvM_CrcQueue_at[newBlockId]);

    /* #20 search for queue element which includes at least one set bit (queued block) */

    /* search for queue element with at least one bit != 0 */
    while (bitPos >= NVM_CRC_QUEUE_ENTRY_BITS)
    {
        /* we already checked the first queue element, now check the next one */
        newBlockId++;

        /* Crc queue end reached, abort */
        if (newBlockId >= queueSizeWords)
        {
            NvM_CrcQueueScanStart_u16 = NvM_CrcQueueSize_u16;
            break;
        }

        /* check current queue element for set bits */
        bitPos = NvM_CrcQueueCountTrailingZeros(NvM_CrcQueue_at[newBlockId]);
    }

    /* #30 if an queue element with queued block Id was found */
    if(newBlockId < queueSizeWords)
    {
        NvM_EnterCriticalSection();

        /* clear the Block's corresponding bit, since it was set (and cannot be cleared elsewhere, we can use XOR) */
        NvM_CrcQueue_at[newBlockId] ^= (1u << bitPos); /* SBSW_NvM_AccessCrcQueue */

        NvM_ExitCriticalSection();

        /* set newBlockId to first block within queue element */
        newBlockId <<= NVM_CRC_QUEUE_ENTRY_SHIFT;
        /* calculate the real set block Id from newBlockId and the set bit within queue element */
        newBlockId |= bitPos;

        /* update Block Id where to start the next queue scan, wrap around will be handled when starting the next scan */
        NvM_CrcQueueScanStart_u16 = (NvM_BlockIdType)(newBlockId + 1u);
    }
    /* #40 if no queue element with queued block Id was found */
    else
    {
        newBlockId = 0;
    }

    /* #50 return next block Id to calculate Crc for */
    return (NvM_BlockIdType)newBlockId;
} /* PRQA S 2006 */ /* MD_MSR_14.7 */

/* Count the number of cleared bits after the least significant bit that is set *
 * It works either 32bit or 16bit words (depending on platform)                 */
/**********************************************************************************************************************
*  NvM_CrcQueueCountTrailingZeros
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
NVM_LOCAL uint8 NvM_CrcQueueCountTrailingZeros(NvM_CrcQueueEntryType word)
{
    uint8 trailingZeroes = 0;

    if(word == 0)
    {   /* special condition -> avoid going through the divide and conquer algorithm below.  *
         * => it would require additional handling at the remaining two bits.               */
        trailingZeroes = NVM_CRC_QUEUE_ENTRY_BITS;
    }
    else
    {
        /* is none of the lower 16 bits set? */
        if((word & 0xFFFFu) == 0u)
        {
            trailingZeroes |= 0x10u;
            word >>= 16u;
        }

        /*is none of the lower 8bits set? */
        if((word & 0xFFu) == 0u)
        {
            trailingZeroes |= 0x08u;
            word >>= 8u;
        }

        /* is none of the lower 4 bits set?*/
        if((word & 0x0Fu) == 0u)
        {
            trailingZeroes |= 0x04u;
            word >>= 4u;
        }

        /* is none of the lower 2 bits set? */
        if((word & 0x03u) == 0u)
        {
            trailingZeroes |= 2u;
            word >>= 2u;
        }

        /* Process least significant bit.
        * If the least significant bit is zero, add 1, because the second one cannot be cleared
        * Initially, we checked for word == 0, therefore one of both bits must be set here
        * If LSB is set, add nothing.
        * The cast appears to be unnecessary. However, some Compilers might issue a warning,
        * if uint16_least is 16bit, while QueueBitMask is 32bit width */
        trailingZeroes |= (uint8)((word & 1u) ^ 1u);
    }

    return trailingZeroes;
} /* PRQA S 2006 */ /* MD_MSR_14.7 */

#define NVM_STOP_SEC_CODE
#include "MemMap.h"

#endif /* ((NVM_SET_RAM_BLOCK_STATUS_API == STD_ON) && (NVM_CALC_RAM_CRC_USED == STD_ON)) */

#define NVM_START_SEC_CODE
#include "MemMap.h"

/**********************************************************************************************************************
*  NvM_CrcJob_Create
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, NVM_PRIVATE_CODE) NvM_CrcJob_Create(NvM_CrcJobPtrType self, NvM_BlockIdType blockId, NvM_RamAddressType ramData_pt)
{
    const NvM_BlockDescrPtrType descr_pt = &(NvM_BlockDescriptorTable_at[NVM_BLOCK_FROM_DCM_ID(blockId)]);

    self->HandlerInstance_pt = NvM_CrcHandlerTable_at[descr_pt->CrcSettings]; /* SBSW_NvM_AccessCrcJobPtr */

    self->CurrentCrcValue = self->HandlerInstance_pt->initialCrcValue; /* SBSW_NvM_AccessCrcJobPtr */

    self->RamData_pt = ramData_pt; /* SBSW_NvM_AccessCrcJobPtr */
    self->CrcBuffer = (ramData_pt != NULL_PTR) ? (&ramData_pt[descr_pt->NvBlockLength_u16]) : NULL_PTR; /* SBSW_NvM_AccessCrcJobPtr */

    /* let an CRC job complete immediately, if there's actually no CRC, or if there are no RAM data */
    /* PRQA S 3770 2 */ /* MD_NvM_10.1 */
    self->RemainingLength_u16 = /* SBSW_NvM_AccessCrcJobPtr */
        ((self->HandlerInstance_pt->crcLength > 0) && (ramData_pt != NULL_PTR)) ? descr_pt->NvBlockLength_u16 : 0u;

#if(NVM_USE_BLOCK_ID_CHECK == STD_ON)
    /* PRQA S 3760 1 */ /* MD_NvM_10.1 */
    if(descr_pt->CrcSettings != NVM_BLOCK_USE_CRC_OFF)
    {
        /* always use the origin block Id - otherwise the next origin block read will deliver data for the DCM block Id and the
         * Crc comparison fails */
        NvM_BlockIdType originBlockId = NVM_BLOCK_FROM_DCM_ID(blockId);

        /* in case feature is enabled, calculate Block Id and Dataindex into the Crc */
        const NvM_RamMngmtPtrType ramMngmt_pt =
            (originBlockId != blockId) ? (&NvM_DcmBlockMngmt_t) : (&NvM_BlockMngmtArea_at[blockId]); /* COV_NVM_APICFGCLASS */

        /* create data from Block Id and Dataindex */
        uint8 ramData[3];

        /* fill buffer */
        ramData[0] = (uint8)(originBlockId >> 8); /* SBSW_NvM_AccessArray_BlockIdInCrc */
        ramData[1] = (uint8)originBlockId;  /* SBSW_NvM_AccessArray_BlockIdInCrc */
        ramData[2] = (uint8)ramMngmt_pt->NvDataIndex_t; /* SBSW_NvM_AccessArray_BlockIdInCrc */

        /* perform first Crc step here to calculate the Crc for Block Id and Dataindex */
        self->HandlerInstance_pt->calc(ramData, 3, &self->CurrentCrcValue); /* SBSW_NvM_FuncPtrCall_CrcHandler */
    }
#endif
}

/**********************************************************************************************************************
*  NvM_CrcJob_Process
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
FUNC(void, NVM_PRIVATE_CODE) NvM_CrcJob_Process(NvM_CrcJobPtrType self, uint16 processLength)
{
    if(self->RemainingLength_u16 > 0) /* COV_NVM_COVEREDINOTHERCFG */
    {
        const NvM_ConstRamAddressType currRamPtr = self->RamData_pt;
        uint16 currLength = self->RemainingLength_u16;

        /* if both value are equal, we would not need to adapt currentLength, but finishJob needs to be set. */
        if(currLength > processLength)
        {
            currLength = processLength;
        }

        self->RemainingLength_u16 -= currLength; /* SBSW_NvM_AccessCrcJobPtr */

        /* set RamAddress for next calculation cycle */
        self->RamData_pt = &currRamPtr[currLength];  /* SBSW_NvM_AccessCrcJobPtr */

        self->HandlerInstance_pt->calc(currRamPtr, currLength, &self->CurrentCrcValue); /* SBSW_NvM_FuncPtrCall_CrcHandler */
    }
}

/**********************************************************************************************************************
*  NvM_CrcJob_Compare
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
FUNC(boolean, NVM_PRIVATE_CODE) NvM_CrcJob_Compare(NvM_CrcJobConstPtrType self)
{
    boolean result = FALSE;

    if(self->CrcBuffer != NULL_PTR)
    {
        /* PRQA S 0310 2 */ /* MD_NvM_11.4 */
        result = (self->HandlerInstance_pt->compare(self->CrcBuffer, (NvM_CrcValueRefType)&self->CurrentCrcValue)); /* SBSW_NvM_FuncPtrCall_CrcHandler */
    }

    return result;
}

/**********************************************************************************************************************
*  NvM_CrcJob_CopyToBuffer
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
FUNC(void, NVM_PRIVATE_CODE) NvM_CrcJob_CopyToBuffer(NvM_CrcJobConstPtrType self)
{
    if(self->CrcBuffer != NULL_PTR)
    {
        /* PRQA S 0310 1 */ /* MD_NvM_11.4 */ 
        self->HandlerInstance_pt->copyToBuffer(self->CrcBuffer, (NvM_CrcValueRefType)&self->CurrentCrcValue); /* SBSW_NvM_FuncPtrCall_CrcHandler */
    }
}

#if (NVM_CRC_INT_BUFFER == STD_ON)
/**********************************************************************************************************************
*  NvM_CrcJob_ExportBufferedValue
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
FUNC(void, NVM_PRIVATE_CODE) NvM_CrcJob_ExportBufferedValue(NvM_CrcJobConstPtrType self, NvM_CrcBufferPtrType dest_pt)
{
    if((dest_pt != NULL_PTR) && (self->CrcBuffer != NULL_PTR))
    {
        self->HandlerInstance_pt->copyToBuffer(dest_pt, self->CrcBuffer); /* SBSW_NvM_FuncPtrCall_CrcHandler */
    }
}
#endif /* (NVM_CRC_INT_BUFFER == STD_ON) */

/********************* No-CRC Handler Functions *************************************************/
/* PRQA S 3673 NoCrcHandler */ /* Following three functions are intended to be empty; their function parameters are not used; signatures resulted from generalization */

/**********************************************************************************************************************
*  NvM_Crc_NoCrc_Calculate
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
NVM_LOCAL FUNC(void, NVM_PRIVATE_CODE)  NvM_Crc_NoCrc_Calculate(NvM_ConstRamAddressType data_ptr, uint16 length, NvM_CrcValuePtrType currentValue) /* COV_NVM_NOCRCDUMMYHANDLER */
{
    /* PRQA S 3112, 3199 3 *//* MD_MSR_14.2 */
    NVM_DUMMY_STATEMENT_CONST(data_ptr);
    NVM_DUMMY_STATEMENT(length);
    NVM_DUMMY_STATEMENT(currentValue);
}

/**********************************************************************************************************************
*  NvM_Crc_NoCrc_Compare
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
NVM_LOCAL FUNC(boolean, NVM_PRIVATE_CODE) NvM_Crc_NoCrc_Compare(NvM_CrcBufferConstPtrType crcBuff, NvM_CrcValueRefType currentValue)
{
    /* PRQA S 3112, 3199 2 *//* MD_MSR_14.2 */
    NVM_DUMMY_STATEMENT_CONST(crcBuff);
    NVM_DUMMY_STATEMENT_CONST(currentValue);

    return TRUE;
}

/**********************************************************************************************************************
*  NvM_Crc_NoCrc_CopyToBuffer
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
NVM_LOCAL FUNC(void, NVM_PRIVATE_CODE) NvM_Crc_NoCrc_CopyToBuffer(NvM_CrcBufferPtrType dest, NvM_CrcValueRefType src)
{
    /* PRQA S 3112, 3199 2 *//* MD_MSR_14.2 */
    NVM_DUMMY_STATEMENT(dest);
    NVM_DUMMY_STATEMENT_CONST(src);
}

/* PRQA L:NoCrcHandler */

#define NVM_STOP_SEC_CODE
#include "MemMap.h"

/* PRQA L:inclusions */

/*---- End of File ---------------------------------------------------------*/
