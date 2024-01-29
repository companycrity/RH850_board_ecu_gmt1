/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2007 - 2013 by Vector Informatik GmbH.                                           All rights reserved.
 *
 *                Please note, that this file contains example configuration used by the 
 *                MICROSAR BSW. This code may influence the behaviour of the MICROSAR BSW
 *                in principle. Therefore, great care must be taken to verify
 *                the correctness of the implementation.
 *
 *                The contents of the originally delivered files are only examples respectively
 *                implementation proposals. With regard to the fact that these functions
 *                are meant for demonstration purposes only, the liability of Vector Informatik
 *                shall be expressly excluded in cases of ordinary negligence, 
 *                to the extent admissible by law or statute.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  _MemMap.h
 *    Component:  -
 *       Module:  -
 *    Generator:  -
 *
 *  Description:  This File is a template for the MemMap.h
 *                This file has to be extended with the memory section defines for all BSW modules
 *                which where used.
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  MISRA VIOLATIONS
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Joachim Kalmbach              Jk            Vector Informatik GmbH
 *  Heike Honert                  Ht            Vector Informatik GmbH
 *  Eugen Stripling               Seu           Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2007-08-01  Jk                    Initial creation
 *  01.01.00  2007-12-14  Jk                    Component specific defines filtering added
 *  01.01.02  2008-11-04  Jk                    Component specific defines filtering added
 *  01.01.03  2008-12-17  Ht                    Improve list of components  (Tp_AsrTpCan,Tp_AsrTpFr,DrvMcu,DrvIcu added)
 *  01.01.04  2009-04-27  Ht                    improve list of components  (Cp_XcpOnCanAsr, Il_AsrIpduM, If_VxFblDcm,
 *                                              If_VxFblVpm_Volvo_ab, DrvFls added)
 *  01.01.05  2009-04-24  Msr                   Renamed J1939_AsrBase as TpJ1939_AsrBase
 *  01.01.06  2009-06-03  Ht                    Improve list of components (Adc, Dio, Gpt, Pwm, Spi, Wdg, Fls, Port, Fim)
 *  01.02.00  2009-08-01  Ht                    Improve list of components (Fee_30_Inst2, Can, ...Sub)
 *                                              Support filtering for RTE
 *  01.02.01  2009-08-18  HH                    replaced C++ comment by C comment
 *  01.02.02  2009-09-02  Lo                    add external Flash driver support
 *  01.02.03  2009-09-12  Lo                    add DrvFls_Mcs12xFslftm01ExtVx
 *                        Ht                    Improve list of components (CanTrcv_30_Tja1040dio,
 *                                                Eth, EthTrcv, EthIf, SoAd, TcpIp, EthSM)
 *  01.03.00  2009-10-30  Ht                    support R8: change EthTrcv to EthTrcv_30_Canoeemu
 *                                              support EthTrcv_30_Dp83848
 *                                              change CanTrcv_30_Xdio to CanTrcv_30___Your_Trcv__
 *                                              change CanTrcv_30_Tja1040dio to CanTrcv_30_Tja1041
 *                                              change name FrTrcv to FrTrcv_30_Tja1080dio
 *                        Lo                    add Cp_AsrXcp
 *                        Ht                    add Cp_XcpOnFrAsr
 *  01.03.01  2010-01-13  Ht                    support SysService_AsrCal
 *  01.03.02  2010-02-15  Ht                    support SysService_SswRcs_Daimler, SysService_Tls, Tp_Http, 
 *                                                      SysService_Dns, SysService_Json, DrvTrans_GenericLindioAsr
 *                        Lo                    add Diag_AsrDem for all OEMs
 *                                              rename internal variables and filter methods
 *  01.04.00  2010-03-04  Ht                    change name FrTrcv_30_Tja1080dio to FrTrcv_30_Tja1080
 *  01.04.01  2010-03-10  Ht                    support DrvTrans_GenericFrAsr, DrvTrans_As8223FrspiAsr, DrvEep and If_AsrIfEa
 *  01.04.02  2010-04-07  Lo                    change IfFee to real components and add If_AsrIfWdV85xNec01Sub
 *  01.04.03  2010-06-11  Ht                    add CanTrcv_30_Tja1043
 *                        Lo                    add Il_AsrIpduMEbBmwSub
 *  01.04.04  2010-08-24  Ht                    add CanTrcv_30_Tle62512G, DrvEep_XAt25128EAsr, Tp_AsrTpFrEbBmwSub
 *  01.05.00  2010-08-24  Ht                    support R10:
 *                                              change LinTrcv_30_Tle7259dio to LinTrcv_30_Tle7259
 *  01.05.01  2010-10-14  Ht                    add VStdLib, SysService_SswScc, SysService_IpBase, SysService_Crypto
 *  01.05.02  2010-10-20  Ht                    support comments for Package Merge Tool
 *  01.05.03  2010-11-03  Ht                    add SysService_E2eLibTttechSub, SysService_E2ePwTttechSub
 *  01.05.04  2010-11-16  Ht                    add SysService_Exi, DrvTrans_Int6400EthAsr, Cdd_AsrCdd_Fiat, Diag_AsrDem_Fiat
 *  01.05.05  2010-12-17  Ht                    add SysService_AsrSchM, DrvEep_XXStubAsr, DrvIcu_Tms570Tinhet01ExtVx
 *                                                  DrvWd_XTle4278gEAsr, DrvWd_XXStubAsr
 *  01.05.06  2011-02-17  Ht                    add DrvEed, SysService_AsrBswM
 *  01.05.07  2011-03-04  Ht                    add DrvTrans_Tja1055CandioAsr
 *                                              rename CanTrcv_30_Tja1040dio to CanTrcv_30_Tja1040
 *                                              add SysService_XmlEngine
 *  01.06.00  2011-03-15  Ht                    support ASR4.0
 *                                              add Ccl_Asr4ComM, Ccl_Asr4SmCan, Nm_Asr4NmIf, Nm_AsrNmDirOsek
 *  01.06.01  2011-04-15  Ht                    add Diag_AsrDcm_<OEM>
 *  01.06.02  2011-06-17  Ht                    correct Diag_AsrDcm_<OEM>
 *                                              add Monitoring_AsrDlt and Monitoring_GenericMeasurement
 *  01.06.03  2011-09-20  Ht                    add DrvTrans_Tja1145CanSpiAsr, DrvTrans_E52013CanspiAsr, DrvFls_XXStubAsr,
 *                                              If_AsrIfFeeV85xNec05Sub, If_AsrIfFeeV85xNec06Sub, If_AsrIfFeeV85xNec07Sub
 *                                              SysService_AsrWdMTttechSub and If_AsrIfWdTttechSub
 *  01.06.04  2011-11-22  Ht                    add If_AsrIfFeeTiSub, 
 *                                              ESCAN00054718: add Cdd_AsrCdd
 *  01.06.05  2011-12-09  Ht                    add Tp_IpV4, Tp_IpV6
 *  01.06.06  2011-12-14  Ht                    add Monitoring_RuntimeMeasurement
 *  01.06.07  2012-01-03  Ht                    add DrvI2c, SysService_Asr4BswM
 *  01.06.08  2012-01-31  Ht                    add DrvTrans_Ar7000EthAsr, DrvTrans_GenericEthmiiAsr
 *  01.06.09  2012-03-06  Ht                    add If_AsrIfFeeMb9df126Fuji01Sub, 
 *                                              Infineon_Tc1767Inf01Sub, Infineon_Tc178xInf01Sub, Infineon_Tc1797Inf01Sub, Infineon_Tc1797Inf02Sub
 *  01.06.10  2012-03-13  Ht                    add Gw_AsrPduRCfg5, Il_AsrComCfg5, Il_AsrIpduMCfg5, Cdd_AsrCddCfg5,
 *                                              Tp_Asr4TpCan, Diag_Asr4Dcm, Diag_Asr4Dem
 *  01.06.11  2012-03-20  Ht                    add Cp_AsrCcp, Cp_XcpOnTcpIpAsr
 *  01.07.00  2012-07-26  Ht                    ESCAN00059365: [AUTOSAR4, compiler warning]: Wrong define name in #undef statement causes re-definition warning
 *                                              add Nm_Asr4NmCan, Nm_Asr4NmFr, Infineon_Xc2000Inf01Sub, Ccl_Asr4ComMCfg5, SysService_Asr4BswMCfg5, SysService_Asr4EcuM, SysService_AsrRamTst,
 *                                                  Ccl_Asr4SmLin 
 *            2012-09-04  Ht                    add support for ASR specification 4.0 R3
 *  01.07.01  2012-10-23  Seu                   add SysService_XmlSecurity
 *  01.07.02  2013-01-10  Seu                   MISRA deviation comments added
 *  01.08.00  2013-03-01  Seu    ESCAN00065501  AR4-325: Add support for Post-build RAM memory section
 *            2013-04-12  Seu    ESCAN00066614  Add the deviation for violation of MISRA rule 19.6
 *  01.09.00  2013-12-10  Seu    ESCAN00072537  Add *_NOCACHE_* memory sections for variables
 *            2013-12-16  Seu                   MISRA compliance: usage of character "'" removed, typos corrected
 *********************************************************************************************************************/

/* PRQA S 0841 MEMMAP_0841_TAG */ /* MD_MSR_19.6 */

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

 /* PRQA S 0883 1 */ /* MD_MemMap_19.15 */
#undef MEMMAP_VENDOR_ID /* PRQA S 0841 */ /* MD_MSR_19.6 */

#define MEMMAP_VENDOR_ID        (30u)

/* AUTOSAR Software Specification Version Information */

# undef MEMMAP_AR_RELEASE_MAJOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_AR_RELEASE_MINOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_AR_RELEASE_REVISION_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */

/* AUTOSAR release 4.0 R3 */
# define MEMMAP_AR_RELEASE_MAJOR_VERSION       (4u)
# define MEMMAP_AR_RELEASE_MINOR_VERSION       (0u)
# define MEMMAP_AR_RELEASE_REVISION_VERSION    (3u)

/* compatiblity to older versions */
# undef MEM_AR_RELEASE_MAJOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEM_AR_RELEASE_MINOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEM_AR_RELEASE_PATCH_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */

# define MEM_AR_RELEASE_MAJOR_VERSION          MEMMAP_AR_RELEASE_MAJOR_VERSION
# define MEM_AR_RELEASE_MINOR_VERSION          MEMMAP_AR_RELEASE_MINOR_VERSION
# define MEM_AR_RELEASE_PATCH_VERSION          MEMMAP_AR_RELEASE_REVISION_VERSION


# undef MEMMAP_SW_MAJOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_SW_MINOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_SW_PATCH_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */

# define MEMMAP_SW_MAJOR_VERSION     (1u)
# define MEMMAP_SW_MINOR_VERSION     (9u)
# define MEMMAP_SW_PATCH_VERSION     (0u)

/* compatiblity to older versions */
# undef MEM_SW_MAJOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEM_SW_MINOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEM_SW_PATCH_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */

# define MEM_SW_MAJOR_VERSION        MEMMAP_SW_MAJOR_VERSION 
# define MEM_SW_MINOR_VERSION        MEMMAP_SW_MINOR_VERSION 
# define MEM_SW_PATCH_VERSION        MEMMAP_SW_PATCH_VERSION 

#define MEMMAP_ERROR

/* Package Merger: Start Section MemMapModuleList */


#include "Rte_MemMap.h"

#ifdef GlobalShared_START_SEC_VAR_CLEARED_16
    #undef GlobalShared_START_SEC_VAR_CLEARED_16
    #define GlobalShared_START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef GlobalShared_STOP_SEC_VAR_CLEARED_16
    #undef GlobalShared_STOP_SEC_VAR_CLEARED_16
    #define GlobalShared_STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef NVMPROXY_START_SEC_CODE
    #undef NVMPROXY_START_SEC_CODE
    #define START_SEC_CODE
#endif
#ifdef NVMPROXY_STOP_SEC_CODE
    #undef NVMPROXY_STOP_SEC_CODE
    #define STOP_SEC_CODE
#endif

#ifdef CDD_NVMPROXY_START_SEC_CODE
    #undef CDD_NVMPROXY_START_SEC_CODE
    #define START_SEC_CODE
#endif
#ifdef CDD_NVMPROXY_STOP_SEC_CODE
    #undef CDD_NVMPROXY_STOP_SEC_CODE
    #define STOP_SEC_CODE
#endif

#ifdef MotCtrl_START_SEC_CODE
# undef MotCtrl_START_SEC_CODE
# define START_SEC_CODE
#endif

#ifdef MotCtrl_STOP_SEC_CODE
# undef MotCtrl_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif

#ifdef IOHWAB_START_SEC_CODE
# undef IOHWAB_START_SEC_CODE
# define START_SEC_CODE
#endif

#ifdef IOHWAB_STOP_SEC_CODE
# undef IOHWAB_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif

#ifdef CHKPT_START_SEC_CODE
# undef CHKPT_START_SEC_CODE
# define START_SEC_CODE
#endif

#ifdef CHKPT_STOP_SEC_CODE
# undef CHKPT_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif


#ifdef FEE_CALLOUTS_START_SEC_CODE
# undef FEE_CALLOUTS_START_SEC_CODE
# define START_SEC_CODE
#endif

#ifdef FEE_CALLOUTS_STOP_SEC_CODE
# undef FEE_CALLOUTS_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif


#ifdef MCU_START_SEC_APPL_CODE
# undef MCU_START_SEC_APPL_CODE
# define START_SEC_CODE
#endif

#ifdef MCU_STOP_SEC_APPL_CODE
# undef MCU_STOP_SEC_APPL_CODE
# define STOP_SEC_CODE
#endif

#ifdef MCAL_CALLOUTS_START_SEC_CODE
# undef MCAL_CALLOUTS_START_SEC_CODE
# define START_SEC_CODE
#endif

#ifdef MCAL_CALLOUTS_STOP_SEC_CODE
# undef MCAL_CALLOUTS_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif

#ifdef MCU_START_SEC_PUBLIC_CODE
# undef MCU_START_SEC_PUBLIC_CODE
# define START_SEC_CODE
#endif

#ifdef MCU_STOP_SEC_PUBLIC_CODE
# undef MCU_STOP_SEC_PUBLIC_CODE
# define STOP_SEC_CODE
#endif

#ifdef MCU_START_SEC_PRIVATE_CODE
# undef MCU_START_SEC_PRIVATE_CODE
# define START_SEC_CODE
#endif

#ifdef MCU_STOP_SEC_PRIVATE_CODE
# undef MCU_STOP_SEC_PRIVATE_CODE
# define STOP_SEC_CODE
#endif

#ifdef MCU_START_SEC_DBTOC_DATA_UNSPECIFIED
# undef MCU_START_SEC_DBTOC_DATA_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef MCU_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# undef MCU_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef MCU_START_SEC_CODE_FAST
# undef MCU_START_SEC_CODE_FAST
# define START_SEC_CODE
#endif

#ifdef MCU_STOP_SEC_CODE_FAST
# undef MCU_STOP_SEC_CODE_FAST
# define STOP_SEC_CODE
#endif

#ifdef MCU_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef MCU_START_SEC_CONFIG_DATA_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef MCU_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef MCU_START_SEC_VAR_NO_INIT_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef MCU_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef MCU_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef MCU_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef MCU_START_SEC_VAR_NOINIT_UNSPECIFIED
# define Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef MCU_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef MCU_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef MCU_START_SEC_VAR_INIT_BOOLEAN
# undef MCU_START_SEC_VAR_INIT_BOOLEAN
# define Appl10_START_SEC_VAR_BOOLEAN
#endif

#ifdef MCU_STOP_SEC_VAR_INIT_BOOLEAN
# undef MCU_STOP_SEC_VAR_INIT_BOOLEAN
# define Appl10_STOP_SEC_VAR_BOOLEAN
#endif

#ifdef MCU_START_SEC_VAR_BOOLEAN
# undef MCU_START_SEC_VAR_BOOLEAN
# define Appl10_START_SEC_VAR_BOOLEAN
#endif

#ifdef MCU_STOP_SEC_VAR_BOOLEAN
# undef MCU_STOP_SEC_VAR_BOOLEAN
# define Appl10_STOP_SEC_VAR_BOOLEAN
#endif

#ifdef MCU_START_SEC_VAR_32
# undef MCU_START_SEC_VAR_32
# define Appl10_START_SEC_VAR_32BIT
#endif

#ifdef MCU_STOP_SEC_VAR_32
# undef MCU_STOP_SEC_VAR_32
# define Appl10_STOP_SEC_VAR_32BIT
#endif

#ifdef MCU_START_SEC_VAR_INIT_32
# undef MCU_START_SEC_VAR_INIT_32
# define Appl10_START_SEC_VAR_32BIT
#endif

#ifdef MCU_STOP_SEC_VAR_INIT_32
# undef MCU_STOP_SEC_VAR_INIT_32
# define Appl10_STOP_SEC_VAR_32BIT
#endif




#ifdef DIO_START_SEC_APPL_CODE
# undef DIO_START_SEC_APPL_CODE
# define START_SEC_CODE
#endif

#ifdef DIO_STOP_SEC_APPL_CODE
# undef DIO_STOP_SEC_APPL_CODE
# define STOP_SEC_CODE
#endif

#ifdef DIO_START_SEC_PUBLIC_CODE
# undef DIO_START_SEC_PUBLIC_CODE
# define START_SEC_CODE
#endif

#ifdef DIO_STOP_SEC_PUBLIC_CODE
# undef DIO_STOP_SEC_PUBLIC_CODE
# define STOP_SEC_CODE
#endif

#ifdef DIO_START_SEC_VAR_INIT_BOOLEAN
# undef DIO_START_SEC_VAR_INIT_BOOLEAN
# define Appl10_START_SEC_VAR_BOOLEAN
#endif

#ifdef DIO_START_SEC_VAR_BOOLEAN
# undef DIO_START_SEC_VAR_BOOLEAN
# define Appl10_START_SEC_VAR_BOOLEAN
#endif

#ifdef DIO_STOP_SEC_VAR_INIT_BOOLEAN
# undef DIO_STOP_SEC_VAR_INIT_BOOLEAN
# define Appl10_STOP_SEC_VAR_BOOLEAN
#endif

#ifdef DIO_STOP_SEC_VAR_1BIT
# undef DIO_STOP_SEC_VAR_1BIT
# define Appl10_STOP_SEC_VAR_BOOLEAN
#endif

#ifdef DIO_STOP_SEC_VAR_BOOLEAN
# undef DIO_STOP_SEC_VAR_BOOLEAN
# define Appl10_STOP_SEC_VAR_BOOLEAN
#endif

#ifdef DIO_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef DIO_START_SEC_VAR_NOINIT_UNSPECIFIED
# define Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef DIO_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef DIO_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef DIO_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef DIO_START_SEC_VAR_NO_INIT_UNSPECIFIED
# define Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef DIO_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef DIO_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# define Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef DIO_START_SEC_VAR_NOINIT_16
# undef DIO_START_SEC_VAR_NOINIT_16
# define Appl10_START_SEC_VAR_NOINIT_16BIT
#endif

#ifdef DIO_STOP_SEC_VAR_NOINIT_16
# undef DIO_STOP_SEC_VAR_NOINIT_16
# define Appl10_STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef DIO_START_SEC_VAR_NO_INIT_16
# undef DIO_START_SEC_VAR_NO_INIT_16
# define Appl10_START_SEC_VAR_NOINIT_16BIT
#endif

#ifdef DIO_STOP_SEC_VAR_NO_INIT_16
# undef DIO_STOP_SEC_VAR_NO_INIT_16
# define Appl10_STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef DIO_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef DIO_START_SEC_CONFIG_DATA_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef DIO_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef DIO_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef DIO_START_SEC_DBTOC_DATA_UNSPECIFIED
# undef DIO_START_SEC_DBTOC_DATA_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef DIO_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# undef DIO_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# define STOP_SEC_CONST
#endif



#ifdef PORT_START_SEC_PRIVATE_CODE
# undef PORT_START_SEC_PRIVATE_CODE
# define START_SEC_CODE
#endif

#ifdef PORT_STOP_SEC_PRIVATE_CODE
# undef PORT_STOP_SEC_PRIVATE_CODE
# define STOP_SEC_CODE
#endif

#ifdef PORT_START_SEC_PUBLIC_CODE
# undef PORT_START_SEC_PUBLIC_CODE
# define START_SEC_CODE
#endif

#ifdef PORT_STOP_SEC_PUBLIC_CODE
# undef PORT_STOP_SEC_PUBLIC_CODE
# define STOP_SEC_CODE
#endif

#ifdef PORT_START_SEC_APPL_CODE
# undef PORT_START_SEC_APPL_CODE
# define START_SEC_CODE
#endif

#ifdef PORT_STOP_SEC_APPL_CODE
# undef PORT_STOP_SEC_APPL_CODE
# define STOP_SEC_CODE
#endif

#ifdef PORT_START_SEC_VAR_INIT_BOOLEAN
# undef PORT_START_SEC_VAR_INIT_BOOLEAN
# define Appl10_START_SEC_VAR_BOOLEAN
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_BOOLEAN
# undef PORT_STOP_SEC_VAR_INIT_BOOLEAN
# define Appl10_STOP_SEC_VAR_BOOLEAN
#endif

#ifdef PORT_START_SEC_VAR_BOOLEAN
# undef PORT_START_SEC_VAR_BOOLEAN
# define Appl10_START_SEC_VAR_BOOLEAN
#endif

#ifdef PORT_STOP_SEC_VAR_BOOLEAN
# undef PORT_STOP_SEC_VAR_BOOLEAN
# define Appl10_STOP_SEC_VAR_BOOLEAN
#endif

#ifdef PORT_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef PORT_START_SEC_VAR_NOINIT_UNSPECIFIED
# define Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef PORT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef PORT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
# define Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# define Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef PORT_START_SEC_DBTOC_DATA_UNSPECIFIED
# undef PORT_START_SEC_DBTOC_DATA_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef PORT_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# undef PORT_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef SPI_START_SEC_APPL_CODE
# undef SPI_START_SEC_APPL_CODE
# define START_SEC_CODE
#endif

#ifdef SPI_STOP_SEC_APPL_CODE
# undef SPI_STOP_SEC_APPL_CODE
# define STOP_SEC_CODE
#endif

#ifdef SPI_START_SEC_CODE
# undef SPI_START_SEC_CODE
# define START_SEC_CODE
#endif

#ifdef SPI_STOP_SEC_CODE
# undef SPI_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif

#ifdef SPI_START_SEC_PRIVATE_CODE
# undef SPI_START_SEC_PRIVATE_CODE
# define START_SEC_CODE
#endif

#ifdef SPI_STOP_SEC_PRIVATE_CODE
# undef SPI_STOP_SEC_PRIVATE_CODE
# define STOP_SEC_CODE
#endif

#ifdef SPI_START_SEC_PUBLIC_CODE
# undef SPI_START_SEC_PUBLIC_CODE
# define START_SEC_CODE
#endif

#ifdef SPI_STOP_SEC_PUBLIC_CODE
# undef SPI_STOP_SEC_PUBLIC_CODE
# define STOP_SEC_CODE
#endif

#ifdef SPI_START_SEC_CODE_FAST
# undef SPI_START_SEC_CODE_FAST
# define START_SEC_CODE
#endif

#ifdef SPI_STOP_SEC_CODE_FAST
# undef SPI_STOP_SEC_CODE_FAST
# define STOP_SEC_CODE
#endif

#ifdef SPI_START_SEC_DBTOC_DATA_UNSPECIFIED
# undef SPI_START_SEC_DBTOC_DATA_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef SPI_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# undef SPI_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef SPI_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef SPI_START_SEC_CONFIG_DATA_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef SPI_START_SEC_CONST_UNSPECIFIED
# undef SPI_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef SPI_STOP_SEC_CONST_UNSPECIFIED
# undef SPI_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef SPI_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef SPI_START_SEC_VAR_NOINIT_UNSPECIFIED
# define Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef SPI_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef SPI_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef SPI_START_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED
# undef SPI_START_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED
# define Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef SPI_STOP_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED
# undef SPI_STOP_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED
# define Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef SPI_START_DATA_LOC_RAM1
# undef SPI_START_DATA_LOC_RAM1
# define Appl10_START_SEC_VAR_UNSPECIFIED
#endif

#ifdef SPI_STOP_DATA_LOC_RAM1
# undef SPI_STOP_DATA_LOC_RAM1
# define Appl10_STOP_SEC_VAR_UNSPECIFIED
#endif

#ifdef SPI_START_SEC_VAR_NOINIT_16
# undef SPI_START_SEC_VAR_NOINIT_16
# define Appl10_START_SEC_VAR_NOINIT_16BIT
#endif

#ifdef SPI_STOP_SEC_VAR_NOINIT_16
# undef SPI_STOP_SEC_VAR_NOINIT_16
# define Appl10_STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef SPI_START_SEC_VAR_NOINIT_8
# undef SPI_START_SEC_VAR_NOINIT_8
# define Appl10_START_SEC_VAR_NOINIT_8BIT
#endif

#ifdef SPI_STOP_SEC_VAR_NOINIT_8
# undef SPI_STOP_SEC_VAR_NOINIT_8
# define Appl10_STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef SPI_START_SEC_VAR_NOINIT_BOOLEAN
# undef SPI_START_SEC_VAR_NOINIT_BOOLEAN
# define Appl10_START_SEC_VAR_NOINIT_BOOLEAN
#endif

#ifdef SPI_STOP_SEC_VAR_NOINIT_BOOLEAN
# undef SPI_STOP_SEC_VAR_NOINIT_BOOLEAN
# define Appl10_STOP_SEC_VAR_NOINIT_BOOLEAN
#endif

#ifdef SPI_START_SEC_VAR_UNSPECIFIED
# undef SPI_START_SEC_VAR_UNSPECIFIED
# define Appl10_START_SEC_VAR_UNSPECIFIED
#endif

#ifdef SPI_STOP_SEC_VAR_UNSPECIFIED
# undef SPI_STOP_SEC_VAR_UNSPECIFIED
# define Appl10_STOP_SEC_VAR_UNSPECIFIED
#endif

#ifdef WDG_59_DRIVERA_START_SEC_PRIVATE_CODE
# undef WDG_59_DRIVERA_START_SEC_PRIVATE_CODE
# define START_SEC_CODE
#endif

#ifdef WDG_59_DRIVERA_STOP_SEC_PRIVATE_CODE
# undef WDG_59_DRIVERA_STOP_SEC_PRIVATE_CODE
# define STOP_SEC_CODE
#endif

#ifdef WDG_59_DRIVERA_START_SEC_PUBLIC_CODE
# undef WDG_59_DRIVERA_START_SEC_PUBLIC_CODE
# define START_SEC_CODE
#endif

#ifdef WDG_59_DRIVERA_STOP_SEC_PUBLIC_CODE
# undef WDG_59_DRIVERA_STOP_SEC_PUBLIC_CODE
# define STOP_SEC_CODE
#endif

#ifdef WDG_59_DRIVERA_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef WDG_59_DRIVERA_START_SEC_CONFIG_DATA_UNSPECIFIED
# define START_SEC_CODE
#endif

#ifdef WDG_59_DRIVERA_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef WDG_59_DRIVERA_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# define STOP_SEC_CODE
#endif

#ifdef WDG_59_DRIVERA_START_SEC_APPL_CODE
# undef WDG_59_DRIVERA_START_SEC_APPL_CODE
# define START_SEC_CODE
#endif

#ifdef WDG_59_DRIVERA_STOP_SEC_APPL_CODE
# undef WDG_59_DRIVERA_STOP_SEC_APPL_CODE
# define STOP_SEC_CODE
#endif

#ifdef WDG_59_DRIVERA_START_SEC_CODE_FAST
# undef WDG_59_DRIVERA_START_SEC_CODE_FAST
# define START_SEC_CODE
#endif

#ifdef WDG_59_DRIVERA_STOP_SEC_CODE_FAST
# undef WDG_59_DRIVERA_STOP_SEC_CODE_FAST
# define STOP_SEC_CODE
#endif

#ifdef WDG_59_DRIVERA_START_SEC_VAR_UNSPECIFIED
# undef WDG_59_DRIVERA_START_SEC_VAR_UNSPECIFIED
# define Appl10_START_SEC_VAR_UNSPECIFIED
#endif

#ifdef WDG_59_DRIVERA_STOP_SEC_VAR_UNSPECIFIED
# undef WDG_59_DRIVERA_STOP_SEC_VAR_UNSPECIFIED
# define Appl10_STOP_SEC_VAR_UNSPECIFIED
#endif

#ifdef WDG_59_DRIVERA_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef WDG_59_DRIVERA_START_SEC_VAR_NO_INIT_UNSPECIFIED
# define Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef WDG_59_DRIVERA_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef WDG_59_DRIVERA_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# define Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef WDG_59_DRIVERA_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef WDG_59_DRIVERA_START_SEC_VAR_NOINIT_UNSPECIFIED
# define Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef WDG_59_DRIVERA_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef WDG_59_DRIVERA_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef WDG_59_DRIVERA_START_SEC_VAR_INIT_UNSPECIFIED
# undef WDG_59_DRIVERA_START_SEC_VAR_INIT_UNSPECIFIED
# define Appl10_START_SEC_VAR_UNSPECIFIED
#endif

#ifdef WDG_59_DRIVERA_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef WDG_59_DRIVERA_STOP_SEC_VAR_INIT_UNSPECIFIED
# define Appl10_STOP_SEC_VAR_UNSPECIFIED
#endif

#ifdef WDG_59_DRIVERA_START_SEC_VAR_NOINIT_16BIT
# undef WDG_59_DRIVERA_START_SEC_VAR_NOINIT_16BIT
# define Appl10_START_SEC_VAR_NOINIT_16BIT
#endif

#ifdef WDG_59_DRIVERA_STOP_SEC_VAR_NOINIT_16BIT
# undef WDG_59_DRIVERA_STOP_SEC_VAR_NOINIT_16BIT
# define Appl10_STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef WDG_59_DRIVERA_START_SEC_VAR_NOINIT_32
# undef WDG_59_DRIVERA_START_SEC_VAR_NOINIT_32
# define Appl10_START_SEC_VAR_NOINIT_32BIT
#endif

#ifdef WDG_59_DRIVERA_STOP_SEC_VAR_NOINIT_32
# undef WDG_59_DRIVERA_STOP_SEC_VAR_NOINIT_32
# define Appl10_STOP_SEC_VAR_NOINIT_32BIT
#endif

#ifdef WDG_59_DRIVERA_START_SEC_VAR_NO_INIT_32
# undef WDG_59_DRIVERA_START_SEC_VAR_NO_INIT_32
# define Appl10_START_SEC_VAR_NOINIT_32BIT
#endif

#ifdef WDG_59_DRIVERA_STOP_SEC_VAR_NO_INIT_32
# undef WDG_59_DRIVERA_STOP_SEC_VAR_NO_INIT_32
# define Appl10_STOP_SEC_VAR_NOINIT_32BIT
#endif

#ifdef WDG_59_DRIVERA_START_SEC_DBTOC_DATA_UNSPECIFIED
# undef WDG_59_DRIVERA_START_SEC_DBTOC_DATA_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef WDG_59_DRIVERA_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# undef WDG_59_DRIVERA_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef FLS_START_SEC_CODE
# undef FLS_START_SEC_CODE
# define START_SEC_CODE
#endif

#ifdef FLS_STOP_SEC_CODE
# undef FLS_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif

#ifdef FLS_START_SEC_APPL_CODE
# undef FLS_START_SEC_APPL_CODE
# define START_SEC_CODE
#endif

#ifdef FLS_STOP_SEC_APPL_CODE
# undef FLS_STOP_SEC_APPL_CODE
# define STOP_SEC_CODE
#endif

#ifdef FLS_START_SEC_PUBLIC_CODE
# undef FLS_START_SEC_PUBLIC_CODE
# define START_SEC_CODE
#endif

#ifdef FLS_STOP_SEC_PUBLIC_CODE
# undef FLS_STOP_SEC_PUBLIC_CODE
# define STOP_SEC_CODE
#endif

#ifdef FLS_START_SEC_SCHEDULER_CODE
# undef FLS_START_SEC_SCHEDULER_CODE
# define START_SEC_CODE
#endif

#ifdef FLS_STOP_SEC_SCHEDULER_CODE
# undef FLS_STOP_SEC_SCHEDULER_CODE
# define STOP_SEC_CODE
#endif

#ifdef FLS_START_SEC_PRIVATE_CODE
# undef FLS_START_SEC_PRIVATE_CODE
# define START_SEC_CODE
#endif

#ifdef FLS_STOP_SEC_PRIVATE_CODE
# undef FLS_STOP_SEC_PRIVATE_CODE
# define STOP_SEC_CODE
#endif

#ifdef FLS_START_SEC_CODE_FAST
# undef FLS_START_SEC_CODE_FAST
# define START_SEC_CODE
#endif

#ifdef FLS_STOP_SEC_CODE_FAST
# undef FLS_STOP_SEC_CODE_FAST
# define STOP_SEC_CODE
#endif

#ifdef FLS_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FLS_START_SEC_VAR_NOINIT_UNSPECIFIED
# define Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef FLS_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FLS_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef FLS_START_SEC_VAR_UNSPECIFIED
# undef FLS_START_SEC_VAR_UNSPECIFIED
# define Appl10_START_SEC_VAR_UNSPECIFIED
# define Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED /* Patch for incorrect variable placement in Fls_Ram.c */
#endif

#ifdef FLS_STOP_SEC_VAR_UNSPECIFIED
# undef FLS_STOP_SEC_VAR_UNSPECIFIED
# define Appl10_STOP_SEC_VAR_UNSPECIFIED
# define Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* Patch for incorrect variable placement in Fls_Ram.c */
#endif

#ifdef FLS_START_SEC_VAR_BOOLEAN
# undef FLS_START_SEC_VAR_BOOLEAN
# define Appl10_START_SEC_VAR_BOOLEAN
#endif

#ifdef FLS_STOP_SEC_VAR_BOOLEAN
# undef FLS_STOP_SEC_VAR_BOOLEAN
# define Appl10_STOP_SEC_VAR_BOOLEAN
#endif

#ifdef FLS_START_SEC_VAR_NOINIT_32
# undef FLS_START_SEC_VAR_NOINIT_32
# define Appl10_START_SEC_VAR_NOINIT_32BIT
#endif

#ifdef FLS_STOP_SEC_VAR_NOINIT_32
# undef FLS_STOP_SEC_VAR_NOINIT_32
# define Appl10_STOP_SEC_VAR_NOINIT_32BIT
#endif

#ifdef FLS_START_SEC_DBTOC_DATA_UNSPECIFIED
# undef FLS_START_SEC_DBTOC_DATA_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef FLS_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# undef FLS_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef FLS_START_SEC_BUFFER_CODE
# undef FLS_START_SEC_BUFFER_CODE
# define Appl10_START_SEC_VAR_NOINIT_32BIT
#endif

#ifdef FLS_STOP_SEC_BUFFER_CODE
# undef FLS_STOP_SEC_BUFFER_CODE
# define Appl10_STOP_SEC_VAR_NOINIT_32BIT
#endif


#ifdef FDL_START_SEC_PUBLIC_CODE
# undef FDL_START_SEC_PUBLIC_CODE

/* FDL code does not properly open and close sections, since this is causing a problem only on the CODE and CONST sections and those don't currently require
   special section placement, directly undefine MEMMAP_ERROR and allow the linker to place in a default location.  See MANTIS 0025951 */
#undef MEMMAP_ERROR
// define START_SEC_CODE

#endif

#ifdef FDL_STOP_SEC_PUBLIC_CODE
# undef FDL_STOP_SEC_PUBLIC_CODE

/* FDL code does not properly open and close sections, since this is causing a problem only on the CODE and CONST sections and those don't currently require
   special section placement, directly undefine MEMMAP_ERROR and allow the linker to place in a default location.  See MANTIS 0025951 */
#undef MEMMAP_ERROR
//# define STOP_SEC_CODE

#endif

#ifdef FDL_START_SEC_CONST_UNSPECIFIED
# undef FDL_START_SEC_CONST_UNSPECIFIED

/* FDL code does not properly open and close sections, since this is causing a problem only on the CODE and CONST sections and those don't currently require
   special section placement, directly undefine MEMMAP_ERROR and allow the linker to place in a default location.  See MANTIS 0025951 */
#undef MEMMAP_ERROR
//# define START_SEC_CONST_UNSPECIFIED

#endif

#ifdef FDL_STOP_SEC_CONST_UNSPECIFIED
# undef FDL_STOP_SEC_CONST_UNSPECIFIED

/* FDL code does not properly open and close sections, since this is causing a problem only on the CODE and CONST sections and those don't currently require
   special section placement, directly undefine MEMMAP_ERROR and allow the linker to place in a default location.  See MANTIS 0025951 */
#undef MEMMAP_ERROR
//# define STOP_SEC_CONST

#endif

#ifdef FDL_START_SEC_VAR_UNSPECIFIED
# undef FDL_START_SEC_VAR_UNSPECIFIED
# define Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef FDL_STOP_SEC_VAR_UNSPECIFIED
# undef FDL_STOP_SEC_VAR_UNSPECIFIED
# define Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif


/** DEM **********************************************************************/
/*---------------------START-MODULE-SPECIFIC-START-SECTIONS------------------*/
                                                             
                                                            /* code sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_START_SEC_CODE)
# undef DEM_START_SEC_CODE                                                     /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#endif

#if defined (DEM_START_SEC_CALLOUT_CODE)
# undef DEM_START_SEC_CALLOUT_CODE                                             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#endif

#if defined (DEM_START_SEC_CODE_LIB)
# undef DEM_START_SEC_CODE_LIB                                                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#endif

                                               /* uninitialized RAM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_START_SEC_VAR_NO_INIT_8)
# undef DEM_START_SEC_VAR_NO_INIT_8                                            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_START_SEC_VAR_NOINIT_8BIT
#endif
#if defined (DEM_START_SEC_VAR_NO_INIT_16)
# undef DEM_START_SEC_VAR_NO_INIT_16                                           /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_START_SEC_VAR_NOINIT_16BIT
#endif
#if defined (DEM_START_SEC_VAR_NO_INIT_32)
# undef DEM_START_SEC_VAR_NO_INIT_32                                           /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_START_SEC_VAR_NOINIT_32BIT
#endif
#if defined (DEM_START_SEC_VAR_NO_INIT_UNSPECIFIED)
# undef DEM_START_SEC_VAR_NO_INIT_UNSPECIFIED                                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#if defined (DEM_START_SEC_VAR_NOINIT_8BIT)
# undef DEM_START_SEC_VAR_NOINIT_8BIT                                          /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_START_SEC_VAR_NOINIT_8BIT
#endif
#if defined (DEM_START_SEC_VAR_NOINIT_16BIT)
# undef DEM_START_SEC_VAR_NOINIT_16BIT                                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_START_SEC_VAR_NOINIT_16BIT
#endif
#if defined (DEM_START_SEC_VAR_NOINIT_32BIT)
# undef DEM_START_SEC_VAR_NOINIT_32BIT                                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_START_SEC_VAR_NOINIT_32BIT
#endif
#if defined (DEM_START_SEC_VAR_NOINIT_UNSPECIFIED)
# undef DEM_START_SEC_VAR_NOINIT_UNSPECIFIED                                   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

                                                 /* initialized RAM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_START_SEC_VAR_INIT_8BIT)
# undef DEM_START_SEC_VAR_INIT_8BIT                                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_START_SEC_VAR_8BIT
#endif
#if defined (DEM_START_SEC_VAR_INIT_32)
# undef DEM_START_SEC_VAR_INIT_32                                              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_START_SEC_VAR_32BIT
#endif

                                                          /* NV RAM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_START_SEC_VAR_SAVED_ZONE0_8BIT)
# undef DEM_START_SEC_VAR_SAVED_ZONE0_8BIT                                     /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_START_SEC_VAR_NOINIT_8BIT
#endif

#if defined (DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED)
# undef DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED                              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#if defined (DEM_START_SEC_CONST_SAVED_RECOVERY_ZONE0)
# undef DEM_START_SEC_CONST_SAVED_RECOVERY_ZONE0                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_START_SEC_CONST_UNSPECIFIED
#endif

                                                             /* ROM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_START_SEC_CONST_8)
# undef DEM_START_SEC_CONST_8                                                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT
#endif
#if defined (DEM_START_SEC_CONST_16)
# undef DEM_START_SEC_CONST_16                                                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#if defined (DEM_START_SEC_CONST_32)
# undef DEM_START_SEC_CONST_32                                                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT
#endif

#if defined (DEM_START_SEC_CONST_8BIT)
# undef DEM_START_SEC_CONST_8BIT                                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT
#endif
#if defined (DEM_START_SEC_CONST_16BIT)
# undef DEM_START_SEC_CONST_16BIT                                              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#if defined (DEM_START_SEC_CONST_32BIT)
# undef DEM_START_SEC_CONST_32BIT                                              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT
#endif
#if defined (DEM_START_SEC_CONST_UNSPECIFIED)
# undef DEM_START_SEC_CONST_UNSPECIFIED                                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif

#if defined (DEM_START_SEC_CONFIG_DATA_UNSPECIFIED)
# undef DEM_START_SEC_CONFIG_DATA_UNSPECIFIED                                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif

#if defined (DEM_START_SEC_PBCFG_ROOT)
# undef DEM_START_SEC_PBCFG_ROOT                                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif

#if defined (DEM_START_SEC_CALIB_UNSPECIFIED)
# undef DEM_START_SEC_CALIB_UNSPECIFIED                                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif

#if defined (DEM_START_SEC_CALIB_8BIT)
# undef DEM_START_SEC_CALIB_8BIT                                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT
#endif

#if defined (DEM_START_SEC_PBCFG)
# undef DEM_START_SEC_PBCFG                                                    /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif



/*---------------------STOP-MODULE-SPECIFIC-START-SECTIONS-------------------*/

/*---------------------START-MODULE-SPECIFIC-STOP-SECTIONS-------------------*/

                                                             
                                                            /* code sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_STOP_SEC_CODE)
# undef DEM_STOP_SEC_CODE                                                      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

#if defined (DEM_STOP_SEC_CALLOUT_CODE)
# undef DEM_STOP_SEC_CALLOUT_CODE                                              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

#if defined (DEM_STOP_SEC_CODE_LIB)
# undef DEM_STOP_SEC_CODE_LIB                                                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

                                               /* uninitialized RAM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_STOP_SEC_VAR_NO_INIT_8)
# undef DEM_STOP_SEC_VAR_NO_INIT_8                                             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_STOP_SEC_VAR_NOINIT_8BIT
#endif
#if defined (DEM_STOP_SEC_VAR_NO_INIT_16)
# undef DEM_STOP_SEC_VAR_NO_INIT_16                                            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_STOP_SEC_VAR_NOINIT_16BIT
#endif
#if defined (DEM_STOP_SEC_VAR_NO_INIT_32)
# undef DEM_STOP_SEC_VAR_NO_INIT_32                                            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_STOP_SEC_VAR_NOINIT_32BIT
#endif
#if defined (DEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED)
# undef DEM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED                                   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#if defined (DEM_STOP_SEC_VAR_NOINIT_8BIT)
# undef DEM_STOP_SEC_VAR_NOINIT_8BIT                                           /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_STOP_SEC_VAR_NOINIT_8BIT
#endif
#if defined (DEM_STOP_SEC_VAR_NOINIT_16BIT)
# undef DEM_STOP_SEC_VAR_NOINIT_16BIT                                          /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_STOP_SEC_VAR_NOINIT_16BIT
#endif
#if defined (DEM_STOP_SEC_VAR_NOINIT_32BIT)
# undef DEM_STOP_SEC_VAR_NOINIT_32BIT                                          /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_STOP_SEC_VAR_NOINIT_32BIT
#endif
#if defined (DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
# undef DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED                                    /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

                                                 /* initialized RAM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_STOP_SEC_VAR_INIT_8BIT)
# undef DEM_STOP_SEC_VAR_INIT_8BIT                                                /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_STOP_SEC_VAR_8BIT
#endif
#if defined (DEM_STOP_SEC_VAR_INIT_32)
# undef DEM_STOP_SEC_VAR_INIT_32                                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_STOP_SEC_VAR_32BIT
#endif

                                                          /* NV RAM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED)
# undef DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#if defined (DEM_STOP_SEC_VAR_SAVED_ZONE0_8BIT)
# undef DEM_STOP_SEC_VAR_SAVED_ZONE0_8BIT                                      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define Appl10_STOP_SEC_VAR_NOINIT_8BIT
#endif

#if defined (DEM_STOP_SEC_CONST_SAVED_RECOVERY_ZONE0)
# undef DEM_STOP_SEC_CONST_SAVED_RECOVERY_ZONE0                                /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

                                                             /* ROM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_STOP_SEC_CONST_8)
# undef DEM_STOP_SEC_CONST_8                                                   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif
#if defined (DEM_STOP_SEC_CONST_16)
# undef DEM_STOP_SEC_CONST_16                                                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif
#if defined (DEM_STOP_SEC_CONST_32)
# undef DEM_STOP_SEC_CONST_32                                                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined (DEM_STOP_SEC_CONST_8BIT)
# undef DEM_STOP_SEC_CONST_8BIT                                                /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif
#if defined (DEM_STOP_SEC_CONST_16BIT)
# undef DEM_STOP_SEC_CONST_16BIT                                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif
#if defined (DEM_STOP_SEC_CONST_32BIT)
# undef DEM_STOP_SEC_CONST_32BIT                                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif
#if defined (DEM_STOP_SEC_CONST_UNSPECIFIED)
# undef DEM_STOP_SEC_CONST_UNSPECIFIED                                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined (DEM_STOP_SEC_PBCFG_ROOT)
# undef DEM_STOP_SEC_PBCFG_ROOT                                                /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined (DEM_STOP_SEC_CALIB_UNSPECIFIED)
# undef DEM_STOP_SEC_CALIB_UNSPECIFIED                                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif
#if defined (DEM_STOP_SEC_CALIB_8BIT)
# undef DEM_STOP_SEC_CALIB_8BIT                                                /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined (DEM_STOP_SEC_PBCFG)
# undef DEM_STOP_SEC_PBCFG                                                    /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/*---------------------STOP-MODULE-SPECIFIC-STOP-SECTIONS--------------------*/
/** End of DEM ***************************************************************/



/**********************************************************************************************************************
 *  FEE START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef FEE_START_SEC_CODE
# undef FEE_START_SEC_CODE
# define START_SEC_CODE                                               /* mapped to default code section */
#endif
#ifdef FEE_STOP_SEC_CODE
# undef FEE_STOP_SEC_CODE
# define STOP_SEC_CODE                                                /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef FEE_START_SEC_CONST_UNSPECIFIED
# undef FEE_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef FEE_STOP_SEC_CONST_UNSPECIFIED
# undef FEE_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef FEE_START_SEC_APPL_CONFIG_UNSPECIFIED
# undef FEE_START_SEC_APPL_CONFIG_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef FEE_STOP_SEC_APPL_CONFIG_UNSPECIFIED
# undef FEE_STOP_SEC_APPL_CONFIG_UNSPECIFIED
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef FEE_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FEE_START_SEC_VAR_NOINIT_UNSPECIFIED
# define Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef FEE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FEE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef FEE_START_SEC_VAR_INIT_UNSPECIFIED
# undef FEE_START_SEC_VAR_INIT_UNSPECIFIED
# define Appl10_START_SEC_VAR_UNSPECIFIED
#endif
#ifdef FEE_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef FEE_STOP_SEC_VAR_INIT_UNSPECIFIED
# define Appl10_STOP_SEC_VAR_UNSPECIFIED
#endif
/**********************************************************************************************************************
 *  FEE END
 *********************************************************************************************************************/

#ifdef MEMIF_START_SEC_CONST_8BIT 
    #undef MEMIF_START_SEC_CONST_8BIT 
    #define START_SEC_CONST_8BIT
#endif

#ifdef MEMIF_STOP_SEC_CONST_8BIT 
    #undef MEMIF_STOP_SEC_CONST_8BIT 
    #define STOP_SEC_CONST
#endif


#ifdef MEMIF_START_SEC_CONST_32BIT
    #undef MEMIF_START_SEC_CONST_32BIT
    #define START_SEC_CONST_32BIT
#endif

#ifdef MEMIF_STOP_SEC_CONST_32BIT
    #undef MEMIF_STOP_SEC_CONST_32BIT
    #define STOP_SEC_CONST
#endif


#ifdef MEMIF_START_SEC_CODE
    #undef MEMIF_START_SEC_CODE
    #define START_SEC_CODE
#endif

#ifdef MEMIF_STOP_SEC_CODE
    #undef MEMIF_STOP_SEC_CODE
    #define STOP_SEC_CODE
#endif

/* Code section - START */
#if defined WDGIF_START_SEC_CODE                      /* Code */
    #undef WDGIF_START_SEC_CODE
    #define START_SEC_CODE
#elif defined WDGIF_STOP_SEC_CODE
    #undef WDGIF_STOP_SEC_CODE
    #define STOP_SEC_CODE
#endif

#if defined WDGIF_START_SEC_CONST_8BIT         /* Global or static constants */
    #undef WDGIF_START_SEC_CONST_8BIT
    #define START_SEC_CONST_8BIT
#elif defined WDGIF_STOP_SEC_CONST_8BIT
    #undef WDGIF_STOP_SEC_CONST_8BIT
    #define STOP_SEC_CONST

#elif defined WDGIF_START_SEC_CONST_16BIT
    #undef WDGIF_START_SEC_CONST_16BIT
    #define START_SEC_CONST_16BIT
#elif defined WDGIF_STOP_SEC_CONST_16BIT
    #undef WDGIF_STOP_SEC_CONST_16BIT
    #define STOP_SEC_CONST

#elif defined WDGIF_START_SEC_CONST_32BIT
    #undef WDGIF_START_SEC_CONST_32BIT
    #define START_SEC_CONST_32BIT
#elif defined WDGIF_STOP_SEC_CONST_32BIT
    #undef WDGIF_STOP_SEC_CONST_32BIT
    #define STOP_SEC_CONST

#elif defined WDGIF_START_SEC_CONST_UNSPECIFIED
    #undef WDGIF_START_SEC_CONST_UNSPECIFIED
    #define START_SEC_CONST_UNSPECIFIED
#elif defined WDGIF_STOP_SEC_CONST_UNSPECIFIED
    #undef WDGIF_STOP_SEC_CONST_UNSPECIFIED
    #define STOP_SEC_CONST
#endif


/**********************************************************************************************************************
 *  NvM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef NVM_START_SEC_CODE
    #undef NVM_START_SEC_CODE
    #define START_SEC_CODE                /* mapped to default code section */
#endif
#ifdef NVM_STOP_SEC_CODE
    #undef NVM_STOP_SEC_CODE
    #define STOP_SEC_CODE                /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef NVM_START_SEC_CONST_8
    #undef NVM_START_SEC_CONST_8
    #define START_SEC_CONST_8BIT
#endif
#ifdef NVM_STOP_SEC_CONST_8
    #undef NVM_STOP_SEC_CONST_8
    #define STOP_SEC_CONST
#endif

#ifdef NVM_START_SEC_CONST_16
    #undef NVM_START_SEC_CONST_16
    #define START_SEC_CONST_16BIT
#endif
#ifdef NVM_STOP_SEC_CONST_16
    #undef NVM_STOP_SEC_CONST_16
    #define STOP_SEC_CONST
#endif

#ifdef NVM_START_SEC_CONST_UNSPECIFIED
    #undef NVM_START_SEC_CONST_UNSPECIFIED
    #define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef NVM_STOP_SEC_CONST_UNSPECIFIED
    #undef NVM_STOP_SEC_CONST_UNSPECIFIED
    #define STOP_SEC_CONST
#endif

#ifdef NVM_START_SEC_CONST_DESCRIPTOR_TABLE
    #undef NVM_START_SEC_CONST_DESCRIPTOR_TABLE
    #define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef NVM_STOP_SEC_CONST_DESCRIPTOR_TABLE
    #undef NVM_STOP_SEC_CONST_DESCRIPTOR_TABLE
    #define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR NOINIT sections */

#ifdef NVM_START_SEC_VAR_NOINIT_8
    #undef NVM_START_SEC_VAR_NOINIT_8
    #define Appl10_START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef NVM_STOP_SEC_VAR_NOINIT_8
    #undef NVM_STOP_SEC_VAR_NOINIT_8
    #define Appl10_STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef NVM_START_SEC_VAR_NOINIT_UNSPECIFIED
    #undef NVM_START_SEC_VAR_NOINIT_UNSPECIFIED
    #define Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef NVM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #undef NVM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #define Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

/* If Development Error Detection is ON (as well as INIT check),    *
 *   it SHALL be mapped to an initialized section (zeor is ok)      *
 * if Development Error Detection (or at least INIT check) is OFF,  *
 *   it MAY also be mapped to a NOINIT section.                     */
#ifdef NVM_START_SEC_VAR_UNSPECIFIED
    #undef NVM_START_SEC_VAR_UNSPECIFIED
    #define Appl10_START_SEC_VAR_UNSPECIFIED
#endif
#ifdef NVM_STOP_SEC_VAR_UNSPECIFIED
    #undef NVM_STOP_SEC_VAR_UNSPECIFIED
    #define Appl10_STOP_SEC_VAR_UNSPECIFIED
#endif

/* VAR FAST NOINIT sections */
#ifdef NVM_START_SEC_VAR_FAST_8
    #undef NVM_START_SEC_VAR_FAST_8
    #define Appl10_START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef NVM_STOP_SEC_VAR_FAST_8
    #undef NVM_STOP_SEC_VAR_FAST_8
    #define Appl10_STOP_SEC_VAR_NOINIT_8BIT
#endif

/* VAR ZERO INIT sections */

/* SHALL be mapped to a section that is guaranteed to be ZEROed out after Power-On Reset       *
 * (therefore it MAY be a "normal" ZERO_INIT section, being ZEROed out after ANY reset         *
 * Make shure this helds true for all kinds of variable data (esp. "uninitialized).            *
 * If necessary, create a special section (don't map to a common one)                          */    
#ifdef NVM_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
    #undef NVM_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
    #define Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef NVM_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
    #undef NVM_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
    #define Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

/**********************************************************************************************************************
 *  NvM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  BSWM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/
#ifdef BSWM_START_SEC_CODE
    #undef BSWM_START_SEC_CODE
    #define START_SEC_CODE                   /*mapped to default code section*/
#endif

#ifdef BSWM_STOP_SEC_CODE
    #undef BSWM_STOP_SEC_CODE
    #define STOP_SEC_CODE                    /*default code stop section*/
#endif

#ifdef BSWM_START_SEC_CONST_UNSPECIFIED
    #undef BSWM_START_SEC_CONST_UNSPECIFIED
    #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef BSWM_STOP_SEC_CONST_UNSPECIFIED
    #undef BSWM_STOP_SEC_CONST_UNSPECIFIED
    #define STOP_SEC_CONST
#endif

#ifdef BSWM_START_SEC_CONST_8BIT
    #undef BSWM_START_SEC_CONST_8BIT
    #define START_SEC_CONST_8BIT                    /*default code stop section*/
#endif

#ifdef BSWM_STOP_SEC_CONST_8BIT
    #undef BSWM_STOP_SEC_CONST_8BIT
    #define STOP_SEC_CONST                    /*default code stop section*/
#endif

#ifdef BSWM_START_SEC_CONST_16BIT
    #undef BSWM_START_SEC_CONST_16BIT
    #define START_SEC_CONST_16BIT                    /*default code stop section*/
#endif

#ifdef BSWM_STOP_SEC_CONST_16BIT
    #undef BSWM_STOP_SEC_CONST_16BIT
    #define STOP_SEC_CONST                    /*default code stop section*/
#endif

#ifdef BSWM_START_SEC_CONST_32BIT
    #undef BSWM_START_SEC_CONST_32BIT
    #define START_SEC_CONST_32BIT                    /*default code stop section*/
#endif

#ifdef BSWM_STOP_SEC_CONST_32BIT
    #undef BSWM_STOP_SEC_CONST_32BIT
    #define STOP_SEC_CONST                    /*default code stop section*/
#endif

#ifdef BSWM_START_SEC_VAR_NOINIT_8BIT
    #undef BSWM_START_SEC_VAR_NOINIT_8BIT
    #define Appl10_START_SEC_VAR_NOINIT_8BIT                   /*mapped to default code section*/
#endif

#ifdef BSWM_STOP_SEC_VAR_NOINIT_8BIT
    #undef BSWM_STOP_SEC_VAR_NOINIT_8BIT
    #define Appl10_STOP_SEC_VAR_NOINIT_8BIT                   /*mapped to default code section*/
#endif

#ifdef BSWM_START_SEC_VAR_NOINIT_16BIT
    #undef  BSWM_START_SEC_VAR_NOINIT_16BIT
    #define Appl10_START_SEC_VAR_NOINIT_16BIT
#endif

#ifdef BSWM_STOP_SEC_VAR_NOINIT_16BIT
    #undef BSWM_STOP_SEC_VAR_NOINIT_16BIT
    #define Appl10_STOP_SEC_VAR_NOINIT_16BIT                                                /*default var section*/
#endif

#ifdef BSWM_START_SEC_VAR_NOINIT_32BIT
    #undef  BSWM_START_SEC_VAR_NOINIT_32BIT
    #define Appl10_START_SEC_VAR_NOINIT_32BIT
#endif

#ifdef BSWM_STOP_SEC_VAR_NOINIT_32BIT
    #undef BSWM_STOP_SEC_VAR_NOINIT_32BIT
    #define Appl10_STOP_SEC_VAR_NOINIT_32BIT                                                /*default var section*/
#endif

#ifdef BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
    #undef BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
    #define Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED                   /*mapped to default code section*/
#endif

#ifdef BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #undef BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #define Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED                   /*mapped to default code section*/
#endif

#ifdef BSWM_START_SEC_VAR_ZERO_INIT_8BIT
    #undef BSWM_START_SEC_VAR_ZERO_INIT_8BIT
    #define Appl10_START_SEC_VAR_8BIT                   /* mapped to default var section */
#endif

#ifdef BSWM_STOP_SEC_VAR_ZERO_INIT_8BIT
    #undef BSWM_STOP_SEC_VAR_ZERO_INIT_8BIT
    #define Appl10_STOP_SEC_VAR_8BIT                                   /* default var stop section */
#endif

#ifdef BSWM_START_SEC_VAR_INIT_UNSPECIFIED
    #undef BSWM_START_SEC_VAR_INIT_UNSPECIFIED
    #define Appl10_START_SEC_VAR_UNSPECIFIED                   /*mapped to default code section*/
#endif

#ifdef BSWM_STOP_SEC_VAR_INIT_UNSPECIFIED
    #undef BSWM_STOP_SEC_VAR_INIT_UNSPECIFIED
    #define Appl10_STOP_SEC_VAR_UNSPECIFIED                   /*mapped to default code section*/
#endif

#ifdef BSWM_START_SEC_VAR_PBCFG
    #undef BSWM_START_SEC_VAR_PBCFG
    #define START_SEC_VAR_PBCFG                   /*mapped to default code section*/
#endif

#ifdef BSWM_STOP_SEC_VAR_PBCFG
    #undef BSWM_STOP_SEC_VAR_PBCFG
    #define STOP_SEC_VAR                   /*mapped to default code section*/
#endif

#ifdef BSWM_START_SEC_PBCFG
    #undef BSWM_START_SEC_PBCFG
    #define START_SEC_CONST_PBCFG                   /*mapped to default code section*/
#endif

#ifdef BSWM_STOP_SEC_PBCFG
    #undef BSWM_STOP_SEC_PBCFG
    #define STOP_SEC_CONST                   /*mapped to default code section*/
#endif

/**********************************************************************************************************************
 *  BSWM END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  SYSSERVICE_ASR4ECUM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/
#ifdef ECUM_START_SEC_CODE
# undef ECUM_START_SEC_CODE
# define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef ECUM_STOP_SEC_CODE
# undef ECUM_STOP_SEC_CODE
# define STOP_SEC_CODE                             /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

#ifdef ECUM_START_SEC_CONST_UNSPECIFIED
# undef ECUM_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef ECUM_STOP_SEC_CONST_UNSPECIFIED
# undef ECUM_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

/* Postbuild CFG CONST sections */

#ifdef ECUM_START_SEC_PBCFG
# undef ECUM_START_SEC_PBCFG
# define START_SEC_CONST_PBCFG
#endif
#ifdef ECUM_STOP_SEC_PBCFG
# undef ECUM_STOP_SEC_PBCFG
# define STOP_SEC_CONST
#endif

#ifdef ECUM_START_SEC_PBCFG_GLOBALROOT
# undef ECUM_START_SEC_PBCFG_GLOBALROOT
# define START_SEC_PBCFG_GLOBALROOT
#endif
#ifdef ECUM_STOP_SEC_PBCFG_GLOBALROOT
# undef ECUM_STOP_SEC_PBCFG_GLOBALROOT
# define STOP_SEC_CONST
#endif



/*******  VAR sections  **********************************************************************************************/


/* VAR NOINIT sections */

#ifdef ECUM_START_SEC_VAR_NOINIT_8BIT
# undef ECUM_START_SEC_VAR_NOINIT_8BIT
# define Appl10_START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef ECUM_STOP_SEC_VAR_NOINIT_8BIT
# undef ECUM_STOP_SEC_VAR_NOINIT_8BIT
# define Appl10_STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef ECUM_START_SEC_VAR_NOINIT_16BIT
# undef ECUM_START_SEC_VAR_NOINIT_16BIT
# define Appl10_START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef ECUM_STOP_SEC_VAR_NOINIT_16BIT
# undef ECUM_STOP_SEC_VAR_NOINIT_16BIT
# define Appl10_STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef ECUM_START_SEC_VAR_NOINIT_32BIT
# undef ECUM_START_SEC_VAR_NOINIT_32BIT
# define Appl10_START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef ECUM_STOP_SEC_VAR_NOINIT_32BIT
# undef ECUM_STOP_SEC_VAR_NOINIT_32BIT
# define Appl10_STOP_SEC_VAR_NOINIT_32BIT
#endif

#ifdef ECUM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef ECUM_START_SEC_VAR_NOINIT_UNSPECIFIED
# define Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef ECUM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef ECUM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef ECUM_START_SEC_VAR_NOCACHE_NOINIT_32BIT
# undef ECUM_START_SEC_VAR_NOCACHE_NOINIT_32BIT
# define Appl10_START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef ECUM_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT
# undef ECUM_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT
# define Appl10_STOP_SEC_VAR_NOINIT_32BIT
#endif


/**********************************************************************************************************************
 *  SYSSERVICE_ASR4ECUM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  SYSSERVICE_ASRCRC START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/
#ifdef CRC_START_SEC_CODE
    #undef CRC_START_SEC_CODE
    #define START_SEC_CODE
#endif
#ifdef CRC_STOP_SEC_CODE
    #undef CRC_STOP_SEC_CODE
    #define STOP_SEC_CODE
#endif

/*******  CONST sections  ********************************************************************************************/
#ifdef CRC_START_SEC_CONST_8
    #undef CRC_START_SEC_CONST_8
    #define START_SEC_CONST_8
#endif
#ifdef CRC_STOP_SEC_CONST_8
    #undef CRC_STOP_SEC_CONST_8
    #define STOP_SEC_CONST
#endif

#ifdef CRC_START_SEC_CONST_16
    #undef CRC_START_SEC_CONST_16
    #define START_SEC_CONST_16
#endif
#ifdef CRC_STOP_SEC_CONST_16
    #undef CRC_STOP_SEC_CONST_16
    #define STOP_SEC_CONST
#endif

#ifdef CRC_START_SEC_CONST_32
    #undef CRC_START_SEC_CONST_32
    #define START_SEC_CONST_32
#endif
#ifdef CRC_STOP_SEC_CONST_32
    #undef CRC_STOP_SEC_CONST_32
    #define STOP_SEC_CONST
#endif

/**********************************************************************************************************************
 *  SYSSERVICE_ASRCRC END
 *********************************************************************************************************************/

#ifdef DET_START_SEC_CODE
# undef DET_START_SEC_CODE
# define START_SEC_CODE
#endif
#ifdef DET_STOP_SEC_CODE
# undef DET_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif

#ifdef DET_START_SEC_VAR_INIT_UNSPECIFIED
# undef DET_START_SEC_VAR_INIT_UNSPECIFIED
# define Appl10_START_SEC_VAR_UNSPECIFIED
#endif
#ifdef DET_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef DET_STOP_SEC_VAR_INIT_UNSPECIFIED
# define Appl10_STOP_SEC_VAR_UNSPECIFIED
#endif

#ifdef DET_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef DET_START_SEC_VAR_NOINIT_UNSPECIFIED
# define Appl10_START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef DET_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef DET_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define Appl10_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#include "WdgM_OsMemMap.h" 
#include "Os_MemMap.h"
#if defined WDGM_START_SEC_CODE                      /* Code */
    #undef WDGM_START_SEC_CODE
    #define START_SEC_CODE
#elif defined WDGM_STOP_SEC_CODE
    #undef WDGM_STOP_SEC_CODE
    #define STOP_SEC_CODE
#endif


#if defined WDGM_START_SEC_CONST_8BIT         /* Global or static constants */
    #undef WDGM_START_SEC_CONST_8BIT
    #define START_SEC_CONST_8BIT
#elif defined WDGM_STOP_SEC_CONST_8BIT
    #undef WDGM_STOP_SEC_CONST_8BIT
    #define STOP_SEC_CONST

#elif defined WDGM_START_SEC_CONST_16BIT
    #undef WDGM_START_SEC_CONST_16BIT
    #define START_SEC_CONST_16BIT
#elif defined WDGM_STOP_SEC_CONST_16BIT
    #undef WDGM_STOP_SEC_CONST_16BIT
    #define STOP_SEC_CONST

#elif defined WDGM_START_SEC_CONST_32BIT
    #undef WDGM_START_SEC_CONST_32BIT
    #define START_SEC_CONST_32BIT
#elif defined WDGM_STOP_SEC_CONST_32BIT
    #undef WDGM_STOP_SEC_CONST_32BIT

#elif defined WDGM_START_SEC_CONST_UNSPECIFIED
    #undef WDGM_START_SEC_CONST_UNSPECIFIED
    #define START_SEC_CONST_UNSPECIFIED
#elif defined WDGM_STOP_SEC_CONST_UNSPECIFIED
    #undef WDGM_STOP_SEC_CONST_UNSPECIFIED
    #define STOP_SEC_CONST
#endif


/* Package Merger: Stop Section MemMapModuleList */


/* ------------------- provide compatibility to former specifications --------- */

#ifdef START_SEC_CONST_8
    #define START_SEC_CONST_8BIT
    #undef START_SEC_CONST_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_CONST_16
    #define START_SEC_CONST_16BIT
    #undef START_SEC_CONST_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_CONST_32
    #define START_SEC_CONST_32BIT
    #undef START_SEC_CONST_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_CONST_FAST_8
    #define START_SEC_CONST_FAST_8BIT
    #undef START_SEC_CONST_FAST_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_CONST_FAST_16
    #define START_SEC_CONST_FAST_16BIT
    #undef START_SEC_CONST_FAST_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_CONST_FAST_32
    #define START_SEC_CONST_FAST_32BIT
    #undef START_SEC_CONST_FAST_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_INIT_8
    #define START_SEC_VAR_INIT_8BIT
    #undef START_SEC_VAR_INIT_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_INIT_16
    #define START_SEC_VAR_INIT_16BIT
    #undef START_SEC_VAR_INIT_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_INIT_32
    #define START_SEC_VAR_INIT_32BIT
    #undef START_SEC_VAR_INIT_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NO_INIT_8
    #define START_SEC_VAR_NOINIT_8BIT
    #undef START_SEC_VAR_NO_INIT_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NO_INIT_16
    #define START_SEC_VAR_NOINIT_16BIT
    #undef START_SEC_VAR_NO_INIT_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NO_INIT_32
    #define START_SEC_VAR_NOINIT_32BIT
    #undef START_SEC_VAR_NO_INIT_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NO_INIT_UNSPECIFIED
    #define START_SEC_VAR_NOINIT_UNSPECIFIED
    #undef START_SEC_VAR_NO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_CLEARED_8
    #define START_SEC_VAR_ZERO_INIT_8BIT
    #undef START_SEC_VAR_CLEARED_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_CLEARED_16
    #define START_SEC_VAR_ZERO_INIT_16BIT
    #undef START_SEC_VAR_CLEARED_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_CLEARED_32
    #define START_SEC_VAR_ZERO_INIT_32BIT
    #undef START_SEC_VAR_CLEARED_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_CLEARED_UNSPECIFIED
    #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    #undef START_SEC_VAR_CLEARED_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_INIT_8
    #define START_SEC_VAR_FAST_INIT_8BIT
    #undef START_SEC_VAR_FAST_INIT_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_INIT_16
    #define START_SEC_VAR_FAST_INIT_16BIT
    #undef START_SEC_VAR_FAST_INIT_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_INIT_32
    #define START_SEC_VAR_FAST_INIT_32BIT
    #undef START_SEC_VAR_FAST_INIT_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_NO_INIT_8
    #define START_SEC_VAR_FAST_NOINIT_8BIT
    #undef START_SEC_VAR_FAST_NO_INIT_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_NO_INIT_16
    #define START_SEC_VAR_FAST_NOINIT_16BIT
    #undef START_SEC_VAR_FAST_NO_INIT_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_NO_INIT_32
    #define START_SEC_VAR_FAST_NOINIT_32BIT
    #undef START_SEC_VAR_FAST_NO_INIT_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_NO_INIT_UNSPECIFIED
    #define START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
    #undef START_SEC_VAR_FAST_NO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_CLEARED_8
    #define START_SEC_VAR_FAST_ZERO_INIT_8BIT
    #undef START_SEC_VAR_FAST_CLEARED_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_CLEARED_16
    #define START_SEC_VAR_FAST_ZERO_INIT_16BIT
    #undef START_SEC_VAR_FAST_CLEARED_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_CLEARED_32
    #define START_SEC_VAR_FAST_ZERO_INIT_32BIT
    #undef START_SEC_VAR_FAST_CLEARED_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_CLEARED_UNSPECIFIED
    #define START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
    #undef START_SEC_VAR_FAST_CLEARED_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_INIT_8
    #define START_SEC_VAR_NOCACHE_INIT_8BIT
    #undef START_SEC_VAR_NOCACHE_INIT_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_INIT_16
    #define START_SEC_VAR_NOCACHE_INIT_16BIT
    #undef START_SEC_VAR_NOCACHE_INIT_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_INIT_32
    #define START_SEC_VAR_NOCACHE_INIT_32BIT
    #undef START_SEC_VAR_NOCACHE_INIT_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_NO_INIT_8
    #define START_SEC_VAR_NOCACHE_NOINIT_8BIT
    #undef START_SEC_VAR_NOCACHE_NO_INIT_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_NO_INIT_16
    #define START_SEC_VAR_NOCACHE_NOINIT_16BIT
    #undef START_SEC_VAR_NOCACHE_NO_INIT_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_NO_INIT_32
    #define START_SEC_VAR_NOCACHE_NOINIT_32BIT
    #undef START_SEC_VAR_NOCACHE_NO_INIT_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_NO_INIT_UNSPECIFIED
    #define START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
    #undef START_SEC_VAR_NOCACHE_NO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_CLEARED_8
    #define START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
    #undef START_SEC_VAR_NOCACHE_CLEARED_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_CLEARED_16
    #define START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
    #undef START_SEC_VAR_NOCACHE_CLEARED_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_CLEARED_32
    #define START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
    #undef START_SEC_VAR_NOCACHE_CLEARED_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_CLEARED_UNSPECIFIED
    #define START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
    #undef START_SEC_VAR_NOCACHE_CLEARED_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/*------------------------------GLOBAL-SECTIONS-----------------------------*/
/* Check code sections */
#if ( (defined CODE_SEC_OPEN)                            && \
     ((defined START_SEC_CODE                          ) || \
      (defined START_SEC_CODE_FAST                     ) || \
      (defined START_SEC_CODE_ISR                      )    \
      ))
    #error "MemMap.h: Close the former code segment before opening a new one."
#endif

/* Check const sections */
#if ( (defined CONST_SEC_OPEN)                           && \
     ((defined START_SEC_CONST_8BIT                    ) || \
      (defined START_SEC_CONST_16BIT                   ) || \
      (defined START_SEC_CONST_32BIT                   ) || \
      (defined START_SEC_CONST_UNSPECIFIED             ) || \
      (defined START_SEC_CONST_FAST_8BIT               ) || \
      (defined START_SEC_CONST_FAST_16BIT              ) || \
      (defined START_SEC_CONST_FAST_32BIT              ) || \
      (defined START_SEC_CONST_FAST_UNSPECIFIED        ) || \
      (defined START_SEC_CONST_PBCFG                   ) || \
      (defined START_SEC_PBCFG_GLOBALROOT              )    \
      ))
    #error "MemMap.h: Close the former const segment before opening a new one."
#endif

/* Check data sections */
#if ( (defined VAR_SEC_OPEN)                             && \
     ((defined START_SEC_VAR_INIT_8BIT                 ) || \
      (defined START_SEC_VAR_INIT_16BIT                ) || \
      (defined START_SEC_VAR_INIT_32BIT                ) || \
      (defined START_SEC_VAR_INIT_UNSPECIFIED          ) || \
      (defined START_SEC_VAR_NOINIT_8BIT               ) || \
      (defined START_SEC_VAR_NOINIT_16BIT              ) || \
      (defined START_SEC_VAR_NOINIT_32BIT              ) || \
      (defined START_SEC_VAR_NOINIT_UNSPECIFIED        ) || \
      (defined START_SEC_VAR_PBCFG                     ) || \
      (defined START_SEC_VAR_ZERO_INIT_8BIT            ) || \
      (defined START_SEC_VAR_ZERO_INIT_16BIT           ) || \
      (defined START_SEC_VAR_ZERO_INIT_32BIT           ) || \
      (defined START_SEC_VAR_ZERO_INIT_UNSPECIFIED     ) || \
      (defined START_SEC_VAR_FAST_INIT_8BIT            ) || \
      (defined START_SEC_VAR_FAST_INIT_16BIT           ) || \
      (defined START_SEC_VAR_FAST_INIT_32BIT           ) || \
      (defined START_SEC_VAR_FAST_INIT_UNSPECIFIED     ) || \
      (defined START_SEC_VAR_FAST_NOINIT_8BIT          ) || \
      (defined START_SEC_VAR_FAST_NOINIT_16BIT         ) || \
      (defined START_SEC_VAR_FAST_NOINIT_32BIT         ) || \
      (defined START_SEC_VAR_FAST_NOINIT_UNSPECIFIED   ) || \
      (defined START_SEC_VAR_FAST_ZERO_INIT_8BIT       ) || \
      (defined START_SEC_VAR_FAST_ZERO_INIT_16BIT      ) || \
      (defined START_SEC_VAR_FAST_ZERO_INIT_32BIT      ) || \
      (defined START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED) || \
      (defined START_SEC_VAR_NOCACHE_INIT_8BIT         ) || \
      (defined START_SEC_VAR_NOCACHE_INIT_16BIT        ) || \
      (defined START_SEC_VAR_NOCACHE_INIT_32BIT        ) || \
      (defined START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED  ) || \
      (defined START_SEC_VAR_NOCACHE_NOINIT_8BIT       ) || \
      (defined START_SEC_VAR_NOCACHE_NOINIT_16BIT      ) || \
      (defined START_SEC_VAR_NOCACHE_NOINIT_32BIT      ) || \
      (defined START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED) || \
      (defined START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT    ) || \
      (defined START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT   ) || \
      (defined START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT   ) || \
      (defined START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED)    \
      ))
    #error "MemMap.h: Close the former variable segment before opening a new one."
#endif



/*------------------------------GLOBAL-START-SECTIONS------------------------------*/

/* Code section */
#ifdef START_SEC_CODE                          
    #define CODE_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CODE                           /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CODE_FAST                     
    #define CODE_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CODE_FAST                      /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CODE_ISR                      
    #define CODE_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CODE_ISR                       /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif




/* Const section */
#ifdef START_SEC_CONST_8BIT                    
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CONST_8BIT                     /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CONST_16BIT                   
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CONST_16BIT                    /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CONST_32BIT                   
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CONST_32BIT                    /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CONST_UNSPECIFIED             
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CONST_UNSPECIFIED              /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CONST_FAST_8BIT               
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CONST_FAST_8BIT                /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CONST_FAST_16BIT              
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CONST_FAST_16BIT               /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CONST_FAST_32BIT              
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CONST_FAST_32BIT               /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CONST_FAST_UNSPECIFIED        
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CONST_FAST_UNSPECIFIED         /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CONST_PBCFG                   
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CONST_PBCFG                    /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_PBCFG_GLOBALROOT              
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_PBCFG_GLOBALROOT               /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif




/* Var section */
#ifdef START_SEC_VAR_INIT_8BIT                 
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_INIT_8BIT                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_INIT_16BIT                
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_INIT_16BIT                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_INIT_32BIT                
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_INIT_32BIT                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_INIT_UNSPECIFIED          
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_INIT_UNSPECIFIED           /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOINIT_8BIT               
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_NOINIT_8BIT                /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOINIT_16BIT              
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_NOINIT_16BIT               /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOINIT_32BIT              
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_NOINIT_32BIT               /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOINIT_UNSPECIFIED        
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_NOINIT_UNSPECIFIED         /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_PBCFG                     
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_PBCFG                      /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_ZERO_INIT_8BIT            
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_ZERO_INIT_8BIT             /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_ZERO_INIT_16BIT           
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_ZERO_INIT_16BIT            /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_ZERO_INIT_32BIT           
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_ZERO_INIT_32BIT            /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_ZERO_INIT_UNSPECIFIED     
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_ZERO_INIT_UNSPECIFIED      /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_INIT_8BIT            
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_FAST_INIT_8BIT             /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_INIT_16BIT           
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_FAST_INIT_16BIT            /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_INIT_32BIT           
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_FAST_INIT_32BIT            /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_INIT_UNSPECIFIED     
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_FAST_INIT_UNSPECIFIED      /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_NOINIT_8BIT          
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_FAST_NOINIT_8BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_NOINIT_16BIT         
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_FAST_NOINIT_16BIT          /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_NOINIT_32BIT         
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_FAST_NOINIT_32BIT          /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_NOINIT_UNSPECIFIED   
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_FAST_NOINIT_UNSPECIFIED    /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_ZERO_INIT_8BIT       
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_FAST_ZERO_INIT_8BIT        /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_ZERO_INIT_16BIT      
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_FAST_ZERO_INIT_16BIT       /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_ZERO_INIT_32BIT      
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_FAST_ZERO_INIT_32BIT       /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_INIT_8BIT         
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_NOCACHE_INIT_8BIT          /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_INIT_16BIT        
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_NOCACHE_INIT_16BIT         /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_INIT_32BIT        
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_NOCACHE_INIT_32BIT         /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED  
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED   /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_NOINIT_8BIT       
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_NOCACHE_NOINIT_8BIT        /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_NOINIT_16BIT      
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_NOCACHE_NOINIT_16BIT       /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_NOINIT_32BIT      
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_NOCACHE_NOINIT_32BIT       /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT    
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT     /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT   
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT    /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT   
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT    /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
    #define VAR_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif



/*------------------------------GENERAL-STOP-SECTIONS-------------------------------*/

/*default segment for Code*/
#ifdef STOP_SEC_CODE
    #undef CODE_SEC_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
/* Enter here a #pragma command for closing the specified section */
/* This should switch back to the default section */
/*    #pragma */
    #undef STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/*default segment for Constants*/
#ifdef STOP_SEC_CONST
    #undef CONST_SEC_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
/* Enter here a #pragma command for closing the specified section */
/* This should switch back to the default section */
/*    #pragma */
    #undef STOP_SEC_CONST /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/*default segment for Datas*/
#ifdef STOP_SEC_VAR
    #undef VAR_SEC_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
/* Enter here a #pragma command for closing the specified section */
/* This should switch back to the default section */
/*    #pragma */
    #undef STOP_SEC_VAR /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef MEMMAP_ERROR
   #error "MemMap.h, wrong pragma command"
#endif

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  END OF FILE: MemMap.h
 *********************************************************************************************************************/

/* PRQA L:MEMMAP_0841_TAG */

