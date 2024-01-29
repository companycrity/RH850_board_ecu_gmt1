/**********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name  : gmheader.h
* Module Description: GM Header Information
* Project           : GM T1xx
* Author            : P.Srinivasa
***********************************************************************************************************************
* Version Control:
* %version:          11 %
* %derived_by:       nz2654 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 05/01/15   1       PS       Initial version                                                                  EA4#553
* 08/14/15   2       MS       Minor variable name update                                                       EA4#1326
* 03/24/16   5       JWJ      Updates to add third calibration segment                                         EA4#4829
* 08/08/16   6       JWJ      Updated DLS codes for 06.xx.xx IVER vehicle delivery                             EA4#6843
* 08/08/16   7       JWJ      Corrected byte ordering for little endian processor                              EA4#6843
* 08/26/16   8       JWJ      Updated part numbers for GM IVER vehicle build                                   EA4#6843
* 12/22/16   9       JWJ      Updated part numbers for delivery of 07.01.xx software                           EA4#9035
* 02/08/17  11       HM       Updated part numbers for delivery of 07.02.xx software                           EA4#9740
**********************************************************************************************************************/

#ifndef GMHEADER_H
#define GMHEADER_H

/* The GM Headers are expected to follow a byte ordering that is Big Endian but the microcontroller is Little Endian.
 * To support this requirement the following macro is used to swap the byte order for each uint16 in the header but
 * allow the values defined below to remain human readable. */
#define SwapEndianess_m(val)  ((uint16)(((uint16)(val)&0xFF00U)>>8U)|(((uint16)(val)&0x00FFU)<<8U))

#include "Std_Types.h"

/* Use this number as the max. PMA you will reserve for CANFlash */
#define SWM_DATA_MAX_NOAR_APP  1

/* Use this number as the max. additional-modules reserved for CANFlash */
#define SWM_DATA_MAX_NOAM  3

/* Checksum magic code to instruct CANFLash to calculate the HEX-File checksum */
#define INTEGRITY_WORD     0xFFFFu
#define CONFIG_OPTIONS     0x0000u
#define APP_NBID           0x0001u

/* Application/Calibration Region Definitions */
#define REGN_STRT_APPL   0x00018000
#define REGN_SIZE_APPL   0x0009FE00
#define REGN_STRT_CAL1   0x000C0000
#define REGN_SIZE_CAL1   0x00020000
#define REGN_STRT_CAL2   0x000B8000
#define REGN_SIZE_CAL2   0x00008000
#define REGN_STRT_CAL3   0x000E0000
#define REGN_SIZE_CAL3   0x00020000
#define CAL_HDR_SIZE     0x200

/* Module ID for the application */
#define MODID_APPLICATION    0x0001u
#define MODID_CALIBRATION1   0x0004u
#define MODID_CALIBRATION2   0x0003u
#define MODID_CALIBRATION3   0x0002u

#define PART_NO_APPLICATION   84035813u  /* DID C1 */
#define PART_NO_CALIBRATION1  84158448u  /* Region 01 - System Cals - DID C4 */
#define PART_NO_CALIBRATION2  84035816u  /* Region 02 - Feature Cals - DID C3 */
#define PART_NO_CALIBRATION3  84035818u  /* Region 03 - Performance Cals - DID C2 */

#define DLS_APPLICATION  0x4441  /* ASCII "DA" - DID D1 */
#define DLS_CALIBRATION1 0x5A5A  /* ASCII "ZZ" - Region 01 - System Cals - DID D4 */
#define DLS_CALIBRATION2 0x5A5A  /* ASCII "ZZ" - Region 02 - Feature Cals - DID D3 */
#define DLS_CALIBRATION3 0x5A5A  /* ASCII "ZZ" - Region 03 - Performance Cals - DID D2 */

/* Data Compatibility ID for the application: Must match DCID in FBL */
#define DCID_APPLICATION     0x8003u

/* Data Compatibility ID for the calibration: Must match DCID in App */
#define DCID_CALIBRATION     0x8402u

typedef struct {
	uint16    IW;                   /* Integrity Word */
	uint16    CONFIG;               /* Configuration Options */
	uint16    MID;                  /* Module ID */
	uint16    DCID;                 /* Data Compatibility Identifier */
	uint16    App_NBID;             /* Application Software-Not Before ID */
	uint16    DLS;                  /* Design Level Suffix */
	uint16    PART_NO[2];           /* Hex Part Number */
	uint16    NOAR;                 /* Number Of Address Regions */
	struct {
		uint16    PMA[2];           /* Product Memory Address */
		uint16    NOB[2];           /* Number Of Bytes */
	} PMA_NOB[SWM_DATA_MAX_NOAR_APP];
	uint16    NOAM;                 /* Number of Additional Modules */
	struct {
		uint16   NOAR;              /* Number of Address Regions */
		uint16   PMA[2];            /* Product Memory Address */
		uint16   NOB[2];            /* Number Of Bytes */
		uint16   NOCM;              /* Number of Cal modules */
		uint16   CMID;              /* Cal Module ID */
		uint16   CCID;              /* Cal Compatibility Identifier */
		uint16   PMA_Cal[2];        /* Product Memory Address */
		uint16   NOB_Cal[2];        /* Number Of Bytes */
	} PMA_NOAM[SWM_DATA_MAX_NOAM];
} tSwmApplHeader;

typedef struct {
	uint16    IW;                   /* Integrity Word */
	uint16    CONFIG;               /* Configuration Options */
	uint16    MID;                  /* Module ID */
	uint16    DCID;                 /* Data Compatibility Identifier */
	uint16    DLS;                  /* Design Level Suffix */
	uint16    PART_NO[2];           /* Hex Part Number */
} tSwmCalHeader;

/* Export the header definition */
extern const tSwmApplHeader GM_ApplHeader;
extern const tSwmCalHeader GM_Cal1Header;
extern const tSwmCalHeader GM_Cal2Header;
extern const tSwmCalHeader GM_Cal3Header;

#endif
