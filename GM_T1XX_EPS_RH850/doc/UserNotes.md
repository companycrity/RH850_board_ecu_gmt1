Upgrading to T1xx FBL Version 04.00.00
------------------------------------------------------------------------------------------------------------------------
When updating to version 04.00.00 of the T1xx bootloader a special sequence of steps are required to avoid locking
out the part.  The bootloader requires a valid ECU ID and SBAT be present in FEE or it will reject all programming
requests.  Application version 05.06.00 or later is needed to write these values.  Use the following procedure when
updating from FBL version 03.02.01 to 04.00.00.

1. Flash application version 05.06.00 or later.
2. Write ECU ID and SBAT using Nexteer services 0xFEDB and 0xFEDC, respectively.
3. Flash the bootloader updater to update to FBL version 04.00.00.
4. Flash application version 05.06.00 or later back into part.

Once the ECU ID and SBAT have been written the part can be upgraded and downgraded to any version without risk.  This
sequence is not important when flashing using JTAG.  The critical point is that the bootloader updater wipes the
application software, the bootloader does not possess a means to write the SBAT or ECU ID and if there is no valid ECU
ID the bootloader does not allow programming.  It is therefore absolutely critical that an ECU ID is set before the
updater is flashed.


T1xx Version 07.01.04 CMS Security Changes
------------------------------------------------------------------------------------------------------------------------
Changes have been made to the CMS component security used in version 07.01.04 of T1xx software.  This new version
changes the Nexteer MEC counter threshold for entering Production mode from 0 to any value 5 or less.  Also upon
entering Production mode all communication stops on the CAN IDs used for CMS services ($712/$710).  Communication can
be enabled again by sending a special sentinel frame with the following format on the normal transmit ID, $712:

    712: 07 12 34 56 78 9A BC DE

No response is to be expected from such a request but normal communication can resume after that point.  Further, once
the NMEC reaches a value of zero all services are disabled with the exception of reads ($22), session control ($10), and
tester present ($3E).  This includes writes to the NMEC which makes this irreversible.  A special build is available if
the NMEC needs to be restored to a non zero value.  This requires re-flashing the part with a build that is intended not
to provide assist but will force the NMEC to a value of 0xFE upon an ignition cycle.