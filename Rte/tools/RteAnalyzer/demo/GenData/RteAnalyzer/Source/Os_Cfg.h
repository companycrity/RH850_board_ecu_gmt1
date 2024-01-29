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
 *        Config:  D:/Rte/Rte_Analyzer/trunk/Application/demo/RteAnalyzerDemo.dpa
 *   ECU-Project:  ecu
 *  Generated at:  Mon Jul 11 16:29:40 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unknown license
 *
 *   Description:  Os definitions
 *********************************************************************************************************************/

#ifndef _OS_CFG_H_
# define _OS_CFG_H_

/* Os definitions */

/* Tasks */
# define ASILTaskCore0 (0U)
# define HighPrioQMTaskCore0 (1U)
# define PreemptiveQMTaskCore0 (2U)
# define QMTaskCore1 (3U)

/* Alarms */
# define Rte_Al_TE_ASILTaskCore0_0_5ms (0U)
# define Rte_Al_TE_HighPrioQMTaskCore0_0_5ms (1U)
# define Rte_Al_TE_QMSwc0_RunnableCyclicQMSwc0 (2U)
# define Rte_Al_TE_Rte_Rte_ComSendSignalProxyPeriodic (3U)
# define Rte_Al_TE_QMSwc2_RunnableCyclicQMSwc2 (4U)

/* Events */
# define Rte_Ev_Run_QMSwc0_RunnableCyclicQMSwc0 (0x02)
# define Rte_Ev_Run_Rte_Rte_ComSendSignalProxyPeriodic (0x01)

/* Spinlocks */
# define Rte_Spinlock_QMSwc1_srMissingNOCACHE_Element (0U)

/* Resources */

/* ScheduleTables */

/* Cores */
# define OS_CORE_ID_0 (0U)
# define OS_CORE_ID_1 (1U)
# include "usrostyp.h"

/* Trusted Functions */


#endif /* _OS_CFG_H_ */
