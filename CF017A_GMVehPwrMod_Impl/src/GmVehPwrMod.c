/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GmVehPwrMod.c
 *     SW-C Type:  GmVehPwrMod
 *  Generated at:  Tue Dec 13 09:52:56 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GmVehPwrMod>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : GmVehSpdArbn.c
* Module Description: Implementation of Vehicle Power Mode (GM) -- CF017A
* Project           : CBD
* Author            : Nick Saxton
***********************************************************************************************************************
* Version Control:
* %version:          6 %
* %derived_by:       nz2796 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 09/24/15   1       NS        Initial version                                                                EA4#1635
* 10/01/15   2       NS        Additional outputs added based on FDD v1.1.0                                   EA4#1802
* 11/10/15   3       NS        VehSpdArbdVld changed to VehSpdSnsrVld                                         EA4#2471
* 04/15/16   4       NS        Updated to match model for FDD v2.0.0                                          EA4#4288
* 11/22/16   5      TATA       Updated per design_2.1.0            								    EA4#8312, EA4#8317
* 12/13/16	 6       ML		   Updated per design 2.2.0/2.3.0 and to fix Anomaly EA4#8982			EA4#8985, EA4#8512
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_GmVehPwrMod.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte_Read_*, Rte_Write_* */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */


/******************************************** Embedded Local Constants ***********************************************/
#define CNTTOSEC_ULS_U32                (10000UL)

#define LOOKUPTBLSIZE_CNT_U16           (512U)

#define MINRAMPRATE_ULSPERSEC_F32       (0.0F)
#define MAXRAMPRATE_ULSPERSEC_F32       (500.0F)

#define MINMOTTQCMDSCA_ULS_F32          (0.0F)
#define MAXMOTTQCMDSCA_ULS_F32          (1.0F)

#define KEEPASSIIDX_CNT_U16             1U
#define BUSOFFHISPDIDX_CNT_U16          2U
#define SYSPWRMODMSGINVLDIDX_CNT_U16    4U
#define VEHSPDSNSRVLDIDX_CNT_U16        8U
#define PRPNSYSACTVMSGINVLDIDX_CNT_U16  16U
#define ASSIKEEPMINIDX_CNT_U16          32U
#define ENGRUNACTVIDX_CNT_U16           64U
#define SYSPWRMODRUNIDX_CNT_U16         128U
#define GPIOMCUENAIDX_CNT_U16           256U

/******************************************** Embedded Local Constants ***********************************************/
static  FUNC(float32, GmVehPwrMod_APPL_CODE) GetMotTqCmdSca( boolean AssiEna_Cnt_T_logl );

static  FUNC(uint16, GmVehPwrMod_APPL_CODE)  GetTblIdx( boolean GetGpioMcuEna_Cnt_T_logl,
                                                        boolean SysPwrModRun_Cnt_T_logl,
                                                        boolean EngRunActv_Cnt_T_logl,
                                                        boolean VehSpdAssiKeepMin_Cnt_T_logl,
                                                        boolean PrpnSysActvMsgInvld_Cnt_T_logl,
                                                        boolean VehSpdSnsrVld_Cnt_T_logl,
                                                        boolean SysPwrModMsgInvld_Cnt_T_logl,
                                                        boolean BusOffHiSpd_Cnt_T_logl,
                                                        float32 HwTq_HwNwtMtr_T_f32 );

static  FUNC(void, GmVehPwrMod_APPL_CODE)  KeepAssiHwTqTmr( float32 HwTq_HwNwtMtr_T_f32,
                                                               P2VAR(uint16, AUTOMATIC, GmVehPwrMod_APPL_CODE) TblIdxNr_Cnt_T_u16 );

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_TqRefTi(void)
 *   boolean *Rte_Pim_PrevSysStReqEnaVal(void)
 *   boolean *Rte_Pim_TqRefTiActv(void)
 *   boolean *Rte_Pim_dGmVehPwrModHwTqKeepAssi(void)
 *   boolean *Rte_Pim_dGmVehPwrModVehSpdAssiKeepMin(void)
 *   boolean *Rte_Pim_dGmVehPwrModVehSpdAssiOnMin(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_GmVehPwrModHwTqMinKeepAssi_Val(void)
 *   float32 Rte_Prm_GmVehPwrModOperRampRate_Val(void)
 *   float32 Rte_Prm_GmVehPwrModVehSpdAssiOnMin_Val(void)
 *   float32 Rte_Prm_GmVehPwrModVehSpdMinKeepAssi_Val(void)
 *   uint32 Rte_Prm_GmVehPwrModHwTqMinKeepTmr_Val(void)
 *
 *********************************************************************************************************************/


#define GmVehPwrMod_START_SEC_CODE
#include "GmVehPwrMod_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmVehPwrModInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, GmVehPwrMod_CODE) GmVehPwrModInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmVehPwrModInit1
 *********************************************************************************************************************/
    /* Do nothing */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GmVehPwrModPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_BusOffHiSpd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EngRunActv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PrpnSysActvMsgInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysPwrModMsgInvld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysPwrModRun_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysStEnaReqOvrd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysStFltOutpReqDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpdArbd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdSnsrVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PwrSplyEnaReq_Logl(boolean data)
 *   Std_ReturnType Rte_Write_SysOperMotTqCmdSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysOperRampRate_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysStReqEna_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehPwrModDftVehSpdEna_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetGpioMcuEna_Oper(boolean *PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, GmVehPwrMod_CODE) GmVehPwrModPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GmVehPwrModPer1
 *********************************************************************************************************************/
    /* Inputs */
    VAR(boolean, AUTOMATIC) GetGpioMcuEna_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) SysPwrModRun_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) EngRunActv_Cnt_T_logl;
    VAR(float32, AUTOMATIC) VehSpdArbd_Kph_T_f32;
    VAR(boolean, AUTOMATIC) PrpnSysActvMsgInvld_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) VehSpdSnsrVld_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) SysPwrModMsgInvld_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) BusOffHiSpd_Cnt_T_logl;
    VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
    VAR(boolean, AUTOMATIC) SysStEnaReqOvrd_Cnt_T_logl;

    /* Outputs */
    VAR(boolean, AUTOMATIC) SysStReqEna_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) PwrSplyEnaReq_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) VehPwrModDftVehSpdEna_Cnt_T_logl;
    VAR(float32, AUTOMATIC) SysOperMotTqCmdSca_Uls_T_f32;
    VAR(float32, AUTOMATIC) SysOperRampRate_UlsPerSec_T_f32;
	
    VAR(boolean, AUTOMATIC) SysStFltOutpReqDi_Cnt_T_logl;   
    VAR(boolean, AUTOMATIC) VarEff_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) VehSpdAssiOnMin_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) VehSpdAssiKeepMin_Cnt_T_logl;
    VAR(uint16,  AUTOMATIC) TblIdxNr_Cnt_T_u16;

    /* Lookup tables for outputs of VehPwrMod based on worksheet embedded in DOORS requirements */
    CONST(boolean, AUTOMATIC) GMVEHPWRMODSYSSTREQENA_CNT_LOGL[LOOKUPTBLSIZE_CNT_U16] = {
			FALSE, FALSE, FALSE, TRUE, FALSE, FALSE, FALSE, TRUE, FALSE, FALSE, FALSE, TRUE, FALSE, FALSE, FALSE, TRUE,
			FALSE, TRUE, FALSE, TRUE, FALSE, TRUE, FALSE, TRUE, FALSE, TRUE, FALSE, TRUE, FALSE, TRUE, FALSE, TRUE,
			FALSE, FALSE, FALSE, TRUE, FALSE, FALSE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE,
			FALSE, TRUE, FALSE, TRUE, FALSE, TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, TRUE,
			TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE, TRUE,
			FALSE, TRUE, FALSE, TRUE, FALSE, TRUE, FALSE, TRUE, FALSE, TRUE, FALSE, TRUE, FALSE, TRUE, TRUE, TRUE,
			FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE, TRUE, FALSE,
			TRUE, FALSE, TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, TRUE, FALSE, FALSE, TRUE,
			FALSE, FALSE, FALSE, TRUE, FALSE, FALSE, FALSE, TRUE, FALSE, FALSE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE,
			FALSE, TRUE, FALSE, TRUE, FALSE, TRUE, FALSE, TRUE, FALSE, TRUE, FALSE, TRUE, TRUE, FALSE, FALSE, TRUE,
			FALSE, FALSE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE,
			FALSE, TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, TRUE,
			TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE, TRUE,
			FALSE, TRUE, FALSE, TRUE, FALSE, TRUE, FALSE, TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, TRUE, TRUE,
			FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE, TRUE, FALSE,
			TRUE, TRUE, TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
			FALSE, FALSE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, TRUE,
			TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
			TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
			TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
			TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
			TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
			TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
			TRUE, TRUE, TRUE, FALSE, FALSE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
			TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
			TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
			TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
			TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
			TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
			TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE
	};

    CONST(boolean, AUTOMATIC) GMVEHPWRMODVAREFF_CNT_LOGL[LOOKUPTBLSIZE_CNT_U16] = {
		FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE,
		FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE, FALSE, FALSE,
		FALSE, TRUE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE, TRUE,
		FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE,
		TRUE, TRUE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE,
		FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE,
		FALSE, FALSE, FALSE, FALSE, FALSE, TRUE, FALSE, FALSE, FALSE, TRUE, FALSE, FALSE, FALSE, FALSE,
		FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE,
		FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, TRUE, TRUE,
		FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE,
		FALSE, TRUE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE,
		FALSE, FALSE, FALSE, TRUE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE,
		TRUE, TRUE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE,
		FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE,
		FALSE, FALSE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE,
		FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE, FALSE, FALSE, FALSE, TRUE, FALSE, FALSE,
		FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, TRUE, TRUE,
		FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE,
		TRUE, TRUE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE,
		FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE,
		TRUE, TRUE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE,
		FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE,
		FALSE, FALSE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE,
		FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE,
		FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, TRUE, TRUE,
		FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE,
		TRUE, TRUE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE, TRUE,
		FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE,
		FALSE, FALSE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE,
		FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE,
		FALSE, FALSE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE,
		FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE,
		FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, TRUE, TRUE,
		FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE,
		TRUE, TRUE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE, TRUE,
		FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE,
		TRUE, TRUE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE
	};
    
    /*** Get inputs ***/
    (void)Rte_Read_SysPwrModRun_Logl(&SysPwrModRun_Cnt_T_logl);               /* REQ: CF017A #42 I */
    (void)Rte_Read_EngRunActv_Logl(&EngRunActv_Cnt_T_logl);                   /* REQ: CF017A #108 I */
    (void)Rte_Read_VehSpdArbd_Val(&VehSpdArbd_Kph_T_f32);                     /* REQ: CF017A #109 I */
    (void)Rte_Read_PrpnSysActvMsgInvld_Logl(&PrpnSysActvMsgInvld_Cnt_T_logl); /* REQ: CF017A #110 I */
    (void)Rte_Read_VehSpdSnsrVld_Logl(&VehSpdSnsrVld_Cnt_T_logl);             /* REQ: CF017A #111 I */
    (void)Rte_Read_SysPwrModMsgInvld_Logl(&SysPwrModMsgInvld_Cnt_T_logl);     /* REQ: CF017A #112 I */
    (void)Rte_Read_BusOffHiSpd_Logl(&BusOffHiSpd_Cnt_T_logl);                 /* REQ: CF017A #113 I */
    (void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);                            /* REQ: CF017A #107 I */
    (void)Rte_Read_SysStEnaReqOvrd_Logl(&SysStEnaReqOvrd_Cnt_T_logl);         /* REQ: CF017A #129 I */
    (void)Rte_Call_GetGpioMcuEna_Oper(&GetGpioMcuEna_Cnt_T_logl);             /* REQ: CF017A #43 I */
    (void)Rte_Read_SysStFltOutpReqDi_Logl(&SysStFltOutpReqDi_Cnt_T_logl);     /* REQ: CF017A #143 I */
    
    /*** AssiOnMin_AssiKeepMin ***/
    if(VehSpdArbd_Kph_T_f32 > Rte_Prm_GmVehPwrModVehSpdAssiOnMin_Val())
    {
        VehSpdAssiOnMin_Cnt_T_logl = TRUE;
    }
    else
    {
        VehSpdAssiOnMin_Cnt_T_logl = FALSE;
    }

    *Rte_Pim_dGmVehPwrModVehSpdAssiOnMin() = VehSpdAssiOnMin_Cnt_T_logl;
    
    /* Determine if vehicle is at minimum speed to keep assist enabled */
    if(VehSpdArbd_Kph_T_f32 > Rte_Prm_GmVehPwrModVehSpdMinKeepAssi_Val())
    {
        VehSpdAssiKeepMin_Cnt_T_logl = TRUE;
    }
    else
    {
        VehSpdAssiKeepMin_Cnt_T_logl = FALSE;
    }

    *Rte_Pim_dGmVehPwrModVehSpdAssiKeepMin() = VehSpdAssiKeepMin_Cnt_T_logl;
    /*** END AssiOnMin_AssiKeepMin ***/

    
    /*** SysStReqEna_Ovrd ***/
    if(SysStEnaReqOvrd_Cnt_T_logl != FALSE)
    {
        SysStReqEna_Cnt_T_logl = TRUE;
        VarEff_Cnt_T_logl = TRUE;
    }
    /*** SysStReqEna_AssiOffToOn ***/
    else if(*Rte_Pim_PrevSysStReqEnaVal() == FALSE)
    {
        /* REQ: CF017A #130 I */
        if((GetGpioMcuEna_Cnt_T_logl != FALSE) 
            && (SysPwrModRun_Cnt_T_logl != FALSE) 
            && (EngRunActv_Cnt_T_logl == FALSE) 
            && (VehSpdAssiOnMin_Cnt_T_logl != FALSE) 
            && (VehSpdSnsrVld_Cnt_T_logl != FALSE) 
            && (SysPwrModMsgInvld_Cnt_T_logl == FALSE) 
            && (BusOffHiSpd_Cnt_T_logl == FALSE))
        {  
            SysStReqEna_Cnt_T_logl = TRUE;
        }
        /* ENDREQ: CF017A #130 I */
        /* REQ: CF017A #132 I */
        else if((GetGpioMcuEna_Cnt_T_logl != FALSE) 
                && (SysPwrModRun_Cnt_T_logl != FALSE) 
                && (EngRunActv_Cnt_T_logl != FALSE) 
                && (PrpnSysActvMsgInvld_Cnt_T_logl == FALSE) 
                && (SysPwrModMsgInvld_Cnt_T_logl == FALSE) 
                && (BusOffHiSpd_Cnt_T_logl == FALSE))
        {   
            SysStReqEna_Cnt_T_logl = TRUE;
        }
        /* ENDREQ: CF017A #132 I */
        else
        {
            SysStReqEna_Cnt_T_logl = FALSE;
        }

        VarEff_Cnt_T_logl = TRUE;
    }
    /*** SysStReqEna_LookupTbl_KeepOn_OnToOff ***/
    else
    {
        /* REQ: CF017A #114 I */
        TblIdxNr_Cnt_T_u16 = GetTblIdx(GetGpioMcuEna_Cnt_T_logl, SysPwrModRun_Cnt_T_logl, EngRunActv_Cnt_T_logl, VehSpdAssiKeepMin_Cnt_T_logl,
                                       PrpnSysActvMsgInvld_Cnt_T_logl, VehSpdSnsrVld_Cnt_T_logl, SysPwrModMsgInvld_Cnt_T_logl, BusOffHiSpd_Cnt_T_logl,
                                       HwTq_HwNwtMtr_T_f32);
                           
        SysStReqEna_Cnt_T_logl = GMVEHPWRMODSYSSTREQENA_CNT_LOGL[TblIdxNr_Cnt_T_u16];
        VarEff_Cnt_T_logl = GMVEHPWRMODVAREFF_CNT_LOGL[TblIdxNr_Cnt_T_u16];
        /* ENDREQ: CF017A #114 I */
    }
    

    /*** PwrSplyEnaReq_Sub ***/
    /* REQ: CF017A #135 I */
    if((GetGpioMcuEna_Cnt_T_logl == FALSE) 
       && ((SysPwrModRun_Cnt_T_logl == FALSE) || (SysPwrModMsgInvld_Cnt_T_logl != FALSE))
       && ((SysStReqEna_Cnt_T_logl == FALSE)  || (SysStFltOutpReqDi_Cnt_T_logl != FALSE)))
    {
        PwrSplyEnaReq_Cnt_T_logl = FALSE;
    }
    else
    {
        PwrSplyEnaReq_Cnt_T_logl = TRUE;
    }
    /* ENDREQ: CF017A #135 I */
    /*** END PwrSplyEnaReq_Sub ***/


    /*** TqCmdSca_VehSpdEna_Sub ***/
    SysOperMotTqCmdSca_Uls_T_f32 = GetMotTqCmdSca(SysStReqEna_Cnt_T_logl);   /* REQ: CF017A #140 I */ /* REQ: CF017A #141 I */

    /* REQ: CF017A #123 I */
    if((VarEff_Cnt_T_logl == FALSE) && (SysStReqEna_Cnt_T_logl != FALSE))
    {
        VehPwrModDftVehSpdEna_Cnt_T_logl = TRUE;
    }
    else
    {
        VehPwrModDftVehSpdEna_Cnt_T_logl = FALSE;
    }
    /* ENDREQ: CF017A #123 I */
    /*** END TqCmdSca_VehSpdEna_Sub ***/
    

    *Rte_Pim_PrevSysStReqEnaVal() = SysStReqEna_Cnt_T_logl;


    SysOperRampRate_UlsPerSec_T_f32 = Rte_Prm_GmVehPwrModOperRampRate_Val(); /* REQ: CF017A #142 I */


    /*** Limit outputs ***/
    SysOperMotTqCmdSca_Uls_T_f32 = Lim_f32(SysOperMotTqCmdSca_Uls_T_f32, MINMOTTQCMDSCA_ULS_F32, MAXMOTTQCMDSCA_ULS_F32);
    SysOperRampRate_UlsPerSec_T_f32 = Lim_f32(SysOperRampRate_UlsPerSec_T_f32, MINRAMPRATE_ULSPERSEC_F32, MAXRAMPRATE_ULSPERSEC_F32);
    

    (void)Rte_Write_SysStReqEna_Logl(SysStReqEna_Cnt_T_logl);                       /* REQ: CF017A #28 I */
    (void)Rte_Write_PwrSplyEnaReq_Logl(PwrSplyEnaReq_Cnt_T_logl);                   /* REQ: CF017A #115 I */
    (void)Rte_Write_VehPwrModDftVehSpdEna_Logl(VehPwrModDftVehSpdEna_Cnt_T_logl);   /* REQ: CF017A #106 I */
    (void)Rte_Write_SysOperMotTqCmdSca_Val(SysOperMotTqCmdSca_Uls_T_f32);           /* REQ: CF017A #137 I */
    (void)Rte_Write_SysOperRampRate_Val(SysOperRampRate_UlsPerSec_T_f32);           /* REQ: CF017A #138 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define GmVehPwrMod_STOP_SEC_CODE
#include "GmVehPwrMod_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*****************************************************************************************************************
  * Name         :  GetMotTqCmdSca
  * Description  :  Created to reduce cyclomatic complexity, this function simply returns 1.0 if AssiEna is TRUE
  *                 and 0.0 if FALSE.
  * Inputs       :  AssiEna      - TRUE if assist is to be enabled, FALSE otherwise
  * Output       :  MotTqCmdSca  - 1.0 if AssiEna is TRUE, 0.0 otherwise
  * Usage Notes  :  None
  ****************************************************************************************************************/
static  FUNC(float32, GmVehPwrMod_APPL_CODE) GetMotTqCmdSca( boolean AssiEna_Cnt_T_logl )
{
    VAR(float32, AUTOMATIC) MotTqCmdSca_Uls_T_f32;

    if(AssiEna_Cnt_T_logl != FALSE)
    {
        MotTqCmdSca_Uls_T_f32 = 1.0F;
    }
    else
    {
        MotTqCmdSca_Uls_T_f32 = 0.0F;
    }

    return MotTqCmdSca_Uls_T_f32;
}

/*****************************************************************************************************************
  * Name         :  GetTblIdx
  * Description  :  Determines the appropriate index value for the lookup table.
  * Inputs       :  GetGpioMcuEna_Cnt_T_logl     
  *                 SysPwrModRun_Cnt_T_logl
  *                 EngRunActv_Cnt_T_logl
  *                 VehSpdAssiKeepMin_Cnt_T_logl
  *                 PrpnSysActvMsgInvld_Cnt_T_logl
  *                 VehSpdSnsrVld_Cnt_T_logl
  *                 SysPwrModMsgInvld_Cnt_T_logl
  *                 BusOffHiSpd_Cnt_T_logl
  *                 HwTq_HwNwtMtr_T_f32
  * Output       :  TblIdxNr_Cnt_T_u16
  * Usage Notes  :  None
  ****************************************************************************************************************/
static  FUNC(uint16, GmVehPwrMod_APPL_CODE)  GetTblIdx( boolean GetGpioMcuEna_Cnt_T_logl,
                                                        boolean SysPwrModRun_Cnt_T_logl,
                                                        boolean EngRunActv_Cnt_T_logl,
                                                        boolean VehSpdAssiKeepMin_Cnt_T_logl,
                                                        boolean PrpnSysActvMsgInvld_Cnt_T_logl,
                                                        boolean VehSpdSnsrVld_Cnt_T_logl,
                                                        boolean SysPwrModMsgInvld_Cnt_T_logl,
                                                        boolean BusOffHiSpd_Cnt_T_logl,
                                                        float32 HwTq_HwNwtMtr_T_f32 )
{
    VAR(uint16, AUTOMATIC)  TblIdxNr_Cnt_T_u16 = 0U;

    if(GetGpioMcuEna_Cnt_T_logl != FALSE)
    {
        TblIdxNr_Cnt_T_u16 += GPIOMCUENAIDX_CNT_U16;
    }

    if(SysPwrModRun_Cnt_T_logl != FALSE)
    {
        TblIdxNr_Cnt_T_u16 += SYSPWRMODRUNIDX_CNT_U16;
    }

    if(EngRunActv_Cnt_T_logl != FALSE)
    {
        TblIdxNr_Cnt_T_u16 += ENGRUNACTVIDX_CNT_U16;
    }

    if(VehSpdAssiKeepMin_Cnt_T_logl != FALSE)
    {
        TblIdxNr_Cnt_T_u16 += ASSIKEEPMINIDX_CNT_U16;
    }

    if(PrpnSysActvMsgInvld_Cnt_T_logl != FALSE)
    {
        TblIdxNr_Cnt_T_u16 += PRPNSYSACTVMSGINVLDIDX_CNT_U16;
    }

    if(VehSpdSnsrVld_Cnt_T_logl != FALSE)
    {
        TblIdxNr_Cnt_T_u16 += VEHSPDSNSRVLDIDX_CNT_U16;
    }

    if(SysPwrModMsgInvld_Cnt_T_logl != FALSE)
    {
        TblIdxNr_Cnt_T_u16 += SYSPWRMODMSGINVLDIDX_CNT_U16;
    }

    if(BusOffHiSpd_Cnt_T_logl != FALSE)
    {
        TblIdxNr_Cnt_T_u16 += BUSOFFHISPDIDX_CNT_U16;
    }

    /*** KeepAssi_HwTqTmr ***/
    KeepAssiHwTqTmr(HwTq_HwNwtMtr_T_f32, &TblIdxNr_Cnt_T_u16);
    /*** END KeepAssi_HwTqTmr ***/

    return TblIdxNr_Cnt_T_u16;
}

/*****************************************************************************************************************
  * Name         :  KeepAssiHwTqTmr
  * Description  :  Implementation of 'KeepAssi_HwTqTmr' block
  * Inputs       :  HwTq_HwNwtMtr_T_f32     
  *                 *TblIdxNr_Cnt_T_u16
  * Usage Notes  :  None
  ****************************************************************************************************************/
static  FUNC(void, GmVehPwrMod_APPL_CODE)  KeepAssiHwTqTmr( float32 HwTq_HwNwtMtr_T_f32,
                                                               P2VAR(uint16, AUTOMATIC, GmVehPwrMod_APPL_CODE) TblIdxNr_Cnt_T_u16 )
{
    VAR(boolean, AUTOMATIC) HwTqKeepAssi_Cnt_T_logl;
    VAR(uint32, AUTOMATIC)  Span_Cnt_T_u32;
    VAR(uint32, AUTOMATIC)  Span_Sec_T_u32;

    if((Abslt_f32_f32(HwTq_HwNwtMtr_T_f32) < Rte_Prm_GmVehPwrModHwTqMinKeepAssi_Val()) && (*Rte_Pim_TqRefTiActv() == FALSE))
    {
        /* HwTq dipped below minimum needed to keep assist and timer not yet active so start the timer now */
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_TqRefTi());
        *Rte_Pim_TqRefTiActv() = TRUE;
        HwTqKeepAssi_Cnt_T_logl = TRUE;
    }
    else if(Abslt_f32_f32(HwTq_HwNwtMtr_T_f32) < Rte_Prm_GmVehPwrModHwTqMinKeepAssi_Val())
    {
        /* Timer already running, get timespan and compare with cal */
        (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_TqRefTi(), &Span_Cnt_T_u32);
        Span_Sec_T_u32 = Span_Cnt_T_u32 / CNTTOSEC_ULS_U32;

        if(Span_Sec_T_u32 >= Rte_Prm_GmVehPwrModHwTqMinKeepTmr_Val())
        {
            HwTqKeepAssi_Cnt_T_logl = FALSE;
        }
        else
        {
            HwTqKeepAssi_Cnt_T_logl = TRUE;
        }
    }
    else
    {
        /* Turn off timer since absolute value of HwTq no longer less than MinKeepAssi cal */
        *Rte_Pim_TqRefTiActv() = FALSE;
        HwTqKeepAssi_Cnt_T_logl = TRUE;
    }

    *Rte_Pim_dGmVehPwrModHwTqKeepAssi() = HwTqKeepAssi_Cnt_T_logl;

    if(HwTqKeepAssi_Cnt_T_logl != FALSE)
    {
        *TblIdxNr_Cnt_T_u16 += KEEPASSIIDX_CNT_U16;
    }
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
