/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  VehSigCdng.c
 *     SW-C Type:  VehSigCdng
 *  Generated at:  Thu Jun  2 12:16:48 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <VehSigCdng>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name: VehSigCdng.c
* Module Description: Implementation of VehSigCdng FDD SF033A
* Project           : CBD 
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:           8 %
* %derived_by:        nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/29/15  1        SB       Initial Version                                                                   EA4#856
* 08/26/15  2        SV       'FltInj2' port is used for 'FltInj_f32' operation (DaVinci change)                EA4#1406
* 10/01/15  3        SB       Anomaly 1591 fix - VEHYAWRATEMAXLIM value corrected                               EA4#1774
* 06/02/16  4        NS       Add vehicle speed override for manufacturing - FDD v2.0.0                         EA4#5693
* 08/30/16  5        SB       Implement FDD v2.1.0                                                              EA4#6836
* 09/20/16  6        SB       Updated the parameters passed to local function "VehSigCdng_LatAEstmn"            EA4#7656
* 11/22/16  7       TATA      Updated per design_2.3.0            											    EA4#8127
* 12/01/16  8       TATA      Updated per design_2.3.0            											    EA4#8698
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_VehSigCdng.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrFil.h"
#include "ArchGlbPrm.h"
#include "FltInj.h"
#include "NxtrMath.h"
 
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define VEHLATAMAXLIM_MTRPERSECSQD_F32          ((float32)A1_UpperLimit)
#define VEHLATAMINLIM_MTRPERSECSQD_F32          ((float32)A1_LowerLimit)
#define VEHLGTAMAXLIM_KPHPERSEC_F32             ((float32)A3_UpperLimit)
#define VEHLGTAMINLIM_KPHPERSEC_F32             ((float32)A3_LowerLimit)
#define VEHSPDMAXLIM_KPH_F32                    ((float32)Spd1_UpperLimit)
#define VEHSPDMINLIM_KPH_F32                    ((float32)Spd1_LowerLimit)
#define VEHYAWRATEMAXLIM_VEHDEGPERSEC_F32       ((float32)Rate5_UpperLimit)
#define VEHYAWRATEMINLIM_VEHDEGPERSEC_F32       ((float32)Rate5_LowerLimit)
#define AUNITCNVN_KPHPERSECPERMTRPERSECSQD_F32  (0.2777779996F)
#define KPHCONVTOMTRPERSEC_MTRPERSECPERKPH_F32  (0.278F)
#define LATACCEESTIMDMAXLIM_MTRPERSECSQD_F32    (10.0F)
#define LATACCEESTIMDMINLIM_MTRPERSECSQD_F32    (-10.0F)
#define VEHSPDOVRDHWTQTHD_HWNWTMTR_F32          (2.0F)

static FUNC(void, VehSigCdng_CODE) VehSigCdng_VehSpd(float32 VehSpdSerlComInp_Kph_T_f32, 
                                                     boolean VehSpdVldSerlComInp_Cnt_T_logl, 
                                                     float32 VehSpdOvrd_Kph_T_f32, 
                                                     boolean VehSpdOvrdEna_Cnt_T_logl,
                                                     float32 HwTq_HwNwtMtr_T_f32,
                                                     P2VAR(float32, AUTOMATIC, VehSigCdng_VAR) VehSpd_Kph_T_f32,  
                                                     P2VAR(boolean, AUTOMATIC, VehSigCdng_VAR) VehSpdVld_Cnt_T_logl);
                                                     
static FUNC(void, VehSigCdng_CODE) VehSigCdng_VehLgtA(float32 VehLgtASerlCom_MpSecSq_T_f32, 
                                                     boolean VehLgtAVldSerlCom_Cnt_T_logl,  
                                                     P2VAR(float32, AUTOMATIC, VehSigCdng_VAR) VehLgtA_KphpS_T_f32,  
                                                     P2VAR(boolean, AUTOMATIC, VehSigCdng_VAR) VehLgtAVld_Cnt_T_logl); 
                                                     
static FUNC(void, VehSigCdng_CODE) VehSigCdng_VehLatA(float32 VehLatASerlCom_MpSecSq_T_f32, 
                                                     boolean VehLatAVldSerlCom_Cnt_T_logl,  
                                                     P2VAR(float32, AUTOMATIC, VehSigCdng_VAR) VehLatA_MpSecSq_T_f32,  
                                                     P2VAR(boolean, AUTOMATIC, VehSigCdng_VAR) VehLatAVld_Cnt_T_logl);
                                                     
static FUNC(void, VehSigCdng_CODE) VehSigCdng_VehYawRate(float32 VehYawRateSerlCom_DegpS_T_f32, 
                                                         boolean VehYawRateVldSerlCom_Cnt_T_logl,  
                                                         P2VAR(float32, AUTOMATIC, VehSigCdng_VAR) VehYawRate_DegpS_T_f32,  
                                                         P2VAR(boolean, AUTOMATIC, VehSigCdng_VAR) VehYawRateVld_Cnt_T_logl);
                                                         
static FUNC(void, VehSigCdng_CODE) VehSigCdng_LatAEstmn(float32 VehYawRate_DegpS_T_f32, 
                                                        boolean VehYawRateVld_Cnt_T_logl,
                                                        float32 VehSpd_Kph_T_f32, 
                                                        boolean VehSpdVld_Cnt_T_logl,
                                                        P2VAR(float32, AUTOMATIC, VehSigCdng_VAR) VehLatAEstimd_MtrPerSecSqd_T_f32, 
                                                        P2VAR(boolean, AUTOMATIC, VehSigCdng_VAR) VehLatAEstimdVld_Cnt_T_logl);

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
 *   float32 *Rte_Pim_PrevLatA(void)
 *   float32 *Rte_Pim_PrevLtgA(void)
 *   float32 *Rte_Pim_PrevVehSpd(void)
 *   float32 *Rte_Pim_PrevYawRate(void)
 *   boolean *Rte_Pim_PrevLatAVld(void)
 *   boolean *Rte_Pim_PrevLtgAVld(void)
 *   boolean *Rte_Pim_PrevVehSpdVld(void)
 *   boolean *Rte_Pim_PrevYawRateVld(void)
 *   FilLpRec1 *Rte_Pim_HwTqFilRec(void)
 *   FilLpRec1 *Rte_Pim_LatAFilRec(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_VehSigCdngDftLatA_Val(void)
 *   float32 Rte_Prm_VehSigCdngDftLgtA_Val(void)
 *   float32 Rte_Prm_VehSigCdngDftVehSpd_Val(void)
 *   float32 Rte_Prm_VehSigCdngDftYawRate_Val(void)
 *   float32 Rte_Prm_VehSigCdngLatADifThd_Val(void)
 *   float32 Rte_Prm_VehSigCdngLatAFilFrq_Val(void)
 *   float32 Rte_Prm_VehSigCdngLatASlewRate_Val(void)
 *   float32 Rte_Prm_VehSigCdngLtgADifThd_Val(void)
 *   float32 Rte_Prm_VehSigCdngLtgASlewRate_Val(void)
 *   float32 Rte_Prm_VehSigCdngVehSpdDifThd_Val(void)
 *   float32 Rte_Prm_VehSigCdngVehSpdSlewRate_Val(void)
 *   float32 Rte_Prm_VehSigCdngVehYawSlewRate_Val(void)
 *   float32 Rte_Prm_VehSigCdngYawRateDifThd_Val(void)
 *
 *********************************************************************************************************************/


#define VehSigCdng_START_SEC_CODE
#include "VehSigCdng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: VehSigCdngInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, VehSigCdng_CODE) VehSigCdngInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: VehSigCdngInit1
 *********************************************************************************************************************/
     FilLpInit(0.0F, Rte_Prm_VehSigCdngLatAFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_LatAFilRec());
     FilLpInit(0.0F, 0.1F, ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_HwTqFilRec());
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: VehSigCdngPer1
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
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehLatASerlCom_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehLatAVldSerlCom_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehLgtASerlCom_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehLgtAVldSerlCom_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpdOvrd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdOvrdEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpdSerlCom_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVldSerlCom_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehYawRateSerlCom_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehYawRateVldSerlCom_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_VehLatA_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehLatAEstimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehLatAEstimdVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehLatAVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehLgtA_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehLgtAVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehSpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehSpdVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehYawRate_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehYawRateVld_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, VehSigCdng_CODE) VehSigCdngPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: VehSigCdngPer1
 *********************************************************************************************************************/

    VAR(float32, AUTOMATIC) VehSpdSerlCom_Kph_T_f32;
    VAR(boolean, AUTOMATIC) VehSpdVldSerlCom_Cnt_T_logl;     
    VAR(float32, AUTOMATIC) VehLgtASerlCom_MpSecSq_T_f32;
    VAR(boolean, AUTOMATIC) VehLgtAVldSerlCom_Cnt_T_logl;
    VAR(float32, AUTOMATIC) VehLatASerlCom_MpSecSq_T_f32;
    VAR(boolean, AUTOMATIC) VehLatAVldSerlCom_Cnt_T_logl;    
    VAR(float32, AUTOMATIC) VehYawRateSerlCom_DegpS_T_f32;
    VAR(boolean, AUTOMATIC) VehYawRateVldSerlCom_Cnt_T_logl;
    VAR(float32, AUTOMATIC) VehSpdOvrd_Kph_T_f32;
    VAR(boolean, AUTOMATIC) VehSpdOvrdEna_Cnt_T_logl;
    VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;

    VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32; 
    VAR(boolean, AUTOMATIC) VehSpdVld_Cnt_T_logl;
    VAR(float32, AUTOMATIC) VehLgtA_KphpS_T_f32;
    VAR(boolean, AUTOMATIC) VehLgtAVld_Cnt_T_logl;
    VAR(float32, AUTOMATIC) VehLatA_MpSecSq_T_f32;
    VAR(boolean, AUTOMATIC) VehLatAVld_Cnt_T_logl;
    VAR(float32, AUTOMATIC) VehYawRate_DegpS_T_f32;
    VAR(boolean, AUTOMATIC) VehYawRateVld_Cnt_T_logl;
    VAR(float32, AUTOMATIC) VehLatAEstimd_MtrPerSecSqd_T_f32;
    VAR(boolean, AUTOMATIC) VehLatAEstimdVld_Cnt_T_logl;

    /* Read Inputs */
    (void) Rte_Read_VehSpdSerlCom_Val(&VehSpdSerlCom_Kph_T_f32);                    /* REQ: SF033A #33 I */
    (void) Rte_Read_VehSpdVldSerlCom_Logl(&VehSpdVldSerlCom_Cnt_T_logl);            /* REQ: SF033A #9 I */
    (void) Rte_Read_VehLgtASerlCom_Val(&VehLgtASerlCom_MpSecSq_T_f32);              /* REQ: SF033A #34 I */
    (void) Rte_Read_VehLgtAVldSerlCom_Logl(&VehLgtAVldSerlCom_Cnt_T_logl);          /* REQ: SF033A #74 I */
    (void) Rte_Read_VehLatASerlCom_Val(&VehLatASerlCom_MpSecSq_T_f32);              /* REQ: SF033A #55 I */
    (void) Rte_Read_VehLatAVldSerlCom_Logl(&VehLatAVldSerlCom_Cnt_T_logl);          /* REQ: SF033A #75 I */ 
    (void) Rte_Read_VehYawRateSerlCom_Val(&VehYawRateSerlCom_DegpS_T_f32);          /* REQ: SF033A #78 I */  
    (void) Rte_Read_VehYawRateVldSerlCom_Logl(&VehYawRateVldSerlCom_Cnt_T_logl);    /* REQ: SF033A #79 I */  
    (void) Rte_Read_VehSpdOvrd_Val(&VehSpdOvrd_Kph_T_f32);                          /* REQ: SF033A #120 I */  
    (void) Rte_Read_VehSpdOvrdEna_Logl(&VehSpdOvrdEna_Cnt_T_logl);                  /* REQ: SF033A #121 I */  
    (void) Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);                                 /* REQ: SF033A #122 I */  

    /* Vehicle Speed */   
    VehSigCdng_VehSpd(VehSpdSerlCom_Kph_T_f32, VehSpdVldSerlCom_Cnt_T_logl, 
                      VehSpdOvrd_Kph_T_f32, VehSpdOvrdEna_Cnt_T_logl,
                      HwTq_HwNwtMtr_T_f32, &VehSpd_Kph_T_f32, &VehSpdVld_Cnt_T_logl);         

    /* Vehicle Longitudinal Acceleration */  
    VehSigCdng_VehLgtA(VehLgtASerlCom_MpSecSq_T_f32, VehLgtAVldSerlCom_Cnt_T_logl, 
                       &VehLgtA_KphpS_T_f32, &VehLgtAVld_Cnt_T_logl);

    /* Vehicle Lateral Acceleration */      
    VehSigCdng_VehLatA(VehLatASerlCom_MpSecSq_T_f32, VehLatAVldSerlCom_Cnt_T_logl, 
                       &VehLatA_MpSecSq_T_f32, &VehLatAVld_Cnt_T_logl);

    /* Vehicle Yaw Rate */   
    VehSigCdng_VehYawRate(VehYawRateSerlCom_DegpS_T_f32, VehYawRateVldSerlCom_Cnt_T_logl, 
                          &VehYawRate_DegpS_T_f32, &VehYawRateVld_Cnt_T_logl);     
                          
    /* Lateral Acceleration Estimation */
    VehSigCdng_LatAEstmn(VehYawRate_DegpS_T_f32, VehYawRateVld_Cnt_T_logl,
                         VehSpd_Kph_T_f32, VehSpdVld_Cnt_T_logl,
                         &VehLatAEstimd_MtrPerSecSqd_T_f32, &VehLatAEstimdVld_Cnt_T_logl);

    /* Write Outputs */
    (void) Rte_Write_VehSpd_Val(VehSpd_Kph_T_f32);                                  /* REQ: SF033A #11 I */
    (void) Rte_Write_VehSpdVld_Logl(VehSpdVld_Cnt_T_logl);                          /* REQ: SF033A #61 I */
    (void) Rte_Write_VehLgtA_Val(VehLgtA_KphpS_T_f32);                              /* REQ: SF033A #39 I */
    (void) Rte_Write_VehLgtAVld_Logl(VehLgtAVld_Cnt_T_logl);                        /* REQ: SF033A #80 I */
    (void) Rte_Write_VehLatA_Val(VehLatA_MpSecSq_T_f32);                            /* REQ: SF033A #56 I */
    (void) Rte_Write_VehLatAVld_Logl(VehLatAVld_Cnt_T_logl);                        /* REQ: SF033A #81 I */ 
    (void) Rte_Write_VehYawRate_Val(VehYawRate_DegpS_T_f32);                        /* REQ: SF033A #82 I */
    (void) Rte_Write_VehYawRateVld_Logl(VehYawRateVld_Cnt_T_logl);                  /* REQ: SF033A #83 I */
    (void) Rte_Write_VehLatAEstimd_Val(VehLatAEstimd_MtrPerSecSqd_T_f32);           /* REQ: SF033A #114 I */
    (void) Rte_Write_VehLatAEstimdVld_Logl(VehLatAEstimdVld_Cnt_T_logl);            /* REQ: SF033A #115 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define VehSigCdng_STOP_SEC_CODE
#include "VehSigCdng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 /********************************************************************************************************************
  * Name        :   VehSigCdng_VehSpd
  * Description :   Conditioned value for system-wide usage
  * Inputs      :   VehSpdSerlComInp_Kph_T_f32     :-  Vehicle Speed Validity input signal to component from Serial Communication
  *                 VehSpdVldSerlComInp_Cnt_T_logl :-  Vehicle Speed Validity input signal to component from Serial Communication    
  *                 VehSpdOvrd_Kph_T_f32           :-  Vehicle Speed Override input signal
  *                 VehSpdOvrdEna_Cnt_T_logl       :-  Vehicle Speed Override Enable inoput signal
  *                 HwTq_HwNwtMtr_T_f32            :-  Handwheel Torque input signal
  * Outputs     :   VehSpd_Kph_T_f32        :-  Conditioned Vehicle Speed. 
  *                 VehSpdVld_Cnt_T_logl    :-  Vehicle Speed Validity. True When Speed Is Trusted
  * Usage Notes :   
  ********************************************************************************************************************/ 
static FUNC(void, VehSigCdng_CODE) VehSigCdng_VehSpd(float32 VehSpdSerlComInp_Kph_T_f32, 
                                                     boolean VehSpdVldSerlComInp_Cnt_T_logl, 
                                                     float32 VehSpdOvrd_Kph_T_f32, 
                                                     boolean VehSpdOvrdEna_Cnt_T_logl,
                                                     float32 HwTq_HwNwtMtr_T_f32,
                                                     P2VAR(float32, AUTOMATIC, VehSigCdng_VAR) VehSpd_Kph_T_f32,  
                                                     P2VAR(boolean, AUTOMATIC, VehSigCdng_VAR) VehSpdVld_Cnt_T_logl)
{
    VAR(float32, AUTOMATIC) FildHwTq_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) Spd_Kph_T_f32;
    VAR(float32, AUTOMATIC) VehSpdSerlCom_Kph_T_f32;
    VAR(boolean, AUTOMATIC) VehSpdVldSerlCom_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) SpdVld_Cnt_T_logl;
    
    /* REQ: SF033A #30 I */ /* REQ: SF033A #146 I */
    FildHwTq_HwNwtMtr_T_f32 = FilLpUpdOutp_f32(Abslt_f32_f32(HwTq_HwNwtMtr_T_f32), Rte_Pim_HwTqFilRec());
    
    if( (FildHwTq_HwNwtMtr_T_f32 < VEHSPDOVRDHWTQTHD_HWNWTMTR_F32) && (VehSpdOvrdEna_Cnt_T_logl == TRUE) )
    {
        VehSpdSerlCom_Kph_T_f32 = VehSpdOvrd_Kph_T_f32;
        VehSpdVldSerlCom_Cnt_T_logl = TRUE;
    }
    else
    {
        VehSpdSerlCom_Kph_T_f32 = VehSpdSerlComInp_Kph_T_f32;
        VehSpdVldSerlCom_Cnt_T_logl = VehSpdVldSerlComInp_Cnt_T_logl;
    }
    /* ENDREQ: SF033A #30 */ /* ENDREQ: SF033A #146 */

    #if (STD_ON == FLTINJENA)   
    (void) Rte_Call_FltInj_f32_Oper(&VehSpdSerlCom_Kph_T_f32,FLTINJ_VEHSIGCDNG_SERLCOMVEHSPD);                                                          /* REQ: SF033A #72 I */
    #endif  
    
    if(VehSpdVldSerlCom_Cnt_T_logl == FALSE)                                                                                                            /* REQ: SF033A #110 I */
    {
        VehSpdSerlCom_Kph_T_f32 = Rte_Prm_VehSigCdngDftVehSpd_Val();                                                                                           
    }       
    
    Spd_Kph_T_f32 = Lim_f32(VehSpdSerlCom_Kph_T_f32, (*Rte_Pim_PrevVehSpd() - (Rte_Prm_VehSigCdngVehSpdSlewRate_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32)), /* REQ: SF033A #62 I */
                            (*Rte_Pim_PrevVehSpd() + (Rte_Prm_VehSigCdngVehSpdSlewRate_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32)));                         /* REQ: SF033A #60 I */ 
    *Rte_Pim_PrevVehSpd() = Spd_Kph_T_f32;  
    
    *VehSpd_Kph_T_f32 = Lim_f32(Spd_Kph_T_f32, VEHSPDMINLIM_KPH_F32, VEHSPDMAXLIM_KPH_F32);                                                             /* REQ: SF033A #106 I */   
    
    if(Abslt_f32_f32(Spd_Kph_T_f32 - VehSpdSerlCom_Kph_T_f32) < Rte_Prm_VehSigCdngVehSpdDifThd_Val())                                                   /* REQ: SF033A #70 I */
    {
        SpdVld_Cnt_T_logl = TRUE;
    }
    else
    {
        SpdVld_Cnt_T_logl = FALSE;
    }

    if( ( ( (*Rte_Pim_PrevVehSpdVld() == TRUE) || (SpdVld_Cnt_T_logl == TRUE) ) && (VehSpdVldSerlCom_Cnt_T_logl == TRUE) ) )                                  /* REQ: SF033A #68 I */
    {
        *VehSpdVld_Cnt_T_logl = TRUE;
    }
    else
    {
        *VehSpdVld_Cnt_T_logl = FALSE;
    }
    *Rte_Pim_PrevVehSpdVld() = *VehSpdVld_Cnt_T_logl;  
}

/********************************************************************************************************************
    * Name      :   VehSigCdng_VehLgtA
  * Description :   Conditioned value for system-wide usage
  * Inputs      :   VehLgtASerlCom_MpSecSq_T_f32:-  Vehicle Longitudinal Acceleration input signal to component from Serial Communication
  *                 VehLgtAVldSerlCom_Cnt_T_logl    :-  Vehicle Longitudinal Acceleration Validity input signal to component from Serial Communication                                                  
  * Outputs     :   VehLgtA_KphpS_T_f32     :-  Conditioned Vehicle Longitudinal Acceleration. 
  *                 VehLgtAVld_Cnt_T_logl   :- Vehicle Longitudinal Acceleration Validity. True When Longitudinal Acceleration is Trusted
  * Usage Notes :  
  ********************************************************************************************************************/ 
static FUNC(void, VehSigCdng_CODE) VehSigCdng_VehLgtA(float32 VehLgtASerlCom_MpSecSq_T_f32, 
                                                     boolean VehLgtAVldSerlCom_Cnt_T_logl,  
                                                     P2VAR(float32, AUTOMATIC, VehSigCdng_VAR) VehLgtA_KphpS_T_f32,  
                                                     P2VAR(boolean, AUTOMATIC, VehSigCdng_VAR) VehLgtAVld_Cnt_T_logl)                                                    

{
     VAR(float32, AUTOMATIC) LgtA_KphpS_T_f32;
     VAR(boolean, AUTOMATIC) LgtAVld_Cnt_T_logl;
     VAR(float32, AUTOMATIC) VehLgtASerlCom_KphpS_T_f32;

     
     #if (STD_ON == FLTINJENA)
     (void) Rte_Call_FltInj_f32_Oper(&VehLgtASerlCom_MpSecSq_T_f32, FLTINJ_VEHSIGCDNG_SERLCOMVEHLGTA);                                                          /* REQ: SF033A #73 I */
     #endif
     VehLgtASerlCom_KphpS_T_f32 = VehLgtASerlCom_MpSecSq_T_f32 * AUNITCNVN_KPHPERSECPERMTRPERSECSQD_F32;
     if(VehLgtAVldSerlCom_Cnt_T_logl == FALSE)                                                                                                                   /* REQ: SF033A #111 I */                
     {
         VehLgtASerlCom_KphpS_T_f32 = Rte_Prm_VehSigCdngDftLgtA_Val(); 
     }  
     LgtA_KphpS_T_f32  = Lim_f32(VehLgtASerlCom_KphpS_T_f32, (*Rte_Pim_PrevLtgA() -(Rte_Prm_VehSigCdngLtgASlewRate_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32 )),     /* REQ: SF033A #64 I */
                                                             (*Rte_Pim_PrevLtgA() +(Rte_Prm_VehSigCdngLtgASlewRate_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32 )));    /* REQ: SF033A #63 I */
     *Rte_Pim_PrevLtgA() = LgtA_KphpS_T_f32;
     *VehLgtA_KphpS_T_f32 = Lim_f32(LgtA_KphpS_T_f32, VEHLGTAMINLIM_KPHPERSEC_F32, VEHLGTAMAXLIM_KPHPERSEC_F32);                                                /* REQ: SF033A #107 I */ 
     if(Abslt_f32_f32(LgtA_KphpS_T_f32 - VehLgtASerlCom_KphpS_T_f32) < Rte_Prm_VehSigCdngLtgADifThd_Val())                                                      /* REQ: SF033A #90 I */
     {
         LgtAVld_Cnt_T_logl = TRUE;
     }
     else
     {
         LgtAVld_Cnt_T_logl = FALSE;
     }
     if((((*Rte_Pim_PrevLtgAVld() == TRUE) || (LgtAVld_Cnt_T_logl == TRUE)) && (VehLgtAVldSerlCom_Cnt_T_logl == TRUE)))                                         /* REQ: SF033A #86 I */
     {
         *VehLgtAVld_Cnt_T_logl = TRUE;
     }
     else
     {
         *VehLgtAVld_Cnt_T_logl = FALSE;
     }
     *Rte_Pim_PrevLtgAVld() = *VehLgtAVld_Cnt_T_logl;
     
}

/********************************************************************************************************************
   * Name       :   VehSigCdng_VehLatA
  * Description :   Conditioned value for system-wide usage
  * Inputs      :   VehLatASerlCom_MpSecSq_T_f32:-  Vehicle Lateral Acceleration input signal to component from Serial Communication
  *                 VehLatAVldSerlCom_Cnt_T_logl    :-  Vehicle Lateral Acceleration Validity input signal to component from Serial Communication                                                   
  * Outputs     :   VehLatA_MpSecSq_T_f32   :-  Conditioned Vehicle Lateral Acceleration.
  *                 VehLatAVld_Cnt_T_logl   :- Vehicle Lateral Acceleration Validity. True When Yaw Rate is Trusted
  * Usage Notes :  
  ********************************************************************************************************************/ 
static FUNC(void, VehSigCdng_CODE) VehSigCdng_VehLatA(float32 VehLatASerlCom_MpSecSq_T_f32, 
                                                     boolean VehLatAVldSerlCom_Cnt_T_logl,  
                                                     P2VAR(float32, AUTOMATIC, VehSigCdng_VAR) VehLatA_MpSecSq_T_f32,  
                                                     P2VAR(boolean, AUTOMATIC, VehSigCdng_VAR) VehLatAVld_Cnt_T_logl)                                                    
{
     VAR(float32, AUTOMATIC) LatA_MpSecSq_T_f32;
     VAR(boolean, AUTOMATIC) LatAVld_Cnt_T_logl;
     VAR(float32, AUTOMATIC) VehLatAFild_MpSecSq_T_f32;

     
     #if (STD_ON == FLTINJENA)
     (void) Rte_Call_FltInj_f32_Oper(&VehLatASerlCom_MpSecSq_T_f32, FLTINJ_VEHSIGCDNG_SERLCOMVEHLATA);                                                          /* REQ: SF033A #103 I */
     #endif
     VehLatAFild_MpSecSq_T_f32 = FilLpUpdOutp_f32(VehLatASerlCom_MpSecSq_T_f32, Rte_Pim_LatAFilRec());
     if(VehLatAVldSerlCom_Cnt_T_logl == TRUE)                                                                                                                    /* REQ: SF033A #112 I */
     {
         VehLatASerlCom_MpSecSq_T_f32 = VehLatAFild_MpSecSq_T_f32; 
     }
     else    
     {
         VehLatASerlCom_MpSecSq_T_f32 = Rte_Prm_VehSigCdngDftLatA_Val(); 
     }
     LatA_MpSecSq_T_f32  = Lim_f32(VehLatASerlCom_MpSecSq_T_f32, (*Rte_Pim_PrevLatA() -(Rte_Prm_VehSigCdngLatASlewRate_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32 )), /* REQ: SF033A #85 I */
                                                                 (*Rte_Pim_PrevLatA() +(Rte_Prm_VehSigCdngLatASlewRate_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32 )));/* REQ: SF033A #65 I */
     *Rte_Pim_PrevLatA() =  LatA_MpSecSq_T_f32;                                                                          
     *VehLatA_MpSecSq_T_f32 = Lim_f32(LatA_MpSecSq_T_f32, VEHLATAMINLIM_MTRPERSECSQD_F32, VEHLATAMAXLIM_MTRPERSECSQD_F32);                                      /* REQ: SF033A #108 I */     
     if(Abslt_f32_f32(LatA_MpSecSq_T_f32 - VehLatASerlCom_MpSecSq_T_f32) < Rte_Prm_VehSigCdngLatADifThd_Val())                                                  /* REQ: SF033A #87 I */
     {
         LatAVld_Cnt_T_logl = TRUE;
     }
     else
     {
         LatAVld_Cnt_T_logl = FALSE;
     }     
     if((((*Rte_Pim_PrevLatAVld() == TRUE) || (LatAVld_Cnt_T_logl == TRUE)) && (VehLatAVldSerlCom_Cnt_T_logl == TRUE)))                                         /* REQ: SF033A #91 I */
     {
         *VehLatAVld_Cnt_T_logl = TRUE;
     }
     else
     {
         *VehLatAVld_Cnt_T_logl = FALSE;
     }
     *Rte_Pim_PrevLatAVld() = *VehLatAVld_Cnt_T_logl;  
         
}

/********************************************************************************************************************
   * Name       :   VehSigCdng_VehYawRate
  * Description :   Conditioned value for system-wide usage
  * Inputs      :   VehYawRateSerlCom_DegpS_T_f32   :-  Vehicle Yaw Rate input signal to component from Serial Communication
  *                 VehYawRateVldSerlCom_Cnt_T_logl :-  Vehicle Yaw Rate Validity input signal to component from Serial Communication                                                   
  * Outputs     :   VehYawRate_DegpS_T_f32  :-  Conditioned Vehicle Yaw Rate.
  *                 VehYawRateVld_Cnt_T_logl    :- Vehicle Yaw Rate Validity. True When Yaw Rate is Trusted.
  * Usage Notes :  
  ********************************************************************************************************************/ 
static FUNC(void, VehSigCdng_CODE) VehSigCdng_VehYawRate(float32 VehYawRateSerlCom_DegpS_T_f32, 
                                                         boolean VehYawRateVldSerlCom_Cnt_T_logl,  
                                                         P2VAR(float32, AUTOMATIC, VehSigCdng_VAR) VehYawRate_DegpS_T_f32,  
                                                         P2VAR(boolean, AUTOMATIC, VehSigCdng_VAR) VehYawRateVld_Cnt_T_logl)

{
     VAR(float32, AUTOMATIC) YawRate_DegpS_T_f32;
     VAR(boolean, AUTOMATIC) YawRateVld_Cnt_T_logl;

      
     #if (STD_ON == FLTINJENA)
     (void) Rte_Call_FltInj_f32_Oper(&VehYawRateSerlCom_DegpS_T_f32, FLTINJ_VEHSIGCDNG_SERLCOMVEHYAWRATE);                                                                  /* REQ: SF033A #104 I */
     #endif  
     if(VehYawRateVldSerlCom_Cnt_T_logl == FALSE)                                                                                                                           /* REQ: SF033A #113 I */
     {
         VehYawRateSerlCom_DegpS_T_f32 = Rte_Prm_VehSigCdngDftYawRate_Val();
     }           
     YawRate_DegpS_T_f32  = Lim_f32(VehYawRateSerlCom_DegpS_T_f32, (*Rte_Pim_PrevYawRate() -(Rte_Prm_VehSigCdngVehYawSlewRate_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32)),       /* REQ: SF033A #85 I */
                                                                   (*Rte_Pim_PrevYawRate() +(Rte_Prm_VehSigCdngVehYawSlewRate_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32)));      /* REQ: SF033A #84 I */
     *Rte_Pim_PrevYawRate() =   YawRate_DegpS_T_f32;                            
     *VehYawRate_DegpS_T_f32 = Lim_f32(YawRate_DegpS_T_f32, VEHYAWRATEMINLIM_VEHDEGPERSEC_F32, VEHYAWRATEMAXLIM_VEHDEGPERSEC_F32);                                          /* REQ: SF033A #109 I */      
     if(Abslt_f32_f32(YawRate_DegpS_T_f32 - VehYawRateSerlCom_DegpS_T_f32) < Rte_Prm_VehSigCdngYawRateDifThd_Val() )                                                        /* REQ: SF033A #99 I */
     {
         YawRateVld_Cnt_T_logl = TRUE;
     }
     else
     {
         YawRateVld_Cnt_T_logl = FALSE;
     }     
     if((((*Rte_Pim_PrevYawRateVld() == TRUE) || (YawRateVld_Cnt_T_logl == TRUE)) && (VehYawRateVldSerlCom_Cnt_T_logl == TRUE)))                                            /* REQ: SF033A #98 I */
     {
         *VehYawRateVld_Cnt_T_logl = TRUE;
     }
     else
     {
         *VehYawRateVld_Cnt_T_logl = FALSE;
     }
     
     *Rte_Pim_PrevYawRateVld() = *VehYawRateVld_Cnt_T_logl;   
     
}

/********************************************************************************************************************
  * Name        :   VehSigCdng_LatAEstmn
  * Description :   Calculates estimated lateral acceleration
  * Inputs      :   VehYawRate_DegpS_T_f32  :-  Conditioned Vehicle Yaw Rate.
  *                 VehYawRateVld_Cnt_T_logl    :- Vehicle Yaw Rate Validity. True When Yaw Rate is Trusted.    
  *                 VehSpd_Kph_T_f32        :-  Conditioned Vehicle Speed. 
  *                 VehSpdVld_Cnt_T_logl    :-  Vehicle Speed Validity. True When Speed Is Trusted
  * Outputs     :   VehLatAEstimd_MtrPerSecSqd_T_f32  :-  Estimated lateral acceleration
  *                 VehLatAEstimdVld_Cnt_T_logl       :-  Validity of estimated lateral acceleration
  * Usage Notes :  
  ********************************************************************************************************************/ 
static FUNC(void, VehSigCdng_CODE) VehSigCdng_LatAEstmn(float32 VehYawRate_DegpS_T_f32, 
                                                        boolean VehYawRateVld_Cnt_T_logl,
                                                        float32 VehSpd_Kph_T_f32, 
                                                        boolean VehSpdVld_Cnt_T_logl,
                                                        P2VAR(float32, AUTOMATIC, VehSigCdng_VAR) VehLatAEstimd_MtrPerSecSqd_T_f32, 
                                                        P2VAR(boolean, AUTOMATIC, VehSigCdng_VAR) VehLatAEstimdVld_Cnt_T_logl)
{
    /* REQ: SF033A #98 I */
    if((VehYawRateVld_Cnt_T_logl == TRUE) && (VehSpdVld_Cnt_T_logl == TRUE)) 
    {
        *VehLatAEstimdVld_Cnt_T_logl = TRUE;
    }
    else
    {
        *VehLatAEstimdVld_Cnt_T_logl = FALSE;
    }
    /* ENDREQ: SF033A #98 I */    
    
    /* REQ: SF033A #97 I */ /* REQ: SF033A #99 I */
    /* CalculateEstimate */ 
    if(*VehLatAEstimdVld_Cnt_T_logl == TRUE) 
    {
        *VehLatAEstimd_MtrPerSecSqd_T_f32 = (VehYawRate_DegpS_T_f32 * ARCHGLBPRM_PIOVER180_ULS_F32) * (VehSpd_Kph_T_f32 * KPHCONVTOMTRPERSEC_MTRPERSECPERKPH_F32); 
    }
    else
    {
        /* SetDefaultValue */
        *VehLatAEstimd_MtrPerSecSqd_T_f32 = Rte_Prm_VehSigCdngDftLatA_Val();
    }
    *VehLatAEstimd_MtrPerSecSqd_T_f32 = Lim_f32(*VehLatAEstimd_MtrPerSecSqd_T_f32, LATACCEESTIMDMINLIM_MTRPERSECSQD_F32, LATACCEESTIMDMAXLIM_MTRPERSECSQD_F32); /* REQ: SF033A #68 I */
    /* ENDREQ: SF033A #97 I */ /* ENDREQ: SF033A #99 I */
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
