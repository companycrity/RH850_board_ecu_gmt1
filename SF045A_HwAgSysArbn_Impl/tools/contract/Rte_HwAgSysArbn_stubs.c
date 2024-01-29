#include "Rte_HwAgSysArbn.h"


/* Component Data Structures */
VAR(boolean, AUTOMATIC) Pim_HwAgOutpSeln_Var;
VAR(boolean, AUTOMATIC) Pim_HwAgSerlComOutpSeln_Var;
VAR(float32, AUTOMATIC) Pim_PrevHwAgOutp_Var;
VAR(float32, AUTOMATIC) Pim_PrevPinionAgConf_Var;
VAR(uint8, AUTOMATIC) Pim_PrevPinionAgIdptSig_Var;
VAR(sint8, AUTOMATIC) Pim_PrevSrcSeln_Var;
VAR(uint32, AUTOMATIC) Pim_RefTmr_Var;
VAR(float32, AUTOMATIC) Pim_SeldPinionAgConf_Var;
VAR(uint8, AUTOMATIC) Pim_SeldPinionAgIdptSig_Var;
VAR(boolean, AUTOMATIC) Pim_SlewInProgs_Var;

CONST(struct Rte_CDS_HwAgSysArbn, AUTOMATIC) Rte_Inst_HwAgSysArbn_Var = {
	&Pim_HwAgOutpSeln_Var,
	&Pim_HwAgSerlComOutpSeln_Var,
	&Pim_PrevHwAgOutp_Var,
	&Pim_PrevPinionAgConf_Var,
	&Pim_PrevPinionAgIdptSig_Var,
	&Pim_PrevSrcSeln_Var,
	&Pim_RefTmr_Var,
	&Pim_SeldPinionAgConf_Var,
	&Pim_SeldPinionAgIdptSig_Var,
	&Pim_SlewInProgs_Var};

CONSTP2CONST(struct Rte_CDS_HwAgSysArbn, RTE_CONST, RTE_CONST) Rte_Inst_HwAgSysArbn = &Rte_Inst_HwAgSysArbn_Var;

static VAR(float32,AUTOMATIC)HwAgSysArbn_CmplncErrMotToPinion=0;
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSysArbn_CmplncErrMotToPinion_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSYSARBN_APPL_VAR) data)
{
	*data = HwAgSysArbn_CmplncErrMotToPinion;
	return((Std_ReturnType)1);
}

static VAR(float32,AUTOMATIC)HwAgSysArbn_CmplncErrPinionToHw=0;
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSysArbn_CmplncErrPinionToHw_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSYSARBN_APPL_VAR) data)
{
	*data = HwAgSysArbn_CmplncErrPinionToHw;
	return((Std_ReturnType)1);
}

static VAR(float32,AUTOMATIC)HwAgSysArbn_HwAg0Conf=0;
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSysArbn_HwAg0Conf_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSYSARBN_APPL_VAR) data)
{
	*data = HwAgSysArbn_HwAg0Conf;
	return((Std_ReturnType)1);
}

static VAR(uint8,AUTOMATIC)HwAgSysArbn_HwAg0IdptSig=0;
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSysArbn_HwAg0IdptSig_Val(P2VAR(uint8, AUTOMATIC, RTE_HWAGSYSARBN_APPL_VAR) data)
{
	*data = HwAgSysArbn_HwAg0IdptSig;
	return((Std_ReturnType)1);
}

static VAR(float32,AUTOMATIC)HwAgSysArbn_HwAg1Conf=0;
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSysArbn_HwAg1Conf_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSYSARBN_APPL_VAR) data)
{
	*data = HwAgSysArbn_HwAg1Conf;
	return((Std_ReturnType)1);
}

static VAR(uint8,AUTOMATIC)HwAgSysArbn_HwAg1IdptSig=0;
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSysArbn_HwAg1IdptSig_Val(P2VAR(uint8, AUTOMATIC, RTE_HWAGSYSARBN_APPL_VAR) data)
{
	*data = HwAgSysArbn_HwAg1IdptSig;
	return((Std_ReturnType)1);
}

static VAR(float32,AUTOMATIC)HwAgSysArbn_HwAgSig0=0;
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSysArbn_HwAgSig0_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSYSARBN_APPL_VAR) data)
{
	*data = HwAgSysArbn_HwAgSig0;
	return((Std_ReturnType)1);
}

static VAR(float32,AUTOMATIC)HwAgSysArbn_HwAgSig1=0;
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSysArbn_HwAgSig1_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSYSARBN_APPL_VAR) data)
{
	*data = HwAgSysArbn_HwAgSig1;
	return((Std_ReturnType)1);
}

static VAR(float32,AUTOMATIC)HwAgSysArbn_HwAgFinal=0;
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgSysArbn_HwAgFinal_Val(float32 data)
{
	HwAgSysArbn_HwAgFinal=data;
	return((Std_ReturnType)1);
}

static VAR(float32,AUTOMATIC)HwAgSysArbn_HwAgToSerlCom=0;
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgSysArbn_HwAgToSerlCom_Val(float32 data)
{
	HwAgSysArbn_HwAgToSerlCom=data;
	return((Std_ReturnType)1);
}

static VAR(float32,AUTOMATIC)HwAgSysArbn_PinionAg=0;
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgSysArbn_PinionAg_Val(float32 data)
{
	HwAgSysArbn_PinionAg=data;
	return((Std_ReturnType)1);
}

static VAR(float32,AUTOMATIC)HwAgSysArbn_PinionAgConf=0;
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgSysArbn_PinionAgConf_Val(float32 data)
{
	HwAgSysArbn_PinionAgConf=data;
	return((Std_ReturnType)1);
}

static VAR(uint8,AUTOMATIC)HwAgSysArbn_PinionAgIdptSig=0;
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgSysArbn_PinionAgIdptSig_Val(uint8 data)
{
	HwAgSysArbn_PinionAgIdptSig=data;
	return((Std_ReturnType)1);
}

static VAR(uint8,AUTOMATIC)HwAgSysArbn_HwAgSysArbnHwAg0SerlComConf=0;
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAg0SerlComConf_Val(void)
{
	return((uint8)HwAgSysArbn_HwAgSysArbnHwAg0SerlComConf);
}

static VAR(uint8,AUTOMATIC)HwAgSysArbn_HwAgSysArbnHwAg1SerlComConf=0;
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAg1SerlComConf_Val(void)
{
	return((uint8)HwAgSysArbn_HwAgSysArbnHwAg1SerlComConf);
}

static VAR(uint8,AUTOMATIC)HwAgSysArbn_HwAgSysArbnHwAgSlewRate=0;
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgSlewRate_Val(void)
{
	return((uint8)HwAgSysArbn_HwAgSysArbnHwAgSlewRate);
}

static VAR(uint8,AUTOMATIC)HwAgSysArbn_HwAgSysArbnSlewRateTmr=0;
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnSlewRateTmr_Val(void)
{
	return((uint8)HwAgSysArbn_HwAgSysArbnSlewRateTmr);
}

static VAR(uint8,AUTOMATIC)HwAgSysArbn_HwAgSysArbnHwAg0MeasCnt=0;
FUNC(uint8, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAg0MeasCnt_Val(void)
{
	return((uint8)HwAgSysArbn_HwAgSysArbnHwAg0MeasCnt);
}

static VAR(uint8,AUTOMATIC)HwAgSysArbn_HwAgSysArbnHwAg0Prio=0;
FUNC(uint8, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAg0Prio_Val(void)
{
	return((uint8)HwAgSysArbn_HwAgSysArbnHwAg0Prio);
}

static VAR(uint8,AUTOMATIC)HwAgSysArbn_HwAgSysArbnHwAg0SerlComPrio=0;
FUNC(uint8, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAg0SerlComPrio_Val(void)
{
	return((uint8)HwAgSysArbn_HwAgSysArbnHwAg0SerlComPrio);
}

static VAR(uint8,AUTOMATIC)HwAgSysArbn_HwAgSysArbnHwAg1MeasCnt=0;
FUNC(uint8, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAg1MeasCnt_Val(void)
{
	return((uint8)HwAgSysArbn_HwAgSysArbnHwAg1MeasCnt);
}

static VAR(uint8,AUTOMATIC)HwAgSysArbn_HwAgSysArbnHwAg1Prio=0;
FUNC(uint8, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAg1Prio_Val(void)
{
	return((uint8)HwAgSysArbn_HwAgSysArbnHwAg1Prio);
}

static VAR(uint8,AUTOMATIC)HwAgSysArbn_HwAgSysArbnHwAg1SerlComPrio=0;
FUNC(uint8, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAg1SerlComPrio_Val(void)
{
	return((uint8)HwAgSysArbn_HwAgSysArbnHwAg1SerlComPrio);
}

