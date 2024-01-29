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
 *          File:  Rte_CDD_SyncCrc_Type.h
 *     SW-C Type:  CDD_SyncCrc
 *  Generated at:  Mon Jan 11 19:29:20 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_SYNCCRC_TYPE_H
# define _RTE_CDD_SYNCCRC_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range and Enumeration Definitions
 *********************************************************************************************************************/

# ifndef CRCHWRESVCFG_32BITCRC32BITWIDTH
#  define CRCHWRESVCFG_32BITCRC32BITWIDTH (0U)
# endif

# ifndef CRCHWRESVCFG_32BITCRC16BITWIDTH
#  define CRCHWRESVCFG_32BITCRC16BITWIDTH (1U)
# endif

# ifndef CRCHWRESVCFG_32BITCRC8BITWIDTH
#  define CRCHWRESVCFG_32BITCRC8BITWIDTH (2U)
# endif

# ifndef CRCHWRESVCFG_16BITCRC16BITWIDTH
#  define CRCHWRESVCFG_16BITCRC16BITWIDTH (3U)
# endif

# ifndef CRCHWRESVCFG_16BITCRC8BITWIDTH
#  define CRCHWRESVCFG_16BITCRC8BITWIDTH (4U)
# endif

# ifndef CRCHWRESVCFG_8BITCRC
#  define CRCHWRESVCFG_8BITCRC (5U)
# endif

# ifndef CRCHWRESVCFG_8BITCRCH2F
#  define CRCHWRESVCFG_8BITCRCH2F (6U)
# endif

# ifndef CRCHWRESVMOD_RELS
#  define CRCHWRESVMOD_RELS (0U)
# endif

# ifndef CRCHWRESVMOD_RESV
#  define CRCHWRESVMOD_RESV (1U)
# endif

# ifndef CRCHWSTS_NOTAVL
#  define CRCHWSTS_NOTAVL (0U)
# endif

# ifndef CRCHWSTS_AVL
#  define CRCHWSTS_AVL (1U)
# endif

# ifndef CRCHWSTS_BUSY
#  define CRCHWSTS_BUSY (2U)
# endif

# ifndef CRCHWSTS_NOTENAD
#  define CRCHWSTS_NOTENAD (3U)
# endif

# ifndef CRCHWSTS_RESV
#  define CRCHWSTS_RESV (4U)
# endif

# ifndef CRCHWSTS_IDXINVLD
#  define CRCHWSTS_IDXINVLD (255U)
# endif


# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1452561408
#    error "The magic number of the generated file <C:/Component/CM800A_SyncCrc_Impl/tools/contract/Rte_CDD_SyncCrc_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1452561408
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CDD_SYNCCRC_TYPE_H */
