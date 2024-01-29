/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2014 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_Type.h
 *     SW-C Type:  DiagcMgrProxyAppl7
 *  Generated at:  Tue Jun 28 11:40:35 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Header file containing user defined AUTOSAR types and RTE structures (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TYPE_H
# define _RTE_TYPE_H

# include "Rte.h"


/**********************************************************************************************************************
 * Data type definitions
 *********************************************************************************************************************/

# define Rte_TypeDef_Ary1D_u32_512
typedef uint32 Ary1D_u32_512[512];

# define Rte_TypeDef_DiagcDataRec1
typedef struct
{
  uint16 DiagcSts;
  float32 ActvRampRate;
  float32 ActvMotTqCmdSca;
} DiagcDataRec1;

# define Rte_TypeDef_NtcNr1
typedef uint16 NtcNr1;

# define Rte_TypeDef_NtcSts1
typedef uint8 NtcSts1;

# define Rte_TypeDef_SigQlfr1
typedef uint8 SigQlfr1;


# ifndef RTE_SUPPRESS_UNUSED_DATATYPES
/**********************************************************************************************************************
 * Unused Data type definitions
 *********************************************************************************************************************/

#  define Rte_TypeDef_Boolean
typedef boolean Boolean;

#  define Rte_TypeDef_dtRef_VOID
typedef void * dtRef_VOID;

#  define Rte_TypeDef_dtRef_const_VOID
typedef const void * dtRef_const_VOID;

#  define Rte_TypeDef_NvM_RequestResultType
typedef uint8 NvM_RequestResultType;

#  define Rte_TypeDef_MfgEnaSt1
typedef uint8 MfgEnaSt1;

#  define Rte_TypeDef_NtcNrWithResd1
typedef uint16 NtcNrWithResd1;

#  define Rte_TypeDef_ReadFltInfoRec1
typedef struct
{
  NtcNrWithResd1 NtcNr;
  uint8 AgiCntr;
  uint8 Sts;
  uint8 NtcStInfo;
} ReadFltInfoRec1;

#  define Rte_TypeDef_SysSt1
typedef uint8 SysSt1;

#  define Rte_TypeDef_s5p10
typedef sint16 s5p10;

#  define Rte_TypeDef_s8p7
typedef sint16 s8p7;

#  define Rte_TypeDef_u6p10
typedef uint16 u6p10;

#  define Rte_TypeDef_u9p7
typedef uint16 u9p7;

#  define Rte_TypeDef_Ary1D_ReadFltInfoRec1_20
typedef ReadFltInfoRec1 Ary1D_ReadFltInfoRec1_20[20];

#  define Rte_TypeDef_NtcFltInfoRec2
typedef struct
{
  NtcNrWithResd1 NtcNr;
  uint8 AgiCntr;
  uint8 Sts;
} NtcFltInfoRec2;

#  define Rte_TypeDef_SnpshtDataRec1
typedef struct
{
  uint32 MicroDiagcData;
  s5p10 HwTq;
  s5p10 MotTq;
  uint32 IgnCntr;
  u6p10 BrdgVltg;
  s8p7 EcuT;
  uint16 NtcNr;
  uint8 NtcStInfo;
  SysSt1 SysSt;
  u9p7 VehSpd;
} SnpshtDataRec1;

#  define Rte_TypeDef_Ary1D_NtcFltInfoRec2_20
typedef NtcFltInfoRec2 Ary1D_NtcFltInfoRec2_20[20];

#  define Rte_TypeDef_Ary1D_SnpshtDataRec1_8
typedef SnpshtDataRec1 Ary1D_SnpshtDataRec1_8[8];

# endif


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1467127770
#    error "The magic number of the generated file <C:/Component/ES101A_DiagcMgr_Impl/tools/contract/generate/RteGen/DiagcMgrProxyAppl7/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1467127770
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
