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
 *          File:  Rte_UserTypes.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  User Types header file
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Module File Name: Rte_UserTypes.h
* Module Description: Rte Included user types
* Project           : GM T1xx
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:           9 %
* %derived_by:        nz2654 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/13/15  1        LWW       Initial Version with inclusion of NxtrFil header                                EA4#466
* 01/28/16  4        JWJ       Added NvMProxy return buffer type header                                        EA4#6328
* 02/16/16  5        JWJ       Added config file for state of health statistics type                           EA4#2709
* 05/04/16  6        JWJ       Added tuning selection management include for ES400A version 1.0.1              EA4#5579
* 05/05/16  7        JWJ       Added new DiagcMgr header file for ES101A version 3.0.0                         EA4#5656
**********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_USERTYPES_H
# define _RTE_USERTYPES_H

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

# include "NxtrFil.h"
#include "CDD_EcmOutpAndDiagc.h"
#include "TunSelnMngt.h"
#include "CDD_NvMProxy_Cfg.h"
#include "StHlthSigStc_Cfg.h"
#include "DiagcMgr_Cfg.h"
#include "NxtrMfgSrvIf_Cfg.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


#endif /* _RTE_USERTYPES_H */
