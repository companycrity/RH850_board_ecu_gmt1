/*****************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : NxtrDmaRegs.h
* Module Description: Nexteer Direct Memory Access Peripheral Registers
* Project           : CBD
* Author            : Kathleen Creager
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nz63rn %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/03/15  1        KMC       Initial version -- defines for bit fields not included in the Renesas headers    EA4#408
**********************************************************************************************************************/

#ifndef NXTRDMAREGS_H
#define NXTRDMAREGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "dma_regs.h"

#define DMASSDRQC9 (DMASS.DTFRRQC9.BIT.DRQC)
#define DMASSTCC9 (DMASS.DCSTC9.BIT.TCC)
#define DMASSDTE9 (DMASS.DCEN9.BIT.DTE)
#define DMASSDRQC14 (DMASS.DTFRRQC14.BIT.DRQC)
#define DMASSTCC14 (DMASS.DCSTC14.BIT.TCC)
#define DMASSDTE14 (DMASS.DCEN14.BIT.DTE)
#define DMASSTC15 (DMASS.DCST15.BIT.TC)
#define DMASSTCC15 (DMASS.DCSTC15.BIT.TCC)

#endif
