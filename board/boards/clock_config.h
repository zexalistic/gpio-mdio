/*
 * Copyright 2018 NXP.
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _CLOCK_CONFIG_H_
#define _CLOCK_CONFIG_H_

#include "fsl_common.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define BOARD_XTAL0_CLK_HZ 12000000U /*!< Board xtal0 frequency in Hz */
#define BOARD_XTAL32K_CLK_HZ 32768U  /*!< Board xtal32K frequency in Hz */

/*******************************************************************************
 ************************ BOARD_InitBootClocks function ************************
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes default configuration of clocks.
 *
 */
void BOARD_InitBootClocks(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

/*******************************************************************************
 ******************** Configuration BOARD_BootClockIRC12M **********************
 ******************************************************************************/
/*******************************************************************************
 * Definitions for BOARD_BootClockIRC12M configuration
 ******************************************************************************/
#define BOARD_BOOTCLOCKIRC12M_CORE_CLOCK 12000000U /*!< Core clock frequency: 12000000Hz */

/*******************************************************************************
 * API for BOARD_BootClockIRC12M configuration
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes configuration of clocks.
 *
 */
void BOARD_BootClockIRC12M(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

/*******************************************************************************
 ******************** Configuration BOARD_BootClockPLL48M **********************
 ******************************************************************************/
/*******************************************************************************
 * Definitions for BOARD_BootClockPLL48M configuration
 ******************************************************************************/
#define BOARD_BOOTCLOCKPLL48M_CORE_CLOCK 48000000U /*!< Core clock frequency: 48000000Hz */

/*******************************************************************************
 * API for BOARD_BootClockPLL48M configuration
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes configuration of clocks.
 *
 */
void BOARD_BootClockPLL48M(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

/*******************************************************************************
 ******************** Configuration BOARD_BootClockPLL96M **********************
 ******************************************************************************/
/*******************************************************************************
 * Definitions for BOARD_BootClockPLL96M configuration
 ******************************************************************************/
#define BOARD_BOOTCLOCKPLL96M_CORE_CLOCK 96000000U /*!< Core clock frequency: 96000000Hz */

/*******************************************************************************
 * API for BOARD_BootClockPLL96M configuration
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes configuration of clocks.
 *
 */
void BOARD_BootClockPLL96M(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

/*******************************************************************************
 ******************** Configuration BOARD_BootClockPLL100M *********************
 ******************************************************************************/
/*******************************************************************************
 * Definitions for BOARD_BootClockPLL100M configuration
 ******************************************************************************/
#define BOARD_BOOTCLOCKPLL100M_CORE_CLOCK 100000000U /*!< Core clock frequency: 100000000Hz */

/*******************************************************************************
 * API for BOARD_BootClockPLL100M configuration
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes configuration of clocks.
 *
 */
void BOARD_BootClockPLL100M(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

#endif /* _CLOCK_CONFIG_H_ */
