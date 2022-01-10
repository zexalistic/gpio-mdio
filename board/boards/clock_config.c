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
/*
 * How to set up clock using clock driver functions:
 *
 * 1. Setup clock sources.
 *
 * 2. Setup voltage for the fastest of the clock outputs
 *
 * 3. Set up wait states of the flash.
 *
 * 4. Set up all dividers.
 *
 * 5. Set up all selectors to provide selected clocks.
 */

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Clocks v4.1
processor: LPC54102J512
package_id: LPC54102J512BD64
mcu_data: ksdk2_0
processor_version: 4.0.0
board: LPCXpresso54102
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

#include "fsl_power.h"
#include "fsl_clock.h"
#include "clock_config.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/
/* System clock frequency. */
extern uint32_t SystemCoreClock;

/*******************************************************************************
 ************************ BOARD_InitBootClocks function ************************
 ******************************************************************************/
void BOARD_InitBootClocks(void)
{
    BOARD_BootClockPLL96M();
}

/*******************************************************************************
 ******************** Configuration BOARD_BootClockIRC12M **********************
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!Configuration
name: BOARD_BootClockIRC12M
outputs:
- {id: ASYNCAPB_clock.outFreq, value: 12 MHz}
- {id: FRG_clock.outFreq, value: 12 MHz}
- {id: MAIN_clock.outFreq, value: 12 MHz}
- {id: System_clock.outFreq, value: 12 MHz}
settings:
- {id: SYSCON.TRACECLKDIV.scale, value: '0', locked: true}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/*******************************************************************************
 * Variables for BOARD_BootClockIRC12M configuration
 ******************************************************************************/
/*******************************************************************************
 * Code for BOARD_BootClockIRC12M configuration
 ******************************************************************************/
void BOARD_BootClockIRC12M(void)
{
    /*!< Set up the clock sources */
    /*!< Set up IRC */
    POWER_DisablePD(kPDRUNCFG_PD_IRC_OSC); /*!< Ensure IRC OSC is on */
    POWER_DisablePD(kPDRUNCFG_PD_IRC);     /*!< Ensure IRC is on */
    CLOCK_AttachClk(kIRC12M_to_MAIN_CLK);  /*!< Switch to IRC 12MHz first to ensure we can change voltage without
                                              accidentally  being below the voltage for current speed */

    /*!< PLL is in power_down mode */

    POWER_SetVoltageForFreq(
        12000000U); /*!< Set voltage for the one of the fastest clock outputs: System clock output */
    CLOCK_SetFLASHAccessCyclesForFreq(12000000U); /*!< Set FLASH wait states for core */

    /*!< Set up dividers */
    CLOCK_SetClkDiv(kCLOCK_DivAhbClk, 1U, false); /*!< Set AHBCLKDIV divider to value 1 */

    /*!< Set up clock selectors - Attach clocks to the peripheries */
    CLOCK_AttachClk(kIRC12M_to_MAIN_CLK); /*!< Switch MAIN_CLK to IRC12M */

    /*< Set SystemCoreClock variable. */
    SystemCoreClock = BOARD_BOOTCLOCKIRC12M_CORE_CLOCK;
}

/*******************************************************************************
 ******************** Configuration BOARD_BootClockPLL48M **********************
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!Configuration
name: BOARD_BootClockPLL48M
outputs:
- {id: ASYNCAPB_clock.outFreq, value: 48 MHz}
- {id: FRG_clock.outFreq, value: 48 MHz}
- {id: MAIN_clock.outFreq, value: 48 MHz}
- {id: System_clock.outFreq, value: 48 MHz}
settings:
- {id: PLL_Mode, value: Fractional}
- {id: SYSCON.MAINCLKSELB.sel, value: SYSCON.PLL_BYPASS}
- {id: SYSCON.M_MULT.scale, value: '49152', locked: true}
- {id: SYSCON.N_DIV.scale, value: '3', locked: true}
- {id: SYSCON.PDEC.scale, value: '2', locked: true}
- {id: SYSCON.PLL_BYPASS.sel, value: SYSCON.DIRECTO}
- {id: SYSCON.TRACECLKDIV.scale, value: '0', locked: true}
- {id: SYSCON_SYSPLLCTRL_BYPASSCCODIV2_CFG, value: Enabled}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/*******************************************************************************
 * Variables for BOARD_BootClockPLL48M configuration
 ******************************************************************************/
/*******************************************************************************
 * Code for BOARD_BootClockPLL48M configuration
 ******************************************************************************/
void BOARD_BootClockPLL48M(void)
{
    /*!< Set up the clock sources */
    /*!< Set up IRC */
    POWER_DisablePD(kPDRUNCFG_PD_IRC_OSC); /*!< Ensure IRC OSC is on */
    POWER_DisablePD(kPDRUNCFG_PD_IRC);     /*!< Ensure IRC is on */
    CLOCK_AttachClk(kIRC12M_to_MAIN_CLK);  /*!< Switch to IRC 12MHz first to ensure we can change voltage without
                                              accidentally  being below the voltage for current speed */

    /*!< Set up PLL */
    CLOCK_AttachClk(kIRC12M_to_SYS_PLL);   /*!< Switch SYSPLLCLKSEL to IRC12M */
    POWER_DisablePD(kPDRUNCFG_PD_SYS_PLL); /*!< Ensure PLL is on  */
    const pll_setup_t pllSetup = {.syspllctrl = SYSCON_SYSPLLCTRL_UPLIMOFF_MASK | SYSCON_SYSPLLCTRL_BYPASSCCODIV2_MASK,
                                  .syspllndec = SYSCON_SYSPLLNDEC_NDEC(1U),
                                  .syspllpdec = SYSCON_SYSPLLPDEC_PDEC(98U),
                                  .syspllssctrl = {0x0U, (SYSCON_SYSPLLSSCTRL1_MD(49152U) | (uint32_t)(kSS_MF_512) |
                                                          (uint32_t)(kSS_MR_K0) | (uint32_t)(kSS_MC_NOC))},
                                  .pllRate      = 48000000U,
                                  .flags        = PLL_SETUPFLAG_POWERUP};
    CLOCK_SetPLLFreq(&pllSetup); /*!< Configure PLL to the desired values */

    /* PLL in Fractional/Spread spectrum mode */
    /* SYSTICK is used for waiting for PLL stabilization */

    CLOCK_SetClkDiv(kCLOCK_DivSystickClk, 0U, true);  /*!< Reset SysTick divider counter and halt it */
    CLOCK_SetClkDiv(kCLOCK_DivSystickClk, 3U, false); /*!< Set SysTick divider to value 3 */
    SysTick->LOAD = 27999UL;                          /*!< Set SysTick count value */
    SysTick->VAL  = 0UL;                              /*!< Reset current count value */
    SysTick->CTRL = SysTick_CTRL_ENABLE_Msk;          /*!< Enable SYSTICK */
    while ((SysTick->CTRL & SysTick_CTRL_COUNTFLAG_Msk) != SysTick_CTRL_COUNTFLAG_Msk)
    {
    }                    /*!< Waiting 7ms for PLL stabilization */
    SysTick->CTRL = 0UL; /*!< Stop SYSTICK */

    POWER_SetVoltageForFreq(
        48000000U); /*!< Set voltage for the one of the fastest clock outputs: System clock output */
    CLOCK_SetFLASHAccessCyclesForFreq(48000000U); /*!< Set FLASH wait states for core */

    /*!< Set up dividers */
    CLOCK_SetClkDiv(kCLOCK_DivAhbClk, 1U, false); /*!< Set AHBCLKDIV divider to value 1 */

    /*!< Set up clock selectors - Attach clocks to the peripheries */
    CLOCK_AttachClk(kSYS_PLL_OUT_to_MAIN_CLK); /*!< Switch MAIN_CLK to SYS_PLL_OUT */

    /*< Set SystemCoreClock variable. */
    SystemCoreClock = BOARD_BOOTCLOCKPLL48M_CORE_CLOCK;
}

/*******************************************************************************
 ******************** Configuration BOARD_BootClockPLL96M **********************
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!Configuration
name: BOARD_BootClockPLL96M
called_from_default_init: true
outputs:
- {id: ASYNCAPB_clock.outFreq, value: 96 MHz}
- {id: FRG_clock.outFreq, value: 96 MHz}
- {id: MAIN_clock.outFreq, value: 96 MHz}
- {id: System_clock.outFreq, value: 96 MHz}
settings:
- {id: PLL_Mode, value: Fractional}
- {id: ASYNC_SYSCON.ASYNCCLKDIV.scale, value: '1', locked: true}
- {id: ASYNC_SYSCON.FRGCTRL_DIV.scale, value: '256', locked: true}
- {id: SYSCON.DIRECTO.sel, value: SYSCON.PLL}
- {id: SYSCON.MAINCLKSELB.sel, value: SYSCON.PLL_BYPASS}
- {id: SYSCON.M_MULT.scale, value: '49152', locked: true}
- {id: SYSCON.N_DIV.scale, value: '3', locked: true}
- {id: SYSCON.PDEC.scale, value: '2', locked: true}
- {id: SYSCON.PLL_BYPASS.sel, value: SYSCON.DIRECTO}
- {id: SYSCON.TRACECLKDIV.scale, value: '0', locked: true}
- {id: SYSCON_SYSPLLCTRL_BYPASSCCODIV2_CFG, value: Enabled}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/*******************************************************************************
 * Variables for BOARD_BootClockPLL96M configuration
 ******************************************************************************/
/*******************************************************************************
 * Code for BOARD_BootClockPLL96M configuration
 ******************************************************************************/
void BOARD_BootClockPLL96M(void)
{
    /*!< Set up the clock sources */
    /*!< Set up IRC */
    POWER_DisablePD(kPDRUNCFG_PD_IRC_OSC); /*!< Ensure IRC OSC is on */
    POWER_DisablePD(kPDRUNCFG_PD_IRC);     /*!< Ensure IRC is on */
    CLOCK_AttachClk(kIRC12M_to_MAIN_CLK);  /*!< Switch to IRC 12MHz first to ensure we can change voltage without
                                              accidentally  being below the voltage for current speed */

    /*!< Set up PLL */
    CLOCK_AttachClk(kIRC12M_to_SYS_PLL);   /*!< Switch SYSPLLCLKSEL to IRC12M */
    POWER_DisablePD(kPDRUNCFG_PD_SYS_PLL); /*!< Ensure PLL is on  */
    const pll_setup_t pllSetup = {.syspllctrl = SYSCON_SYSPLLCTRL_UPLIMOFF_MASK | SYSCON_SYSPLLCTRL_BYPASSCCODIV2_MASK |
                                                SYSCON_SYSPLLCTRL_DIRECTO_MASK,
                                  .syspllndec   = SYSCON_SYSPLLNDEC_NDEC(1U),
                                  .syspllpdec   = SYSCON_SYSPLLPDEC_PDEC(98U),
                                  .syspllssctrl = {0x0U, (SYSCON_SYSPLLSSCTRL1_MD(49152U) | (uint32_t)(kSS_MF_512) |
                                                          (uint32_t)(kSS_MR_K0) | (uint32_t)(kSS_MC_NOC))},
                                  .pllRate      = 96000000U,
                                  .flags        = PLL_SETUPFLAG_POWERUP};
    CLOCK_SetPLLFreq(&pllSetup); /*!< Configure PLL to the desired values */

    /* PLL in Fractional/Spread spectrum mode */
    /* SYSTICK is used for waiting for PLL stabilization */

    CLOCK_SetClkDiv(kCLOCK_DivSystickClk, 0U, true);  /*!< Reset SysTick divider counter and halt it */
    CLOCK_SetClkDiv(kCLOCK_DivSystickClk, 3U, false); /*!< Set SysTick divider to value 3 */
    SysTick->LOAD = 27999UL;                          /*!< Set SysTick count value */
    SysTick->VAL  = 0UL;                              /*!< Reset current count value */
    SysTick->CTRL = SysTick_CTRL_ENABLE_Msk;          /*!< Enable SYSTICK */
    while ((SysTick->CTRL & SysTick_CTRL_COUNTFLAG_Msk) != SysTick_CTRL_COUNTFLAG_Msk)
    {
    }                    /*!< Waiting 7ms for PLL stabilization */
    SysTick->CTRL = 0UL; /*!< Stop SYSTICK */

    POWER_SetVoltageForFreq(
        96000000U); /*!< Set voltage for the one of the fastest clock outputs: System clock output */
    CLOCK_SetFLASHAccessCyclesForFreq(96000000U); /*!< Set FLASH wait states for core */

    /*!< Set up dividers */
    CLOCK_SetClkDiv(kCLOCK_DivAhbClk, 1U, false); /*!< Set AHBCLKDIV divider to value 1 */

    /*!< Set up clock selectors - Attach clocks to the peripheries */
    CLOCK_AttachClk(kSYS_PLL_OUT_to_MAIN_CLK); /*!< Switch MAIN_CLK to SYS_PLL_OUT */

    /*< Set SystemCoreClock variable. */
    SystemCoreClock = BOARD_BOOTCLOCKPLL96M_CORE_CLOCK;
}

/*******************************************************************************
 ******************** Configuration BOARD_BootClockPLL100M *********************
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!Configuration
name: BOARD_BootClockPLL100M
outputs:
- {id: ASYNCAPB_clock.outFreq, value: 100 MHz}
- {id: FRG_clock.outFreq, value: 100 MHz}
- {id: MAIN_clock.outFreq, value: 100 MHz}
- {id: System_clock.outFreq, value: 100 MHz}
settings:
- {id: PLL_Mode, value: Fractional}
- {id: ASYNC_SYSCON.ASYNCCLKDIV.scale, value: '1', locked: true}
- {id: ASYNC_SYSCON.FRGCTRL_DIV.scale, value: '256', locked: true}
- {id: SYSCON.DIRECTO.sel, value: SYSCON.PLL}
- {id: SYSCON.MAINCLKSELB.sel, value: SYSCON.PLL_BYPASS}
- {id: SYSCON.M_MULT.scale, value: '102400', locked: true}
- {id: SYSCON.N_DIV.scale, value: '6', locked: true}
- {id: SYSCON.PDEC.scale, value: '2', locked: true}
- {id: SYSCON.PLL_BYPASS.sel, value: SYSCON.DIRECTO}
- {id: SYSCON.TRACECLKDIV.scale, value: '0', locked: true}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/*******************************************************************************
 * Variables for BOARD_BootClockPLL100M configuration
 ******************************************************************************/
/*******************************************************************************
 * Code for BOARD_BootClockPLL100M configuration
 ******************************************************************************/
void BOARD_BootClockPLL100M(void)
{
    /*!< Set up the clock sources */
    /*!< Set up IRC */
    POWER_DisablePD(kPDRUNCFG_PD_IRC_OSC); /*!< Ensure IRC OSC is on */
    POWER_DisablePD(kPDRUNCFG_PD_IRC);     /*!< Ensure IRC is on */
    CLOCK_AttachClk(kIRC12M_to_MAIN_CLK);  /*!< Switch to IRC 12MHz first to ensure we can change voltage without
                                              accidentally  being below the voltage for current speed */

    /*!< Set up PLL */
    CLOCK_AttachClk(kIRC12M_to_SYS_PLL);   /*!< Switch SYSPLLCLKSEL to IRC12M */
    POWER_DisablePD(kPDRUNCFG_PD_SYS_PLL); /*!< Ensure PLL is on  */
    const pll_setup_t pllSetup = {.syspllctrl   = SYSCON_SYSPLLCTRL_UPLIMOFF_MASK | SYSCON_SYSPLLCTRL_DIRECTO_MASK,
                                  .syspllndec   = SYSCON_SYSPLLNDEC_NDEC(11U),
                                  .syspllpdec   = SYSCON_SYSPLLPDEC_PDEC(98U),
                                  .syspllssctrl = {0x0U, (SYSCON_SYSPLLSSCTRL1_MD(51200U) | (uint32_t)(kSS_MF_512) |
                                                          (uint32_t)(kSS_MR_K0) | (uint32_t)(kSS_MC_NOC))},
                                  .pllRate      = 100000000U,
                                  .flags        = PLL_SETUPFLAG_POWERUP};
    CLOCK_SetPLLFreq(&pllSetup); /*!< Configure PLL to the desired values */

    /* PLL in Fractional/Spread spectrum mode */
    /* SYSTICK is used for waiting for PLL stabilization */

    CLOCK_SetClkDiv(kCLOCK_DivSystickClk, 0U, true);  /*!< Reset SysTick divider counter and halt it */
    CLOCK_SetClkDiv(kCLOCK_DivSystickClk, 3U, false); /*!< Set SysTick divider to value 3 */
    SysTick->LOAD = 27999UL;                          /*!< Set SysTick count value */
    SysTick->VAL  = 0UL;                              /*!< Reset current count value */
    SysTick->CTRL = SysTick_CTRL_ENABLE_Msk;          /*!< Enable SYSTICK */
    while ((SysTick->CTRL & SysTick_CTRL_COUNTFLAG_Msk) != SysTick_CTRL_COUNTFLAG_Msk)
    {
    }                    /*!< Waiting 7ms for PLL stabilization */
    SysTick->CTRL = 0UL; /*!< Stop SYSTICK */

    POWER_SetVoltageForFreq(
        100000000U); /*!< Set voltage for the one of the fastest clock outputs: System clock output */
    CLOCK_SetFLASHAccessCyclesForFreq(100000000U); /*!< Set FLASH wait states for core */

    /*!< Set up dividers */
    CLOCK_SetClkDiv(kCLOCK_DivAhbClk, 1U, false); /*!< Set AHBCLKDIV divider to value 1 */

    /*!< Set up clock selectors - Attach clocks to the peripheries */
    CLOCK_AttachClk(kSYS_PLL_OUT_to_MAIN_CLK); /*!< Switch MAIN_CLK to SYS_PLL_OUT */

    /*< Set SystemCoreClock variable. */
    SystemCoreClock = BOARD_BOOTCLOCKPLL100M_CORE_CLOCK;
}