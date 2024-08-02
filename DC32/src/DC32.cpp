/*
  This file is part of DC32.
  DC32 is an SAO for DefCon 32's electronic badge.
  Copyright (C) 2024 Tech by Androda, LLC

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, version 3.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <Arduino.h>
#include <libmaple/exti.h>
#include <libmaple/flash.h>
#include <libmaple/rccF4.h>
#include <Wire.h>
#include "Helpers.h"

uint32_t whichFace = 0;
uint32 lastMillis = 0;
uint32 lastMutateMillis = 0;
uint32 lastPress = 0;
bool lastButtonState = false;
const uint32 inputDelayMillis = 300;
const uint32 randomFaceMutateMillis = 1000;


// TwoWire i2cInterface(2, I2C_FAST_MODE);


bool resetState = true;

void determineWhetherToSwitchFaces();

/*
 * Runs Once
 */
void setup()
{
  // PIN initialization
  pinMode(PA15, OUTPUT);

  pinMode(PB13, INPUT_PULLUP);
  
  // Image Set Select Init
  resetLEDs();

  // Generate reset-state face array
  generateRandomPixels();

  // i2cInterface.begin();
}

// TODO: Hook up I2C, PB6 is SCL, PB7 is SDA
// Maple I2C F4 only supports Host Mode unfortunately

/*
 * Main Loop
 */
void loop() 
{
  if (resetState) {
    oneThirdRandom();
  } else {
    displayFace(whichFace);
  }

  determineWhetherToSwitchFaces();

}

void determineWhetherToSwitchFaces() {
  // Read PB13
  // Returns 0x1 if not pressed and 0x0 if pressed
  bool buttonPressed = !digitalRead(PB13);
  // Get uptime
  uint32 uptime = millis();

  // Light debug LED if button is determined to be pressed
  if (buttonPressed) {
    // No longer in reset state
    resetState = false;

    gpio_set_pin(PA15);

    // How long has it been since the last time the button registered as pressed?
    if (uptime - lastMillis > inputDelayMillis) {
      lastMillis = uptime;
      whichFace++;
      if (whichFace > numFaces) {
        whichFace = 0;
      }
    }
  } else if (uptime - lastMutateMillis > randomFaceMutateMillis) {
    lastMutateMillis = uptime;
    generateRandomPixels();
  } else {
    gpio_clear_pin(PA15);
  }

}


#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
void rcc_clk_init(void) {
  // See rccf4.h in androda/Arduino_STM32 for the original, which is MIT licensed
  // This is configured for 25MHz operation using the HSI oscillator
  // instead of the HSE
  RCC->APB1ENR |= RCC_APB1ENR_PWREN;

	/* HCLK = SYSCLK / 1*/
	rcc_set_prescaler(RCC_PRESCALER_AHB, RCC_AHB_SYSCLK_DIV_1);

	/* PCLK2 = HCLK / 1*/
	rcc_set_prescaler(RCC_PRESCALER_APB2, RCC_APB2_HCLK_DIV_1);

	/* PCLK1 = HCLK / 2*/
	rcc_set_prescaler(RCC_PRESCALER_APB1, RCC_APB1_HCLK_DIV_1);

	uint32 apb2_clk = CLOCK_SPEED_HZ / (1+(CLOCK_SPEED_MHZ/100));
	// save bus clock values
  save_clock_table_values(apb2_clk);

  uint32_t PLL_M = 16;
  uint32_t PLL_N = 100;
  uint32_t PLL_P = 4;
  uint32_t PLL_Q = 8;

	/* Configure the main PLL */
	RCC->PLLCFGR = PLL_M | (PLL_N << 6) | (((PLL_P >> 1) -1) << 16) |
		(RCC_PLLCFGR_PLLSRC_HSI) | (PLL_Q << 24);

	/* Enable the main PLL */
	RCC->CR |= RCC_CR_PLLON;

	/* Wait till the main PLL is ready */
	while((RCC->CR & RCC_CR_PLLRDY) == 0);

	/* Configure Flash prefetch, Instruction cache, Data cache and wait state */
	flash_init(get_flash_ws());

	/* Select the main PLL as system clock source */
	RCC->CFGR &= ~(RCC_CFGR_SW_MASK);
	RCC->CFGR |= RCC_CFGR_SW_PLL;

	/* Wait till the main PLL is used as system clock source */
	while ((RCC->CFGR & RCC_CFGR_SWS_MASK ) != RCC_CFGR_SWS_PLL);
}

#ifdef __cplusplus
}
#endif /* __cplusplus */





