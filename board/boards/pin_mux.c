/*
 * Copyright 2018-2019 NXP.
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v5.0
processor: LPC54102J512
package_id: LPC54102J512BD64
mcu_data: ksdk2_0
processor_version: 0.0.27
board: LPCXpresso54102
pin_labels:
- {pin_num: '20', pin_signal: VSSA, label: GND}
- {pin_num: '55', pin_signal: VSS55, label: GND}
- {pin_num: '25', pin_signal: VSS25, label: GND}
- {pin_num: '9', pin_signal: VSS9, label: GND}
- {pin_num: '22', pin_signal: VREFP, label: 'SJ2[2]'}
- {pin_num: '21', pin_signal: VREFN, label: 'SJ1[2]'}
- {pin_num: '23', pin_signal: VDDA, label: VDD_LPC54102_IC}
- {pin_num: '56', pin_signal: VDD56, label: VDD_LPC54102_IC}
- {pin_num: '34', pin_signal: VDD34, label: VDD_LPC54102_IC}
- {pin_num: '24', pin_signal: VDD24, label: VDD_LPC54102_IC}
- {pin_num: '8', pin_signal: VDD8, label: VDD_LPC54102_IC}
- {pin_num: '35', pin_signal: RTCXOUT, label: Y1(32.768k)}
- {pin_num: '33', pin_signal: RTCXIN, label: Y1(32.768k)}
- {pin_num: '64', pin_signal: RESET, label: 'J7[10]/J7[9]/SW3/U3[8]/nRESET_TRGT'}
- {pin_num: '10', pin_signal: PIO1_17, label: 'J8[9]/P1_17_IR_LEARN_EN'}
- {pin_num: '7', pin_signal: PIO1_16/CT32B0_MAT0/CT32B0_CAP0/SPI1_SSEL1, label: 'J2[3]/P1_16-CT32B0_MAT0'}
- {pin_num: '62', pin_signal: PIO1_15/SCT0_OUT5/CT32B1_CAP3/SPI1_SSEL0, label: 'J1[15]/P1_15-SCTOUT5-SPI1_SSEL0'}
- {pin_num: '57', pin_signal: PIO1_14/U2_RXD/SCT0_OUT7/SPI1_MISO, label: 'J1[11]/P1_14-SPI1_MISO'}
- {pin_num: '54', pin_signal: PIO1_13/U3_TXD/CT32B1_MAT1/SPI1_MOSI, label: 'J2[13]/P1_13-U3_TXD'}
- {pin_num: '51', pin_signal: PIO1_12/U3_RXD/CT32B1_MAT0/SPI1_SCK, label: 'J2[15]/P1_12-U3_RXD'}
- {pin_num: '42', pin_signal: PIO1_11/U1_RTS/CT32B1_CAP0, label: 'J2[12]/P1_11-U1_RTS'}
- {pin_num: '30', pin_signal: PIO1_10/U1_TXD/SCT0_OUT4, label: 'J2[18]/P1_10-U1_TXD'}
- {pin_num: '29', pin_signal: PIO1_9/SPI0_MOSI/CT32B0_CAP2, label: 'J8[7]/P1_9-BTLE_CMD_DAT'}
- {pin_num: '28', pin_signal: PIO1_8/ADC_11/SPI1_MISO/CT32B1_MAT3/CT32B1_CAP3, label: 'J8[6]/P1_8-ADC11'}
- {pin_num: '27', pin_signal: PIO1_7/ADC_10/SPI1_MOSI/CT32B1_MAT2/CT32B1_CAP2, label: 'J1[13]/P1_7-SPI1_MOSI-CT32B1_MAT2'}
- {pin_num: '26', pin_signal: PIO1_6/ADC_9/SPI1_SCK/CT32B1_CAP2/CT32B1_MAT2, label: 'J1[9]/P1_6-SPI1_SCK'}
- {pin_num: '19', pin_signal: PIO1_5/ADC_8/SPI1_SSEL0/CT32B1_CAP0/CT32B1_MAT3, label: 'J8[12]/P1_5-ADC8'}
- {pin_num: '18', pin_signal: PIO1_4/ADC_7/SPI1_SSEL1/SCT0_OUT7/SPI0_MISO/CT32B0_MAT1, label: 'JS16[2]/P1_4-ADC7-SPI1_SSEL1'}
- {pin_num: '16', pin_signal: PIO1_2/ADC_5/SPI1_SSEL3/SCT0_OUT5, label: 'JS15[2]/P1_2-ADC5-SPI1_SSEL3'}
- {pin_num: '15', pin_signal: PIO1_1/ADC_4/SWO/SCT0_OUT4, label: 'J8[4]/P1_1-ADC4'}
- {pin_num: '14', pin_signal: PIO1_0/ADC_3/U2_RTS/CT32B3_MAT1/CT32B0_CAP0, label: 'J8[2]/P1_0-ADC3'}
- {pin_num: '3', pin_signal: PIO0_25/I2C1_SCL/U1_CTS/CT32B0_CAP2/CT32B1_CAP1, label: 'J2[14]/P0_25-U1_CTS-I2C1_SCL'}
- {pin_num: '1', pin_signal: PIO0_23/I2C0_SCL/CT32B0_CAP0, label: 'J1[1]/P0_23-I2C0_SCL'}
- {pin_num: '63', pin_signal: PIO0_22/CLKIN/U0_RXD/CT32B3_MAT3, label: 'J2[19]/P0_22-MAG_DRDY_INT'}
- {pin_num: '61', pin_signal: PIO0_21/CLKOUT/U0_TXD/CT32B3_MAT0, label: 'J2[17]/P0_21-CLKOUT-CT32B3_MAT0'}
- {pin_num: '60', pin_signal: PIO0_20/U3_RXD/U0_SCLK/CT32B3_CAP0, label: 'J3[8]/BRIDGE_GPIO'}
- {pin_num: '59', pin_signal: PIO0_19/U3_SCLK/SCT0_OUT1/CT32B0_MAT1, label: 'J3[7]/U8[J5]/BRIDGE_INTR'}
- {pin_num: '58', pin_signal: PIO0_18/U3_TXD/SCT0_OUT0/CT32B0_MAT0, label: 'J2[9]/P0_18-CT32B0_MAT0-ACCL_INT1'}
- {pin_num: '46', pin_signal: PIO0_11/SPI0_SCK/U1_RXD/CT32B2_MAT1, label: 'J1[16]/P0_11-DMIC_CLKIN'}
- {pin_num: '45', pin_signal: PIO0_10/U2_SCLK/SCT0_OUT3/CT32B3_MAT0, label: 'J1[18]/P0_10-BTLE_CONN'}
- {pin_num: '44', pin_signal: PIO0_9/U2_TXD/SCT0_OUT2/CT32B3_CAP0/SPI0_SSEL0, label: 'J1[20]/P0_9-DMIC_DATA'}
- {pin_num: '43', pin_signal: PIO0_8/U2_RXD/SCT0_OUT1/CT32B0_MAT3, label: 'J2[7]/P0_8-CT32B0_MAT3'}
- {pin_num: '41', pin_signal: PIO0_7/U1_SCLK/SCT0_OUT0/CT32B0_MAT2/CT32B0_CAP2, label: 'J2[5]/P0_7-CT32B0_MAT2'}
- {pin_num: '40', pin_signal: PIO0_6/U1_TXD/CT32B0_MAT1, label: 'J2[1]/P0_6-CT32B0_MAT1'}
- {pin_num: '39', pin_signal: PIO0_5/U1_RXD/SCT0_OUT6/CT32B0_MAT0, label: 'J2[20]/P0_5-U1_RXD'}
- {pin_num: '38', pin_signal: PIO0_4/U0_SCLK/SPI0_SSEL2/CT32B0_CAP2, label: 'J1[19]/P0_4-GYR_INT1'}
- {pin_num: '37', pin_signal: PIO0_3/U0_RTS/CT32B1_MAT3, label: 'J1[17]/P0_3-CT32B1_MAT3'}
- {pin_num: '36', pin_signal: PIO0_2/U0_CTS/CT32B2_CAP1, label: 'J2[11]/P0_2-ARDUINO_INT'}
- {pin_num: '6', pin_signal: PIO0_28/I2C2_SDA/CT32B2_MAT0, label: 'J3[10]/JS2[1]/BRIDGE_SDA', identifier: LINK2MCU_SDA}
- {pin_num: '4', pin_signal: PIO0_26/I2C1_SDA/CT32B0_CAP3, label: 'J2[16]/P0_26-I2C1_SDA-CT32B0_CAP3'}
- {pin_num: '5', pin_signal: PIO0_27/I2C2_SCL/CT32B2_CAP0, label: 'J3[9]/JS1[1]/BRIDGE_SCL', identifier: LINK2MCU_SCL}
- {pin_num: '2', pin_signal: PIO0_24/I2C0_SDA/CT32B0_CAP1/CT32B0_MAT0, label: 'J1[3]/SW1/P0_24-I2C0_SDA-WAKEUP', identifier: SW1}
- {pin_num: '13', pin_signal: PIO0_31/ADC_2/U2_CTS/CT32B2_CAP2/CT32B0_CAP3/CT32B0_MAT3, label: 'SW2/D2[3]/P0_31-CT32B0_MAT3-ISP_EN-BLUE', identifier: SW2;LED_BLUE}
- {pin_num: '11', pin_signal: PIO0_29/ADC_0/SCT0_OUT2/CT32B0_MAT3/CT32B0_CAP1/CT32B0_MAT1, label: 'J1[12]/D2[1]/P0_29-CT32B0_MAT1-RED', identifier: LED_RED}
- {pin_num: '12', pin_signal: PIO0_30/ADC_1/SCT0_OUT3/CT32B0_MAT2/CT32B0_CAP2, label: 'J1[14]/D2[4]/P0_30-CT32B0_MAT2-GRN', identifier: LED_GREEN}
- {pin_num: '31', pin_signal: PIO0_0/U0_RXD/SPI0_SSEL0/CT32B0_CAP0/SCT0_OUT3, label: 'U13[4]/TO_MUX_P0_0-ISP_RX', identifier: DEBUG_UART_RX}
- {pin_num: '32', pin_signal: PIO0_1/U0_TXD/SPI0_SSEL1/CT32B0_CAP1/SCT0_OUT1, label: 'U15[3]/U4[4]/P0_1-ISP_TX', identifier: DEBUG_UART_TX}
- {pin_num: '53', pin_signal: PIO0_17/SPI0_SSEL3/U1_RTS/CT32B3_MAT2/SWDIO, label: 'P1[2]/U10[4]/IF_TMS_SWDIO', identifier: DEBUG_SWD_SWDIO}
- {pin_num: '52', pin_signal: PIO0_16/SPI0_SSEL2/U1_CTS/CT32B3_MAT1/SWCLK, label: 'U3[4]/TCK-SWDCLK_TRGT', identifier: DEBUG_SWD_SWDCLK}
- {pin_num: '50', pin_signal: PIO0_15/SPI0_SSEL1/SWO/CT32B2_MAT2, label: 'U3[12]/TDO-SWO_TRGT', identifier: DEBUG_SWD_SWO}
- {pin_num: '48', pin_signal: PIO0_13/SPI0_MISO/SCT0_OUT4/CT32B2_MAT0, label: 'J3[3]/U8[J1]/BRIDGE_MISO', identifier: BRIDGE_T_MISO}
- {pin_num: '47', pin_signal: PIO0_12/SPI0_MOSI/U1_TXD/CT32B2_MAT3, label: 'J3[2]/U8[J2]/BRIDGE_MOSI', identifier: BRIDGE_T_MOSI}
- {pin_num: '17', pin_signal: PIO1_3/ADC_6/SPI1_SSEL2/SCT0_OUT6/SPI0_SCK/CT32B0_CAP1, label: 'J3[4]/U8[K9]/BRIDGE_SCK', identifier: BRIDGE_T_SCK}
- {pin_num: '49', pin_signal: PIO0_14/SPI0_SSEL0/SCT0_OUT5/CT32B2_MAT1, label: 'J3[1]/U8[K10]/BRIDGE_SSEL', identifier: BRIDGE_T_SSEL}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_gpio.h"
#include "pin_mux.h"
#include "mdio.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins_cm4();
    BOARD_InitDEBUG_UARTPins();
}

void BOARD_InitXMIIPins(void)
{
    /* Enables the clock for the IOCON block. 0 = Disable; 1 = Enable.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Iocon);
    /* Enables the clock for the GPIO0 module */
    CLOCK_EnableClock(kCLOCK_Gpio0);

    gpio_pin_config_t MDC_config = {
        .pinDirection =  kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PIO0_24 (pin 2)  */
    GPIO_PinInit(GPIO, XMDIO_PORT, MDC_PIN, &MDC_config);

    gpio_pin_config_t MDIO_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PIO0_23 (pin 13)  */
    GPIO_PinInit(GPIO, XMDIO_PORT, MDIO_PIN, &MDIO_config);

    IOCON->PIO[XMDIO_PORT][MDC_PIN] = ((IOCON->PIO[XMDIO_PORT][MDC_PIN] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT024 (pin 2) is configured as PIO0_24. */
                         | IOCON_PIO_FUNC(0)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(1));

    IOCON->PIO[XMDIO_PORT][MDIO_PIN] = ((IOCON->PIO[XMDIO_PORT][MDIO_PIN] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT031 (pin 13) is configured as PIO0_31. */
                         | IOCON_PIO_FUNC(0)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(1));
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins_cm4:
- options: {callFromInitBoot: 'true', prefix: BOARD_, coreID: cm4, enableClock: 'true'}
- pin_list:
  - {pin_num: '50', peripheral: SWD, signal: SWO, pin_signal: PIO0_15/SPI0_SSEL1/SWO/CT32B2_MAT2, identifier: '', mode: inactive}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins_cm4
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M4F */
void BOARD_InitPins_cm4(void)
{
    /* Enables the clock for the IOCON block. 0 = Disable; 1 = Enable.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Iocon);

    IOCON->PIO[0][15] = ((IOCON->PIO[0][15] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_MODE_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT015 (pin 50) is configured as SWO. */
                         | IOCON_PIO_FUNC(PIO015_FUNC_ALT2)

                         /* Selects function mode (on-chip pull-up/pull-down resistor control).
                          * : Inactive.
                          * Inactive (no pull-down/pull-up resistor enabled). */
                         | IOCON_PIO_MODE(PIO015_MODE_INACTIVE)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO015_DIGIMODE_DIGITAL));
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitLink2MCUPins:
- options: {callFromInitBoot: 'false', prefix: BOARD_, coreID: cm4, enableClock: 'true'}
- pin_list:
  - {pin_num: '5', peripheral: I2C2, signal: SCL, pin_signal: PIO0_27/I2C2_SCL/CT32B2_CAP0, i2c_slew: i2c}
  - {pin_num: '6', peripheral: I2C2, signal: SDA, pin_signal: PIO0_28/I2C2_SDA/CT32B2_MAT0, i2c_slew: i2c}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitLink2MCUPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M4F */
void BOARD_InitLink2MCUPins(void)
{
    /* Enables the clock for the IOCON block. 0 = Disable; 1 = Enable.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Iocon);

    IOCON->PIO[0][27] = ((IOCON->PIO[0][27] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_I2CSLEW_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT027 (pin 5) is configured as I2C2_SCL. */
                         | IOCON_PIO_FUNC(PIO027_FUNC_ALT1)

                         /* Controls slew rate of I2C pad.
                          * : I2C mode. */
                         | IOCON_PIO_I2CSLEW(PIO027_I2CSLEW_I2C_MODE)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO027_DIGIMODE_DIGITAL));

    IOCON->PIO[0][28] = ((IOCON->PIO[0][28] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_I2CSLEW_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT028 (pin 6) is configured as I2C2_SDA. */
                         | IOCON_PIO_FUNC(PIO028_FUNC_ALT1)

                         /* Controls slew rate of I2C pad.
                          * : I2C mode. */
                         | IOCON_PIO_I2CSLEW(PIO028_I2CSLEW_I2C_MODE)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO028_DIGIMODE_DIGITAL));
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitBUTTONsPins:
- options: {prefix: BOARD_, coreID: cm4, enableClock: 'true'}
- pin_list:
  - {pin_num: '2', peripheral: GPIO, signal: 'PIO0, 24', pin_signal: PIO0_24/I2C0_SDA/CT32B0_CAP1/CT32B0_MAT0, direction: INPUT}
  - {pin_num: '13', peripheral: GPIO, signal: 'PIO0, 31', pin_signal: PIO0_31/ADC_2/U2_CTS/CT32B2_CAP2/CT32B0_CAP3/CT32B0_MAT3, identifier: SW2, direction: INPUT}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBUTTONsPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M4F */
void BOARD_InitBUTTONsPins(void)
{
    /* Enables the clock for the IOCON block. 0 = Disable; 1 = Enable.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Iocon);
    /* Enables the clock for the GPIO0 module */
    CLOCK_EnableClock(kCLOCK_Gpio0);

    gpio_pin_config_t SW1_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO0_24 (pin 2)  */
    GPIO_PinInit(BOARD_SW1_GPIO, BOARD_SW1_PORT, BOARD_SW1_PIN, &SW1_config);

    gpio_pin_config_t SW2_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO0_31 (pin 13)  */
    GPIO_PinInit(BOARD_SW2_GPIO, BOARD_SW2_PORT, BOARD_SW2_PIN, &SW2_config);

    IOCON->PIO[0][24] = ((IOCON->PIO[0][24] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT024 (pin 2) is configured as PIO0_24. */
                         | IOCON_PIO_FUNC(PIO024_FUNC_ALT0)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO024_DIGIMODE_DIGITAL));

    IOCON->PIO[0][31] = ((IOCON->PIO[0][31] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT031 (pin 13) is configured as PIO0_31. */
                         | IOCON_PIO_FUNC(PIO031_FUNC_ALT0)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO031_DIGIMODE_DIGITAL));
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitLEDsPins:
- options: {prefix: BOARD_, coreID: cm4, enableClock: 'true'}
- pin_list:
  - {pin_num: '11', peripheral: GPIO, signal: 'PIO0, 29', pin_signal: PIO0_29/ADC_0/SCT0_OUT2/CT32B0_MAT3/CT32B0_CAP1/CT32B0_MAT1, direction: OUTPUT, gpio_init_state: 'true'}
  - {pin_num: '12', peripheral: GPIO, signal: 'PIO0, 30', pin_signal: PIO0_30/ADC_1/SCT0_OUT3/CT32B0_MAT2/CT32B0_CAP2, direction: OUTPUT, gpio_init_state: 'true'}
  - {pin_num: '13', peripheral: GPIO, signal: 'PIO0, 31', pin_signal: PIO0_31/ADC_2/U2_CTS/CT32B2_CAP2/CT32B0_CAP3/CT32B0_MAT3, identifier: LED_BLUE, direction: OUTPUT,
    gpio_init_state: 'true'}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitLEDsPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M4F */
void BOARD_InitLEDsPins(void)
{
    /* Enables the clock for the IOCON block. 0 = Disable; 1 = Enable.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Iocon);
    /* Enables the clock for the GPIO0 module */
    CLOCK_EnableClock(kCLOCK_Gpio0);

    gpio_pin_config_t LED_RED_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PIO0_29 (pin 11)  */
    GPIO_PinInit(BOARD_LED_RED_GPIO, BOARD_LED_RED_PORT, BOARD_LED_RED_PIN, &LED_RED_config);

    gpio_pin_config_t LED_GREEN_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PIO0_30 (pin 12)  */
    GPIO_PinInit(BOARD_LED_GREEN_GPIO, BOARD_LED_GREEN_PORT, BOARD_LED_GREEN_PIN, &LED_GREEN_config);

    gpio_pin_config_t LED_BLUE_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PIO0_31 (pin 13)  */
    GPIO_PinInit(BOARD_LED_BLUE_GPIO, BOARD_LED_BLUE_PORT, BOARD_LED_BLUE_PIN, &LED_BLUE_config);

    IOCON->PIO[0][29] = ((IOCON->PIO[0][29] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT029 (pin 11) is configured as PIO0_29. */
                         | IOCON_PIO_FUNC(PIO029_FUNC_ALT0)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO029_DIGIMODE_DIGITAL));

    IOCON->PIO[0][30] = ((IOCON->PIO[0][30] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT030 (pin 12) is configured as PIO0_30. */
                         | IOCON_PIO_FUNC(PIO030_FUNC_ALT0)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO030_DIGIMODE_DIGITAL));

    IOCON->PIO[0][31] = ((IOCON->PIO[0][31] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT031 (pin 13) is configured as PIO0_31. */
                         | IOCON_PIO_FUNC(PIO031_FUNC_ALT0)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO031_DIGIMODE_DIGITAL));
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitDEBUG_UARTPins:
- options: {callFromInitBoot: 'true', prefix: BOARD_, coreID: cm4, enableClock: 'true'}
- pin_list:
  - {pin_num: '31', peripheral: USART0, signal: RXD, pin_signal: PIO0_0/U0_RXD/SPI0_SSEL0/CT32B0_CAP0/SCT0_OUT3, direction: INPUT}
  - {pin_num: '32', peripheral: USART0, signal: TXD, pin_signal: PIO0_1/U0_TXD/SPI0_SSEL1/CT32B0_CAP1/SCT0_OUT1, direction: OUTPUT}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitDEBUG_UARTPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M4F */
void BOARD_InitDEBUG_UARTPins(void)
{
    /* Enables the clock for the IOCON block. 0 = Disable; 1 = Enable.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Iocon);

    IOCON->PIO[0][0] = ((IOCON->PIO[0][0] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT00 (pin 31) is configured as U0_RXD. */
                        | IOCON_PIO_FUNC(PIO00_FUNC_ALT1)

                        /* Select Analog/Digital mode.
                         * : Digital mode. */
                        | IOCON_PIO_DIGIMODE(PIO00_DIGIMODE_DIGITAL));

    IOCON->PIO[0][1] = ((IOCON->PIO[0][1] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT01 (pin 32) is configured as U0_TXD. */
                        | IOCON_PIO_FUNC(PIO01_FUNC_ALT1)

                        /* Select Analog/Digital mode.
                         * : Digital mode. */
                        | IOCON_PIO_DIGIMODE(PIO01_DIGIMODE_DIGITAL));
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitSWD_DEBUGPins:
- options: {prefix: BOARD_, coreID: cm4, enableClock: 'true'}
- pin_list:
  - {pin_num: '53', peripheral: SWD, signal: SWDIO, pin_signal: PIO0_17/SPI0_SSEL3/U1_RTS/CT32B3_MAT2/SWDIO, direction: OUTPUT}
  - {pin_num: '52', peripheral: SWD, signal: SWCLK, pin_signal: PIO0_16/SPI0_SSEL2/U1_CTS/CT32B3_MAT1/SWCLK}
  - {pin_num: '50', peripheral: SWD, signal: SWO, pin_signal: PIO0_15/SPI0_SSEL1/SWO/CT32B2_MAT2}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitSWD_DEBUGPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M4F */
void BOARD_InitSWD_DEBUGPins(void)
{
    /* Enables the clock for the IOCON block. 0 = Disable; 1 = Enable.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Iocon);

    IOCON->PIO[0][15] = ((IOCON->PIO[0][15] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT015 (pin 50) is configured as SWO. */
                         | IOCON_PIO_FUNC(PIO015_FUNC_ALT2)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO015_DIGIMODE_DIGITAL));

    IOCON->PIO[0][16] = ((IOCON->PIO[0][16] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT016 (pin 52) is configured as SWCLK. */
                         | IOCON_PIO_FUNC(PIO016_FUNC_ALT5)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO016_DIGIMODE_DIGITAL));

    IOCON->PIO[0][17] = ((IOCON->PIO[0][17] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT017 (pin 53) is configured as SWDIO. */
                         | IOCON_PIO_FUNC(PIO017_FUNC_ALT5)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO017_DIGIMODE_DIGITAL));
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitSPI_BridgePins:
- options: {prefix: BOARD_, coreID: cm4, enableClock: 'true'}
- pin_list:
  - {pin_num: '48', peripheral: SPI0, signal: MISO, pin_signal: PIO0_13/SPI0_MISO/SCT0_OUT4/CT32B2_MAT0, direction: INPUT}
  - {pin_num: '47', peripheral: SPI0, signal: MOSI, pin_signal: PIO0_12/SPI0_MOSI/U1_TXD/CT32B2_MAT3, direction: OUTPUT}
  - {pin_num: '49', peripheral: SPI0, signal: SSEL0, pin_signal: PIO0_14/SPI0_SSEL0/SCT0_OUT5/CT32B2_MAT1, direction: OUTPUT}
  - {pin_num: '17', peripheral: SPI0, signal: SCK, pin_signal: PIO1_3/ADC_6/SPI1_SSEL2/SCT0_OUT6/SPI0_SCK/CT32B0_CAP1, direction: OUTPUT}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitSPI_BridgePins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M4F */
void BOARD_InitSPI_BridgePins(void)
{
    /* Enables the clock for the IOCON block. 0 = Disable; 1 = Enable.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Iocon);

    IOCON->PIO[0][12] = ((IOCON->PIO[0][12] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT012 (pin 47) is configured as SPI0_MOSI. */
                         | IOCON_PIO_FUNC(PIO012_FUNC_ALT1)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO012_DIGIMODE_DIGITAL));

    IOCON->PIO[0][13] = ((IOCON->PIO[0][13] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT013 (pin 48) is configured as SPI0_MISO. */
                         | IOCON_PIO_FUNC(PIO013_FUNC_ALT1)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO013_DIGIMODE_DIGITAL));

    IOCON->PIO[0][14] = ((IOCON->PIO[0][14] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT014 (pin 49) is configured as SPI0_SSEL0. */
                         | IOCON_PIO_FUNC(PIO014_FUNC_ALT1)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO014_DIGIMODE_DIGITAL));

    IOCON->PIO[1][3] = ((IOCON->PIO[1][3] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT13 (pin 17) is configured as SPI0_SCK. */
                        | IOCON_PIO_FUNC(PIO13_FUNC_ALT5)

                        /* Select Analog/Digital mode.
                         * : Digital mode. */
                        | IOCON_PIO_DIGIMODE(PIO13_DIGIMODE_DIGITAL));
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
