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
    PD_6, //D0  RX
    PD_5, //D1  TX
    PD_0, //D2  PWM
    PC_1, //D3  PWM
    PD_2, //D4  PWM
    PC_2, //D5  PWM
    PC_3, //D6  PWM
    PA_1, //D7
    PA_2, //D8
    PC_4, //D9  PWM
    PE_5, //D10 SPI NSS
    PC_6, //D11 SPI MOSI
    PC_7, //D12 SPI MISO
    PC_5, //D13 SPI SCK
    PB_0, //D14/A0 PWM
    PB_1, //D15/A1 PWM
	PB_2, //D16/A2 PWM
    PB_3, //D17/A3
    PB_5, //D18/A4 I2C SDA
    PB_4, //D19/A5 I2C SCL
    PF_4, //D20/A6
    PD_7, //D21
    PD_4, //D22 PWM
    PD_3, //D23 PWM
    PD_1  //D24
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