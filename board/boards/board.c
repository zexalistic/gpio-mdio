/*
 * Copyright 2017-2018 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdint.h>
#include "fsl_common.h"
#include "clock_config.h"
#include "board.h"
#include "fsl_debug_console.h"

/*******************************************************************************
 * Variables
 ******************************************************************************/

/* Clock rate on the CLKIN pin */
const uint32_t ExtClockIn = BOARD_EXTCLKINRATE;

/*******************************************************************************
 * Code
 ******************************************************************************/
/* Initialize debug console. */
status_t BOARD_InitDebugConsole(void)
{
    status_t result;
    /* attach 12 MHz clock to USART0 (debug console) */
    CLOCK_AttachClk(BOARD_DEBUG_UART_CLK_ATTACH);
    RESET_PeripheralReset(BOARD_DEBUG_UART_RST);
    result = DbgConsole_Init(BOARD_DEBUG_UART_INSTANCE, BOARD_DEBUG_UART_BAUDRATE, BOARD_DEBUG_UART_TYPE,
                             BOARD_DEBUG_UART_CLK_FREQ);
    assert(kStatus_Success == result);
    return result;
}
status_t BOARD_InitDebugConsole_Core1(void)
{
    status_t result;
    /* attach 12 MHz clock to USART2 (debug console) */
    CLOCK_AttachClk(BOARD_DEBUG_UART_CLK_ATTACH_CORE1);
    RESET_PeripheralReset(BOARD_DEBUG_UART_RST_CORE1);
    result = DbgConsole_Init(BOARD_DEBUG_UART_INSTANCE_CORE1, BOARD_DEBUG_UART_BAUDRATE_CORE1,
                             BOARD_DEBUG_UART_TYPE_CORE1, BOARD_DEBUG_UART_CLK_FREQ_CORE1);
    assert(kStatus_Success == result);
    return result;
}
