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
    PC_3, //D0  PWM
    PC_4, //D1  PWM
    PC_5, //D2  SPI SCK
    PC_6, //D3  SPI MOSI
    PC_7, //D4  SPI MISO
    PD_0, //D5  PWM
    PD_1, //D6
    PD_2, //D7  PWM
    PD_3, //D8  PWM
    PD_4, //D9  PWM
    PD_5, //D10 TX
    PD_6, //D11 RX
    PD_7, //D12 PWM
    PA_1, //D13
    PA_2, //D14
    PF_4, //D15/A6
    PB_5, //D16/A0 I2C SDA
    PB_4, //D17/A1 I2C SCL
    PB_3, //D18/A2
    PB_2, //D19/A3 PWM
    PB_1, //D20/A4 PWM
    PB_0, //D21/A5 PWM
    PE_5, //D22 SPI NSS
    PC_1, //D23 PWM
    PC_2, //D24 PWM
    // Duplicated pins in order to be aligned with PinMap_ADC
    PB_5, //D38/A0 = D16
    PB_4, //D39/A1 = D17
    PB_3, //D40/A2 = D18
    PB_2, //D41/A3 = D19
    PB_1, //D42/A4 = D20
    PB_0, //D43/A5 = D21
    PF_4  //D44/A6 = D15
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