/*! \file ax5043spi_p.h
    \brief Provides an abstraction layer for the SPI interface communicating to the digital transceiver
*/
 
#ifndef AX5043SPI_P_H_
#define AX5043SPI_P_H_

#include <stdint.h>

#define SPI_CHANNEL (0) //!< The default SPI channel for the digital transceiver
#define SPI_SPEED (32000000) //!< The default SPI bus speed for the digital transceiver

/*! \fn void setSpiChannel(int newSpiChannel)
    \brief Set the SPI channel for the digital transceiver.

    setSpiChannel must be called before initializeSpi(). The default is SPI_CHANNEL.
    \param newSpiChannel The SPI channel for the digital transceiver.
    \sa SPI_CHANNEL
    \sa initializeSpi
*/
void setSpiChannel(int newSpiChannel);

/*! \fn void setSpiSpeed(int newSpiSpeed)
    \brief Set the SPI bus speed for the digital transceiver.

    
    setSpiSpeed must be called before initializeSpi(). The default is SPI_SPEED.
    \param newSpiSpeed The SPI bus speed for the digital transceiver.
    \sa SPI_SPEED
    \sa initializeSpi
*/
void setSpiSpeed(int newSpiSpeed);

/*! \fn void initializeSpi()
    \brief Initilize the SPI bus to communicate with the digital transceiver.

    setSpiChannel() and setSpiSpeed() must both be called before initializeSPI().
    \sa setSpiChannel
    \sa setSpiSpeed
*/
void initializeSpi(void);

/*! \fn void ax5043WriteReg(uint16_t reg, uint8_t val)
    \brief Write a value to an AX5043 register.
    \param reg The register to write.
    \param val The value to right to the register.
*/
void ax5043WriteReg(uint16_t reg, uint8_t val);

/*! \fn uint8_t ax5043ReadReg(uint16_t reg)
    \brief Read a value from an AX5043 register.
    \param reg The register to read.
    \return The value read from the register.
*/
uint8_t ax5043ReadReg(uint16_t reg);

#endif /* AX5043SPI_P_H_ */