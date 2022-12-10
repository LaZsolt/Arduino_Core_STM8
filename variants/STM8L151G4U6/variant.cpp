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

#include "variant.h"

#ifdef __cplusplus
extern "C" {
#endif

// Pin number
// This array allows to wrap Arduino pin number(Dx or x)
// to STM8 PinName (PX_n)

const PinName digitalPin[] = {
    //PX_n, //Dx
    PC_2, //D0 /A0 RX
    PC_3, //D1 /A1 TX
    PD_0, //D2 /A2 PWM
    PD_1, //D3 /A3 PWM
    PD_2, //D4 /A4 PWM
    PD_3, //D5 /A5
    PB_0, //D6 /A6 PWM
    PB_1, //D7 /A7 PWM
    PB_2, //D8 /A8 PWM
    PB_3, //D9 /A9 PWM
    PB_4, //D10/A10 SPI NSS
    PB_6, //D11/A11 SPI MOSI
    PB_7, //D12/A12 SPI MISO
    PB_5, //D13/A13 SPI SCK
    PD_4, //D14/A14 PWM
    PC_4, //D15/A15
	PA_4, //D16/A16
    PA_5, //D17/A17
    PC_0, //D18 I2C SDA
    PC_1, //D19 I2C SCL
    PC_5, //D20
    PC_6, //D21
    PA_0, //D22
    PA_1, //D23 NRST
    PA_2, //D24
	PA_3  //D25
    // Duplicated pins in order to be aligned with PinMap_ADC (none)
};

#ifdef __cplusplus
}
#endif

// ----------------------------------------------------------------------------

#ifdef __cplusplus
    extern "C" {
#endif


#ifdef __cplusplus
    }
#endif