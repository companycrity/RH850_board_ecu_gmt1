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
 *          File:  Rte_StHlthSigStc_Type.h
 *     SW-C Type:  StHlthSigStc
 *  Generated at:  Fri Dec  9 17:42:36 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_STHLTHSIGSTC_TYPE_H
# define _RTE_STHLTHSIGSTC_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range and Enumeration Definitions
 *********************************************************************************************************************/

# ifndef NVM_REQ_OK
#  define NVM_REQ_OK (0U)
# endif

# ifndef NVM_REQ_NOT_OK
#  define NVM_REQ_NOT_OK (1U)
# endif

# ifndef NVM_REQ_PENDING
#  define NVM_REQ_PENDING (2U)
# endif

# ifndef NVM_REQ_INTEGRITY_FAILED
#  define NVM_REQ_INTEGRITY_FAILED (3U)
# endif

# ifndef NVM_REQ_BLOCK_SKIPPED
#  define NVM_REQ_BLOCK_SKIPPED (4U)
# endif

# ifndef NVM_REQ_NV_INVALIDATED
#  define NVM_REQ_NV_INVALIDATED (5U)
# endif

# ifndef NVM_REQ_CANCELED
#  define NVM_REQ_CANCELED (6U)
# endif

# ifndef NVM_REQ_REDUNDANCY_FAILED
#  define NVM_REQ_REDUNDANCY_FAILED (7U)
# endif

# ifndef NVM_REQ_RESTORED_FROM_ROM
#  define NVM_REQ_RESTORED_FROM_ROM (8U)
# endif

# ifndef STHLTHMONSIG_ECUTFILTD
#  define STHLTHMONSIG_ECUTFILTD (0U)
# endif

# ifndef STHLTHMONSIG_ASSIDUETOVLTG
#  define STHLTHMONSIG_ASSIDUETOVLTG (1U)
# endif

# ifndef STHLTHMONSIG_DIGTQSNSRA
#  define STHLTHMONSIG_DIGTQSNSRA (2U)
# endif

# ifndef STHLTHMONSIG_DIGTQSNSRB
#  define STHLTHMONSIG_DIGTQSNSRB (3U)
# endif

# ifndef STHLTHMONSIG_DIGTQIDPTSIG
#  define STHLTHMONSIG_DIGTQIDPTSIG (4U)
# endif

# ifndef STHLTHMONSIG_DUTYCYC
#  define STHLTHMONSIG_DUTYCYC (5U)
# endif

# ifndef STHLTHMONSIG_EOTIMPCT
#  define STHLTHMONSIG_EOTIMPCT (6U)
# endif

# ifndef STHLTHMONSIG_MOTPOS
#  define STHLTHMONSIG_MOTPOS (7U)
# endif

# ifndef STHLTHMONSIG_MOTPOSABDIFF
#  define STHLTHMONSIG_MOTPOSABDIFF (8U)
# endif

# ifndef STHLTHMONSIG_MOTPOSACDIFF
#  define STHLTHMONSIG_MOTPOSACDIFF (9U)
# endif

# ifndef STHLTHMONSIG_MOTPOSBCDIFF
#  define STHLTHMONSIG_MOTPOSBCDIFF (10U)
# endif

# ifndef STHLTHMONSIG_CURRMOTSUMABC
#  define STHLTHMONSIG_CURRMOTSUMABC (11U)
# endif

# ifndef STHLTHMONSIG_CURRMOTSUMDEF
#  define STHLTHMONSIG_CURRMOTSUMDEF (12U)
# endif

# ifndef STHLTHMONSIG_MOTPOSPHASEA
#  define STHLTHMONSIG_MOTPOSPHASEA (13U)
# endif

# ifndef STHLTHMONSIG_MOTPOSPHASEB
#  define STHLTHMONSIG_MOTPOSPHASEB (14U)
# endif

# ifndef STHLTHMONSIG_MOTPOSPHASEC
#  define STHLTHMONSIG_MOTPOSPHASEC (15U)
# endif

# ifndef STHLTHMONSIG_MOTPOSPHASED
#  define STHLTHMONSIG_MOTPOSPHASED (16U)
# endif

# ifndef STHLTHMONSIG_MOTPOSPHASEE
#  define STHLTHMONSIG_MOTPOSPHASEE (17U)
# endif

# ifndef STHLTHMONSIG_MOTPOSPHASEF
#  define STHLTHMONSIG_MOTPOSPHASEF (18U)
# endif

# ifndef STHLTHMONSIG_BITCORRN
#  define STHLTHMONSIG_BITCORRN (19U)
# endif

# ifndef STHLTHMONSIG_FRICESTIMN
#  define STHLTHMONSIG_FRICESTIMN (20U)
# endif

# ifndef STHLTHMONSIG_WHLIMBREJCTN
#  define STHLTHMONSIG_WHLIMBREJCTN (21U)
# endif


# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1481319775
#    error "The magic number of the generated file <C:/Component/ES106A_StHlthSigStc_Impl/tools/contract/generate/RteGen/Rte_StHlthSigStc_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1481319775
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_STHLTHSIGSTC_TYPE_H */
