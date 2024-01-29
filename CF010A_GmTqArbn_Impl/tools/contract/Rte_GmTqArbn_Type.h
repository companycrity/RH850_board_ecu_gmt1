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
 *          File:  Rte_GmTqArbn_Type.h
 *     SW-C Type:  GmTqArbn
 *  Generated at:  Fri Feb 10 12:38:28 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_GMTQARBN_TYPE_H
# define _RTE_GMTQARBN_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range and Enumeration Definitions
 *********************************************************************************************************************/

# ifndef GMTQARBNESCST_INACTV
#  define GMTQARBNESCST_INACTV (0U)
# endif

# ifndef GMTQARBNESCST_ACTV
#  define GMTQARBNESCST_ACTV (1U)
# endif

# ifndef GMTQARBNESCST_TMPLIMD
#  define GMTQARBNESCST_TMPLIMD (2U)
# endif

# ifndef GMTQARBNESCST_PRMNTFAILD
#  define GMTQARBNESCST_PRMNTFAILD (3U)
# endif

# ifndef GMTQARBNESCST_MFGDI
#  define GMTQARBNESCST_MFGDI (4U)
# endif

# ifndef GMTQARBNLKAST_INACTV
#  define GMTQARBNLKAST_INACTV (0U)
# endif

# ifndef GMTQARBNLKAST_ACTV
#  define GMTQARBNLKAST_ACTV (1U)
# endif

# ifndef GMTQARBNLKAST_TMPLIMD
#  define GMTQARBNLKAST_TMPLIMD (2U)
# endif

# ifndef GMTQARBNLKAST_PRMNTFAILD
#  define GMTQARBNLKAST_PRMNTFAILD (3U)
# endif

# ifndef GMTQARBNLKAST_MFGDI
#  define GMTQARBNLKAST_MFGDI (4U)
# endif


# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1486737980
#    error "The magic number of the generated file <C:/component/CF010A_GmTqArbn_Impl/tools/contract/Rte_GmTqArbn_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1486737980
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_GMTQARBN_TYPE_H */
