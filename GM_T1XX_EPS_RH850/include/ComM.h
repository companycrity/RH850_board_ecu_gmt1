#ifndef COMM_H
#define COMM_H

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/* ##V_CFG_MANAGEMENT ##CQProject : Ccl_Asr4ComMCfg5 CQComponent : Implementation */
#define CCL_ASR4COMMCFG5_VERSION             0x0200
#define CCL_ASR4COMMCFG5_RELEASE_VERSION     0x00

/* Version number */
#define COMM_SW_MAJOR_VERSION    (CCL_ASR4COMMCFG5_VERSION >> 8)
#define COMM_SW_MINOR_VERSION    (CCL_ASR4COMMCFG5_VERSION & 0x00FFu)
#define COMM_SW_PATCH_VERSION    CCL_ASR4COMMCFG5_RELEASE_VERSION

#define COMM_AR_RELEASE_MAJOR_VERSION     4u
#define COMM_AR_RELEASE_MINOR_VERSION     0u
#define COMM_AR_RELEASE_REVISION_VERSION  3u

#define COMM_VENDOR_ID          30u
#define COMM_MODULE_ID          12u

#if (COMM_CONFIGURATION_VARIANT == COMM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE)
/* Magic number used to validate the Post Build Loadable structure, MSB=COMM_MODULE_ID, LSB=arbitrary value (UREQ00035483) */
# define COMM_FINAL_MAGICNUMBER           0x0C01u
#endif

/* DET Error definitions */
#define COMM_E_NOT_INITED                 0x01u            /* API service used without module initialization */
#define COMM_E_WRONG_PARAMETERS           0x02u            /* API service used with wrong parameters */
#define COMM_E_ERROR_IN_PROV_SERVICE      0x03u            /* provided API services of other module returns with an error */
#define COMM_E_NOSUPPORTED_MODECHANGE     0x04u

/* Service ID */
#define COMM_INIT_ID                      0x01u
#define COMM_DEINIT_ID                    0x02u
#define COMM_GETSTATUS_ID                 0x03u
#define COMM_GETSTATE_ID                  0x34u
#define COMM_GETINHIBITIONSTATUS_ID       0x04u
#define COMM_REQUESTCOMMODE_ID            0x05u
#define COMM_GETMAXCOMMODE_ID             0x06u
#define COMM_GETREQUESTEDCOMMODE_ID       0x07u
#define COMM_GETCURRENTCOMMODE_ID         0x08u
#define COMM_PREVENTWAKEUP_ID             0x09u
#define COMM_LIMITCHANNELTONOCOMMODE_ID   0x0Bu
#define COMM_LIMITECUTONOCOMMODE_ID       0x0Cu
#define COMM_READINHIBITCOUNTER_ID        0x0Du
#define COMM_RESETINHIBITCOUNTER_ID       0x0Eu
#define COMM_SETECUGROUPCLASSIFICATION_ID 0x0Fu
#define COMM_GETVERSIONINFO_ID            0x10u
#define COMM_MAINFUNCTION_ID              0x60u
#define COMM_COMMUNICATIONALLOWED_ID      0x35u


/* callback function service ID */
#define COMM_CBK_NM_NETWORKSTARTINDICATION_ID  0x15u
#define COMM_CBK_NM_NETWORKMODE_ID             0x18u
#define COMM_CBK_NM_PREPAREBUSSLEEPMODE_ID     0x19u
#define COMM_CBK_NM_BUSSLEEPMODE_ID            0x1Au
#define COMM_CBK_NM_RESTARTINDICATION_ID       0x1Bu
#define COMM_CBK_DCM_ACTIVEDIAGNOSTIC_ID       0x1Fu
#define COMM_CBK_DCM_INACTIVEDIAGNOSTIC_ID     0x20u
#define COMM_CBK_ECUM_WAKEUPINDICATION_ID      0x2Au
#define COMM_CBK_BUSSMMODEINDICATION_ID        0x33u

/* internal function service ID */
#define COMM_NOCOM_NETREQ_ID                  0x70u
#define COMM_NOCOM_FULLREADYSLEEP_ID          0x71u
#define COMM_READYS_NETREQ_ID                 0x73u
#define COMM_NETREQ_READYS_ID                 0x75u

/* Service defines for the ComM state transitions */
#define COMM_NO_STATE_CHANGE 0x10u

/* defines to identify the configured NM variant */
#define NM_VARIANT_FULL       1u
#define NM_VARIANT_PASSIVE    2u
#define NM_VARIANT_LIGHT      3u
#define NM_VARIANT_NONE       4u

/* advanced return type of the communication manager */
#define COMM_E_MODE_LIMITATION        (Std_ReturnType)2u                  /* mode is limited and can not be requested by the ComM User */
#define COMM_E_UNINIT                 (Std_ReturnType)3u                  /* API called but ComM is not initialized */

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
#if ( COMM_DEV_ERROR_DETECT == STD_ON )
/* PRQA S 3458 SUPPRESS_3458 */ /* MD_MSR_19.4  */
#  define ComM_CheckDetErrorReturnVoid( CONDITION, API_ID, ERROR_CODE )           {                                                                      \
                                                                                    if(!(CONDITION))                                                     \
                                                                                    {                                                                    \
                                                                                      (void)Det_ReportError( COMM_MODULE_ID, 0u, (API_ID), (ERROR_CODE)); \
                                                                                      return;                                                            \
                                                                                    }                                                                    \
                                                                                  }

#  define ComM_CheckDetErrorReturnValue( CONDITION, API_ID, ERROR_CODE, RET_VAL ) {                                                                      \
                                                                                    if(!(CONDITION))                                                     \
                                                                                    {                                                                    \
                                                                                      (void)Det_ReportError( COMM_MODULE_ID, 0u, (API_ID), (ERROR_CODE)); \
                                                                                      return (RET_VAL);                                                  \
                                                                                    }                                                                    \
                                                                                  }

#  define ComM_CheckDetErrorContinue( CONDITION, API_ID, ERROR_CODE )             {                                                                      \
                                                                                    if(!(CONDITION))                                                     \
                                                                                    {                                                                    \
                                                                                      (void)Det_ReportError( COMM_MODULE_ID, 0u, (API_ID), (ERROR_CODE)); \
                                                                                    }                                                                    \
                                                                                  }
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#  define ComM_CallDetReportError( API_ID, ERROR_CODE )                           { (void)Det_ReportError( COMM_MODULE_ID, 0u, (API_ID), (ERROR_CODE) ); }
/* PRQA L:SUPPRESS_3458 */

#else

#  define ComM_CheckDetErrorReturnVoid(  CONDITION, API_ID, ERROR_CODE )
#  define ComM_CheckDetErrorReturnValue( CONDITION, API_ID, ERROR_CODE, RET_VAL ) 
#  define ComM_CheckDetErrorContinue(    CONDITION, API_ID, ERROR_CODE ) 

#  define ComM_CallDetReportError( API_ID, ERROR_CODE ) 
#endif

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  INTERNAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


#endif  /* COMM_H */
