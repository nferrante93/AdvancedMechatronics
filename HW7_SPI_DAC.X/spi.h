/* ************************************************************************** */
/** Descriptive File Name

  @Company
    Nicola Ferrante

  @File Name
    spi.h

  @Summary
    BSPI DAC.

  @Description
    SPI function with the MCP4912 10 bit Digital to Analog Converter.
 */
/* ************************************************************************** */

#ifndef SPI__H__
#define SPI__H__

void initSPI();
unsigned char spi_io(unsigned char o);

#endif // SPI__H__
