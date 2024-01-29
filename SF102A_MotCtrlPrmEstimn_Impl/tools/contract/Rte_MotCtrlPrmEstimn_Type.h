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
 *          File:  Rte_MotCtrlPrmEstimn_Type.h
 *     SW-C Type:  MotCtrlPrmEstimn
 *  Generated at:  Sat Apr  9 13:49:30 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTCTRLPRMESTIMN_TYPE_H
# define _RTE_MOTCTRLPRMESTIMN_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range and Enumeration Definitions
 *********************************************************************************************************************/

# define Curr6_LowerLimit (0.0)
# define Curr6_UpperLimit (200.0)

# define Curr7_LowerLimit (-200)
# define Curr7_UpperLimit (200)

# define Gain5_LowerLimit (0.0)
# define Gain5_UpperLimit (0.006)

# define Gain6_LowerLimit (-0.0015)
# define Gain6_UpperLimit (0.0)

# define Gain7_LowerLimit (0.0)
# define Gain7_UpperLimit (0.0045)

# define Indu1_LowerLimit (0.00003)
# define Indu1_UpperLimit (0.00041)

# define MotCon1_LowerLimit (0.025)
# define MotCon1_UpperLimit (0.075)

# define R6_LowerLimit (0.005)
# define R6_UpperLimit (0.12565)

# define R8_LowerLimit (0.0)
# define R8_UpperLimit (0.1)

# define T1_LowerLimit (-50.0)
# define T1_UpperLimit (150.0)

# define T2_LowerLimit (-50.0)
# define T2_UpperLimit (200.0)

# define T3_LowerLimit (-50.0)
# define T3_UpperLimit (300.0)

# define T5_LowerLimit (-40.0)
# define T5_UpperLimit (150.0)

# define Uls2_LowerLimit (0.0)
# define Uls2_UpperLimit (1.0)

# define Uls11_LowerLimit (0U)
# define Uls11_UpperLimit (32768U)

# define Curr8_LowerLimit (0U)
# define Curr8_UpperLimit (25600U)

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


# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1460231377
#    error "The magic number of the generated file <C:/component/SF102A_MotCtrlPrmEstimn_Impl/tools/contract/Rte_MotCtrlPrmEstimn_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1460231377
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_MOTCTRLPRMESTIMN_TYPE_H */
