/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  SchM_Spi.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Header of BSW Scheduler for BSW Module <Spi>
 *********************************************************************************************************************/
#ifndef SCHM_SPI_H
# define SCHM_SPI_H

# ifdef __cplusplus
extern "C" {
# endif  /* __cplusplus */

# include "SchM_Spi_Type.h"

# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_CHIP_SELECT_PROTECTION(void);
FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_CHIP_SELECT_PROTECTION(void);
FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_RAM_DATA_PROTECTION(void);
FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_RAM_DATA_PROTECTION(void);

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif  /* __cplusplus */

#endif /* SCHM_SPI_H */
