/**********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name  : CalDummy_Stub.c
* Module Description: Stub source file to define symbols for the dummy init functions on cal dummy components.
* Project           : GM T1xx
* Author            : Jared Julien
***********************************************************************************************************************
* Version Control:
* %version:          3 %
* %derived_by:       kzdyfh %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 05/02/16  1        JWJ       Initial implementation for first integration of dummy cal components            EA4#5585
* 07/08/16  2        JWJ       Adde/removed some sections per Mark Amato's latest organization for 06.00.00    EA4#6512
**********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include "Rte.h"

/******************************************** File Level Rule Deviations *********************************************/

/********************************************* Embedded Local Constants **********************************************/

/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/

/**********************************************************************************************************************
  * Name:        CalRegn01Rt01DummyInit1
  * Description: Dummy initialization function needed to define symbol for linker.  Init function required to map dummy
  *              cal components to an application.
  * Inputs:      RTE instance because the dummy cal components support multiple instatiation.
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
FUNC(void, CalRegn01Rt01_Dummy_CODE) CalRegn01Rt01DummyInit1(P2CONST(struct Rte_CDS_CalRegn01Rt01_Dummy, AUTOMATIC, RTE_CONST) self)
{
	/* This space intentionally left blank. */
}

/**********************************************************************************************************************
  * Name:        CalRegn02Rt01GroupCDummyInit1
  * Description: Dummy initialization function needed to define symbol for linker.  Init function required to map dummy
  *              cal components to an application.
  * Inputs:      RTE instance because the dummy cal components support multiple instatiation.
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
FUNC(void, CalRegn01Rt01_Dummy_CODE) CalRegn02Rt01GroupCDummyInit1(P2CONST(struct Rte_CDS_CalRegn01Rt01_Dummy, AUTOMATIC, RTE_CONST) self)
{
	/* This space intentionally left blank. */
}

/**********************************************************************************************************************
  * Name:        CalRegn03Rt01DummyInit1
  * Description: Dummy initialization function needed to define symbol for linker.  Init function required to map dummy
  *              cal components to an application.
  * Inputs:      RTE instance because the dummy cal components support multiple instatiation.
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
FUNC(void, CalRegn01Rt01_Dummy_CODE) CalRegn03Rt01DummyInit1(P2CONST(struct Rte_CDS_CalRegn01Rt01_Dummy, AUTOMATIC, RTE_CONST) self)
{
	/* This space intentionally left blank. */
}

/**********************************************************************************************************************
  * Name:        CalRegn03Rt01GroupADummyInit1
  * Description: Dummy initialization function needed to define symbol for linker.  Init function required to map dummy
  *              cal components to an application.
  * Inputs:      RTE instance because the dummy cal components support multiple instatiation.
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
FUNC(void, CalRegn01Rt01_Dummy_CODE) CalRegn03Rt01GroupADummyInit1(P2CONST(struct Rte_CDS_CalRegn01Rt01_Dummy, AUTOMATIC, RTE_CONST) self)
{
	/* This space intentionally left blank. */
}

/**********************************************************************************************************************
  * Name:        CalRegn03Rt01GroupBDummyInit1
  * Description: Dummy initialization function needed to define symbol for linker.  Init function required to map dummy
  *              cal components to an application.
  * Inputs:      RTE instance because the dummy cal components support multiple instatiation.
  * Outputs:     NONE
  * Usage Notes: NONE
  ********************************************************************************************************************/
FUNC(void, CalRegn01Rt01_Dummy_CODE) CalRegn03Rt01GroupBDummyInit1(P2CONST(struct Rte_CDS_CalRegn01Rt01_Dummy, AUTOMATIC, RTE_CONST) self)
{
	/* This space intentionally left blank. */
}
