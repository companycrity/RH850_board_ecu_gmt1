/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Dem.c
 *        Config:  EPS.dpa
 *     SW-C Type:  Dem
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <Dem>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_Rte_0777, MD_Rte_0779 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0614 EOF */

/* PRQA S 3109 EOF */
/* PRQA S 3112 EOF */
/* PRQA S 3197 EOF */
/* PRQA S 3198 EOF */
/* PRQA S 3199 EOF */
/* PRQA S 3201 EOF */
/* PRQA S 3203 EOF */
/* PRQA S 3205 EOF */
/* PRQA S 3206 EOF */
/* PRQA S 3218 EOF */
/* PRQA S 3229 EOF */
/* PRQA S 2002 EOF */
/* PRQA S 3334 EOF */
/* PRQA S 3417 EOF */
/* PRQA S 3426 EOF */
/* PRQA S 3453 EOF */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * Dem_DTCFormatType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_DTCGroupType
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * Dem_DTCKindType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_DTCOriginType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_DTCStatusMaskType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_DebounceResetStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_DebouncingStateType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_EventIdType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Dem_EventStatusExtendedType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_EventStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_IndicatorStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_InitMonitorReasonType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_IumprDenomCondIdType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_IumprDenomCondStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_OperationCycleIdType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_OperationCycleStateType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_RatioIdType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_Dem.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_Dem.h"
#include "SchM_Dem.h"
#include "TSC_SchM_Dem.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void Dem_TestDefines(void);

typedef P2FUNC(Std_ReturnType, RTE_CODE, FncPtrType)(void); /* PRQA S 3448 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * Dem_DTCGroupType: Integer in interval [0...16777215]
 * Dem_DTCStatusMaskType: Integer in interval [0...255]
 * Dem_EventIdType: Integer in interval [1...65535]
 * Dem_OperationCycleIdType: Integer in interval [0...255]
 * Dem_RatioIdType: Integer in interval [1...65535]
 * boolean: Boolean (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Dem_DTCFormatType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_DTC_FORMAT_OBD (0U)
 *   DEM_DTC_FORMAT_UDS (1U)
 *   DEM_DTC_FORMAT_J1939 (2U)
 * Dem_DTCKindType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_DTC_KIND_ALL_DTCS (1U)
 *   DEM_DTC_KIND_EMISSION_REL_DTCS (2U)
 * Dem_DTCOriginType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_DTC_ORIGIN_PRIMARY_MEMORY (1U)
 *   DEM_DTC_ORIGIN_MIRROR_MEMORY (2U)
 *   DEM_DTC_ORIGIN_PERMANENT_MEMORY (3U)
 *   DEM_DTC_ORIGIN_SECONDARY_MEMORY (4U)
 * Dem_DebounceResetStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_DEBOUNCE_STATUS_FREEZE (0U)
 *   DEM_DEBOUNCE_STATUS_RESET (1U)
 * Dem_DebouncingStateType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_TEMPORARILY_DEFECTIVE (1U)
 *   DEM_FINALLY_DEFECTIVE (2U)
 *   DEM_TEMPORARILY_HEALED (4U)
 *   DEM_TEST_COMPLETE (8U)
 *   DEM_DTR_UPDATE (16U)
 * Dem_EventStatusExtendedType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_UDS_STATUS_TF (1U)
 *   DEM_UDS_STATUS_TFTOC (2U)
 *   DEM_UDS_STATUS_PDTC (4U)
 *   DEM_UDS_STATUS_CDTC (8U)
 *   DEM_UDS_STATUS_TNCSLC (16U)
 *   DEM_UDS_STATUS_TFSLC (32U)
 *   DEM_UDS_STATUS_TNCTOC (64U)
 *   DEM_UDS_STATUS_WIR (128U)
 * Dem_EventStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_EVENT_STATUS_PASSED (0U)
 *   DEM_EVENT_STATUS_FAILED (1U)
 *   DEM_EVENT_STATUS_PREPASSED (2U)
 *   DEM_EVENT_STATUS_PREFAILED (3U)
 * Dem_IndicatorStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_INDICATOR_OFF (0U)
 *   DEM_INDICATOR_CONTINUOUS (1U)
 *   DEM_INDICATOR_BLINKING (2U)
 *   DEM_INDICATOR_BLINK_CONT (3U)
 *   DEM_INDICATOR_SLOW_FLASH (4U)
 *   DEM_INDICATOR_FAST_FLASH (5U)
 *   DEM_INDICATOR_ON_DEMAND (6U)
 *   DEM_INDICATOR_SHORT (7U)
 * Dem_InitMonitorReasonType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_INIT_MONITOR_CLEAR (1U)
 *   DEM_INIT_MONITOR_RESTART (2U)
 *   DEM_INIT_MONITOR_REENABLED (3U)
 * Dem_IumprDenomCondIdType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_IUMPR_GENERAL_DENOMINATOR (1U)
 *   DEM_IUMPR_DEN_COND_COLDSTART (2U)
 *   DEM_IUMPR_DEN_COND_EVAP (3U)
 *   DEM_IUMPR_DEN_COND_500MI (4U)
 * Dem_IumprDenomCondStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_IUMPR_DEN_STATUS_NOT_REACHED (0U)
 *   DEM_IUMPR_DEN_STATUS_REACHED (1U)
 *   DEM_IUMPR_DEN_STATUS_INHIBITED (2U)
 * Dem_OperationCycleStateType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_CYCLE_STATE_START (0U)
 *   DEM_CYCLE_STATE_END (1U)
 *
 * Array Types:
 * ============
 * DataArray_Type_1: Array with 1 element(s) of type uint8
 * DataArray_Type_2: Array with 2 element(s) of type uint8
 * DataArray_Type_4: Array with 4 element(s) of type uint8
 * Dem_MaxDataValueType: Array with 4 element(s) of type uint8
 *
 *********************************************************************************************************************/


#define Dem_START_SEC_CODE
#include "Dem_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ClearDTC
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ClearDTC> of PortPrototype <Cdd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_ClearDTC(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CddIf_DEM_CLEAR_BUSY
 *   RTE_E_CddIf_DEM_CLEAR_FAILED
 *   RTE_E_CddIf_DEM_CLEAR_PENDING
 *   RTE_E_CddIf_DEM_CLEAR_WRONG_DTC
 *   RTE_E_CddIf_DEM_CLEAR_WRONG_DTCORIGIN
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ClearDTC_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_ClearDTC(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_ClearDTC (returns application error)
 *********************************************************************************************************************/

  Dem_TestDefines();

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DcmClearDTC
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <DcmClearDTC> of PortPrototype <Dcm>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_DcmClearDTC(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DcmIf_DEM_CLEAR_BUSY
 *   RTE_E_DcmIf_DEM_CLEAR_FAILED
 *   RTE_E_DcmIf_DEM_CLEAR_PENDING
 *   RTE_E_DcmIf_DEM_CLEAR_WRONG_DTC
 *   RTE_E_DcmIf_DEM_CLEAR_WRONG_DTCORIGIN
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DcmClearDTC_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_DcmClearDTC(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_DcmClearDTC (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DcmEnableDTCSetting
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <DcmEnableDTCSetting> of PortPrototype <Dcm>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_DcmEnableDTCSetting(Dem_DTCGroupType DTCGroup, Dem_DTCKindType DTCKind)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DcmIf_DEM_CONTROL_DTC_SETTING_N_OK
 *   RTE_E_DcmIf_DEM_CONTROL_DTC_WRONG_DTCGROUP
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DcmEnableDTCSetting_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_DcmEnableDTCSetting(Dem_DTCGroupType DTCGroup, Dem_DTCKindType DTCKind) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_DcmEnableDTCSetting (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DcmGetExtendedDataRecordByDTC
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <DcmGetExtendedDataRecordByDTC> of PortPrototype <Dcm>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_DcmGetExtendedDataRecordByDTC(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 ExtendedDataNumber, uint8 *DestBuffer, uint16 *BufSize)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DcmIf_DEM_RECORD_PENDING
 *   RTE_E_DcmIf_DEM_RECORD_WRONG_BUFFERSIZE
 *   RTE_E_DcmIf_DEM_RECORD_WRONG_DTC
 *   RTE_E_DcmIf_DEM_RECORD_WRONG_DTCORIGIN
 *   RTE_E_DcmIf_DEM_RECORD_WRONG_NUMBER
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DcmGetExtendedDataRecordByDTC_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_DcmGetExtendedDataRecordByDTC(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 ExtendedDataNumber, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEM_APPL_VAR) BufSize) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_DcmGetExtendedDataRecordByDTC (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DcmGetFreezeFrameDataByDTC
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <DcmGetFreezeFrameDataByDTC> of PortPrototype <Dcm>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_DcmGetFreezeFrameDataByDTC(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 RecordNumber, uint8 *DestBuffer, uint16 *BufSize)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DcmIf_DEM_GET_FFDATABYDTC_PENDING
 *   RTE_E_DcmIf_DEM_GET_FFDATABYDTC_WRONG_BUFFERSIZE
 *   RTE_E_DcmIf_DEM_GET_FFDATABYDTC_WRONG_DTC
 *   RTE_E_DcmIf_DEM_GET_FFDATABYDTC_WRONG_DTCORIGIN
 *   RTE_E_DcmIf_DEM_GET_FFDATABYDTC_WRONG_RECORDNUMBER
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DcmGetFreezeFrameDataByDTC_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_DcmGetFreezeFrameDataByDTC(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 RecordNumber, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEM_APPL_VAR) BufSize) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_DcmGetFreezeFrameDataByDTC (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DcmGetNextFilteredDTCAndFDC
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <DcmGetNextFilteredDTCAndFDC> of PortPrototype <Dcm>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_DcmGetNextFilteredDTCAndFDC(uint32 *DTC, sint8 *DTCFaultDetectionCounter)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DcmIf_DEM_FILTERED_NO_MATCHING_DTC
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DcmGetNextFilteredDTCAndFDC_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_DcmGetNextFilteredDTCAndFDC(P2VAR(uint32, AUTOMATIC, RTE_DEM_APPL_VAR) DTC, P2VAR(sint8, AUTOMATIC, RTE_DEM_APPL_VAR) DTCFaultDetectionCounter) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_DcmGetNextFilteredDTCAndFDC (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Dem_MainFunction
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CBReadData_BattVltgEcu_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArray_Type_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_BattVltgEcu_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_EcuIntT_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArray_Type_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_EcuIntT_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_EngSpd_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArray_Type_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_EngSpd_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_EpdMotOvldProtnCntr_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArray_Type_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_EpdMotOvldProtnCntr_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_EpsAgOvrlSts_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArray_Type_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_EpsAgOvrlSts_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_EpsApaAgOvrlReq_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArray_Type_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_EpsApaAgOvrlReq_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_EpsMotCurr_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArray_Type_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_EpsMotCurr_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_EpsMotCurrFb_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArray_Type_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_EpsMotCurrFb_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_EpsStopStrtSts_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArray_Type_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_EpsStopStrtSts_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_EpsTqOvrlReq_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArray_Type_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_EpsTqOvrlReq_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_EpsTqOvrlSts_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArray_Type_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_EpsTqOvrlSts_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_IgnCycCntr_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArray_Type_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_IgnCycCntr_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_SplrIntDtcInfo_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArray_Type_4
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_SplrIntDtcInfo_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_SteerInpTq_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArray_Type_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_SteerInpTq_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_SteerOutpTq_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArray_Type_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_SteerOutpTq_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_SteerWhlAg_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArray_Type_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_SteerWhlAg_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_SysPwrMod_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArray_Type_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_SysPwrMod_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_TiIgnOn_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArray_Type_4
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_TiIgnOn_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_VehSpd_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArray_Type_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_VehSpd_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBStatusDTC_1_DTCStatusChanged(uint32 DTC, Dem_DTCStatusMaskType DTCStatusOld, Dem_DTCStatusMaskType DTCStatusNew)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CallbackDTCStatusChange_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_MainFunction_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Dem_CODE) Dem_MainFunction(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_MainFunction
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  DataArray_Type_1 Call_CBReadData_BattVltgEcu_ReadData_Data = {
  0U
};
  DataArray_Type_1 Call_CBReadData_EcuIntT_ReadData_Data = {
  0U
};
  DataArray_Type_2 Call_CBReadData_EngSpd_ReadData_Data = {
  0U, 0U
};
  DataArray_Type_1 Call_CBReadData_EpdMotOvldProtnCntr_ReadData_Data = {
  0U
};
  DataArray_Type_1 Call_CBReadData_EpsAgOvrlSts_ReadData_Data = {
  0U
};
  DataArray_Type_2 Call_CBReadData_EpsApaAgOvrlReq_ReadData_Data = {
  0U, 0U
};
  DataArray_Type_2 Call_CBReadData_EpsMotCurr_ReadData_Data = {
  0U, 0U
};
  DataArray_Type_2 Call_CBReadData_EpsMotCurrFb_ReadData_Data = {
  0U, 0U
};
  DataArray_Type_1 Call_CBReadData_EpsStopStrtSts_ReadData_Data = {
  0U
};
  DataArray_Type_2 Call_CBReadData_EpsTqOvrlReq_ReadData_Data = {
  0U, 0U
};
  DataArray_Type_1 Call_CBReadData_EpsTqOvrlSts_ReadData_Data = {
  0U
};
  DataArray_Type_2 Call_CBReadData_IgnCycCntr_ReadData_Data = {
  0U, 0U
};
  DataArray_Type_4 Call_CBReadData_SplrIntDtcInfo_ReadData_Data = {
  0U, 0U, 0U, 0U
};
  DataArray_Type_2 Call_CBReadData_SteerInpTq_ReadData_Data = {
  0U, 0U
};
  DataArray_Type_2 Call_CBReadData_SteerOutpTq_ReadData_Data = {
  0U, 0U
};
  DataArray_Type_2 Call_CBReadData_SteerWhlAg_ReadData_Data = {
  0U, 0U
};
  DataArray_Type_1 Call_CBReadData_SysPwrMod_ReadData_Data = {
  0U
};
  DataArray_Type_4 Call_CBReadData_TiIgnOn_ReadData_Data = {
  0U, 0U, 0U, 0U
};
  DataArray_Type_1 Call_CBReadData_VehSpd_ReadData_Data = {
  0U
};

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBReadData_BattVltgEcu_ReadData; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBReadData_BattVltgEcu_ReadData(Call_CBReadData_BattVltgEcu_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_BattVltgEcu_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBReadData_EcuIntT_ReadData; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBReadData_EcuIntT_ReadData(Call_CBReadData_EcuIntT_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_EcuIntT_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBReadData_EngSpd_ReadData; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBReadData_EngSpd_ReadData(Call_CBReadData_EngSpd_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_EngSpd_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBReadData_EpdMotOvldProtnCntr_ReadData; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBReadData_EpdMotOvldProtnCntr_ReadData(Call_CBReadData_EpdMotOvldProtnCntr_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_EpdMotOvldProtnCntr_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBReadData_EpsAgOvrlSts_ReadData; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBReadData_EpsAgOvrlSts_ReadData(Call_CBReadData_EpsAgOvrlSts_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_EpsAgOvrlSts_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBReadData_EpsApaAgOvrlReq_ReadData; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBReadData_EpsApaAgOvrlReq_ReadData(Call_CBReadData_EpsApaAgOvrlReq_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_EpsApaAgOvrlReq_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBReadData_EpsMotCurr_ReadData; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBReadData_EpsMotCurr_ReadData(Call_CBReadData_EpsMotCurr_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_EpsMotCurr_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBReadData_EpsMotCurrFb_ReadData; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBReadData_EpsMotCurrFb_ReadData(Call_CBReadData_EpsMotCurrFb_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_EpsMotCurrFb_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBReadData_EpsStopStrtSts_ReadData; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBReadData_EpsStopStrtSts_ReadData(Call_CBReadData_EpsStopStrtSts_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_EpsStopStrtSts_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBReadData_EpsTqOvrlReq_ReadData; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBReadData_EpsTqOvrlReq_ReadData(Call_CBReadData_EpsTqOvrlReq_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_EpsTqOvrlReq_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBReadData_EpsTqOvrlSts_ReadData; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBReadData_EpsTqOvrlSts_ReadData(Call_CBReadData_EpsTqOvrlSts_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_EpsTqOvrlSts_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBReadData_IgnCycCntr_ReadData; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBReadData_IgnCycCntr_ReadData(Call_CBReadData_IgnCycCntr_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_IgnCycCntr_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBReadData_SplrIntDtcInfo_ReadData; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBReadData_SplrIntDtcInfo_ReadData(Call_CBReadData_SplrIntDtcInfo_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_SplrIntDtcInfo_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBReadData_SteerInpTq_ReadData; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBReadData_SteerInpTq_ReadData(Call_CBReadData_SteerInpTq_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_SteerInpTq_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBReadData_SteerOutpTq_ReadData; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBReadData_SteerOutpTq_ReadData(Call_CBReadData_SteerOutpTq_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_SteerOutpTq_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBReadData_SteerWhlAg_ReadData; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBReadData_SteerWhlAg_ReadData(Call_CBReadData_SteerWhlAg_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_SteerWhlAg_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBReadData_SysPwrMod_ReadData; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBReadData_SysPwrMod_ReadData(Call_CBReadData_SysPwrMod_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_SysPwrMod_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBReadData_TiIgnOn_ReadData; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBReadData_TiIgnOn_ReadData(Call_CBReadData_TiIgnOn_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_TiIgnOn_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBReadData_VehSpd_ReadData; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBReadData_VehSpd_ReadData(Call_CBReadData_VehSpd_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_VehSpd_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBStatusDTC_1_DTCStatusChanged; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBStatusDTC_1_DTCStatusChanged(0U, 0U, 0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CallbackDTCStatusChange_E_NOT_OK:
      fct_error = 1;
      break;
  }

  TSC_Dem_SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_0();
  TSC_Dem_SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_0();
  TSC_Dem_SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_1();
  TSC_Dem_SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_1();
  TSC_Dem_SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_2();
  TSC_Dem_SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_2();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetDTCOfEvent
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_CtrlrComChassisExpBusOff>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_CtrlrComHiSpdBusOff>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_DevPwrVltgOverMaxThd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_DevPwrVltgUnderMinThd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_DevPwrVltgUnderThd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_EcuHwPrfmc>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_EcuSwPrfmcCalDataSetNotProgd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_ElecSteerMotCirc>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_ElecSteerMotPosSnsrCir>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_InvldDataRxdFromBodtCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_InvldDataRxdFromElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_InvldDataRxdFromElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_InvldDataRxdFromEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_InvldDataRxdFromFrntCameraMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_InvldDataRxdFromParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_InvldDataRxdFromTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_LostComWithBodyCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_LostComWithElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_LostComWithElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_LostComWithEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_LostComWithFrntCameraCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_LostComWithParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_LostComWithTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_SteerFailrMtgtnLvl1LimpHomeMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_SteerFailrMtgtnLvl2LimpOver>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_SteerFailrMtgtnLvl3FadeOut>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_SteerWheelAgSnsrCalNorPrfmd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_SteerWheelAgSnsrHwFlt>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_SteerWheelAgSnsrPlausly>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_SteerWhlTqInpSnsr>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_SteerWhlTqInpSnsrCalNoLrnd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_SysThermErrTHi>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_CtrlrComChassisExpBusOff>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_CtrlrComHiSpdBusOff>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_DIO_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_DevPwrVltgOverMaxThd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_DevPwrVltgUnderMinThd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_DevPwrVltgUnderThd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_EcuHwPrfmc>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_EcuSwPrfmcCalDataSetNotProgd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_ElecSteerMotCirc>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_ElecSteerMotPosSnsrCir>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_FLS_E_COMPARE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_FLS_E_ERASE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_FLS_E_READ_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_FLS_E_READ_FAILED_DED>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_FLS_E_WRITE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_InvldDataRxdFromBodtCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_InvldDataRxdFromElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_InvldDataRxdFromElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_InvldDataRxdFromEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_InvldDataRxdFromFrntCameraMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_InvldDataRxdFromParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_InvldDataRxdFromTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_LostComWithBodyCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_LostComWithElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_LostComWithElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_LostComWithEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_LostComWithFrntCameraCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_LostComWithParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_LostComWithTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_MCU_E_CLM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_MCU_E_CLOCK_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_MCU_E_CVM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_MCU_E_ECM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_MCU_E_INT_INCONSISTENT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_MCU_E_LOCKSTEP_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_MCU_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_MCU_E_WRITE_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_NVM_E_INTEGRITY_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_NVM_E_LOSS_OF_REDUNDANCY>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_NVM_E_QUEUE_OVERFLOW>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_NVM_E_REQ_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_NVM_E_VERIFY_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_NVM_E_WRITE_PROTECTED>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_NVM_E_WRONG_BLOCK_ID>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PORT_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PORT_E_WRITE_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_SPI_E_DATA_TX_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_SPI_E_HARDWARE_ERROR>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl1LimpHomeMod>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl2LimpOver>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl3FadeOut>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_SteerWheelAgSnsrCalNorPrfmd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_SteerWheelAgSnsrHwFlt>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_SteerWheelAgSnsrPlausly>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_SteerWhlTqInpSnsr>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_SteerWhlTqInpSnsrCalNoLrnd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_SysThermErrTHi>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_WDG_59_DRIVERA_E_INT_INCONSISTENT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_WDG_E_DISABLE_REJECTED>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_WDG_E_MODE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_WDG_E_READBACK_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_WDG_E_TRIGGER_TIMEOUT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_Wdg_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <GeneralEventInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetDTCOfEvent(Dem_DTCFormatType DTCFormat, uint32 *DTCOfEvent)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticMonitor_DEM_E_NO_DTC_AVAILABLE
 *   RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetDTCOfEvent_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_GetDTCOfEvent(Dem_EventIdType parg0, Dem_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_DEM_APPL_VAR) DTCOfEvent) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetDTCOfEvent (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetDTCStatusAvailabilityMask
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDTCStatusAvailabilityMask> of PortPrototype <DemServices>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_DcmGetDTCStatusAvailabilityMask(uint8 *DTCStatusMask)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DemServices_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetDTCStatusAvailabilityMask_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_DcmGetDTCStatusAvailabilityMask(P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DTCStatusMask) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_DcmGetDTCStatusAvailabilityMask (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetDebouncingOfEvent
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_CtrlrComChassisExpBusOff>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_CtrlrComHiSpdBusOff>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_DIO_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_DevPwrVltgOverMaxThd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_DevPwrVltgUnderMinThd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_DevPwrVltgUnderThd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_EcuHwPrfmc>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_EcuSwPrfmcCalDataSetNotProgd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_ElecSteerMotCirc>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_ElecSteerMotPosSnsrCir>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_FLS_E_COMPARE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_FLS_E_ERASE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_FLS_E_READ_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_FLS_E_READ_FAILED_DED>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_FLS_E_WRITE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_InvldDataRxdFromBodtCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_InvldDataRxdFromElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_InvldDataRxdFromElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_InvldDataRxdFromEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_InvldDataRxdFromFrntCameraMod>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_InvldDataRxdFromParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_InvldDataRxdFromTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_LostComWithBodyCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_LostComWithElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_LostComWithElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_LostComWithEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_LostComWithFrntCameraCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_LostComWithParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_LostComWithTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_MCU_E_CLM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_MCU_E_CLOCK_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_MCU_E_CVM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_MCU_E_ECM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_MCU_E_INT_INCONSISTENT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_MCU_E_LOCKSTEP_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_MCU_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_MCU_E_WRITE_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_NVM_E_INTEGRITY_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_NVM_E_LOSS_OF_REDUNDANCY>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_NVM_E_QUEUE_OVERFLOW>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_NVM_E_REQ_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_NVM_E_VERIFY_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_NVM_E_WRITE_PROTECTED>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_NVM_E_WRONG_BLOCK_ID>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PORT_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PORT_E_WRITE_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_SPI_E_DATA_TX_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_SPI_E_HARDWARE_ERROR>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl1LimpHomeMod>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl2LimpOver>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl3FadeOut>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_SteerWheelAgSnsrCalNorPrfmd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_SteerWheelAgSnsrHwFlt>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_SteerWheelAgSnsrPlausly>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_SteerWhlTqInpSnsr>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_SteerWhlTqInpSnsrCalNoLrnd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_SysThermErrTHi>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_WDG_59_DRIVERA_E_INT_INCONSISTENT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_WDG_E_DISABLE_REJECTED>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_WDG_E_MODE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_WDG_E_READBACK_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_WDG_E_TRIGGER_TIMEOUT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_Wdg_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <GeneralEventInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetDebouncingOfEvent(Dem_DebouncingStateType *DebouncingState)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticInfo_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetDebouncingOfEvent_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_GetDebouncingOfEvent(Dem_EventIdType parg0, P2VAR(Dem_DebouncingStateType, AUTOMATIC, RTE_DEM_APPL_VAR) DebouncingState) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetDebouncingOfEvent (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetEventEnableCondition
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_CtrlrComChassisExpBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_CtrlrComHiSpdBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_DIO_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_DevPwrVltgOverMaxThd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_DevPwrVltgUnderMinThd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_DevPwrVltgUnderThd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_EcuHwPrfmc>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_EcuSwPrfmcCalDataSetNotProgd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_ElecSteerMotCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_ElecSteerMotPosSnsrCir>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_FLS_E_COMPARE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_FLS_E_ERASE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_FLS_E_READ_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_FLS_E_READ_FAILED_DED>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_FLS_E_WRITE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_InvldDataRxdFromBodtCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_InvldDataRxdFromElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_InvldDataRxdFromElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_InvldDataRxdFromEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_InvldDataRxdFromFrntCameraMod>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_InvldDataRxdFromParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_InvldDataRxdFromTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_LostComWithBodyCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_LostComWithElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_LostComWithElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_LostComWithEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_LostComWithFrntCameraCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_LostComWithParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_LostComWithTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_MCU_E_CLM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_MCU_E_CLOCK_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_MCU_E_CVM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_MCU_E_ECM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_MCU_E_INT_INCONSISTENT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_MCU_E_LOCKSTEP_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_MCU_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_MCU_E_WRITE_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_NVM_E_INTEGRITY_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_NVM_E_LOSS_OF_REDUNDANCY>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_NVM_E_QUEUE_OVERFLOW>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_NVM_E_REQ_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_NVM_E_VERIFY_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_NVM_E_WRITE_PROTECTED>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_NVM_E_WRONG_BLOCK_ID>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PORT_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PORT_E_WRITE_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_SPI_E_DATA_TX_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_SPI_E_HARDWARE_ERROR>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl1LimpHomeMod>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl2LimpOver>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl3FadeOut>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_SteerWheelAgSnsrCalNorPrfmd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_SteerWheelAgSnsrHwFlt>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_SteerWheelAgSnsrPlausly>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_SteerWhlTqInpSnsr>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_SteerWhlTqInpSnsrCalNoLrnd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_SysThermErrTHi>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_WDG_59_DRIVERA_E_INT_INCONSISTENT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_WDG_E_DISABLE_REJECTED>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_WDG_E_MODE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_WDG_E_READBACK_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_WDG_E_TRIGGER_TIMEOUT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_Wdg_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <GeneralEventInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetEventEnableCondition(boolean *ConditionFullfilled)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticInfo_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetEventEnableCondition_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventEnableCondition(Dem_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) ConditionFullfilled) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetEventEnableCondition (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetEventExtendedDataRecord
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_CtrlrComChassisExpBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_CtrlrComHiSpdBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_DevPwrVltgOverMaxThd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_DevPwrVltgUnderMinThd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_DevPwrVltgUnderThd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_EcuHwPrfmc>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_EcuSwPrfmcCalDataSetNotProgd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_ElecSteerMotCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_ElecSteerMotPosSnsrCir>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_InvldDataRxdFromBodtCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_InvldDataRxdFromElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_InvldDataRxdFromElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_InvldDataRxdFromEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_InvldDataRxdFromFrntCameraMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_InvldDataRxdFromParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_InvldDataRxdFromTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_LostComWithBodyCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_LostComWithElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_LostComWithElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_LostComWithEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_LostComWithFrntCameraCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_LostComWithParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_LostComWithTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_SteerFailrMtgtnLvl1LimpHomeMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_SteerFailrMtgtnLvl2LimpOver>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_SteerFailrMtgtnLvl3FadeOut>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_SteerWheelAgSnsrCalNorPrfmd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_SteerWheelAgSnsrHwFlt>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_SteerWheelAgSnsrPlausly>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_SteerWhlTqInpSnsr>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_SteerWhlTqInpSnsrCalNoLrnd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <Event_SysThermErrTHi>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_CtrlrComChassisExpBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_CtrlrComHiSpdBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_DIO_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_DevPwrVltgOverMaxThd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_DevPwrVltgUnderMinThd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_DevPwrVltgUnderThd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_EcuHwPrfmc>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_EcuSwPrfmcCalDataSetNotProgd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_ElecSteerMotCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_ElecSteerMotPosSnsrCir>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_FLS_E_COMPARE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_FLS_E_ERASE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_FLS_E_READ_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_FLS_E_READ_FAILED_DED>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_FLS_E_WRITE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_InvldDataRxdFromBodtCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_InvldDataRxdFromElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_InvldDataRxdFromElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_InvldDataRxdFromEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_InvldDataRxdFromFrntCameraMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_InvldDataRxdFromParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_InvldDataRxdFromTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_LostComWithBodyCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_LostComWithElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_LostComWithElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_LostComWithEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_LostComWithFrntCameraCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_LostComWithParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_LostComWithTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_MCU_E_CLM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_MCU_E_CLOCK_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_MCU_E_CVM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_MCU_E_ECM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_MCU_E_INT_INCONSISTENT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_MCU_E_LOCKSTEP_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_MCU_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_MCU_E_WRITE_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_NVM_E_INTEGRITY_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_NVM_E_LOSS_OF_REDUNDANCY>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_NVM_E_QUEUE_OVERFLOW>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_NVM_E_REQ_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_NVM_E_VERIFY_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_NVM_E_WRITE_PROTECTED>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_NVM_E_WRONG_BLOCK_ID>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_PORT_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_PORT_E_WRITE_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_SPI_E_DATA_TX_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_SPI_E_HARDWARE_ERROR>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl1LimpHomeMod>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl2LimpOver>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl3FadeOut>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_SteerWheelAgSnsrCalNorPrfmd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_SteerWheelAgSnsrHwFlt>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_SteerWheelAgSnsrPlausly>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_SteerWhlTqInpSnsr>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_SteerWhlTqInpSnsrCalNoLrnd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_SysThermErrTHi>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_WDG_59_DRIVERA_E_INT_INCONSISTENT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_WDG_E_DISABLE_REJECTED>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_WDG_E_MODE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_WDG_E_READBACK_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_WDG_E_TRIGGER_TIMEOUT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <EvtInfo_Wdg_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecord> of PortPrototype <GeneralEventInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetEventExtendedDataRecord(uint8 RecordNumber, uint8 *DestBuffer)
 *     Argument DestBuffer: uint8* is of type Dem_MaxDataValueType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticMonitor_DEM_E_NODATAAVAILABLE
 *   RTE_E_DiagnosticMonitor_DEM_E_WRONG_RECORDNUMBER
 *   RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetEventExtendedDataRecord_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventExtendedDataRecord(Dem_EventIdType parg0, uint8 RecordNumber, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetEventExtendedDataRecord (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetEventFailed
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_CtrlrComChassisExpBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_CtrlrComHiSpdBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_DevPwrVltgOverMaxThd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_DevPwrVltgUnderMinThd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_DevPwrVltgUnderThd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_EcuHwPrfmc>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_EcuSwPrfmcCalDataSetNotProgd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_ElecSteerMotCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_ElecSteerMotPosSnsrCir>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_InvldDataRxdFromBodtCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_InvldDataRxdFromElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_InvldDataRxdFromElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_InvldDataRxdFromEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_InvldDataRxdFromFrntCameraMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_InvldDataRxdFromParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_InvldDataRxdFromTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_LostComWithBodyCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_LostComWithElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_LostComWithElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_LostComWithEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_LostComWithFrntCameraCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_LostComWithParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_LostComWithTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_SteerFailrMtgtnLvl1LimpHomeMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_SteerFailrMtgtnLvl2LimpOver>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_SteerFailrMtgtnLvl3FadeOut>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_SteerWheelAgSnsrCalNorPrfmd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_SteerWheelAgSnsrHwFlt>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_SteerWheelAgSnsrPlausly>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_SteerWhlTqInpSnsr>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_SteerWhlTqInpSnsrCalNoLrnd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_SysThermErrTHi>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_CtrlrComChassisExpBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_CtrlrComHiSpdBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_DIO_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_DevPwrVltgOverMaxThd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_DevPwrVltgUnderMinThd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_DevPwrVltgUnderThd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_EcuHwPrfmc>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_EcuSwPrfmcCalDataSetNotProgd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_ElecSteerMotCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_ElecSteerMotPosSnsrCir>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_FLS_E_COMPARE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_FLS_E_ERASE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_FLS_E_READ_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_FLS_E_READ_FAILED_DED>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_FLS_E_WRITE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_InvldDataRxdFromBodtCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_InvldDataRxdFromElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_InvldDataRxdFromElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_InvldDataRxdFromEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_InvldDataRxdFromFrntCameraMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_InvldDataRxdFromParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_InvldDataRxdFromTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_LostComWithBodyCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_LostComWithElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_LostComWithElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_LostComWithEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_LostComWithFrntCameraCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_LostComWithParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_LostComWithTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_MCU_E_CLM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_MCU_E_CLOCK_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_MCU_E_CVM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_MCU_E_ECM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_MCU_E_INT_INCONSISTENT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_MCU_E_LOCKSTEP_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_MCU_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_MCU_E_WRITE_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_NVM_E_INTEGRITY_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_NVM_E_LOSS_OF_REDUNDANCY>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_NVM_E_QUEUE_OVERFLOW>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_NVM_E_REQ_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_NVM_E_VERIFY_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_NVM_E_WRITE_PROTECTED>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_NVM_E_WRONG_BLOCK_ID>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PORT_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PORT_E_WRITE_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_SPI_E_DATA_TX_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_SPI_E_HARDWARE_ERROR>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl1LimpHomeMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl2LimpOver>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl3FadeOut>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_SteerWheelAgSnsrCalNorPrfmd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_SteerWheelAgSnsrHwFlt>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_SteerWheelAgSnsrPlausly>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_SteerWhlTqInpSnsr>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_SteerWhlTqInpSnsrCalNoLrnd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_SysThermErrTHi>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_WDG_59_DRIVERA_E_INT_INCONSISTENT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_WDG_E_DISABLE_REJECTED>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_WDG_E_MODE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_WDG_E_READBACK_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_WDG_E_TRIGGER_TIMEOUT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_Wdg_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <GeneralEventInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetEventFailed(boolean *EventFailed)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetEventFailed_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventFailed(Dem_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) EventFailed) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetEventFailed (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetEventFreezeFrameData
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_CtrlrComChassisExpBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_CtrlrComHiSpdBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_DevPwrVltgOverMaxThd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_DevPwrVltgUnderMinThd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_DevPwrVltgUnderThd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_EcuHwPrfmc>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_EcuSwPrfmcCalDataSetNotProgd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_ElecSteerMotCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_ElecSteerMotPosSnsrCir>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_InvldDataRxdFromBodtCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_InvldDataRxdFromElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_InvldDataRxdFromElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_InvldDataRxdFromEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_InvldDataRxdFromFrntCameraMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_InvldDataRxdFromParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_InvldDataRxdFromTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_LostComWithBodyCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_LostComWithElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_LostComWithElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_LostComWithEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_LostComWithFrntCameraCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_LostComWithParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_LostComWithTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_SteerFailrMtgtnLvl1LimpHomeMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_SteerFailrMtgtnLvl2LimpOver>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_SteerFailrMtgtnLvl3FadeOut>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_SteerWheelAgSnsrCalNorPrfmd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_SteerWheelAgSnsrHwFlt>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_SteerWheelAgSnsrPlausly>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_SteerWhlTqInpSnsr>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_SteerWhlTqInpSnsrCalNoLrnd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <Event_SysThermErrTHi>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_CtrlrComChassisExpBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_CtrlrComHiSpdBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_DIO_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_DevPwrVltgOverMaxThd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_DevPwrVltgUnderMinThd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_DevPwrVltgUnderThd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_EcuHwPrfmc>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_EcuSwPrfmcCalDataSetNotProgd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_ElecSteerMotCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_ElecSteerMotPosSnsrCir>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_FLS_E_COMPARE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_FLS_E_ERASE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_FLS_E_READ_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_FLS_E_READ_FAILED_DED>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_FLS_E_WRITE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_InvldDataRxdFromBodtCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_InvldDataRxdFromElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_InvldDataRxdFromElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_InvldDataRxdFromEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_InvldDataRxdFromFrntCameraMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_InvldDataRxdFromParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_InvldDataRxdFromTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_LostComWithBodyCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_LostComWithElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_LostComWithElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_LostComWithEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_LostComWithFrntCameraCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_LostComWithParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_LostComWithTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_MCU_E_CLM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_MCU_E_CLOCK_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_MCU_E_CVM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_MCU_E_ECM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_MCU_E_INT_INCONSISTENT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_MCU_E_LOCKSTEP_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_MCU_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_MCU_E_WRITE_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_NVM_E_INTEGRITY_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_NVM_E_LOSS_OF_REDUNDANCY>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_NVM_E_QUEUE_OVERFLOW>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_NVM_E_REQ_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_NVM_E_VERIFY_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_NVM_E_WRITE_PROTECTED>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_NVM_E_WRONG_BLOCK_ID>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_PORT_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_PORT_E_WRITE_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_SPI_E_DATA_TX_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_SPI_E_HARDWARE_ERROR>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl1LimpHomeMod>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl2LimpOver>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl3FadeOut>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_SteerWheelAgSnsrCalNorPrfmd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_SteerWheelAgSnsrHwFlt>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_SteerWheelAgSnsrPlausly>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_SteerWhlTqInpSnsr>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_SteerWhlTqInpSnsrCalNoLrnd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_SysThermErrTHi>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_WDG_59_DRIVERA_E_INT_INCONSISTENT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_WDG_E_DISABLE_REJECTED>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_WDG_E_MODE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_WDG_E_READBACK_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_WDG_E_TRIGGER_TIMEOUT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <EvtInfo_Wdg_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <GeneralEventInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetEventFreezeFrameData(uint8 RecordNumber, boolean ReportTotalRecord, uint16 DataId, uint8 *DestBuffer)
 *     Argument DestBuffer: uint8* is of type Dem_MaxDataValueType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticMonitor_DEM_E_NODATAAVAILABLE
 *   RTE_E_DiagnosticMonitor_DEM_E_WRONG_DIDNUMBER
 *   RTE_E_DiagnosticMonitor_DEM_E_WRONG_RECORDNUMBER
 *   RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetEventFreezeFrameData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventFreezeFrameData(Dem_EventIdType parg0, uint8 RecordNumber, boolean ReportTotalRecord, uint16 DataId, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetEventFreezeFrameData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetEventMemoryOverflow
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEventMemoryOverflow> of PortPrototype <OverflowIndPrimaryMemory>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetEventMemoryOverflow(boolean *OverflowIndication)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_EvMemOverflowIndication_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetEventMemoryOverflow_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventMemoryOverflow(Dem_DTCOriginType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) OverflowIndication) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetEventMemoryOverflow (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetEventStatus
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_CtrlrComChassisExpBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_CtrlrComHiSpdBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_DevPwrVltgOverMaxThd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_DevPwrVltgUnderMinThd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_DevPwrVltgUnderThd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_EcuHwPrfmc>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_EcuSwPrfmcCalDataSetNotProgd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_ElecSteerMotCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_ElecSteerMotPosSnsrCir>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_InvldDataRxdFromBodtCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_InvldDataRxdFromElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_InvldDataRxdFromElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_InvldDataRxdFromEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_InvldDataRxdFromFrntCameraMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_InvldDataRxdFromParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_InvldDataRxdFromTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_LostComWithBodyCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_LostComWithElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_LostComWithElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_LostComWithEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_LostComWithFrntCameraCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_LostComWithParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_LostComWithTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_SteerFailrMtgtnLvl1LimpHomeMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_SteerFailrMtgtnLvl2LimpOver>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_SteerFailrMtgtnLvl3FadeOut>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_SteerWheelAgSnsrCalNorPrfmd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_SteerWheelAgSnsrHwFlt>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_SteerWheelAgSnsrPlausly>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_SteerWhlTqInpSnsr>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_SteerWhlTqInpSnsrCalNoLrnd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_SysThermErrTHi>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_CtrlrComChassisExpBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_CtrlrComHiSpdBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_DIO_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_DevPwrVltgOverMaxThd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_DevPwrVltgUnderMinThd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_DevPwrVltgUnderThd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_EcuHwPrfmc>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_EcuSwPrfmcCalDataSetNotProgd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_ElecSteerMotCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_ElecSteerMotPosSnsrCir>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_FLS_E_COMPARE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_FLS_E_ERASE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_FLS_E_READ_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_FLS_E_READ_FAILED_DED>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_FLS_E_WRITE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_InvldDataRxdFromBodtCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_InvldDataRxdFromElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_InvldDataRxdFromElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_InvldDataRxdFromEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_InvldDataRxdFromFrntCameraMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_InvldDataRxdFromParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_InvldDataRxdFromTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_LostComWithBodyCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_LostComWithElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_LostComWithElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_LostComWithEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_LostComWithFrntCameraCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_LostComWithParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_LostComWithTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_MCU_E_CLM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_MCU_E_CLOCK_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_MCU_E_CVM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_MCU_E_ECM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_MCU_E_INT_INCONSISTENT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_MCU_E_LOCKSTEP_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_MCU_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_MCU_E_WRITE_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_NVM_E_INTEGRITY_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_NVM_E_LOSS_OF_REDUNDANCY>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_NVM_E_QUEUE_OVERFLOW>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_NVM_E_REQ_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_NVM_E_VERIFY_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_NVM_E_WRITE_PROTECTED>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_NVM_E_WRONG_BLOCK_ID>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PORT_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PORT_E_WRITE_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_SPI_E_DATA_TX_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_SPI_E_HARDWARE_ERROR>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl1LimpHomeMod>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl2LimpOver>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl3FadeOut>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_SteerWheelAgSnsrCalNorPrfmd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_SteerWheelAgSnsrHwFlt>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_SteerWheelAgSnsrPlausly>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_SteerWhlTqInpSnsr>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_SteerWhlTqInpSnsrCalNoLrnd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_SysThermErrTHi>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_WDG_59_DRIVERA_E_INT_INCONSISTENT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_WDG_E_DISABLE_REJECTED>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_WDG_E_MODE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_WDG_E_READBACK_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_WDG_E_TRIGGER_TIMEOUT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_Wdg_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <GeneralEventInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetEventStatus(Dem_EventStatusExtendedType *EventStatusExtended)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetEventStatus_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventStatus(Dem_EventIdType parg0, P2VAR(Dem_EventStatusExtendedType, AUTOMATIC, RTE_DEM_APPL_VAR) EventStatusExtended) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetEventStatus (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetEventTested
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_CtrlrComChassisExpBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_CtrlrComHiSpdBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_DevPwrVltgOverMaxThd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_DevPwrVltgUnderMinThd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_DevPwrVltgUnderThd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_EcuHwPrfmc>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_EcuSwPrfmcCalDataSetNotProgd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_ElecSteerMotCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_ElecSteerMotPosSnsrCir>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_InvldDataRxdFromBodtCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_InvldDataRxdFromElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_InvldDataRxdFromElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_InvldDataRxdFromEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_InvldDataRxdFromFrntCameraMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_InvldDataRxdFromParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_InvldDataRxdFromTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_LostComWithBodyCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_LostComWithElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_LostComWithElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_LostComWithEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_LostComWithFrntCameraCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_LostComWithParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_LostComWithTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_SteerFailrMtgtnLvl1LimpHomeMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_SteerFailrMtgtnLvl2LimpOver>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_SteerFailrMtgtnLvl3FadeOut>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_SteerWheelAgSnsrCalNorPrfmd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_SteerWheelAgSnsrHwFlt>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_SteerWheelAgSnsrPlausly>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_SteerWhlTqInpSnsr>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_SteerWhlTqInpSnsrCalNoLrnd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_SysThermErrTHi>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_CtrlrComChassisExpBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_CtrlrComHiSpdBusOff>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_DIO_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_DevPwrVltgOverMaxThd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_DevPwrVltgUnderMinThd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_DevPwrVltgUnderThd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_EcuHwPrfmc>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_EcuSwPrfmcCalDataSetNotProgd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_ElecSteerMotCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_ElecSteerMotPosSnsrCir>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_FLS_E_COMPARE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_FLS_E_ERASE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_FLS_E_READ_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_FLS_E_READ_FAILED_DED>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_FLS_E_WRITE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_InvldDataRxdFromBodtCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_InvldDataRxdFromElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_InvldDataRxdFromElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_InvldDataRxdFromEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_InvldDataRxdFromFrntCameraMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_InvldDataRxdFromParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_InvldDataRxdFromTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_LostComWithBodyCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_LostComWithElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_LostComWithElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_LostComWithEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_LostComWithFrntCameraCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_LostComWithParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_LostComWithTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_MCU_E_CLM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_MCU_E_CLOCK_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_MCU_E_CVM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_MCU_E_ECM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_MCU_E_INT_INCONSISTENT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_MCU_E_LOCKSTEP_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_MCU_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_MCU_E_WRITE_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_NVM_E_INTEGRITY_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_NVM_E_LOSS_OF_REDUNDANCY>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_NVM_E_QUEUE_OVERFLOW>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_NVM_E_REQ_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_NVM_E_VERIFY_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_NVM_E_WRITE_PROTECTED>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_NVM_E_WRONG_BLOCK_ID>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PORT_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PORT_E_WRITE_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_SPI_E_DATA_TX_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_SPI_E_HARDWARE_ERROR>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl1LimpHomeMod>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl2LimpOver>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl3FadeOut>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_SteerWheelAgSnsrCalNorPrfmd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_SteerWheelAgSnsrHwFlt>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_SteerWheelAgSnsrPlausly>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_SteerWhlTqInpSnsr>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_SteerWhlTqInpSnsrCalNoLrnd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_SysThermErrTHi>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_WDG_59_DRIVERA_E_INT_INCONSISTENT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_WDG_E_DISABLE_REJECTED>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_WDG_E_MODE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_WDG_E_READBACK_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_WDG_E_TRIGGER_TIMEOUT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_Wdg_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <GeneralEventInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetEventTested(boolean *EventTested)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetEventTested_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventTested(Dem_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) EventTested) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetEventTested (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetFaultDetectionCounter
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_CtrlrComChassisExpBusOff>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_CtrlrComHiSpdBusOff>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_DevPwrVltgOverMaxThd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_DevPwrVltgUnderMinThd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_DevPwrVltgUnderThd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_EcuHwPrfmc>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_EcuSwPrfmcCalDataSetNotProgd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_ElecSteerMotCirc>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_ElecSteerMotPosSnsrCir>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_InvldDataRxdFromBodtCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_InvldDataRxdFromElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_InvldDataRxdFromElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_InvldDataRxdFromEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_InvldDataRxdFromFrntCameraMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_InvldDataRxdFromParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_InvldDataRxdFromTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_LostComWithBodyCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_LostComWithElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_LostComWithElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_LostComWithEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_LostComWithFrntCameraCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_LostComWithParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_LostComWithTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_SteerFailrMtgtnLvl1LimpHomeMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_SteerFailrMtgtnLvl2LimpOver>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_SteerFailrMtgtnLvl3FadeOut>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_SteerWheelAgSnsrCalNorPrfmd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_SteerWheelAgSnsrHwFlt>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_SteerWheelAgSnsrPlausly>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_SteerWhlTqInpSnsr>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_SteerWhlTqInpSnsrCalNoLrnd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_SysThermErrTHi>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_CtrlrComChassisExpBusOff>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_CtrlrComHiSpdBusOff>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_DIO_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_DevPwrVltgOverMaxThd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_DevPwrVltgUnderMinThd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_DevPwrVltgUnderThd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_EcuHwPrfmc>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_EcuSwPrfmcCalDataSetNotProgd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_ElecSteerMotCirc>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_ElecSteerMotPosSnsrCir>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_FLS_E_COMPARE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_FLS_E_ERASE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_FLS_E_READ_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_FLS_E_READ_FAILED_DED>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_FLS_E_WRITE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_InvldDataRxdFromBodtCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_InvldDataRxdFromElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_InvldDataRxdFromElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_InvldDataRxdFromEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_InvldDataRxdFromFrntCameraMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_InvldDataRxdFromParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_InvldDataRxdFromTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_LostComWithBodyCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_LostComWithElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_LostComWithElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_LostComWithEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_LostComWithFrntCameraCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_LostComWithParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_LostComWithTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_MCU_E_CLM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_MCU_E_CLOCK_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_MCU_E_CVM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_MCU_E_ECM_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_MCU_E_INT_INCONSISTENT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_MCU_E_LOCKSTEP_SELFDIAG_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_MCU_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_MCU_E_WRITE_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_NVM_E_INTEGRITY_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_NVM_E_LOSS_OF_REDUNDANCY>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_NVM_E_QUEUE_OVERFLOW>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_NVM_E_REQ_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_NVM_E_VERIFY_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_NVM_E_WRITE_PROTECTED>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_NVM_E_WRONG_BLOCK_ID>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PORT_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PORT_E_WRITE_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_SPI_E_DATA_TX_TIMEOUT_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_SPI_E_HARDWARE_ERROR>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl1LimpHomeMod>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl2LimpOver>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_SteerFailrMtgtnLvl3FadeOut>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_SteerWheelAgSnsrCalNorPrfmd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_SteerWheelAgSnsrHwFlt>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_SteerWheelAgSnsrPlausly>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_SteerWhlTqInpSnsr>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_SteerWhlTqInpSnsrCalNoLrnd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_SysThermErrTHi>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_WDG_59_DRIVERA_E_INT_INCONSISTENT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_WDG_E_DISABLE_REJECTED>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_WDG_E_MODE_FAILED>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_WDG_E_READBACK_FAILURE>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_WDG_E_TRIGGER_TIMEOUT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_Wdg_E_REG_WRITE_VERIFY>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <GeneralEventInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetFaultDetectionCounter(sint8 *FaultDetectionCounter)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticMonitor_DEM_E_NO_FDC_AVAILABLE
 *   RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetFaultDetectionCounter_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_GetFaultDetectionCounter(Dem_EventIdType parg0, P2VAR(sint8, AUTOMATIC, RTE_DEM_APPL_VAR) FaultDetectionCounter) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetFaultDetectionCounter (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetIndicatorStatus
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetIndicatorStatus> of PortPrototype <IndStatus_PwrSteerIndcr>
 *   - triggered by server invocation for OperationPrototype <GetIndicatorStatus> of PortPrototype <IndStatus_SteerAssiLimd>
 *   - triggered by server invocation for OperationPrototype <GetIndicatorStatus> of PortPrototype <IndStatus_SteerAssiLimdLvl2>
 *   - triggered by server invocation for OperationPrototype <GetIndicatorStatus> of PortPrototype <IndStatus_SteerAssiLimdLvl3>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetIndicatorStatus(Dem_IndicatorStatusType *IndicatorStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_IndicatorStatus_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetIndicatorStatus_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_GetIndicatorStatus(uint8 parg0, P2VAR(Dem_IndicatorStatusType, AUTOMATIC, RTE_DEM_APPL_VAR) IndicatorStatus) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetIndicatorStatus (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNumberOfEventMemoryEntries
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetNumberOfEventMemoryEntries> of PortPrototype <OverflowIndPrimaryMemory>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetNumberOfEventMemoryEntries(uint8 *NumberOfEventMemoryEntries)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_EvMemOverflowIndication_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNumberOfEventMemoryEntries_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_GetNumberOfEventMemoryEntries(Dem_DTCOriginType parg0, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) NumberOfEventMemoryEntries) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetNumberOfEventMemoryEntries (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PostRunRequested
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetPostRunRequested> of PortPrototype <DemServices>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_PostRunRequested(boolean *IsRequested)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DemServices_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PostRunRequested_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_PostRunRequested(P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) IsRequested) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_PostRunRequested (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ResetEventDebounceStatus
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_CtrlrComChassisExpBusOff>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_CtrlrComHiSpdBusOff>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_DevPwrVltgOverMaxThd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_DevPwrVltgUnderMinThd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_DevPwrVltgUnderThd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_EcuHwPrfmc>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_EcuSwPrfmcCalDataSetNotProgd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_ElecSteerMotCirc>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_ElecSteerMotPosSnsrCir>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_InvldDataRxdFromBodtCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_InvldDataRxdFromElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_InvldDataRxdFromElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_InvldDataRxdFromEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_InvldDataRxdFromFrntCameraMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_InvldDataRxdFromParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_InvldDataRxdFromTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_LostComWithBodyCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_LostComWithElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_LostComWithElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_LostComWithEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_LostComWithFrntCameraCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_LostComWithParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_LostComWithTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_SteerFailrMtgtnLvl1LimpHomeMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_SteerFailrMtgtnLvl2LimpOver>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_SteerFailrMtgtnLvl3FadeOut>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_SteerWheelAgSnsrCalNorPrfmd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_SteerWheelAgSnsrHwFlt>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_SteerWheelAgSnsrPlausly>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_SteerWhlTqInpSnsr>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_SteerWhlTqInpSnsrCalNoLrnd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_SysThermErrTHi>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_ResetEventDebounceStatus(Dem_DebounceResetStatusType DebounceResetStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ResetEventDebounceStatus_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_ResetEventDebounceStatus(Dem_EventIdType parg0, Dem_DebounceResetStatusType DebounceResetStatus) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_ResetEventDebounceStatus (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ResetEventStatus
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_CtrlrComChassisExpBusOff>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_CtrlrComHiSpdBusOff>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_DevPwrVltgOverMaxThd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_DevPwrVltgUnderMinThd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_DevPwrVltgUnderThd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_EcuHwPrfmc>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_EcuSwPrfmcCalDataSetNotProgd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_ElecSteerMotCirc>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_ElecSteerMotPosSnsrCir>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_InvldDataRxdFromBodtCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_InvldDataRxdFromElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_InvldDataRxdFromElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_InvldDataRxdFromEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_InvldDataRxdFromFrntCameraMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_InvldDataRxdFromParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_InvldDataRxdFromTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_LostComWithBodyCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_LostComWithElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_LostComWithElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_LostComWithEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_LostComWithFrntCameraCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_LostComWithParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_LostComWithTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_SteerFailrMtgtnLvl1LimpHomeMod>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_SteerFailrMtgtnLvl2LimpOver>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_SteerFailrMtgtnLvl3FadeOut>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_SteerWheelAgSnsrCalNorPrfmd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_SteerWheelAgSnsrHwFlt>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_SteerWheelAgSnsrPlausly>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_SteerWhlTqInpSnsr>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_SteerWhlTqInpSnsrCalNoLrnd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_SysThermErrTHi>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CBStatusDTC_1_DTCStatusChanged(uint32 DTC, Dem_DTCStatusMaskType DTCStatusOld, Dem_DTCStatusMaskType DTCStatusNew)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CallbackDTCStatusChange_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_ResetEventStatus(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ResetEventStatus_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_ResetEventStatus(Dem_EventIdType parg0) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_ResetEventStatus (returns application error)
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBStatusDTC_1_DTCStatusChanged; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBStatusDTC_1_DTCStatusChanged(0U, 0U, 0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CallbackDTCStatusChange_E_NOT_OK:
      fct_error = 1;
      break;
  }

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetEnableCondition
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetEnableCondition> of PortPrototype <EnableCond_DemEnableConditionA>
 *   - triggered by server invocation for OperationPrototype <SetEnableCondition> of PortPrototype <EnableCond_DemEnableConditionB>
 *   - triggered by server invocation for OperationPrototype <SetEnableCondition> of PortPrototype <EnableCond_DemEnableConditionC>
 *   - triggered by server invocation for OperationPrototype <SetEnableCondition> of PortPrototype <EnableCond_DemEnableConditionD>
 *   - triggered by server invocation for OperationPrototype <SetEnableCondition> of PortPrototype <EnableCond_DemEnableConditionE>
 *   - triggered by server invocation for OperationPrototype <SetEnableCondition> of PortPrototype <EnableCond_DemEnableConditionF>
 *   - triggered by server invocation for OperationPrototype <SetEnableCondition> of PortPrototype <EnableCond_DemEnableConditionG>
 *   - triggered by server invocation for OperationPrototype <SetEnableCondition> of PortPrototype <EnableCond_DemEnableConditionH>
 *   - triggered by server invocation for OperationPrototype <SetEnableCondition> of PortPrototype <EnableCond_DemEnableConditionI>
 *   - triggered by server invocation for OperationPrototype <SetEnableCondition> of PortPrototype <EnableCond_DemEnableConditionJ>
 *   - triggered by server invocation for OperationPrototype <SetEnableCondition> of PortPrototype <EnableCond_DemEnableConditionK>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_SetEnableCondition(boolean ConditionFulfilled)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_EnableCondition_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetEnableCondition_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_SetEnableCondition(uint8 parg0, boolean ConditionFulfilled) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_SetEnableCondition (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetEventStatus
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_CtrlrComChassisExpBusOff>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_CtrlrComHiSpdBusOff>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_DevPwrVltgOverMaxThd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_DevPwrVltgUnderMinThd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_DevPwrVltgUnderThd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_EcuHwPrfmc>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_EcuSwPrfmcCalDataSetNotProgd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_ElecSteerMotCirc>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_ElecSteerMotPosSnsrCir>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_InvldDataRxdFromBodtCtrlMod>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_InvldDataRxdFromElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_InvldDataRxdFromElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_InvldDataRxdFromEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_InvldDataRxdFromFrntCameraMod>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_InvldDataRxdFromParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_InvldDataRxdFromTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_LostComWithBodyCtrlMod>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_LostComWithElecBrkCtrlMod>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_LostComWithElecBrkCtrlModChassisExp>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_LostComWithEngCtrlMod>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_LostComWithFrntCameraCtrlMod>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_LostComWithParkAssiCtrlMod>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_LostComWithTrsmCtrlMod>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_SteerFailrMtgtnLvl1LimpHomeMod>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_SteerFailrMtgtnLvl2LimpOver>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_SteerFailrMtgtnLvl3FadeOut>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_SteerWheelAgSnsrCalNorPrfmd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_SteerWheelAgSnsrHwFlt>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_SteerWheelAgSnsrPlausly>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_SteerWhlTqInpSnsr>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_SteerWhlTqInpSnsrCalNoLrnd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_SysThermErrTHi>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CBStatusDTC_1_DTCStatusChanged(uint32 DTC, Dem_DTCStatusMaskType DTCStatusOld, Dem_DTCStatusMaskType DTCStatusNew)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CallbackDTCStatusChange_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_SetEventStatus(Dem_EventStatusType EventStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetEventStatus_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_SetEventStatus(Dem_EventIdType parg0, Dem_EventStatusType EventStatus) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_SetEventStatus (returns application error)
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  {
    FncPtrType Dem_FctPtr; /* PRQA S 3408 */
    Dem_FctPtr = (FncPtrType)TSC_Dem_Rte_Call_CBStatusDTC_1_DTCStatusChanged; /* PRQA S 0313 */
  }
  fct_status = TSC_Dem_Rte_Call_CBStatusDTC_1_DTCStatusChanged(0U, 0U, 0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CallbackDTCStatusChange_E_NOT_OK:
      fct_error = 1;
      break;
  }

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetOperationCycleState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetOperationCycleState> of PortPrototype <OpCycle_PowerCycle>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_SetOperationCycleState(Dem_OperationCycleStateType CycleState)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_OperationCycle_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetOperationCycleState_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, Dem_CODE) Dem_SetOperationCycleState(Dem_OperationCycleIdType parg0, Dem_OperationCycleStateType CycleState) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_SetOperationCycleState (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define Dem_STOP_SEC_CODE
#include "Dem_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void Dem_TestDefines(void)
{
  /* Enumeration Data Types */

  Dem_DTCFormatType Test_Dem_DTCFormatType_V_1 = DEM_DTC_FORMAT_OBD;
  Dem_DTCFormatType Test_Dem_DTCFormatType_V_2 = DEM_DTC_FORMAT_UDS;
  Dem_DTCFormatType Test_Dem_DTCFormatType_V_3 = DEM_DTC_FORMAT_J1939;

  Dem_DTCKindType Test_Dem_DTCKindType_V_1 = DEM_DTC_KIND_ALL_DTCS;
  Dem_DTCKindType Test_Dem_DTCKindType_V_2 = DEM_DTC_KIND_EMISSION_REL_DTCS;

  Dem_DTCOriginType Test_Dem_DTCOriginType_V_1 = DEM_DTC_ORIGIN_PRIMARY_MEMORY;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_2 = DEM_DTC_ORIGIN_MIRROR_MEMORY;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_3 = DEM_DTC_ORIGIN_PERMANENT_MEMORY;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_4 = DEM_DTC_ORIGIN_SECONDARY_MEMORY;

  Dem_DebounceResetStatusType Test_Dem_DebounceResetStatusType_V_1 = DEM_DEBOUNCE_STATUS_FREEZE;
  Dem_DebounceResetStatusType Test_Dem_DebounceResetStatusType_V_2 = DEM_DEBOUNCE_STATUS_RESET;

  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_1 = DEM_TEMPORARILY_DEFECTIVE;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_2 = DEM_FINALLY_DEFECTIVE;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_3 = DEM_TEMPORARILY_HEALED;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_4 = DEM_TEST_COMPLETE;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_5 = DEM_DTR_UPDATE;

  Dem_EventStatusExtendedType Test_Dem_EventStatusExtendedType_V_1 = DEM_UDS_STATUS_TF;
  Dem_EventStatusExtendedType Test_Dem_EventStatusExtendedType_V_2 = DEM_UDS_STATUS_TFTOC;
  Dem_EventStatusExtendedType Test_Dem_EventStatusExtendedType_V_3 = DEM_UDS_STATUS_PDTC;
  Dem_EventStatusExtendedType Test_Dem_EventStatusExtendedType_V_4 = DEM_UDS_STATUS_CDTC;
  Dem_EventStatusExtendedType Test_Dem_EventStatusExtendedType_V_5 = DEM_UDS_STATUS_TNCSLC;
  Dem_EventStatusExtendedType Test_Dem_EventStatusExtendedType_V_6 = DEM_UDS_STATUS_TFSLC;
  Dem_EventStatusExtendedType Test_Dem_EventStatusExtendedType_V_7 = DEM_UDS_STATUS_TNCTOC;
  Dem_EventStatusExtendedType Test_Dem_EventStatusExtendedType_V_8 = DEM_UDS_STATUS_WIR;

  Dem_EventStatusType Test_Dem_EventStatusType_V_1 = DEM_EVENT_STATUS_PASSED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_2 = DEM_EVENT_STATUS_FAILED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_3 = DEM_EVENT_STATUS_PREPASSED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_4 = DEM_EVENT_STATUS_PREFAILED;

  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_1 = DEM_INDICATOR_OFF;
  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_2 = DEM_INDICATOR_CONTINUOUS;
  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_3 = DEM_INDICATOR_BLINKING;
  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_4 = DEM_INDICATOR_BLINK_CONT;
  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_5 = DEM_INDICATOR_SLOW_FLASH;
  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_6 = DEM_INDICATOR_FAST_FLASH;
  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_7 = DEM_INDICATOR_ON_DEMAND;
  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_8 = DEM_INDICATOR_SHORT;

  Dem_InitMonitorReasonType Test_Dem_InitMonitorReasonType_V_1 = DEM_INIT_MONITOR_CLEAR;
  Dem_InitMonitorReasonType Test_Dem_InitMonitorReasonType_V_2 = DEM_INIT_MONITOR_RESTART;
  Dem_InitMonitorReasonType Test_Dem_InitMonitorReasonType_V_3 = DEM_INIT_MONITOR_REENABLED;

  Dem_IumprDenomCondIdType Test_Dem_IumprDenomCondIdType_V_1 = DEM_IUMPR_GENERAL_DENOMINATOR;
  Dem_IumprDenomCondIdType Test_Dem_IumprDenomCondIdType_V_2 = DEM_IUMPR_DEN_COND_COLDSTART;
  Dem_IumprDenomCondIdType Test_Dem_IumprDenomCondIdType_V_3 = DEM_IUMPR_DEN_COND_EVAP;
  Dem_IumprDenomCondIdType Test_Dem_IumprDenomCondIdType_V_4 = DEM_IUMPR_DEN_COND_500MI;

  Dem_IumprDenomCondStatusType Test_Dem_IumprDenomCondStatusType_V_1 = DEM_IUMPR_DEN_STATUS_NOT_REACHED;
  Dem_IumprDenomCondStatusType Test_Dem_IumprDenomCondStatusType_V_2 = DEM_IUMPR_DEN_STATUS_REACHED;
  Dem_IumprDenomCondStatusType Test_Dem_IumprDenomCondStatusType_V_3 = DEM_IUMPR_DEN_STATUS_INHIBITED;

  Dem_OperationCycleStateType Test_Dem_OperationCycleStateType_V_1 = DEM_CYCLE_STATE_START;
  Dem_OperationCycleStateType Test_Dem_OperationCycleStateType_V_2 = DEM_CYCLE_STATE_END;
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

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0777:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

   MD_Rte_0779:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

*/
