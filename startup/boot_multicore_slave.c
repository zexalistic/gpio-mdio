/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016 - 2017 , NXP
 * All rights reserved.
 *
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#if defined(__MULTICORE_MASTER_SLAVE_M0SLAVE) || defined(__MULTICORE_MASTER_SLAVE_M4SLAVE)
#if defined(__USE_LPCOPEN)
#include "chip.h"
#else
#include <stdint.h>
#define SYSCON_BASE ((uint32_t)0x40000000)
#if defined(__LPC5410X__)
#define CPBOOT (((volatile uint32_t *)(SYSCON_BASE + 0x304)))
#define CPSTACK (((volatile uint32_t *)(SYSCON_BASE + 0x308)))
#define CPUCTRL (((volatile uint32_t *)(SYSCON_BASE + 0x300)))
#elif defined(__LPC5411X__)
#define CPBOOT (((volatile uint32_t *)(SYSCON_BASE + 0x804)))
#define CPSTACK (((volatile uint32_t *)(SYSCON_BASE + 0x808)))
#define CPUCTRL (((volatile uint32_t *)(SYSCON_BASE + 0x800)))
#else
#error Unrecognised MCU - cannot resolve Dual-CPU related registers
#endif
#define CPUCTRL_KEY ((uint32_t)(0x0000C0C4 << 16))
#define CM4_CLK_ENA (1 << 2)
#define CM0_CLK_ENA (1 << 3)
#define CM4_RESET_ENA (1 << 4)
#define CM0_RESET_ENA (1 << 5)
#define CM4_SLEEPCON (1 << 6)

#if defined(CORE_M4)
void Chip_CPU_CM0Boot(uint32_t *coentry, uint32_t *costackptr)
{
    volatile uint32_t *u32REG, u32Val;

    *CPSTACK = (uint32_t)costackptr;
    *CPBOOT = (uint32_t)coentry;

    u32REG = (uint32_t *)CPUCTRL;
    u32Val = *u32REG;

    // Enable slave clock and reset
    u32Val |= (CPUCTRL_KEY | ((CM0_CLK_ENA | CM0_RESET_ENA) & 0x7F));
    *u32REG = u32Val;

    // Clear slave reset
    u32Val &= ~CM0_RESET_ENA;
    *u32REG = u32Val;
}
#else  // !defined CORE_M4
void Chip_CPU_CM4Boot(uint32_t *coentry, uint32_t *costackptr)
{
    volatile uint32_t *u32REG, u32Val;

    *CPSTACK = (uint32_t)costackptr;
    *CPBOOT = (uint32_t)coentry;

    u32REG = (uint32_t *)CPUCTRL;
    u32Val = *u32REG;

    // Enable slave clock and reset
    u32Val |= (CPUCTRL_KEY | ((CM4_CLK_ENA | CM4_RESET_ENA) & 0x7F));
    *u32REG = u32Val;

    // Clear slave reset
    u32Val &= ~CM0_RESET_ENA;
    *u32REG = u32Val;
}
#endif // defined CORE_M4
#endif // __USE_LPCOPEN

#if defined(CORE_M4)
extern uint8_t __core_m0slave_START__;
#else
extern uint8_t __core_m4slave_START__;
#endif

void boot_multicore_slave(void)
{
#if defined(CORE_M4)
    unsigned int *slavevectortable_ptr = (unsigned int *)&__core_m0slave_START__;
#else
    unsigned int *slavevectortable_ptr = (unsigned int *)&__core_m4slave_START__;
#endif

    volatile unsigned int resetaddr;
    volatile unsigned int spaddr;
    spaddr = *slavevectortable_ptr;
    resetaddr = *(slavevectortable_ptr + 1);

#if defined(CORE_M4)
    Chip_CPU_CM0Boot((uint32_t *)resetaddr, (uint32_t *)spaddr);
#else
    Chip_CPU_CM4Boot((uint32_t *)resetaddr, (uint32_t *)spaddr);
#endif
}
#endif // defined (__MULTICORE_MASTER_SLAVE_M0SLAVE) ||
       //         (__MULTICORE_MASTER_SLAVE_M4SLAVE)
