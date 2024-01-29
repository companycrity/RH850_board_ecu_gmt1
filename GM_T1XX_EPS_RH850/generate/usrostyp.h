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
 *          File:  usrostyp.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.12.0
 *                 RTE Core Version 1.12.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  User Types header file (osCAN specific)
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name: usrostyp.h
* Module Description: OS defined header for providing O/S visibility to required definitions (typically used for trusted functions)
* Project           : GM T1xx
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          16 %
* %derived_by:       nz2654 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 05/04/15  3        LWW       Added extern of NvM_MainFunction                                                EA4#569
* 05/07/15  4        LWW       Fixed header information                                                        EA4#569
* 05/08/15  5        LWW       Added include of WdgM header                                                    EA4#580
* 06/10/15  6        LWW       Added include of DmaCfgAndUse header                                            EA4#758
* 06/19/15  7        LWW       Added include of CDD_XcpIf header                                               EA4#864
* 06/23/15  8        LWW       Added Fls header and removed extern of NvM_MainFunction                         EA4#900
* 10/21/15  9        JWJ       Added extern for NvM main function                                              EA4#2198
* 02/16/16  10       JWJ       Added state of health header for non trusted function calls                     EA4#2709
* 05/05/16  14       JWJ       Removed DiagcMgr include (moved to Rte_UserTypes.h)                             EA4#5656
**********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _USROSTYP_H
# define _USROSTYP_H

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Spi.h"
#include "NxtrWdgM.h"
#include "CDD_DmaCfgAndUse.h"
#include "CDD_XcpIf.h"
#include "Fls.h"
#include "CDD_GuardCfgAndDiagc.h"
#include "CDD_GmT1xxMcuCfg.h"
#include "CDD_FlsMem.h"
#include "CDD_VrfyCritReg.h"
#include "StHlthSigStc.h"

/* Provide visibility to NvM_MainFunction to OS for trusted function without visibility to all NvM APIs */
extern void NvM_MainFunction(void);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

# include "Rte_Type.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#endif /* _USROSTYP_H */
