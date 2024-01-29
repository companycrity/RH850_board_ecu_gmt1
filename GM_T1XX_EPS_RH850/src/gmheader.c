/**********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name  : gmheader.c
* Module Description: GM Header Information
* Project           : GM T1xx
* Author            : P.Srinivasa
***********************************************************************************************************************
* Version Control:
* %version:          7 %
* %derived_by:       kzdyfh %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 05/01/15   1       PS       Initial version                                                                  EA4#553
* 05/03/15   2       LWW      Updated pragma statements                                                        EA4#553
* 01/28/16   3       JWJ      Updates for new CRC symbols and dummy values to support Flash CRC                EA4#3350
* 03/24/16   6       JWJ      Updates to add third calibration segment                                         EA4#4829
* 04/05/16   7       JWJ      Corrected application length in application table to reflect the new size        EA4#5122
* 08/08/16   8       JWJ      Corrected byte ordering for little endian processor                              EA4#6843
**********************************************************************************************************************/

#define GM_HEADER_DATA

/******************************************************************************/
/* Include files                                                              */
/******************************************************************************/
#include "gmheader.h"

/* Application Presence Pattern */
#pragma ghs section rosdata =".N_PresPattAppSeg"
const uint16 PresencePatternApp = 0x96A5U;
#pragma ghs section

/* Calibration Presence Pattern */
#pragma ghs section rosdata =".N_PresPattCalSeg"
const uint16 PresencePatternCal = 0x96A5U;
#pragma ghs section

/* Calibration Presence Pattern */
#pragma ghs section rosdata=".N_PresPattCalSeg2"
const uint16 PresencePatternCal2 = 0x96A5U;
#pragma ghs section

/* Calibration Presence Pattern */
#pragma ghs section rosdata=".N_PresPattCalSeg3"
const uint16 PresencePatternCal3 = 0x96A5U;
#pragma ghs section

#pragma ghs section rosdata=".APPLCRC"
const uint32 DummyApplCrc = 0x00000000U;
#pragma ghs section

#pragma ghs section rosdata=".CAL1CRC"
const uint32 DummyCal1Crc = 0x00000000U;
#pragma ghs section

#pragma ghs section rosdata=".CAL2CRC"
const uint32 DummyCal2Crc = 0x00000000U;
#pragma ghs section

#pragma ghs section rosdata=".CAL3CRC"
const uint32 DummyCal3Crc = 0x00000000U;
#pragma ghs section


/* #pragma to locate data to the first segment of the application via linker command file!!!  */
#pragma ghs section rodata=".N_AppHeaderSeg"
const tSwmApplHeader GM_ApplHeader =
{
	/* 16-Bit value calculated from integrity algorithm */
	SwapEndianess_m(INTEGRITY_WORD),

	/* 2-byte Configuration options */
	SwapEndianess_m(CONFIG_OPTIONS),

	/* 2 bytes for the Module ID */
	SwapEndianess_m(MODID_APPLICATION),

	/* Followed by 2 byte Data Compatibility Identifier */
	SwapEndianess_m(DCID_APPLICATION),

	/* Indicates the Application software-Not Before ID of the current application software version */
	SwapEndianess_m(APP_NBID),

	/*DLS: Design Level Suffix - 2 bytes ASCII */
	SwapEndianess_m(DLS_APPLICATION),

	/* 4 byte SW module Part Number */
	{SwapEndianess_m(PART_NO_APPLICATION >> 16U), SwapEndianess_m(PART_NO_APPLICATION & 0xFFFFU)},

	/* Maximum Number of Applications */
	SwapEndianess_m(SWM_DATA_MAX_NOAR_APP),

	/* Application SW Location Info */
	{
		{	/* Application */
			{SwapEndianess_m(REGN_STRT_APPL >> 16U), SwapEndianess_m(REGN_STRT_APPL & 0xFFFFU)},  /* Application Start */
			{SwapEndianess_m(REGN_SIZE_APPL >> 16U), SwapEndianess_m(REGN_SIZE_APPL & 0xFFFFU)}   /* Application Size */
		}
	},

	/* Maximum Number of Calibrations */
	SwapEndianess_m(SWM_DATA_MAX_NOAM),

	/* Provide as many additional-modules in NOAM (we use 2 in our example). */
	{
		{	/* Calibration 2 */
			{SwapEndianess_m(0x0001U)},                                                          /* Number of Address Regions */
			{SwapEndianess_m(REGN_STRT_CAL2 >> 16U), SwapEndianess_m(REGN_STRT_CAL2 & 0xFFFFU)}, /* Product Memory Address */
			{SwapEndianess_m(REGN_SIZE_CAL2 >> 16U), SwapEndianess_m(REGN_SIZE_CAL2 & 0xFFFFU)}, /* Number Of Bytes */
			{SwapEndianess_m(0x0001U)},                                                          /* Number of Cal modules */
			SwapEndianess_m(MODID_CALIBRATION2),                                                 /* Cal Module ID */
			SwapEndianess_m(DCID_CALIBRATION),                                                   /* Cal Compatibility Identifier */
			{SwapEndianess_m(REGN_STRT_CAL2 >> 16U), SwapEndianess_m(REGN_STRT_CAL2 & 0xFFFFU)}, /* Product Memory Address */
			{SwapEndianess_m((REGN_SIZE_CAL2 - CAL_HDR_SIZE) >> 16U), SwapEndianess_m((REGN_SIZE_CAL2 - CAL_HDR_SIZE) & 0xFFFFU)}, /* Number Of Bytes */
		},
		{	/* Calibration 1 */
			{SwapEndianess_m(0x0001U)},                                                          /* Number of Address Regions */
			{SwapEndianess_m(REGN_STRT_CAL1 >> 16U), SwapEndianess_m(REGN_STRT_CAL1 & 0xFFFFU)}, /* Product Memory Address */
			{SwapEndianess_m(REGN_SIZE_CAL1 >> 16U), SwapEndianess_m(REGN_SIZE_CAL1 & 0xFFFFU)}, /* Number Of Bytes */
			{SwapEndianess_m(0x0001U)},                                                          /* Number of Cal modules */
			SwapEndianess_m(MODID_CALIBRATION1),                                                 /* Cal Module ID */
			SwapEndianess_m(DCID_CALIBRATION),                                                   /* Cal Compatibility Identifier */
			{SwapEndianess_m(REGN_STRT_CAL1 >> 16U), SwapEndianess_m(REGN_STRT_CAL1 & 0xFFFFU)}, /* Product Memory Address */
			{SwapEndianess_m((REGN_SIZE_CAL1 - CAL_HDR_SIZE) >> 16U), SwapEndianess_m((REGN_SIZE_CAL1 - CAL_HDR_SIZE) & 0xFFFFU)}, /* Number Of Bytes */
		},
		{	/* Calibration 3 */
			{SwapEndianess_m(0x0001U)},                                                          /* Number of Address Regions */
			{SwapEndianess_m(REGN_STRT_CAL3 >> 16U), SwapEndianess_m(REGN_STRT_CAL3 & 0xFFFFU)}, /* Product Memory Address */
			{SwapEndianess_m(REGN_SIZE_CAL3 >> 16U), SwapEndianess_m(REGN_SIZE_CAL3 & 0xFFFFU)}, /* Number Of Bytes */
			{SwapEndianess_m(0x0001U)},                                                          /* Number of Cal modules */
			SwapEndianess_m(MODID_CALIBRATION3),                                                 /* Cal Module ID */
			SwapEndianess_m(DCID_CALIBRATION),                                                   /* Cal Compatibility Identifier */
			{SwapEndianess_m(REGN_STRT_CAL3 >> 16U), SwapEndianess_m(REGN_STRT_CAL3 & 0xFFFFU)}, /* Product Memory Address */
			{SwapEndianess_m((REGN_SIZE_CAL3 - CAL_HDR_SIZE) >> 16U), SwapEndianess_m((REGN_SIZE_CAL3 - CAL_HDR_SIZE) & 0xFFFFU)}, /* Number Of Bytes */
		}
	}
};
#pragma ghs section

/* #pragma to locate data to the first segment of the calibration via linker command file!!!  */
#pragma ghs section rodata=".N_CalHeaderSeg"
const tSwmCalHeader GM_Cal1Header=
{
	/* 2-byte Checksum. 11AA is a placeholder for CANFlash to calculate and put in the checksum */
	SwapEndianess_m(INTEGRITY_WORD),

	/* 2-byte Configuration options */
	SwapEndianess_m(CONFIG_OPTIONS),

	/* 2 bytes for the Module ID */
	SwapEndianess_m(MODID_CALIBRATION1),

	/* Followed by 2 byte Data Compatibility Identifier */
	SwapEndianess_m(DCID_CALIBRATION),

	/*DLS: Design Level Suffix - 2 bytes ASCII */
	SwapEndianess_m(DLS_CALIBRATION1),

	/* 4 byte SW module Part Number represented in hex format */
	{SwapEndianess_m(PART_NO_CALIBRATION1 >> 16U), SwapEndianess_m(PART_NO_CALIBRATION1)},
};
#pragma ghs section

/* #pragma to locate data to the first segment of the calibration via linker command file!!!  */
#pragma ghs section rodata=".N_Cal2HeaderSeg"
const tSwmCalHeader GM_Cal2Header=
{
	/* 2-byte Checksum. 11AA is a placeholder for CANFlash to calculate and put in the checksum */
	SwapEndianess_m(INTEGRITY_WORD),

	/* 2-byte Configuration options */
	SwapEndianess_m(CONFIG_OPTIONS),

	/* 2 bytes for the Module ID */
	SwapEndianess_m(MODID_CALIBRATION2),

	/* Followed by 2 byte Data Compatibility Identifier */
	SwapEndianess_m(DCID_CALIBRATION),

	/*DLS: Design Level Suffix - 2 bytes ASCII */
	SwapEndianess_m(DLS_CALIBRATION2),

	/* 4 byte SW module Part Number in hex format */
	{SwapEndianess_m(PART_NO_CALIBRATION2 >> 16U), SwapEndianess_m(PART_NO_CALIBRATION2)},
};
#pragma ghs section

/* #pragma to locate data to the first segment of the calibration via linker command file!!!  */
#pragma ghs section rodata=".N_Cal3HeaderSeg"
const tSwmCalHeader GM_Cal3Header=
{
	/* 2-byte Checksum. 11AA is a placeholder for CANFlash to calculate and put in the checksum */
	SwapEndianess_m(INTEGRITY_WORD),

	/* 2-byte Configuration options */
	SwapEndianess_m(CONFIG_OPTIONS),

	/* 2 bytes for the Module ID */
	SwapEndianess_m(MODID_CALIBRATION3),

	/* Followed by 2 byte Data Compatibility Identifier */
	SwapEndianess_m(DCID_CALIBRATION),

	/* DLS: Design Level Suffix - 2 bytes ASCII */
	SwapEndianess_m(DLS_CALIBRATION3),

	/* 4 byte SW module Part Number in hex format */
	{SwapEndianess_m(PART_NO_CALIBRATION3 >> 16U), SwapEndianess_m(PART_NO_CALIBRATION3)},
};
#pragma ghs section
