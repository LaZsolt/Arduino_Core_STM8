/**
  ******************************************************************************
  * @file     stm8s_it.c
  * @author   MCD Application Team
  * @version  V2.2.0
  * @date     30-September-2014
  * @brief    Main Interrupt Service Routines.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2014 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */

/*******************************************************************************
  * @IMPORTANT NOTE
  * This file must be place in "variants" folder for a good compilation with IAR.
  * If not, the interrupt vector table is not correctly generated by IAR and
  * interrupts will not work.
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "stm8_it.h"

#ifdef __cplusplus
 extern "C" {
#endif

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
/* Public functions ----------------------------------------------------------*/

/** @addtogroup TIM1_Sinewave_Generation
  * @{
  */

#ifdef _COSMIC_
extern void _stext();				/* startup routine */

#pragma section const {vector}

void (* const @vector _vectab[32])() = {
	_stext,					/* RESET       */
	TRAP_IRQHandler,			/* TRAP        */
	TLI_IRQHandler,				/* TLI         */
	AWU_IRQHandler,				/* AWU         */
	CLK_IRQHandler,				/* CLK         */
	EXTI_PORTA_IRQHandler,			/* EXTI0       */
	EXTI_PORTB_IRQHandler,			/* EXTI1       */
	EXTI_PORTC_IRQHandler,			/* EXTI2       */
	EXTI_PORTD_IRQHandler,			/* EXTI3       */
	EXTI_PORTE_IRQHandler,			/* EXTI4       */
	CAN_RX_IRQHandler,			/* CAN Rx interrupt    */
	CAN_TX_IRQHandler,			/* CAN Tx interrupt    */
	SPI_IRQHandler,				/* SPI         */
	TIM1_UPD_OVF_TRG_BRK_IRQHandler,	/* TIMER 1 OVF */
	TIM1_CAP_COM_IRQHandler,		/* TIMER 1 CAP */
	TIM2_UPD_OVF_BRK_IRQHandler,		/* TIMER 2 OVF */
	TIM2_CAP_COM_IRQHandler,		/* TIMER 2 CAP */
	TIM3_UPD_OVF_BRK_IRQHandler,		/* TIMER 3 OVF */
	TIM3_CAP_COM_IRQHandler,		/* TIMER 3 CAP */
	UART1_TX_IRQHandler,			/* UART1 Tx   */
	UART1_RX_IRQHandler,			/* UART1 Rx    */
	I2C_IRQHandler,				/* I2C         */
	UART3_TX_IRQHandler,			/* UART3 TX    */
	UART3_RX_IRQHandler,			/* UART3 RX    */
	ADC2_IRQHandler,			/* ADC1        */
	TIM4_UPD_OVF_IRQHandler,		/* TIMER 4 OVF */
	EEPROM_EEC_IRQHandler,			/* EEPROM ECC  */
	NonHandledInterrupt,			/* Reserved    */
	NonHandledInterrupt,			/* Reserved    */
	NonHandledInterrupt,			/* Reserved    */
	NonHandledInterrupt,			/* Reserved    */
	NonHandledInterrupt,			/* Reserved    */
	};

#endif
/**
  * @}
  */

#ifdef __cplusplus
}
#endif


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
