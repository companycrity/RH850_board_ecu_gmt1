/* Header file for contract folder of ES008A */
/* This is just a stub header file for SPI driver functions */ 

#ifndef SPI_H  /* Multiple include preventer */
#define SPI_H

#include "Spi_Cfg.h"

typedef uint8   Spi_ChannelType;
typedef uint16  Spi_DataType;     /* Can be changed depending on the SPI driver configuration */


/* Function prototypes */
extern FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_WriteIB
               (Spi_ChannelType Channel, P2CONST(Spi_DataType, AUTOMATIC,
                                             SPI_APPL_CONST) DataBufferPtr);
extern FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_ReadIB
               (Spi_ChannelType Channel, P2VAR(Spi_DataType, AUTOMATIC,
                                             SPI_APPL_DATA) DataBufferPointer);
									

									

											 
											 
#endif
