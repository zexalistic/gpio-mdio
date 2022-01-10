/*
 * mdio.c
 *
 *  Created on: 12/29/2021
 *      Author: lyihao
 */
#include "mdio.h"
#include "fsl_gpio.h"
#include "fsl_common.h"
#include "fsl_iocon.h"

// We add delay in order to see the waveform on oscilloscope
#define DELAY(cnt) {int d = cnt;while(d--)__asm volatile ("nop");}
#define SetMDCLow() DELAY(100);GPIO_PinWrite(GPIO,XMDIO_PORT,MDC_PIN,0);DELAY(100);
#define SetMDCHigh() DELAY(100);GPIO_PinWrite(GPIO,XMDIO_PORT,MDC_PIN,1);DELAY(100);
#define SetMDIOLow() DELAY(100);GPIO_PinWrite(GPIO,XMDIO_PORT,MDIO_PIN,0);DELAY(100);
#define SetMDIOHigh() DELAY(100);GPIO_PinWrite(GPIO,XMDIO_PORT,MDIO_PIN,1);DELAY(100);
#define GetMDIO() GPIO_PinRead(GPIO,XMDIO_PORT,MDIO_PIN);



unsigned char mdio_get_bit()
{
    SetMDCLow();
    SetMDCHigh();

    return GetMDIO();
}

/* MDIO must already be configured as output.
 * Input: 0 or 1
 * Output: -1 fail. other success
 */
unsigned char mdio_send_bit(unsigned char val)
{
    SetMDCLow();
    if(val & 1)
    {
        SetMDIOHigh();
    }
    else
    {
         SetMDIOLow();
    }
    SetMDCHigh();
    return 0;
}

/* Read register data
 * Input: phy address, device address, register address
 * Output: -1 fail. other success
 * Note: This function has wrong return value while reading the device...
 */
unsigned short GPIOClause45RegRead(unsigned char phyAddr, unsigned char devAddr, unsigned short regAddr)
{
    int i;
    unsigned short regVal = 0;
    unsigned char rdBit;
    //printf("Enter, phyAddr:%x, devAddr:%x, regAddr:%x\r\n",phyAddr,devAddr,regAddr);
    /*1. Configure GPIO[15](MDC_PHY)， GPIO[14](MDIO_PHY) to be general GPIO mode
         In default:    GPIO[14] = Output, with init value 1;
     *                  GPIO[15] = output, with init value 1;
     */
     /*Set GPIO[14] direction input*/
     SetMDIOInput(0);
     SetMDCLow();
     /*2. Send Clasue 45 Read CMD: Address + Write
      *   Address
      *      Preamble SF OP PHYAddr DevAddr TA RegAddr + Idle
      *   Write
      *      Preamble SF OP PHYAddr DevAddr TA DATA + Idle
      */

     /* 2.1 Set Address */
     /* Preamble
        Currently, GPIO[14] is aready output, value is init to '1',
        only need to enable 32 clock pulses, set GPIO[15] to (0 1)*32
     */
     for (i = 0; i < 32; i++)
        mdio_send_bit(1);
     /*2.2 Start of Frame
        GPIO[14]  0
        GPIO[15]  10 10
     */

     for (i = 0; i < 2; i++)
        mdio_send_bit(0);
    /*2.3 Op code
        GPIO[14]  0
        GPIO[15]  10 10
     */
    //SetMDIO(0);
    for (i = 0; i < 2; i++)
        mdio_send_bit(0);
    /*2.4 5-bit PHY Address (0)
        GPIO[14]  phyAddr
        GPIO[15]  10 10 10 10 10
     */
    for (i = 4; i >= 0; i--)
        mdio_send_bit((phyAddr >> i) & 0x01);
    /*2.5 5-bit Device Address
        GPIO[14]  devAddr
        GPIO[15]  10 10 10 10 10
     */
     for (i = 4; i >= 0; i--)
         mdio_send_bit((devAddr >> i) & 0x01);
    /*2.6 2-bit Turn Around
        GPIO[14]  1  0
        GPIO[15]  10 10
     */
    mdio_send_bit(1);
    mdio_send_bit(0);
    /*2.7 16-bit Register Address
        GPIO[14]  regAddr
        GPIO[15]  10*16
     */
     for (i = 15; i >= 0; i--)
         mdio_send_bit((regAddr >> i) & 0x01);
     /*2.8 16-bit Set Read
        preamble
        GPIO[14]  1
        GPIO[15]  10*32
     */

      for (i = 0; i < 32; i++)
          mdio_send_bit(1);
     /*2.9 Start of Frame
        GPIO[14]  0
        GPIO[15]  10 10
     */

     for (i = 0; i < 2; i++)
         mdio_send_bit(0);
    /*2.10 Op code
        GPIO[14]  1
        GPIO[15]  10 10
     */

    for (i = 0; i < 2; i++)
        mdio_send_bit(1);
      /*2.11 5-bit PHY Address (0)
        GPIO[14]  phyAddr
        GPIO[15]  10 10 10 10 10
     */
    for (i = 4; i >= 0; i--)
        mdio_send_bit((phyAddr >> i) & 0x01);
    /*2.12 5-bit Device Address
        GPIO[14]  devAddr
        GPIO[15]  10 10 10 10 10
     */
     for (i = 4; i >= 0; i--)
         mdio_send_bit((devAddr >> i) & 0x01);
     /*2.13 TA - half cycle
        GPIO[14]  1
        GPIO[15]  0
     */

    SetMDCLow();
    //SetMDIO(0);
    SetMDIOInput(1);
    SetMDCHigh();;
    /*2.14 Read one cycle TA
        Set GPIO[7] to input
        GPIO[15]  10
     */

    rdBit = GetMDIO();
    //rdBit = mdio_get_bit();//Read ack


    /*2.15 Read 16 bits*/

    for(i=0;i<16;i++)
        regVal += (mdio_get_bit() <<(15-i));
    SetMDCLow();
    /*2.16 Read 16 bits
        Set GPIO[14] to output (1)
        Set GPIO[15] to 1
    */
    //SetMDIOInput(0);
    SetMDCHigh();;
    //data = &regVal;
    //printf("leave, data:%x\r\n",regVal);
    return regVal;
}

/* Write register data
 * Input: phy address, device address, register address, data
 * Output: 0 success, other fail
 */
void GPIOClause45RegWrite(unsigned char phyAddr, unsigned char devAddr, unsigned short regAddr, unsigned short data)
{
    int i;
        /*1. Configure GPIO[15](MDC_PHY)， GPIO[14](MDIO_PHY) to be general GPIO mode
         In default:    GPIO[14] = Output, with init value 1;
     *                  GPIO[15] = output, with init value 1;
     */
     /*Set GPIO[14] direction input*/
     SetMDIOInput(0);
     /*2. Send Clasue 45 Read CMD: Address + Write
      *   Address
      *      Preamble SF OP PHYAddr DevAddr TA RegAddr + Idle
      *   Write
      *      Preamble SF OP PHYAddr DevAddr TA DATA + Idle
      */
     /* 2.1 Set Address */
     /* Preamble
        Currently, GPIO[14] is aready output, value is init to '1',
        only need to enable 32 clock pulses, set GPIO[15] to (0 1)*32
     */
     for (i = 0; i < 32; i++)
      mdio_send_bit(1);
     /*2.2 Start of Frame
        GPIO[14]  0
        GPIO[15]  10 10
     */
     for (i = 0; i < 2; i++)
      mdio_send_bit(0);
    /*2.3 Op code
        GPIO[14]  0
        GPIO[15]  10 10
     */
    for (i = 0; i < 2; i++)
      mdio_send_bit(0);
    /*2.4 5-bit PHY Address (0)
        GPIO[14]  phyAddr
        GPIO[15]  10 10 10 10 10
     */
    for (i = 4; i >= 0; i--)
        mdio_send_bit((phyAddr >> i) & 0x01);
    /*2.5 5-bit Device Address
        GPIO[14]  devAddr
        GPIO[15]  10 10 10 10 10
     */
     for (i = 4; i >= 0; i--)
         mdio_send_bit((devAddr >> i) & 0x01);
    /*2.6 2-bit Turn Around
        GPIO[14]  1  0
        GPIO[15]  10 10
     */
     mdio_send_bit(1);
     mdio_send_bit(0);
    /*2.7 16-bit Register Address
        GPIO[14]  regAddr
        GPIO[15]  10*16
     */
     for (i = 15; i >= 0; i--)
         mdio_send_bit((regAddr >> i) & 0x01);
     /*2.8 16-bit Set Write
        preamble
        GPIO[14]  1
        GPIO[15]  10*32
     */
      for (i = 0; i < 32; i++)
          mdio_send_bit(1);
     /*2.9 Start of Frame
        GPIO[14]  0
        GPIO[15]  10 10
     */
     for (i = 0; i < 2; i++)
        mdio_send_bit(0);
    /*2.10 Op code
        GPIO[14]  0  1
        GPIO[15]  10 10
     */
     mdio_send_bit(0);
     mdio_send_bit(1);
      /*2.11 5-bit PHY Address (0)
        GPIO[14]  phyAddr
        GPIO[15]  10 10 10 10 10
     */
    for (i = 4; i >= 0; i--)
        mdio_send_bit((phyAddr >> i) & 0x01);
    /*2.12 5-bit Device Address
        GPIO[14]  devAddr
        GPIO[15]  10 10 10 10 10
     */
     for (i = 4; i >= 0; i--)
         mdio_send_bit((devAddr >> i) & 0x01);
     /*2.13 2-bit Turn Around
        GPIO[14]  1  0
        GPIO[15]  10 10
     */
     mdio_send_bit(1);
     mdio_send_bit(0);
    /*2.1 Write 16 bits*/
    for(i=15;i >= 0;i--)
        mdio_send_bit((data >>i) & 0x01);
    /*2.14 Idle
        Set GPIO[14] to output (1)
        Set GPIO[15] to 1
    */
    SetMDIOInput(1);
    SetMDCHigh();;
}


void SetMDIOInput(unsigned char x)
{
    gpio_pin_config_t MDIO_config;
    if(x){
        MDIO_config.pinDirection = kGPIO_DigitalInput;
        MDIO_config.outputLogic = 1U;
    }
    else{
        MDIO_config.pinDirection = kGPIO_DigitalOutput;
        MDIO_config.outputLogic = 1U;
    }


    GPIO_PinInit(GPIO, XMDIO_PORT, MDIO_PIN, &MDIO_config);

    IOCON->PIO[XMDIO_PORT][MDIO_PIN] = ((IOCON->PIO[XMDIO_PORT][MDIO_PIN] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         | IOCON_PIO_FUNC(0)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(1));
}

void set_i2c_via_mdio(void)
{
    unsigned char phyAddr = 0;
    unsigned char devAddr = 0x1f;
    unsigned short regAddr = 0xf419;
    unsigned short data    = 1;

    //BOARD_InitXMDIOPins();
    GPIOClause45RegWrite(phyAddr, devAddr, regAddr, data);
}



