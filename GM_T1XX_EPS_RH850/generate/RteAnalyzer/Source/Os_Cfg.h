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
 *          File:  Os_Cfg.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Os definitions
 *********************************************************************************************************************/

#ifndef _OS_CFG_H_
# define _OS_CFG_H_

/* Os definitions */

/* Tasks */
# define Task_100ms_Appl10 (0U)
# define Task_10msBsw_Appl10 (1U)
# define Task_10ms_Appl10 (2U)
# define Task_10ms_Appl6 (3U)
# define Task_2msTmplMonr_Appl10 (4U)
# define Task_2ms_Appl10 (5U)
# define Task_2ms_Appl6 (6U)
# define Task_4msBsw_Appl10 (7U)
# define Task_4ms_Appl10 (8U)
# define Task_Init_Appl10 (9U)
# define Task_Init_Appl6 (10U)

/* Alarms */
# define Rte_Al_TE_Task_100ms_Appl10_0_100ms (0U)
# define Rte_Al_TE2_Task_10msBsw_Appl10_0_10ms (1U)
# define Rte_Al_TE_Task_10ms_Appl10_0_10ms (2U)
# define Rte_Al_TE_Task_10ms_Appl6_0_10ms (3U)
# define Rte_Al_TE_Task_2msTmplMonr_Appl10_0_2ms (4U)
# define Rte_Al_TE_Task_2ms_Appl10_0_2ms (5U)
# define Rte_Al_TE_Task_2ms_Appl6_0_2ms (6U)
# define Rte_Al_TE2_Task_4msBsw_Appl10_0_4ms (7U)
# define Rte_Al_TE_Task_4ms_Appl10_0_4ms (8U)

/* Events */

/* Spinlocks */

/* Resources */

/* ScheduleTables */

/* Cores */
# include "usrostyp.h"

/* Trusted Functions */


#endif /* _OS_CFG_H_ */
