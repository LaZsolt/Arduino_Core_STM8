/*
 *******************************************************************************
 * Copyright (c) 2018, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************
 */

#ifndef _VARIANT_ARDUINO_STM8_
#define _VARIANT_ARDUINO_STM8_

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "PeripheralPins.h"

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/
extern const PinName digitalPin[];

enum {
    PC2, //D0  (A0) RX
    PC3, //D1  (A1) TX
    PD0, //D2  (A2)
    PD1, //D3  (A3)
    PD2, //D4  (A4)
    PD3, //D5  (A5)
    PB0, //D6  (A6)
    PB1, //D7  (A7)
    PB2, //D8  (A8)
    PB3, //D9  (A9)
    PB4, //D10 (A10)
    PB6, //D11 (A11)
    PB7, //D12 (A12)
    PB5, //D13 (A13) LED
    PD4, //D14 (A14)
    PC4, //D15 (A15)
    PA4, //D16 (A16)
    PA5, //D17 (A17)
    PC0, //D18 SDA
    PC1, //D19 SCL
    PC5, //D20
    PC6, //D21
	PA0, //D22
	PA1, //D23 NRST
    PA2, //D24
	PA3  //D25
    // Duplicated pins in order to be aligned with PinMap_ADC (none)
    PEND
};

// This must be a literal with the same value as PEND
#define NUM_DIGITAL_PINS    26
// This must be a literal with a value less than or equal to to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS   18
#define NUM_ANALOG_FIRST    0

// On-board LED pin number
#define LED_BUILTIN         13
#define LED_GREEN           LED_BUILTIN

// On-board User button
#define USER_BTN            PB3

// The SPI pins same as than defined in file .../cores/arduino/pins_arduino.h
// #define PIN_SPI_SS3                 8
// #define PIN_SPI_SS2                 7
// #define PIN_SPI_SS1                 4

// #define PIN_SPI_SS                  10
// #define PIN_SPI_MOSI                11
// #define PIN_SPI_MISO                12
// #define PIN_SPI_SCK                 13

#define PIN_WIRE_SDA                18
#define PIN_WIRE_SCL                19

#define ADC_RESOLUTION              12

// Timer Definitions
//Do not use timer used by PWM pins when possible. See PinMap_PWM in PeripheralPins.c
#define TIMER_TONE          TIM2

// Do not use basic timer: OC is required
#define TIMER_SERVO         TIM1

// UART Definitions

#define SERIAL_UART_INSTANCE    1 //Connected to ST-Link
// Default pin used for 'Serial' instance (ex: ST-Link)

#define PIN_SERIAL_RX           PC_2
#define PIN_SERIAL_TX           PC_3

// Default pin used for Serial printed on Arduino connector
// #define PIN_SERIAL3_RX           PD_6
// #define PIN_SERIAL3_TX           PD_5

#ifdef __cplusplus
} // extern "C"
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
#define SERIAL_PORT_MONITOR     Serial
#define SERIAL_PORT_HARDWARE    Serial
#endif


#endif /* _VARIANT_ARDUINO_STM8_ */
