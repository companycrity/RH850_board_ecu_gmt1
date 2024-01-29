/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name: main.c
* Module Description: Initial startup related code containing main() and the initialization
*                     task which calls EcuM_StartupTwo()
* Project           : GM T1xx
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          3 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 03/03/15  1        LWW       Initial Version                                                                 EA4#225
* 06/22/15  2        LWW       Mask OS Timer ISR prior to call to EcuM_StartupTwo                              EA4#880
* 06/23/15  3        LWW       Stop OS Timer prior to call to EcuM_StartupTwo                                  EA4#901
* 12/22/16  4        JWJ       Added new shutdown task to handle OS shutdown                                   EA4#9036
**********************************************************************************************************************/

#include "Std_Types.h"
#include "EcuM.h"
#include "Os.h"
#include "osekext.h"
#include "ostm_regs.h"

/**********************************************************************************************************************
  * Name:        main
  * Description: Main function of the application, only calling EcuM_Init()
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: Called by low level startup code
  ********************************************************************************************************************/
int main (void)
{
	EcuM_Init();
	return(0);
}

/**********************************************************************************************************************
  * Name:        Task_InitBsw_Appl10
  * Description: Task declaration that calls EcuM_StartupTwo
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: Called by O/S (autostart task)
  ********************************************************************************************************************/
TASK(Task_InitBsw_Appl10)
{
    OSTM0TT = 1U;  /* Stop the O/S Timer until after Rte_Start is called */
    EcuM_StartupTwo();
    TerminateTask();
}

/**********************************************************************************************************************
  * Name:        Task_Shutdown_Appl0
  * Description: Task declaration to perform Shutdown activity
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: Called by EcuM
  ********************************************************************************************************************/
TASK(Task_Shutdown_Appl0)
{
    ShutdownOS(E_OK);
    TerminateTask();
}
