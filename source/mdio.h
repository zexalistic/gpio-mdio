/*
 * mdio.h
 *
 *  Created on: 12/29/2021
 *      Author: lyihao
 */

#ifndef MDIO_H_
#define MDIO_H_

#if defined(__cplusplus)
extern "C" {
#endif

#define XMDIO_PORT 0
#define MDC_PIN 23
#define MDIO_PIN 24


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
unsigned char mdio_get_bit(void);
unsigned char mdio_send_bit(unsigned char val);
unsigned short GPIOClause45RegRead(unsigned char phyAddr, unsigned char devAddr, unsigned short regAddr);
void GPIOClause45RegWrite(unsigned char phyAddr, unsigned char devAddr, unsigned short regAddr, unsigned short data);
void SetMDIOInput(unsigned char x);

void set_i2c_via_mdio(void);

#if defined(__cplusplus)
}
#endif

#endif /* MDIO_H_ */
