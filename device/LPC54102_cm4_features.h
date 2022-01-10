/*
** ###################################################################
**     Version:             rev. 1.0, 2016-05-09
**     Build:               b190304
**
**     Abstract:
**         Chip specific module features.
**
**     Copyright 2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2019 NXP
**     All rights reserved.
**
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2016-05-09)
**         Initial version.
**
** ###################################################################
*/

#ifndef _LPC54102_cm4_FEATURES_H_
#define _LPC54102_cm4_FEATURES_H_

/* SOC module features */

/* @brief ADC availability on the SoC. */
#define FSL_FEATURE_SOC_ADC_COUNT (1)
/* @brief ASYNC_SYSCON availability on the SoC. */
#define FSL_FEATURE_SOC_ASYNC_SYSCON_COUNT (1)
/* @brief CRC availability on the SoC. */
#define FSL_FEATURE_SOC_CRC_COUNT (1)
/* @brief CTIMER availability on the SoC. */
#define FSL_FEATURE_SOC_CTIMER_COUNT (5)
/* @brief DMA availability on the SoC. */
#define FSL_FEATURE_SOC_DMA_COUNT (1)
/* @brief GINT availability on the SoC. */
#define FSL_FEATURE_SOC_GINT_COUNT (2)
/* @brief GPIO availability on the SoC. */
#define FSL_FEATURE_SOC_GPIO_COUNT (1)
/* @brief I2C availability on the SoC. */
#define FSL_FEATURE_SOC_I2C_COUNT (3)
/* @brief INPUTMUX availability on the SoC. */
#define FSL_FEATURE_SOC_INPUTMUX_COUNT (1)
/* @brief IOCON availability on the SoC. */
#define FSL_FEATURE_SOC_IOCON_COUNT (1)
/* @brief MAILBOX availability on the SoC. */
#define FSL_FEATURE_SOC_MAILBOX_COUNT (1)
/* @brief MRT availability on the SoC. */
#define FSL_FEATURE_SOC_MRT_COUNT (1)
/* @brief PINT availability on the SoC. */
#define FSL_FEATURE_SOC_PINT_COUNT (1)
/* @brief RIT availability on the SoC. */
#define FSL_FEATURE_SOC_RIT_COUNT (1)
/* @brief RTC availability on the SoC. */
#define FSL_FEATURE_SOC_RTC_COUNT (1)
/* @brief SCT availability on the SoC. */
#define FSL_FEATURE_SOC_SCT_COUNT (1)
/* @brief SPI availability on the SoC. */
#define FSL_FEATURE_SOC_SPI_COUNT (2)
/* @brief SYSCON availability on the SoC. */
#define FSL_FEATURE_SOC_SYSCON_COUNT (1)
/* @brief USART availability on the SoC. */
#define FSL_FEATURE_SOC_USART_COUNT (4)
/* @brief UTICK availability on the SoC. */
#define FSL_FEATURE_SOC_UTICK_COUNT (1)
/* @brief VFIFO availability on the SoC. */
#define FSL_FEATURE_SOC_VFIFO_COUNT (1)
/* @brief WWDT availability on the SoC. */
#define FSL_FEATURE_SOC_WWDT_COUNT (1)

/* ADC module features */

/* @brief Do not has input select (register INSEL). */
#define FSL_FEATURE_ADC_HAS_NO_INSEL  (1)
/* @brief Has ASYNMODE bitfile in CTRL reigster. */
#define FSL_FEATURE_ADC_HAS_CTRL_ASYNMODE (1)
/* @brief Has ASYNMODE bitfile in CTRL reigster. */
#define FSL_FEATURE_ADC_HAS_CTRL_RESOL (1)
/* @brief Has ASYNMODE bitfile in CTRL reigster. */
#define FSL_FEATURE_ADC_HAS_CTRL_BYPASSCAL (1)
/* @brief Has ASYNMODE bitfile in CTRL reigster. */
#define FSL_FEATURE_ADC_HAS_CTRL_TSAMP (1)
/* @brief Has ASYNMODE bitfile in CTRL reigster. */
#define FSL_FEATURE_ADC_HAS_CTRL_LPWRMODE (0)
/* @brief Has ASYNMODE bitfile in CTRL reigster. */
#define FSL_FEATURE_ADC_HAS_CTRL_CALMODE (0)
/* @brief Has startup register. */
#define FSL_FEATURE_ADC_HAS_STARTUP_REG (1)
/* @brief Has ADTrim register */
#define FSL_FEATURE_ADC_HAS_TRIM_REG (0)
/* @brief Has Calibration register. */
#define FSL_FEATURE_ADC_HAS_CALIB_REG (1)

/* DMA module features */

/* @brief Number of channels */
#define FSL_FEATURE_DMA_NUMBER_OF_CHANNELS (22)
/* @brief Align size of DMA descriptor */
#define FSL_FEATURE_DMA_DESCRIPTOR_ALIGN_SIZE (512)
/* @brief DMA head link descriptor table align size */
#define FSL_FEATURE_DMA_LINK_DESCRIPTOR_ALIGN_SIZE (16U)

/* MAILBOX module features */

/* @brief Mailbox side for current core */
#define FSL_FEATURE_MAILBOX_SIDE_A (1)
/* @brief Mailbox has no reset control */
#define FSL_FEATURE_MAILBOX_HAS_NO_RESET (1)

/* MRT module features */

/* @brief number of channels. */
#define FSL_FEATURE_MRT_NUMBER_OF_CHANNELS  (4)

/* interrupt module features */

/* @brief Lowest interrupt request number. */
#define FSL_FEATURE_INTERRUPT_IRQ_MIN (-14)
/* @brief Highest interrupt request number. */
#define FSL_FEATURE_INTERRUPT_IRQ_MAX (105)

/* PINT module features */

/* @brief Number of connected outputs */
#define FSL_FEATURE_PINT_NUMBER_OF_CONNECTED_OUTPUTS (8)

/* RTC module features */

/* @brief Has CTRL:RTC_OSC_PD Bit */
#define FSL_FEATURE_RTC_HAS_NO_OSC_PD (1)
/* @brief RTC has no reset control */
#define FSL_FEATURE_RTC_HAS_NO_RESET (1)

/* SCT module features */

/* @brief Number of events */
#define FSL_FEATURE_SCT_NUMBER_OF_EVENTS (13)
/* @brief Number of states */
#define FSL_FEATURE_SCT_NUMBER_OF_STATES (13)
/* @brief Number of match capture */
#define FSL_FEATURE_SCT_NUMBER_OF_MATCH_CAPTURE (13)
/* @brief Number of outputs */
#define FSL_FEATURE_SCT_NUMBER_OF_OUTPUTS (8)

/* SYSCON module features */

#if defined(CPU_LPC54102J256BD64) || defined(CPU_LPC54102J256UK49)
    /* @brief Pointer to ROM IAP entry functions */
    #define FSL_FEATURE_SYSCON_IAP_ENTRY_LOCATION (0x03000205)
    /* @brief Flash page size in bytes */
    #define FSL_FEATURE_SYSCON_FLASH_PAGE_SIZE_BYTES (256)
    /* @brief Flash sector size in bytes */
    #define FSL_FEATURE_SYSCON_FLASH_SECTOR_SIZE_BYTES (32768)
    /* @brief Flash size in bytes */
    #define FSL_FEATURE_SYSCON_FLASH_SIZE_BYTES (262144)
    /* @brief IAP has Flash read & write function */
    #define FSL_FEATURE_IAP_HAS_FLASH_FUNCTION (1)
    /* @brief IAP has read Flash signature function  */
    #define FSL_FEATURE_IAP_HAS_FLASH_SIGNATURE_READ (1)
    /* @brief IAP has read extended Flash signature function */
    #define FSL_FEATURE_IAP_HAS_FLASH_EXTENDED_SIGNATURE_READ (0)
#elif defined(CPU_LPC54102J512BD64) || defined(CPU_LPC54102J512UK49)
    /* @brief Pointer to ROM IAP entry functions */
    #define FSL_FEATURE_SYSCON_IAP_ENTRY_LOCATION (0x03000205)
    /* @brief Flash page size in bytes */
    #define FSL_FEATURE_SYSCON_FLASH_PAGE_SIZE_BYTES (256)
    /* @brief Flash sector size in bytes */
    #define FSL_FEATURE_SYSCON_FLASH_SECTOR_SIZE_BYTES (32768)
    /* @brief Flash size in bytes */
    #define FSL_FEATURE_SYSCON_FLASH_SIZE_BYTES (524288)
    /* @brief IAP has Flash read & write function */
    #define FSL_FEATURE_IAP_HAS_FLASH_FUNCTION (1)
    /* @brief IAP has read Flash signature function  */
    #define FSL_FEATURE_IAP_HAS_FLASH_SIGNATURE_READ (1)
    /* @brief IAP has read extended Flash signature function */
    #define FSL_FEATURE_IAP_HAS_FLASH_EXTENDED_SIGNATURE_READ (0)
#endif /* defined(CPU_LPC54102J256BD64) || defined(CPU_LPC54102J256UK49) */

/* SysTick module features */

/* @brief Systick has external reference clock. */
#define FSL_FEATURE_SYSTICK_HAS_EXT_REF (0)
/* @brief Systick external reference clock is core clock divided by this value. */
#define FSL_FEATURE_SYSTICK_EXT_REF_CORE_DIV (0)

/* VFIFO module features */

/* @brief FIFO entries for USART receive */
#define FSL_FEATURE_VFIFO_USART_RX_TOTAL (16)
/* @brief FIFO entries for USART transmit */
#define FSL_FEATURE_VFIFO_USART_TX_TOTAL (16)
/* @brief FIFO entries for SPI receive */
#define FSL_FEATURE_VFIFO_SPI_RX_TOTAL (8)
/* @brief FIFO entries for SPI transmit */
#define FSL_FEATURE_VFIFO_SPI_TX_TOTAL (8)

#endif /* _LPC54102_cm4_FEATURES_H_ */

