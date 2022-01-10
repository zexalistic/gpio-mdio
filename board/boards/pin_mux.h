/*
 * Copyright 2018-2019 NXP.
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO015_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 2. */
#define PIO015_FUNC_ALT2 0x02u
/*!
 * @brief
 * Selects function mode (on-chip pull-up/pull-down resistor control).
 * : Inactive.
 * Inactive (no pull-down/pull-up resistor enabled).
 */
#define PIO015_MODE_INACTIVE 0x00u

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins_cm4(void); /* Function assigned for the Cortex-M4F */

#define PIO027_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO027_FUNC_ALT1 0x01u        /*!<@brief Selects pin function.: Alternative connection 1. */
#define PIO027_I2CSLEW_I2C_MODE 0x00u /*!<@brief Controls slew rate of I2C pad.: I2C mode. */
#define PIO028_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO028_FUNC_ALT1 0x01u        /*!<@brief Selects pin function.: Alternative connection 1. */
#define PIO028_I2CSLEW_I2C_MODE 0x00u /*!<@brief Controls slew rate of I2C pad.: I2C mode. */

/*! @name I2C2_SCL (number 5), J3[9]/JS1[1]/BRIDGE_SCL
  @{ */
/* @} */

/*! @name I2C2_SDA (number 6), J3[10]/JS2[1]/BRIDGE_SDA
  @{ */
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitLink2MCUPins(void); /* Function assigned for the Cortex-M4F */

#define PIO024_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO024_FUNC_ALT0 0x00u        /*!<@brief Selects pin function.: Alternative connection 0. */
#define PIO031_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO031_FUNC_ALT0 0x00u        /*!<@brief Selects pin function.: Alternative connection 0. */

/*! @name PIO0_24 (number 2), J1[3]/SW1/P0_24-I2C0_SDA-WAKEUP
  @{ */
#define BOARD_SW1_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_SW1_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_SW1_PIN 24U   /*!<@brief 0U pin index: 24 */
                            /* @} */

/*! @name PIO0_31 (number 13), SW2/D2[3]/P0_31-CT32B0_MAT3-ISP_EN-BLUE
  @{ */
#define BOARD_SW2_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_SW2_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_SW2_PIN 31U   /*!<@brief 0U pin index: 31 */
                            /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitBUTTONsPins(void); /* Function assigned for the Cortex-M4F */

#define PIO029_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO029_FUNC_ALT0 0x00u        /*!<@brief Selects pin function.: Alternative connection 0. */
#define PIO030_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO030_FUNC_ALT0 0x00u        /*!<@brief Selects pin function.: Alternative connection 0. */
#define PIO031_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO031_FUNC_ALT0 0x00u        /*!<@brief Selects pin function.: Alternative connection 0. */

/*! @name PIO0_29 (number 11), J1[12]/D2[1]/P0_29-CT32B0_MAT1-RED
  @{ */
#define BOARD_LED_RED_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_LED_RED_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_LED_RED_PIN 29U   /*!<@brief 0U pin index: 29 */
                                /* @} */

/*! @name PIO0_30 (number 12), J1[14]/D2[4]/P0_30-CT32B0_MAT2-GRN
  @{ */
#define BOARD_LED_GREEN_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_LED_GREEN_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_LED_GREEN_PIN 30U   /*!<@brief 0U pin index: 30 */
                                  /* @} */

/*! @name PIO0_31 (number 13), SW2/D2[3]/P0_31-CT32B0_MAT3-ISP_EN-BLUE
  @{ */
#define BOARD_LED_BLUE_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_LED_BLUE_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_LED_BLUE_PIN 31U   /*!<@brief 0U pin index: 31 */
                                 /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitLEDsPins(void); /* Function assigned for the Cortex-M4F */

#define PIO00_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO00_FUNC_ALT1 0x01u        /*!<@brief Selects pin function.: Alternative connection 1. */
#define PIO01_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO01_FUNC_ALT1 0x01u        /*!<@brief Selects pin function.: Alternative connection 1. */

/*! @name U0_RXD (number 31), U13[4]/TO_MUX_P0_0-ISP_RX
  @{ */
/* @} */

/*! @name U0_TXD (number 32), U15[3]/U4[4]/P0_1-ISP_TX
  @{ */
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitDEBUG_UARTPins(void); /* Function assigned for the Cortex-M4F */

#define PIO015_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO015_FUNC_ALT2 0x02u        /*!<@brief Selects pin function.: Alternative connection 2. */
#define PIO016_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO016_FUNC_ALT5 0x05u        /*!<@brief Selects pin function.: Alternative connection 5. */
#define PIO017_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO017_FUNC_ALT5 0x05u        /*!<@brief Selects pin function.: Alternative connection 5. */

/*! @name SWDIO (number 53), P1[2]/U10[4]/IF_TMS_SWDIO
  @{ */
/* @} */

/*! @name SWCLK (number 52), U3[4]/TCK-SWDCLK_TRGT
  @{ */
/* @} */

/*! @name SWO (number 50), U3[12]/TDO-SWO_TRGT
  @{ */
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitSWD_DEBUGPins(void); /* Function assigned for the Cortex-M4F */

#define PIO012_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO012_FUNC_ALT1 0x01u        /*!<@brief Selects pin function.: Alternative connection 1. */
#define PIO013_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO013_FUNC_ALT1 0x01u        /*!<@brief Selects pin function.: Alternative connection 1. */
#define PIO014_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO014_FUNC_ALT1 0x01u        /*!<@brief Selects pin function.: Alternative connection 1. */
#define PIO13_DIGIMODE_DIGITAL 0x01u  /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO13_FUNC_ALT5 0x05u         /*!<@brief Selects pin function.: Alternative connection 5. */

/*! @name SPI0_MISO (number 48), J3[3]/U8[J1]/BRIDGE_MISO
  @{ */
/* @} */

/*! @name SPI0_MOSI (number 47), J3[2]/U8[J2]/BRIDGE_MOSI
  @{ */
/* @} */

/*! @name SPI0_SSEL0 (number 49), J3[1]/U8[K10]/BRIDGE_SSEL
  @{ */
/* @} */

/*! @name SPI0_SCK (number 17), J3[4]/U8[K9]/BRIDGE_SCK
  @{ */
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitSPI_BridgePins(void); /* Function assigned for the Cortex-M4F */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
