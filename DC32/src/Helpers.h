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
#include <vector>
#include <array>

void resetLEDs() {
  gpio_set_mode(PA0, GPIO_INPUT_FLOATING);
  gpio_set_mode(PA1, GPIO_INPUT_FLOATING);
  gpio_set_mode(PA2, GPIO_INPUT_FLOATING);
  gpio_set_mode(PA3, GPIO_INPUT_FLOATING);
  gpio_set_mode(PA4, GPIO_INPUT_FLOATING);
  gpio_set_mode(PA5, GPIO_INPUT_FLOATING);
}

void LED1() {
  resetLEDs();
  // PA1 High
  gpio_set_mode(PA1, GPIO_OUTPUT_PP);
  gpio_set_pin(PA1);
  // PA0 Low
  gpio_set_mode(PA0, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA0);
}

void LED2() {
  resetLEDs();
  // PA2 High
  gpio_set_mode(PA2, GPIO_OUTPUT_PP);
  gpio_set_pin(PA2);
  // PA0 Low
  gpio_set_mode(PA0, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA0);
}

void LED3() {
  resetLEDs();
  // PA0 High
  gpio_set_mode(PA0, GPIO_OUTPUT_PP);
  gpio_set_pin(PA0);
  // PA2 Low
  gpio_set_mode(PA2, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA2);
}

void LED4() {
  resetLEDs();
  // PA4 High
  gpio_set_mode(PA4, GPIO_OUTPUT_PP);
  gpio_set_pin(PA4);
  // PA2 Low
  gpio_set_mode(PA2, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA2);
}

void LED5() {
  resetLEDs();
  // PA2 High
  gpio_set_mode(PA2, GPIO_OUTPUT_PP);
  gpio_set_pin(PA2);
  // PA4 Low
  gpio_set_mode(PA4, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA4);
}

void LED6() {
  resetLEDs();
  // PA4 High
  gpio_set_mode(PA4, GPIO_OUTPUT_PP);
  gpio_set_pin(PA4);
  // PA5 Low
  gpio_set_mode(PA5, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA5);
}

void LED7() {
  resetLEDs();
  // PA2 High
  gpio_set_mode(PA2, GPIO_OUTPUT_PP);
  gpio_set_pin(PA2);
  // PA1 Low
  gpio_set_mode(PA1, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA1);
}

void LED8() {
  resetLEDs();
  // PA1 High

  gpio_set_mode(PA1, GPIO_OUTPUT_PP);
  // pinMode(PA1, OUTPUT);
  gpio_set_pin(PA1);
  // PA2 Low
  gpio_set_mode(PA2, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA2);
}

void LED9() {
  resetLEDs();
  // PA4 High
  gpio_set_mode(PA4, GPIO_OUTPUT_PP);
  gpio_set_pin(PA4);
  // PA0 Low
  gpio_set_mode(PA0, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA0);
}

void LED10() {
  resetLEDs();
  // PA0 High
  gpio_set_mode(PA0, GPIO_OUTPUT_PP);
  gpio_set_pin(PA0);
  // PA4 Low
  gpio_set_mode(PA4, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA4);
}

void LED11() {
  resetLEDs();
  // PA5 High
  gpio_set_mode(PA5, GPIO_OUTPUT_PP);
  gpio_set_pin(PA5);
  // PA2 Low
  gpio_set_mode(PA2, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA2);
}

void LED12() {
  resetLEDs();
  // PA2 High
  gpio_set_mode(PA2, GPIO_OUTPUT_PP);
  gpio_set_pin(PA2);
  // PA5 Low
  gpio_set_mode(PA5, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA5);
}

void LED13() {
  resetLEDs();
  // PA3 High
  gpio_set_mode(PA3, GPIO_OUTPUT_PP);
  gpio_set_pin(PA3);
  // PA2 Low
  gpio_set_mode(PA2, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA2);
}

void LED14() {
  resetLEDs();
  // PA4 High
  gpio_set_mode(PA4, GPIO_OUTPUT_PP);
  gpio_set_pin(PA4);
  // PA1 Low
  gpio_set_mode(PA1, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA1);
}

void LED15() {
  resetLEDs();
  // PA1 High
  gpio_set_mode(PA1, GPIO_OUTPUT_PP);
  gpio_set_pin(PA1);
  // PA4 Low
  gpio_set_mode(PA4, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA4);
}

void LED16() {
  resetLEDs();
  // PA5 High
  gpio_set_mode(PA5, GPIO_OUTPUT_PP);
  gpio_set_pin(PA5);
  // PA0 Low
  gpio_set_mode(PA0, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA0);
}

void LED17() {
  resetLEDs();
  // PA0 High
  gpio_set_mode(PA0, GPIO_OUTPUT_PP);
  gpio_set_pin(PA0);
  // PA5 Low
  gpio_set_mode(PA5, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA5);
}

void LED18() {
  resetLEDs();
  // PA2 High
  gpio_set_mode(PA2, GPIO_OUTPUT_PP);
  gpio_set_pin(PA2);
  // PA3 Low
  gpio_set_mode(PA3, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA3);
}

void LED19() {
  resetLEDs();
  // PA4 High
  gpio_set_mode(PA4, GPIO_OUTPUT_PP);
  gpio_set_pin(PA4);
  // PA3 Low
  gpio_set_mode(PA3, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA3);
}

void LED20() {
  resetLEDs();
  // PA3 High
  gpio_set_mode(PA3, GPIO_OUTPUT_PP);
  gpio_set_pin(PA3);
  // PA4 Low
  gpio_set_mode(PA4, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA4);
}

void LED21() {
  resetLEDs();
  // PA5 High
  gpio_set_mode(PA5, GPIO_OUTPUT_PP);
  gpio_set_pin(PA5);
  // PA1 Low
  gpio_set_mode(PA1, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA1);
}

void LED22() {
  resetLEDs();
  // PA1 High
  gpio_set_mode(PA1, GPIO_OUTPUT_PP);
  gpio_set_pin(PA1);
  // PA5 Low
  gpio_set_mode(PA5, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA5);
}

void LED23() {
  resetLEDs();
  // PA3 High
  gpio_set_mode(PA3, GPIO_OUTPUT_PP);
  gpio_set_pin(PA3);
  // PA0 Low
  gpio_set_mode(PA0, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA0);
}

void LED24() {
  resetLEDs();
  // PA0 High
  gpio_set_mode(PA0, GPIO_OUTPUT_PP);
  gpio_set_pin(PA0);
  // PA3 Low
  gpio_set_mode(PA3, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA3);
}

void LED25() {
  resetLEDs();
  // PA5 High
  gpio_set_mode(PA5, GPIO_OUTPUT_PP);
  gpio_set_pin(PA5);
  // PA4 Low
  gpio_set_mode(PA4, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA4);
}

void LED26() {
  resetLEDs();
  // PA5 High
  gpio_set_mode(PA5, GPIO_OUTPUT_PP);
  gpio_set_pin(PA5);
  // PA3 Low
  gpio_set_mode(PA3, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA3);
}

void LED27() {
  resetLEDs();
  // PA3 High
  gpio_set_mode(PA3, GPIO_OUTPUT_PP);
  gpio_set_pin(PA3);
  // PA5 Low
  gpio_set_mode(PA5, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA5);
}

void LED28() {
  resetLEDs();
  // PA3 High
  gpio_set_mode(PA3, GPIO_OUTPUT_PP);
  gpio_set_pin(PA3);
  // PA1 Low
  gpio_set_mode(PA1, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA1);
}

void LED29() {
  resetLEDs();
  // PA1 High
  gpio_set_mode(PA1, GPIO_OUTPUT_PP);
  gpio_set_pin(PA1);
  // PA3 Low
  gpio_set_mode(PA3, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA3);
}

void LED30() {
  resetLEDs();
  // PA0 High
  gpio_set_mode(PA0, GPIO_OUTPUT_PP);
  gpio_set_pin(PA0);
  // PA1 Low
  gpio_set_mode(PA1, GPIO_OUTPUT_PP);
  gpio_clear_pin(PA1);
}

void LEDSwitch(uint32_t number) {
  switch (number) {
    default: break;
    case 1: LED1(); break;
    case 2: LED2(); break;
    case 3: LED3(); break;
    case 4: LED4(); break;
    case 5: LED5(); break;
    case 6: LED6(); break;
    case 7: LED7(); break;
    case 8: LED8(); break;
    case 9: LED9(); break;
    case 10: LED10(); break;
    case 11: LED11(); break;
    case 12: LED12(); break;
    case 13: LED13(); break;
    case 14: LED14(); break;
    case 15: LED15(); break;
    case 16: LED16(); break;
    case 17: LED17(); break;
    case 18: LED18(); break;
    case 19: LED19(); break;
    case 20: LED20(); break;
    case 21: LED21(); break;
    case 22: LED22(); break;
    case 23: LED23(); break;
    case 24: LED24(); break;
    case 25: LED25(); break;
    case 26: LED26(); break;
    case 27: LED27(); break;
    case 28: LED28(); break;
    case 29: LED29(); break;
    case 30: LED30(); break;
  }
}

void faceArrayWithBrightness(long diodeNum[], long brightness[], uint32_t num) {
  for(uint32_t i = 0; i < num; i++) {
    LEDSwitch(diodeNum[i]);
    delay_us(brightness[i]);
    resetLEDs();
    delay_ns100(15);
  }
}

void faceArray(uint8_t diodeNum[], uint32_t num, uint32_t faceNum) {
  // faceNum to compensate for brightness due to differing diode counts
  // using a different drive timing?
  for(uint32_t i = 0; i < num; i++) {
    LEDSwitch(diodeNum[i]);
    // delay_us(750);
    delay(1);
    resetLEDs();
    delay_ns100(1);
  }
}

// Note: Must increment this for every new face
const uint32_t numFaces = 12;

uint8_t templateFaceArray[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

uint8_t neutralFaceArray[] = {8, 11, 25, 26, 27, 28, 29, 30};
uint8_t flatFaceArray[] = {7, 8, 9, 10, 11, 12, 25, 26, 27, 28, 29, 30};
uint8_t frownFaceArray[] = {8, 11, 20, 21, 22, 23, 25, 30};
uint8_t smileFaceArray[] = {8, 11, 19, 24, 26, 27, 28, 29};
uint8_t grinFaceArray[] = {2, 5, 7, 9, 10, 12, 19, 20, 21, 22, 23, 24, 26, 27, 28, 29};
uint8_t winkFaceArray[] = {2, 9, 14, 10, 11, 16, 17, 19, 20, 21, 22, 23, 24, 28, 29};
uint8_t wideEyeFaceArray[] = {1, 2, 3, 4, 5, 6, 7, 9, 10, 12, 13, 14, 15, 16, 17, 18, 26, 27, 28, 29};
uint8_t skullFaceArray[] = {8, 9, 10, 11, 14, 15, 16, 17, 19, 21, 23, 25, 27, 29};
uint8_t uncertainFaceArray[] = {9, 10, 14, 15, 16, 17, 20, 22, 24, 25, 27, 29};
uint8_t skepticalFaceArray[] = {8, 9, 10, 11, 19, 20, 21, 28, 29, 30};
uint8_t xEyesFaceArray[] = {1, 3, 4, 6, 8, 11, 13, 15, 16, 18, 19, 21, 22, 24};
uint8_t notSureWhatThisIsArray[] = {1, 6, 8, 11, 13, 18, 21, 22, 25, 30};

void displayFace(uint32_t whichFace) {
  switch (whichFace) {
    case 0: faceArray(neutralFaceArray, sizeof(neutralFaceArray), 0); break;
    case 1: faceArray(flatFaceArray, sizeof(flatFaceArray), 1); break;
    case 2: faceArray(frownFaceArray, sizeof(frownFaceArray), 2); break;
    case 3: faceArray(smileFaceArray, sizeof(smileFaceArray), 3); break;
    case 4: faceArray(grinFaceArray, sizeof(grinFaceArray), 4); break;
    case 5: faceArray(winkFaceArray, sizeof(winkFaceArray), 5); break;
    case 6: faceArray(wideEyeFaceArray, sizeof(wideEyeFaceArray), 6); break;
    case 7: faceArray(skullFaceArray, sizeof(skullFaceArray), 7); break;
    case 8: faceArray(uncertainFaceArray, sizeof(uncertainFaceArray), 8); break;
    case 9: faceArray(skepticalFaceArray, sizeof(skepticalFaceArray), 9); break;
    case 10: faceArray(xEyesFaceArray, sizeof(xEyesFaceArray), 10); break;
    case 11: faceArray(notSureWhatThisIsArray, sizeof(notSureWhatThisIsArray), 11); break;
    default: faceArray(neutralFaceArray, sizeof(neutralFaceArray), 0); break;
  }
}


long randomPixels[10] = {};
long brightness[10] = {};

void generateRandomPixels() {
  randomSeed(GPIOA->regs->IDR);
  for (int i = 0; i < 10; i++) {
    randomPixels[i] = random(31);
  }
  for (int i = 0; i < 10; i++) {
    brightness[i] = random(31);
  }
}

void oneThirdRandom() {
  faceArrayWithBrightness(randomPixels, brightness, 10);
}





