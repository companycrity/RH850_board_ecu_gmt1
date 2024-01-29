
/**********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name  : MfgSrvCfg.c.c
* Module Description: Nexteer Manufacturing Services
* Project           : CBD
* Author            : Jared Julien
* Generator         : artt 2.0.2.0
* Generation Time   : 22.12.2016 16:29:59
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       kzdyfh %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 11/04/15  1        JWJ       Initial Template Version                                                        EA4#
**********************************************************************************************************************/



/************************************************ Include Statements *************************************************/
#include "Rte_CmnMfgSrv.h"
#include "CmnMfgSrv.h"
#include "MfgSrvCfg.h"
#include "CmnMfgSrvTyp.h"
#include "Os.h"


/******************************************** File Level Rule Deviations *********************************************/

/********************************************* Embedded Local Constants **********************************************/

/* Enabled services lookup/configuration */
CONST(MfgSrvTblRec, AUTOMATIC) CmnMfgSrv_MfgSrvTbl_Cnt_str[240u] =
{
/* A: Nexteer Session (NRC: 0x7F)
 * B: Security Access (NRC: 0x33)
 *                                            Checks
 *   Type   Id       Sub    ReqLen   ResLen    A   B    Appl   Handler */
	{0x31u, 0xF000u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF000RoutineStrt},
	{0x31u, 0xF001u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF001RoutineStrt},
	{0x31u, 0xF010u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvF010RoutineStrt},
	{0x31u, 0xF100u, 0x02u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF100RoutineStop},
	{0x31u, 0xF100u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF100RoutineStrt},
	{0x31u, 0xF100u, 0x03u, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF100RoutineSts},
	{0x31u, 0xF110u, 0x02u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF110RoutineStop},
	{0x31u, 0xF110u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF110RoutineStrt},
	{0x31u, 0xF110u, 0x03u, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF110RoutineSts},
	{0x31u, 0xF111u, 0x02u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF111RoutineStop},
	{0x31u, 0xF111u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF111RoutineStrt},
	{0x31u, 0xF111u, 0x03u, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF111RoutineSts},
	{0x31u, 0xF112u, 0x02u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF112RoutineStop},
	{0x31u, 0xF112u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF112RoutineStrt},
	{0x31u, 0xF112u, 0x03u, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF112RoutineSts},
	{0x31u, 0xF113u, 0x02u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF113RoutineStop},
	{0x31u, 0xF113u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF113RoutineStrt},
	{0x31u, 0xF113u, 0x03u, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF113RoutineSts},
	{0x31u, 0xF114u, 0x02u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF114RoutineStop},
	{0x31u, 0xF114u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF114RoutineStrt},
	{0x31u, 0xF114u, 0x03u, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF114RoutineSts},
	{0x31u, 0xF115u, 0x02u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF115RoutineStop},
	{0x31u, 0xF115u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF115RoutineStrt},
	{0x31u, 0xF115u, 0x03u, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF115RoutineSts},
	{0x31u, 0xF116u, 0x02u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF116RoutineStop},
	{0x31u, 0xF116u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF116RoutineStrt},
	{0x31u, 0xF116u, 0x03u, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF116RoutineSts},
	{0x31u, 0xF117u, 0x02u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF117RoutineStop},
	{0x31u, 0xF117u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF117RoutineStrt},
	{0x31u, 0xF117u, 0x03u, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF117RoutineSts},
	{0x31u, 0xF118u, 0x02u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF118RoutineStop},
	{0x31u, 0xF118u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF118RoutineStrt},
	{0x31u, 0xF118u, 0x03u, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF118RoutineSts},
	{0x31u, 0xF119u, 0x02u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF119RoutineStop},
	{0x31u, 0xF119u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF119RoutineStrt},
	{0x31u, 0xF119u, 0x03u, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF119RoutineSts},
	{0x31u, 0xF140u, 0x02u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF140RoutineStop},
	{0x31u, 0xF140u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF140RoutineStrt},
	{0x31u, 0xF140u, 0x03u, 0x0000u, 0x0008u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF140RoutineSts},
	{0x31u, 0xF141u, 0x02u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF141RoutineStop},
	{0x31u, 0xF141u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF141RoutineStrt},
	{0x31u, 0xF141u, 0x03u, 0x0000u, 0x0008u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF141RoutineSts},
	{0x31u, 0xF150u, 0x02u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF150RoutineStop},
	{0x31u, 0xF150u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF150RoutineStrt},
	{0x31u, 0xF150u, 0x03u, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF150RoutineSts},
	{0x22u, 0xF194u, 0xFFu, 0x0000u, 0x0010u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF194Rd},
	{0x22u, 0xF195u, 0xFFu, 0x0000u, 0x0010u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF195Rd},
	{0x22u, 0xF1F0u, 0xFFu, 0x0000u, 0x0010u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF1F0Rd},
	{0x22u, 0xF1F1u, 0xFFu, 0x0000u, 0x0010u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF1F1Rd},
	{0x22u, 0xF1F2u, 0xFFu, 0x0000u, 0x0005u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF1F2Rd},
	{0x22u, 0xF1F3u, 0xFFu, 0x0000u, 0x0005u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF1F3Rd},
	{0x22u, 0xF1F4u, 0xFFu, 0x0000u, 0x0005u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF1F4Rd},
	{0x22u, 0xF1F7u, 0xFFu, 0x0000u, 0x003Bu, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF1F7Rd},
	{0x22u, 0xF1F8u, 0xFFu, 0x0000u, 0x003Bu, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF1F8Rd},
	{0x22u, 0xF1F9u, 0xFFu, 0x0000u, 0x003Bu, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF1F9Rd},
	{0x22u, 0xF1FDu, 0xFFu, 0x0000u, 0x0009u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF1FDRd},
	{0x22u, 0xF1FEu, 0xFFu, 0x0000u, 0x0005u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF1FERd},
	{0x22u, 0xF1FFu, 0xFFu, 0x0000u, 0x0014u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF1FFRd},
	{0x22u, 0xFD00u, 0xFFu, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD00Rd},
	{0x22u, 0xFD01u, 0xFFu, 0x0000u, 0x0004u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD01Rd},
	{0x22u, 0xFD02u, 0xFFu, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD02Rd},
	{0x2Eu, 0xFD02u, 0xFFu, 0x0001u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvFD02Wr},
	{0x22u, 0xFD03u, 0xFFu, 0x0000u, 0x0004u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD03Rd},
	{0x2Eu, 0xFD03u, 0xFFu, 0x0004u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFD03Wr},
	{0x22u, 0xFD30u, 0xFFu, 0x0000u, 0x0014u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD30Rd},
	{0x2Eu, 0xFD30u, 0xFFu, 0x0014u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvFD30Wr},
	{0x22u, 0xFD31u, 0xFFu, 0x0000u, 0x0014u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD31Rd},
	{0x2Eu, 0xFD31u, 0xFFu, 0x0014u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvFD31Wr},
	{0x22u, 0xFD32u, 0xFFu, 0x0000u, 0x0014u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD32Rd},
	{0x2Eu, 0xFD32u, 0xFFu, 0x0014u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvFD32Wr},
	{0x22u, 0xFD38u, 0xFFu, 0x0000u, 0x0010u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD38Rd},
	{0x2Eu, 0xFD38u, 0xFFu, 0x0010u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvFD38Wr},
	{0x22u, 0xFD39u, 0xFFu, 0x0000u, 0x0010u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD39Rd},
	{0x2Eu, 0xFD39u, 0xFFu, 0x0010u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvFD39Wr},
	{0x22u, 0xFD3Au, 0xFFu, 0x0000u, 0x0010u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD3ARd},
	{0x2Eu, 0xFD3Au, 0xFFu, 0x0010u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvFD3AWr},
	{0x22u, 0xFD3Bu, 0xFFu, 0x0000u, 0x0010u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD3BRd},
	{0x2Eu, 0xFD3Bu, 0xFFu, 0x0010u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvFD3BWr},
	{0x22u, 0xFD3Cu, 0xFFu, 0x0000u, 0x0010u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD3CRd},
	{0x2Eu, 0xFD3Cu, 0xFFu, 0x0010u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvFD3CWr},
	{0x2Fu, 0xFD40u, 0x03u, 0x0004u, 0x0004u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFD40CtrlAdj},
	{0x2Fu, 0xFD40u, 0x00u, 0x0000u, 0x0004u, {1u, 0u}, 0x0Au, CmnMfgSrv_SrvFD40CtrlRtn},
	{0x2Fu, 0xFD41u, 0x03u, 0x0004u, 0x0004u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvFD41CtrlAdj},
	{0x2Fu, 0xFD41u, 0x00u, 0x0000u, 0x0004u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD41CtrlRtn},
	{0x2Fu, 0xFD42u, 0x03u, 0x0004u, 0x0004u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvFD42CtrlAdj},
	{0x2Fu, 0xFD42u, 0x00u, 0x0000u, 0x0004u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD42CtrlRtn},
	{0x22u, 0xFD60u, 0xFFu, 0x0000u, 0x0064u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD60Rd},
	{0x31u, 0xFD70u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFD70RoutineStrt},
	{0x31u, 0xFD80u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFD80RoutineStrt},
	{0x31u, 0xFD81u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFD81RoutineStrt},
	{0x31u, 0xFD84u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFD84RoutineStrt},
	{0x31u, 0xFD85u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFD85RoutineStrt},
	{0x22u, 0xFD88u, 0xFFu, 0x0000u, 0x0004u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD88Rd},
	{0x2Eu, 0xFD88u, 0xFFu, 0x0004u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFD88Wr},
	{0x22u, 0xFD89u, 0xFFu, 0x0000u, 0x0004u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD89Rd},
	{0x2Eu, 0xFD89u, 0xFFu, 0x0004u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFD89Wr},
	{0x22u, 0xFD8Cu, 0xFFu, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD8CRd},
	{0x22u, 0xFD8Du, 0xFFu, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD8DRd},
	{0x31u, 0xFDA0u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFDA0RoutineStrt},
	{0x31u, 0xFDA1u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFDA1RoutineStrt},
	{0x31u, 0xFDA2u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFDA2RoutineStrt},
	{0x31u, 0xFDA3u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFDA3RoutineStrt},
	{0x31u, 0xFDA8u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFDA8RoutineStrt},
	{0x31u, 0xFDA9u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFDA9RoutineStrt},
	{0x31u, 0xFDAAu, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFDAARoutineStrt},
	{0x31u, 0xFDABu, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFDABRoutineStrt},
	{0x22u, 0xFDB0u, 0xFFu, 0x0000u, 0x0004u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFDB0Rd},
	{0x2Eu, 0xFDB0u, 0xFFu, 0x0004u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFDB0Wr},
	{0x22u, 0xFDB1u, 0xFFu, 0x0000u, 0x0004u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFDB1Rd},
	{0x2Eu, 0xFDB1u, 0xFFu, 0x0004u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFDB1Wr},
	{0x22u, 0xFDB2u, 0xFFu, 0x0000u, 0x0004u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFDB2Rd},
	{0x2Eu, 0xFDB2u, 0xFFu, 0x0004u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFDB2Wr},
	{0x22u, 0xFDB3u, 0xFFu, 0x0000u, 0x0004u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFDB3Rd},
	{0x2Eu, 0xFDB3u, 0xFFu, 0x0004u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFDB3Wr},
	{0x22u, 0xFDB8u, 0xFFu, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFDB8Rd},
	{0x22u, 0xFDB9u, 0xFFu, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFDB9Rd},
	{0x22u, 0xFDBAu, 0xFFu, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFDBARd},
	{0x22u, 0xFDBBu, 0xFFu, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFDBBRd},
	{0x22u, 0xFDC0u, 0xFFu, 0x0000u, 0x0002u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFDC0Rd},
	{0x2Eu, 0xFDC0u, 0xFFu, 0x0002u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFDC0Wr},
	{0x22u, 0xFDC8u, 0xFFu, 0x0000u, 0x0016u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFDC8Rd},
	{0x2Eu, 0xFDC8u, 0xFFu, 0x0016u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFDC8Wr},
	{0x22u, 0xFDD7u, 0xFFu, 0x0000u, 0x006Au, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFDD7Rd},
	{0x2Eu, 0xFDD7u, 0xFFu, 0x006Au, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFDD7Wr},
	{0x22u, 0xFDDFu, 0xFFu, 0x0000u, 0x006Au, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFDDFRd},
	{0x2Eu, 0xFDDFu, 0xFFu, 0x006Au, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFDDFWr},
	{0x31u, 0xFDF0u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFDF0RoutineStrt},
	{0x31u, 0xFDF0u, 0x03u, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFDF0RoutineSts},
	{0x31u, 0xFDF1u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFDF1RoutineStrt},
	{0x31u, 0xFDF1u, 0x03u, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFDF1RoutineSts},
	{0x22u, 0xFDF4u, 0xFFu, 0x0000u, 0x0018u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFDF4Rd},
	{0x2Eu, 0xFDF4u, 0xFFu, 0x0018u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFDF4Wr},
	{0x22u, 0xFDF5u, 0xFFu, 0x0000u, 0x0034u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFDF5Rd},
	{0x2Eu, 0xFDF5u, 0xFFu, 0x0034u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFDF5Wr},
	{0x22u, 0xFDF8u, 0xFFu, 0x0000u, 0x0008u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFDF8Rd},
	{0x2Eu, 0xFDF8u, 0xFFu, 0x0008u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFDF8Wr},
	{0x31u, 0xFE80u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFE80RoutineStrt},
	{0x22u, 0xFE81u, 0xFFu, 0x0000u, 0x000Du, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFE81Rd},
	{0x22u, 0xFE82u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0xFFu, CmnMfgSrv_SrvFE82Rd},
	{0x2Eu, 0xFE82u, 0xFFu, 0x0004u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFE82Wr},
	{0x22u, 0xFE83u, 0xFFu, 0x0000u, 0x0004u, {0u, 0u}, 0xFFu, CmnMfgSrv_SrvFE83Rd},
	{0x2Eu, 0xFE83u, 0xFFu, 0x0004u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFE83Wr},
	{0x10u, 0xFFFFu, 0x01u, 0x0000u, 0x0000u, {0u, 0u}, 0xFFu, CmnMfgSrv_SrvSessionDflt},
	{0x10u, 0xFFFFu, 0x7Eu, 0x0000u, 0x0000u, {0u, 0u}, 0xFFu, CmnMfgSrv_SrvSessionNxtr},
	{0x3Eu, 0xFFFFu, 0x00u, 0x0000u, 0x0000u, {0u, 0u}, 0xFFu, (MfgSrvFuncRef)NULL},
	{0x22u, 0xFE00u, 0xFFu, 0x0000u, 0x0100u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFE00Rd},
	{0x2Eu, 0xFE00u, 0xFFu, 0x0100u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFE00Wr},
	{0x22u, 0xFE01u, 0xFFu, 0x0000u, 0x0100u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFE01Rd},
	{0x2Eu, 0xFE01u, 0xFFu, 0x0100u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFE01Wr},
	{0x22u, 0xFE02u, 0xFFu, 0x0000u, 0x0100u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFE02Rd},
	{0x2Eu, 0xFE02u, 0xFFu, 0x0100u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFE02Wr},
	{0x22u, 0xFE03u, 0xFFu, 0x0000u, 0x0100u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFE03Rd},
	{0x2Eu, 0xFE03u, 0xFFu, 0x0100u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFE03Wr},
	{0x22u, 0xFE08u, 0xFFu, 0x0000u, 0x0012u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFE08Rd},
	{0x2Eu, 0xFE08u, 0xFFu, 0x0012u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFE08Wr},
	{0x31u, 0xFE20u, 0x02u, 0x0004u, 0x0000u, {0u, 0u}, 0x0Au, CmnMfgSrv_SrvFE20RoutineStop},
	{0x31u, 0xFE20u, 0x01u, 0x0008u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFE20RoutineStrt},
	{0x22u, 0xFE21u, 0xFFu, 0x0000u, 0x001Cu, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFE21Rd},
	{0x2Eu, 0xFE21u, 0xFFu, 0x001Cu, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFE21Wr},
	{0x31u, 0xFEA0u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFEA0RoutineStrt},
	{0x31u, 0xFEA1u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFEA1RoutineStrt},
	{0x22u, 0xFEA2u, 0xFFu, 0x0000u, 0x0004u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFEA2Rd},
	{0x2Eu, 0xFEA2u, 0xFFu, 0x0004u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFEA2Wr},
	{0x31u, 0xF101u, 0x02u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF101RoutineStop},
	{0x31u, 0xF101u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF101RoutineStrt},
	{0x31u, 0xF101u, 0x03u, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF101RoutineSts},
	{0x22u, 0xFE90u, 0xFFu, 0x0000u, 0x0004u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFE90Rd},
	{0x2Eu, 0xFE90u, 0xFFu, 0x0004u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFE90Wr},
	{0x31u, 0xFE98u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFE98RoutineStrt},
	{0x31u, 0xFE99u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFE99RoutineStrt},
	{0x22u, 0xFE9Cu, 0xFFu, 0x0000u, 0x0005u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFE9CRd},
	{0x2Eu, 0xFE9Cu, 0xFFu, 0x0005u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFE9CWr},
	{0x22u, 0xFE9Du, 0xFFu, 0x0000u, 0x0005u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFE9DRd},
	{0x2Eu, 0xFE9Du, 0xFFu, 0x0005u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFE9DWr},
	{0x22u, 0xFE9Eu, 0xFFu, 0x0000u, 0x0005u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFE9ERd},
	{0x2Eu, 0xFE9Eu, 0xFFu, 0x0005u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFE9EWr},
	{0x31u, 0xFE88u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFE88RoutineStrt},
	{0x31u, 0xFE89u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFE89RoutineStrt},
	{0x22u, 0xFE8Au, 0xFFu, 0x0000u, 0x0007u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFE8ARd},
	{0x2Eu, 0xFE8Au, 0xFFu, 0x0007u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFE8AWr},
	{0x22u, 0xFE8Bu, 0xFFu, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFE8BRd},
	{0x2Eu, 0xFE8Bu, 0xFFu, 0x0001u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFE8BWr},
	{0x31u, 0xF002u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF002RoutineStrt},
	{0x31u, 0xF11Au, 0x02u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF11ARoutineStop},
	{0x31u, 0xF11Au, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF11ARoutineStrt},
	{0x31u, 0xF11Au, 0x03u, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF11ARoutineSts},
	{0x31u, 0xF151u, 0x02u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF151RoutineStop},
	{0x31u, 0xF151u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvF151RoutineStrt},
	{0x31u, 0xF151u, 0x03u, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvF151RoutineSts},
	{0x22u, 0xFD05u, 0xFFu, 0x0000u, 0x0008u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvFD05Rd},
	{0x2Eu, 0xFD05u, 0xFFu, 0x0008u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvFD05Wr},
	{0x22u, 0xFD06u, 0xFFu, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD06Rd},
	{0x22u, 0xFD61u, 0xFFu, 0x0000u, 0x00B0u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD61Rd},
	{0x31u, 0xFD68u, 0x01u, 0x0002u, 0x0005u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFD68RoutineStrt},
	{0x31u, 0xFD71u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFD71RoutineStrt},
	{0x31u, 0xFEA8u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFEA8RoutineStrt},
	{0x22u, 0xFEA9u, 0xFFu, 0x0000u, 0x0008u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFEA9Rd},
	{0x31u, 0xFEB0u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFEB0RoutineStrt},
	{0x31u, 0xFEB1u, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0x0Au, CmnMfgSrv_SrvFEB1RoutineStrt},
	{0x27u, 0xFFFFu, 0x62u, 0x0004u, 0x0000u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvSecuKey},
	{0x27u, 0xFFFFu, 0x61u, 0x0000u, 0x0004u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvSecuSeed},
	{0x31u, 0xFEAAu, 0x01u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvFEAARoutineStrt},
	{0x22u, 0xFEABu, 0xFFu, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFEABRd},
	{0x11u, 0xFFFFu, 0x61u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvRstHard},
	{0x11u, 0xFFFFu, 0x60u, 0x0000u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvRstSoft},
	{0x22u, 0xFE8Cu, 0xFFu, 0x0000u, 0x00D4u, {1u, 0u}, 0xFFu, CmnMfgSrv_SrvFE8CRd},
	{0x2Eu, 0xFEABu, 0xFFu, 0x0001u, 0x0000u, {0u, 0u}, 0xFFu, CmnMfgSrv_SrvFEABWr},
	{0x2Eu, 0xFE8Cu, 0xFFu, 0x00D4u, 0x0000u, {1u, 1u}, 0xFFu, CmnMfgSrv_SrvFE8CWr},
	{0x22u, 0xFED0u, 0xFFu, 0x0000u, 0x0006u, {1u, 0u}, 0xFFu, ProgMfgSrv_SrvFED0Rd},
	{0x2Eu, 0xFED0u, 0xFFu, 0x0006u, 0x0000u, {1u, 1u}, 0xFFu, ProgMfgSrv_SrvFED0Wr},
	{0x22u, 0xFED1u, 0xFFu, 0x0000u, 0x0006u, {1u, 0u}, 0xFFu, ProgMfgSrv_SrvFED1Rd},
	{0x2Eu, 0xFED1u, 0xFFu, 0x0006u, 0x0000u, {1u, 1u}, 0xFFu, ProgMfgSrv_SrvFED1Wr},
	{0x22u, 0xFED2u, 0xFFu, 0x0000u, 0x0014u, {1u, 0u}, 0xFFu, ProgMfgSrv_SrvFED2Rd},
	{0x2Eu, 0xFED2u, 0xFFu, 0x0014u, 0x0000u, {1u, 1u}, 0xFFu, ProgMfgSrv_SrvFED2Wr},
	{0x22u, 0xFED3u, 0xFFu, 0x0000u, 0x0002u, {1u, 0u}, 0xFFu, ProgMfgSrv_SrvFED3Rd},
	{0x2Eu, 0xFED3u, 0xFFu, 0x0002u, 0x0000u, {1u, 1u}, 0xFFu, ProgMfgSrv_SrvFED3Wr},
	{0x22u, 0xFED4u, 0xFFu, 0x0000u, 0x0006u, {1u, 0u}, 0xFFu, ProgMfgSrv_SrvFED4Rd},
	{0x2Eu, 0xFED4u, 0xFFu, 0x0006u, 0x0000u, {1u, 1u}, 0xFFu, ProgMfgSrv_SrvFED4Wr},
	{0x22u, 0xFED5u, 0xFFu, 0x0000u, 0x0009u, {1u, 0u}, 0xFFu, ProgMfgSrv_SrvFED5Rd},
	{0x2Eu, 0xFED5u, 0xFFu, 0x0009u, 0x0000u, {1u, 1u}, 0xFFu, ProgMfgSrv_SrvFED5Wr},
	{0x22u, 0xFED6u, 0xFFu, 0x0000u, 0x0001u, {1u, 0u}, 0xFFu, ProgMfgSrv_SrvFED6Rd},
	{0x2Eu, 0xFED6u, 0xFFu, 0x0001u, 0x0000u, {1u, 1u}, 0xFFu, ProgMfgSrv_SrvFED6Wr},
	{0x22u, 0xFED7u, 0xFFu, 0x0000u, 0x0004u, {1u, 0u}, 0xFFu, ProgMfgSrv_SrvFED7Rd},
	{0x2Eu, 0xFED7u, 0xFFu, 0x0004u, 0x0000u, {1u, 1u}, 0xFFu, ProgMfgSrv_SrvFED7Wr},
	{0x22u, 0xFED8u, 0xFFu, 0x0000u, 0x0014u, {1u, 0u}, 0xFFu, ProgMfgSrv_SrvFED8Rd},
	{0x2Eu, 0xFED8u, 0xFFu, 0x0014u, 0x0000u, {1u, 1u}, 0xFFu, ProgMfgSrv_SrvFED8Wr},
	{0x22u, 0xFED9u, 0xFFu, 0x0000u, 0x0011u, {1u, 0u}, 0xFFu, ProgMfgSrv_SrvFED9Rd},
	{0x2Eu, 0xFED9u, 0xFFu, 0x0011u, 0x0000u, {1u, 1u}, 0xFFu, ProgMfgSrv_SrvFED9Wr},
	{0x22u, 0xFEDAu, 0xFFu, 0x0000u, 0x0009u, {1u, 0u}, 0xFFu, ProgMfgSrv_SrvFEDARd},
	{0x2Eu, 0xFEDAu, 0xFFu, 0x0009u, 0x0000u, {1u, 1u}, 0xFFu, ProgMfgSrv_SrvFEDAWr},
	{0x22u, 0xFEE0u, 0xFFu, 0x0000u, 0x000Au, {1u, 0u}, 0xFFu, ProgMfgSrv_SrvFEE0Rd},
	{0x2Eu, 0xFEE0u, 0xFFu, 0x000Au, 0x0000u, {1u, 1u}, 0xFFu, ProgMfgSrv_SrvFEE0Wr},
	{0x22u, 0xFEE1u, 0xFFu, 0x0000u, 0x000Au, {1u, 0u}, 0xFFu, ProgMfgSrv_SrvFEE1Rd},
	{0x2Eu, 0xFEE1u, 0xFFu, 0x000Au, 0x0000u, {1u, 1u}, 0xFFu, ProgMfgSrv_SrvFEE1Wr},
	{0x22u, 0xFEE4u, 0xFFu, 0x0000u, 0x0002u, {1u, 0u}, 0xFFu, ProgMfgSrv_SrvFEE4Rd},
	{0x2Eu, 0xFEE4u, 0xFFu, 0x0002u, 0x0000u, {1u, 1u}, 0x0Au, ProgMfgSrv_SrvFEE4Wr},
	{0x22u, 0xFEDBu, 0xFFu, 0x0000u, 0x0010u, {1u, 0u}, 0xFFu, ProgMfgSrv_SrvFEDBRd},
	{0x2Eu, 0xFEDBu, 0xFFu, 0x0010u, 0x0000u, {1u, 1u}, 0xFFu, ProgMfgSrv_SrvFEDBWr},
	{0x22u, 0xFEDCu, 0xFFu, 0x0000u, 0x0336u, {1u, 0u}, 0xFFu, ProgMfgSrv_SrvFEDCRd},
	{0x2Eu, 0xFEDCu, 0xFFu, 0x0336u, 0x0000u, {1u, 1u}, 0xFFu, ProgMfgSrv_SrvFEDCWr},
};

CONST(uint16, AUTOMATIC) CmnMfgSrvCfg_NtFctPtrTbl[11U] = {
	0U, /* Appl0 */
	0U, /* Appl1 */
	0U, /* Appl2 */
	0U, /* Appl3 */
	0U, /* Appl4 */
	0U, /* Appl5 */
	0U, /* Appl6 */
	0U, /* Appl7 */
	0U, /* Appl8 */
	0U, /* Appl9 */
	NtWrapS_CmnMfgSrv_CallSvc10, /* Appl10 */
};


/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/
/**********************************************************************************************************************
*        Name:  NONTRUSTED_NtWrapS_CmnMfgSrv_CallSvc10
* Description:  Non-trusted function call for Application 10 write services
*      Inputs:  FunctionIndex - Non-trusted function index
*               FunctionParams - Pointer to parameter structure
*     Outputs:  None
* Usage Notes:  None
**********************************************************************************************************************/
FUNC(void, CDD_NxtrMfgSrv_CODE) NONTRUSTED_NtWrapS_CmnMfgSrv_CallSvc10(
		NonTrustedFunctionIndexType FunctionIndex,
		NonTrustedFunctionParameterRefType FunctionParams)
{
	/* Call the service function that was passed as a parameter in FunctionParams and pass it that data buffer that
	 * was passed as another parameter */
	CmnMfgSrvRetBuf_G = ((MfgSrvFuncRef)((NtMfgSrvRec*)FunctionParams)->SrvFct)(((NtMfgSrvRec*)FunctionParams)->DataBuf);
}



/* End of File: MfgSrvCfg.c */
