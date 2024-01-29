/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Fee
 *           Program: GM Global A / Flexray (MSR_Gm_SLP2)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701311
 *    License Scope : The usage is restricted to CBD1400351_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Fee_Lcfg.c
 *   Generation Time: 2017-02-10 15:05:25
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1400351_D04
 *      Tool Version: DaVinci Configurator  5.13.16 SP2
 *
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Fee_InitEx.h"
#include "Fee_Int.h"
#include "Fee_PartitionDefs.h"

/**********************************************************************************************************************
 * VERSION IDENTIFICATION
 *********************************************************************************************************************/
# define FEE_CFG_C_MAJOR_VERSION                                        (8u)
# define FEE_CFG_C_MINOR_VERSION                                        (1u)
# define FEE_CFG_C_PATCH_VERSION                                        (1u)

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/
#if (  (FEE_INTERNAL_MAJOR_VERSION != FEE_CFG_C_MAJOR_VERSION) \
    || (FEE_INTERNAL_MINOR_VERSION != FEE_CFG_C_MINOR_VERSION) )
# error "Vendor specific version numbers of Fee_Lcfg.c and Fee_Int.h are inconsistent"
#endif

#if (  (FEE_CFG_MAJOR_VERSION != FEE_CFG_C_MAJOR_VERSION) \
    || (FEE_CFG_MINOR_VERSION != FEE_CFG_C_MINOR_VERSION) )
# error "Version numbers of Fee_Lcfg.c and Fee_Cfg.h are inconsistent!"
#endif

#if (  (FEE_PRIVATE_CFG_MAJOR_VERSION != FEE_CFG_C_MAJOR_VERSION) \
    || (FEE_PRIVATE_CFG_MINOR_VERSION != FEE_CFG_C_MINOR_VERSION))
# error "Version numbers of Fee_Lcfg.c and Fee_PrivateCfg.h are inconsistent!"
#endif

#define FEE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"      /* PRQA S 5087 */ /* MD_MSR_19.1 */

static VAR(struct Fee_PartitionsRamDataStruct, FEE_VAR_NOINIT) Fee_PartitionRamData[FEE_NUMBER_OF_PARTITIONS];

#define FEE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"      /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL DATA CONSTANT
 *********************************************************************************************************************/
#define FEE_START_SEC_APPL_CONFIG_UNSPECIFIED
#include "MemMap.h"     /* PRQA S 5087 */ /* MD_MSR_19.1 */

  /*<FEE_BLOCK_CONFIGURATION>*/
static CONST(struct Fee_BlockConfigStruct, FEE_APPL_CONFIG) Fee_BlockConfig_at[] =
{
  { /*  Block: FeeRte_NvmBlock_DutyCycThermProtn_FilStVal  */ 
    6U /*  index of the block in the linktable  */ , 
    6U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_WhlImbRejctn_CmpPeakData  */ 
    66U /*  index of the block in the linktable  */ , 
    26U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_EotLrng_MaxHwAgCwAndCcw  */ 
    65U /*  index of the block in the linktable  */ , 
    14U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CmnMfgSrv_SeedKey  */ 
    49U /*  index of the block in the linktable  */ , 
    10U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_EotLrng_MaxHwAgCwAndCcw_Deprecated  */ 
    64U /*  index of the block in the linktable  */ , 
    10U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_HwAgSnsrls_StordLstPrm  */ 
    63U /*  index of the block in the linktable  */ , 
    10U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeSnpshtDataAry  */ 
    62U /*  index of the block in the linktable  */ , 
    194U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_GmMsg778BusHiSpd_DtcTrigStsAry  */ 
    61U /*  index of the block in the linktable  */ , 
    42U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CustDiagc_GmIgnCntr  */ 
    18U /*  index of the block in the linktable  */ , 
    4U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock8  */ 
    29U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock9  */ 
    30U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock10  */ 
    31U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock11  */ 
    32U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock12  */ 
    33U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock13  */ 
    34U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock14  */ 
    35U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock15  */ 
    36U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock16  */ 
    37U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock17  */ 
    38U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock18  */ 
    39U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock19  */ 
    40U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock20  */ 
    41U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock21  */ 
    42U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock22  */ 
    43U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock23  */ 
    44U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock24  */ 
    45U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock25  */ 
    46U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock26  */ 
    47U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock27  */ 
    48U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock28  */ 
    49U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock29  */ 
    50U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock30  */ 
    51U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock31  */ 
    52U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock32  */ 
    53U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock33  */ 
    54U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock34  */ 
    55U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock35  */ 
    56U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock36  */ 
    57U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock37  */ 
    58U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock38  */ 
    59U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock39  */ 
    60U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock7  */ 
    28U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock6  */ 
    27U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock5  */ 
    26U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock4  */ 
    25U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock3  */ 
    24U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock2  */ 
    23U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock1  */ 
    22U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock0  */ 
    21U /*  index of the block in the linktable  */ , 
    44U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemStatusDataBlock  */ 
    20U /*  index of the block in the linktable  */ , 
    72U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemAdminDataBlock  */ 
    19U /*  index of the block in the linktable  */ , 
    8U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_Bootloader_SBAT  */ 
    48U /*  index of the block in the linktable  */ , 
    822U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_Bootloader_NbId  */ 
    47U /*  index of the block in the linktable  */ , 
    4U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_Bootloader_EcuId  */ 
    46U /*  index of the block in the linktable  */ , 
    16U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_SysFricLrng_FricLrngData  */ 
    17U /*  index of the block in the linktable  */ , 
    218U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_SysFricLrng_FricNonLrngData  */ 
    45U /*  index of the block in the linktable  */ , 
    10U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_HwAgVehCentrTrim_HwAgTrimData  */ 
    44U /*  index of the block in the linktable  */ , 
    10U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_WhlImbRejctn_ActvCmpBand2_Deprecated  */ 
    16U /*  index of the block in the linktable  */ , 
    6U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_WhlImbRejctn_LePeakPrev_Deprecated  */ 
    15U /*  index of the block in the linktable  */ , 
    6U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_WhlImbRejctn_RiPeakPrev_Deprecated  */ 
    14U /*  index of the block in the linktable  */ , 
    6U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_WhlImbRejctn_ActvCmpBand1_Deprecated  */ 
    13U /*  index of the block in the linktable  */ , 
    6U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_WhlImbRejctn_ActvCmpBand3_Deprecated  */ 
    12U /*  index of the block in the linktable  */ , 
    6U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_WhlImbRejctn_MaxCompPerc_Deprecated  */ 
    11U /*  index of the block in the linktable  */ , 
    6U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_HwAgVehCentrTrim_HwAgTrimVal_Deprecated  */ 
    43U /*  index of the block in the linktable  */ , 
    6U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_StHlthSigStc_SigStcHistDataAry  */ 
    10U /*  index of the block in the linktable  */ , 
    227U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CDD_MotRplCoggCmd_MotCoggCmdY  */ 
    42U /*  index of the block in the linktable  */ , 
    1026U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_MotRplCoggCfg_MotRplCoggPrm  */ 
    41U /*  index of the block in the linktable  */ , 
    20U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_GmOvrlStMgr_GmLoaIgnCntr  */ 
    9U /*  index of the block in the linktable  */ , 
    4U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_SnsrOffsLrng_SnsrOffsLrnd  */ 
    8U /*  index of the block in the linktable  */ , 
    78U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_MotTqCmdSca_MotTqScaFac  */ 
    40U /*  index of the block in the linktable  */ , 
    6U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_PullCmpActv_PullCmpLongTerm  */ 
    7U /*  index of the block in the linktable  */ , 
    6U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CmnMfgSrv_MfgTmpBuf1  */ 
    36U /*  index of the block in the linktable  */ , 
    18U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CmnMfgSrv_CcaSerlNr  */ 
    39U /*  index of the block in the linktable  */ , 
    22U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CmnMfgSrv_MfgTmpBuf0  */ 
    38U /*  index of the block in the linktable  */ , 
    18U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CmnMfgSrv_CcaHwPartNr  */ 
    37U /*  index of the block in the linktable  */ , 
    22U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CmnMfgSrv_MfgTmpBuf4  */ 
    31U /*  index of the block in the linktable  */ , 
    18U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CmnMfgSrv_MfgTmpBuf2  */ 
    35U /*  index of the block in the linktable  */ , 
    18U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CmnMfgSrv_DiRestore  */ 
    34U /*  index of the block in the linktable  */ , 
    10U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CmnMfgSrv_MfgTmpBuf3  */ 
    33U /*  index of the block in the linktable  */ , 
    18U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CmnMfgSrv_EpsSysSerlNr  */ 
    32U /*  index of the block in the linktable  */ , 
    22U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_PartNr_PartNrCtrlPidSeedKey  */ 
    24U /*  index of the block in the linktable  */ , 
    12U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_PartNr_PartNrProgmSessionSeedKey  */ 
    30U /*  index of the block in the linktable  */ , 
    12U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_PartNr_PartNrCustMfgEnaCntr  */ 
    29U /*  index of the block in the linktable  */ , 
    3U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_PartNr_PartNrCalProgdSts  */ 
    28U /*  index of the block in the linktable  */ , 
    3U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_PartNr_PartNrDataUniversalNrSysId  */ 
    27U /*  index of the block in the linktable  */ , 
    11U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_PartNr_PartNrProgmDate  */ 
    26U /*  index of the block in the linktable  */ , 
    6U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_PartNr_PartNrVinData  */ 
    25U /*  index of the block in the linktable  */ , 
    19U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_PartNr_PartNrBasMdlPartNr  */ 
    23U /*  index of the block in the linktable  */ , 
    8U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_PartNr_PartNrEndMdlPartNr  */ 
    22U /*  index of the block in the linktable  */ , 
    8U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_PartNr_PartNrNxtrMfgTrakg  */ 
    21U /*  index of the block in the linktable  */ , 
    9U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_PartNr_PartNrSysCodVersNr  */ 
    20U /*  index of the block in the linktable  */ , 
    4U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_PartNr_PartNrCcaMfgTrakg  */ 
    19U /*  index of the block in the linktable  */ , 
    11U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_PartNr_PartNrSysName  */ 
    18U /*  index of the block in the linktable  */ , 
    22U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CDD_CurrMeas_CurrMeasEolOffsCalSet  */ 
    15U /*  index of the block in the linktable  */ , 
    54U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_PartNr_PartNrRepairShopCod  */ 
    17U /*  index of the block in the linktable  */ , 
    22U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CDD_CurrMeas_CurrMeasEolGainCalSet  */ 
    16U /*  index of the block in the linktable  */ , 
    26U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_DiagcMgr_DiagcMgrNtcFltAry  */ 
    4U /*  index of the block in the linktable  */ , 
    82U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_EotLrng_EotNvmData  */ 
    5U /*  index of the block in the linktable  */ , 
    14U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_MotAg2Meas_MotAg2EolPrm  */ 
    14U /*  index of the block in the linktable  */ , 
    22U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CDD_HwTq0Meas_HwTq0Offs  */ 
    13U /*  index of the block in the linktable  */ , 
    10U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_HwTqCorrln_HwTqChACmnModCmpLpFilSt  */ 
    2U /*  index of the block in the linktable  */ , 
    6U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    4U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CDD_HwTq2Meas_HwTq2Offs  */ 
    12U /*  index of the block in the linktable  */ , 
    10U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CDD_HwTq3Meas_HwTq3Offs  */ 
    11U /*  index of the block in the linktable  */ , 
    10U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CDD_HwTq1Meas_HwTq1Offs  */ 
    10U /*  index of the block in the linktable  */ , 
    10U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_HwTqCorrln_HwTqChBCmnModCmpLpFilSt  */ 
    3U /*  index of the block in the linktable  */ , 
    6U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    4U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_HwAg1Meas_HwAg1Offs  */ 
    9U /*  index of the block in the linktable  */ , 
    10U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_NvMProxy_ShtdwnClsChk  */ 
    1U /*  index of the block in the linktable  */ , 
    6U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    3U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CDD_MotAg1Meas_MotAg1CoeffTbl  */ 
    7U /*  index of the block in the linktable  */ , 
    106U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_HwAg0Meas_HwAg0Offs  */ 
    8U /*  index of the block in the linktable  */ , 
    10U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CmnMfgSrv_IgnCntr  */ 
    0U /*  index of the block in the linktable  */ , 
    4U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE1 /*  partition where the block resides in  */ , 
    4U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CDD_MotAgCmp_MotAgCmpMotAgBackEmf  */ 
    4U /*  index of the block in the linktable  */ , 
    4U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CmnMfgSrv_NxtrMfgEnaCntr  */ 
    6U /*  index of the block in the linktable  */ , 
    1U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeMotPrmNom  */ 
    5U /*  index of the block in the linktable  */ , 
    10U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeRte_NvmBlock_CDD_MotAg0Meas_MotAg0CoeffTbl  */ 
    3U /*  index of the block in the linktable  */ , 
    106U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeePolarityCfgSaved  */ 
    2U /*  index of the block in the linktable  */ , 
    6U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeCurrMeasMotEol_Deprecated  */ 
    1U /*  index of the block in the linktable  */ , 
    76U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeConfigBlock  */ 
    0U /*  index of the block in the linktable  */ , 
    4U /*  payload length  */ , 
    2U /*  number of datasets  */ , 
    FEE0 /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }
};
/*</FEE_BLOCK_CONFIGURATION>*/


/* Describe the partitions */
static CONST(struct Fee_PartitionConfigStruct, FEE_APPL_CONFIG) Fee_PartitionConfig_at[FEE_NUMBER_OF_PARTITIONS] =
{
  {
    &Fee_PartitionRamData[0], 
    {
      3860UL /*  FSS threshold  */ , 
      1779UL /*  BSS threshold  */ 
    }, 
    { /*  AssociatedSectors_at  */ 
      { /*  LowerSector  */ 
        0xFFFFFFFFUL /*  Fls Erase Value  */ , 
        { /*  physical sector  */ 
          0x00000000UL /*  physical sector start address  */ , 
          0x00002000UL /*  physical sector size  */ 
        }, 
        { /*  configured sector  */ 
          0x00000000UL /*  configured sector start address  */ , 
          0x00002000UL /*  configured sector size  */ 
        }, 
        { /*  alignments  */ 
          3U /*  write alignment  */ , 
          3U /*  address alignment  */ 
        }
      }, 
      { /*  UpperSector  */ 
        0xFFFFFFFFUL /*  Fls Erase Value  */ , 
        { /*  physical sector  */ 
          0x00002000UL /*  physical sector start address  */ , 
          0x00002000UL /*  physical sector size  */ 
        }, 
        { /*  configured sector  */ 
          0x00002000UL /*  configured sector start address  */ , 
          0x00002000UL /*  configured sector size  */ 
        }, 
        { /*  alignments  */ 
          3U /*  write alignment  */ , 
          3U /*  address alignment  */ 
        }
      }
    }, 
    (50U), 
    0U
  } /*  ramData_pt  */ , 
  {
    &Fee_PartitionRamData[1], 
    {
      3004UL /*  FSS threshold  */ , 
      2602UL /*  BSS threshold  */ 
    }, 
    { /*  AssociatedSectors_at  */ 
      { /*  LowerSector  */ 
        0xFFFFFFFFUL /*  Fls Erase Value  */ , 
        { /*  physical sector  */ 
          0x00004000UL /*  physical sector start address  */ , 
          0x00002000UL /*  physical sector size  */ 
        }, 
        { /*  configured sector  */ 
          0x00004000UL /*  configured sector start address  */ , 
          0x00002000UL /*  configured sector size  */ 
        }, 
        { /*  alignments  */ 
          3U /*  write alignment  */ , 
          3U /*  address alignment  */ 
        }
      }, 
      { /*  UpperSector  */ 
        0xFFFFFFFFUL /*  Fls Erase Value  */ , 
        { /*  physical sector  */ 
          0x00006000UL /*  physical sector start address  */ , 
          0x00002000UL /*  physical sector size  */ 
        }, 
        { /*  configured sector  */ 
          0x00006000UL /*  configured sector start address  */ , 
          0x00002000UL /*  configured sector size  */ 
        }, 
        { /*  alignments  */ 
          3U /*  write alignment  */ , 
          3U /*  address alignment  */ 
        }
      }
    }, 
    (67U), 
    1U
  } /*  ramData_pt  */ 
};

CONST(struct Fee_ConfigStruct, FEE_APPL_CONFIG) Fee_Config =
{
    Fee_BlockConfig_at,
    Fee_PartitionConfig_at,
    (0x0075U /*  number of blocks  */ ),
    FEE_NUMBER_OF_PARTITIONS,
    (1U /*  dataset selection bits  */ ),
    (FALSE /*  fbl config  */ )
};

#define FEE_STOP_SEC_APPL_CONFIG_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define FEE_START_SEC_CODE
#include "MemMap.h"      /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(Fee_ErrorCallbackReturnType, FEE_APPL_CODE) Fee_ErrorCallbackNotification(uint8 partitionId, Fee_SectorErrorType err)
{
#if (STD_ON == FEE_USE_APPL_ERROR_CALLBACK)
     return  Appl_FeeCriticalErrorCallback(partitionId, err);
#else
     /* check partitionId -> avoid waning about unused parameter */
     FEE_DUMMY_STATEMENT(partitionId);
     return (Fee_ErrorCallbackReturnType)(
                        (err != FEE_SECTOR_FORMAT_FAILED) ? FEE_ERRCBK_RESOLVE_AUTOMATICALLY : FEE_ERRCBK_REJECT_WRITE);
#endif
}

#define FEE_STOP_SEC_CODE
#include "MemMap.h"      /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  END OF FILE: Fee_Lcfg.c
 *********************************************************************************************************************/
 

