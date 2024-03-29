/**
  ******************************************************************************
  * @file              : S62F_conf.h
  * @brief             : This file provides code for the configuration
  *                      of the shield instances (pin mapping).
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
 */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __S62F_CONF_H__
#define __S62F_CONF_H__

#ifdef __cplusplus
extern "C" {
#endif
#include "platform.h"

/* Daughter board Pin mapping --------------------------------------------*/

/*  SPI MACRO redefinition */
#define RADIO_SPI_Init                            BSP_SPI1_Init
#define RADIO_SPI_DeInit                          BSP_SPI1_DeInit
#define RADIO_SPI_SendRecv                        BSP_SPI1_SendRecv

#define RADIO_SPI_CLK_ENABLE()                    __HAL_RCC_SPI1_CLK_ENABLE()

/* SPIx Bus Pin mapping */
#define RADIO_SPI_SCK_GPIO_PIN           BUS_SPI1_SCK_GPIO_PIN
#define RADIO_SPI_MISO_GPIO_PIN          BUS_SPI1_MISO_GPIO_PIN
#define RADIO_SPI_MOSI_GPIO_PIN          BUS_SPI1_MOSI_GPIO_PIN
#define RADIO_SPI_SCK_GPIO_PORT          BUS_SPI1_SCK_GPIO_PORT
#define RADIO_SPI_MISO_GPIO_PORT         BUS_SPI1_MISO_GPIO_PORT
#define RADIO_SPI_MOSI_GPIO_PORT         BUS_SPI1_MOSI_GPIO_PORT
#define RADIO_SPI_SCK_GPIO_AF            BUS_SPI1_SCK_GPIO_AF
#define RADIO_SPI_MOSI_GPIO_AF           BUS_SPI1_MOSI_GPIO_AF
#define RADIO_SPI_MISO_GPIO_AF           BUS_SPI1_MISO_GPIO_AF
#define RADIO_SPI_SCK_GPIO_CLK_ENABLE()  BUS_SPI1_SCK_GPIO_CLK_ENABLE()
#define RADIO_SPI_MOSI_GPIO_CLK_ENABLE() BUS_SPI1_MOSI_GPIO_CLK_ENABLE()
#define RADIO_SPI_MISO_GPIO_CLK_ENABLE() BUS_SPI1_MISO_GPIO_CLK_ENABLE()

#if defined (USE_STM32L0XX_NUCLEO) || defined (USE_B_L072Z_LRWAN1)
#define RADIO_SPI_AF                              GPIO_AF0_SPI1
#elif defined (USE_STM32L1XX_NUCLEO) || defined (USE_STM32L4XX_NUCLEO)
#define RADIO_SPI_AF                              GPIO_AF5_SPI1
#endif

#define RADIO_NSS_CLK_ENABLE()      __HAL_RCC_GPIOB_CLK_ENABLE()
#define RADIO_NSS_PORT              RF_NSS_GPIO_Port //GPIOB
#define RADIO_NSS_PIN               RF_NSS_Pin //GPIO_PIN_0

/*  Radio Pins */

#define RADIO_RESET_CLK_ENABLE()    __HAL_RCC_GPIOA_CLK_ENABLE()
#define RADIO_RESET_PORT            RF_NRST_GPIO_Port //GPIOA
#define RADIO_RESET_PIN             RF_NRST_Pin //GPIO_PIN_2

#define RADIO_BUSY_CLK_ENABLE()                  __HAL_RCC_GPIOB_CLK_ENABLE()
#define RADIO_BUSY_PORT                           RF_BUSY_GPIO_Port //GPIOB
#define RADIO_BUSY_PIN                            RF_BUSY_Pin //GPIO_PIN_1

#define RADIO_DIOn                               2U

#define RADIO_DIO_1_IT_PRIO                        0
#define RADIO_DIO_1_PORT                  RF_DIO1_GPIO_Port //GPIOB
#define RADIO_DIO_1_PIN                   RF_DIO1_Pin //GPIO_PIN_10
#define RADIO_DIO_1_GPIO_CLK_ENABLE()     __HAL_RCC_GPIOB_CLK_ENABLE()
#define RADIO_DIO_1_EXTI_LINE             EXTI_LINE_10
#define RADIO_DIO_1_IRQn                  EXTI15_10_IRQn
#define H_EXTI_10       hRADIO_DIO_exti[0]

//#define RADIO_ANT_SWITCH_POWER_PORT               GPIOA
//#define RADIO_ANT_SWITCH_POWER_PIN                GPIO_PIN_9
//#define RADIO_ANT_SWITCH_POWER_CLK_ENABLE()      __HAL_RCC_GPIOA_CLK_ENABLE()

#define RADIO_LEDTX_PORT                                GPIOA
#define RADIO_LEDTX_PIN                                 GPIO_PIN_8
#define RADIO_LEDRX_PORT                                GPIOB
#define RADIO_LEDRX_PIN                                 GPIO_PIN_7

#define DEVICE_SEL_PORT                           BOOT1_GPIO_Port //GPIOB
#define DEVICE_SEL_PIN                            BOOT1_Pin //GPIO_PIN_2
#define RADIO_DEV_SEL_CLK_ENABLE()      		  __HAL_RCC_GPIOB_CLK_ENABLE()


/////////////////////////////////////////////////////////////////////////
//#define RADIO_RESET_PORT                          GPIOA
//#define RADIO_RESET_PIN                           GPIO_PIN_2
//
//#define RADIO_MOSI_PORT                           GPIOA
//#define RADIO_MOSI_PIN                            GPIO_PIN_7
//
//#define RADIO_MISO_PORT                           GPIOA
//#define RADIO_MISO_PIN                            GPIO_PIN_6
//
//#define RADIO_SCLK_PORT                           GPIOA
//#define RADIO_SCLK_PIN                            GPIO_PIN_5
//
//#define RADIO_NSS_PORT                            GPIOB
//#define RADIO_NSS_PIN                             GPIO_PIN_0

//#define RADIO_BUSY_PORT                           GPIOB
//#define RADIO_BUSY_PIN                            GPIO_PIN_1

//#define RADIO_DIO_0_PORT                          GPIOA
//#define RADIO_DIO_0_PIN                           GPIO_PIN_10

//#define RADIO_DIO_1_PORT                          GPIOB
//#define RADIO_DIO_1_PIN                           GPIO_PIN_10

#define RADIO_DIO_2_PORT                          RF_DIO2_GPIO_Port //GPIOB
#define RADIO_DIO_2_PIN                           RF_DIO2_Pin //GPIO_PIN_11
#define RADIO_DIO_2_GPIO_CLK_ENABLE()      		  __HAL_RCC_GPIOB_CLK_ENABLE()

//#define RADIO_DIO_3_PORT                          GPIOB
//#define RADIO_DIO_3_PIN                           GPIO_PIN_4

//#define RADIO_ANT_SWITCH_POWER_PORT               GPIOA
//#define RADIO_ANT_SWITCH_POWER_PIN                GPIO_PIN_9

#define RADIO_RX_SWITCH_POWER_PORT               RF_RX_SW_GPIO_Port //GPIOC
#define RADIO_RX_SWITCH_POWER_PIN                RF_RX_SW_Pin //GPIO_PIN_13

#define RADIO_TX_SWITCH_POWER_PORT               RF_TX_SW_GPIO_Port //GPIOA
#define RADIO_TX_SWITCH_POWER_PIN                RF_TX_SW_Pin //GPIO_PIN_4

//#define DEVICE_SEL_PORT                           GPIOB
//#define DEVICE_SEL_PIN                            GPIO_PIN_2
//
//#define RADIO_LEDTX_PORT                           GPIOA
//#define RADIO_LEDTX_PIN                            GPIO_PIN_8
//
//#define RADIO_LEDRX_PORT                           GPIOB
//#define RADIO_LEDRX_PIN                            GPIO_PIN_7

/*  SPI MACRO redefinition */

#define SPI_CLK_ENABLE()                __HAL_RCC_SPI1_CLK_ENABLE()


#define SPI1_AF                          GPIO_AF5_SPI1

/* ADC MACRO redefinition */


#define ADC_READ_CHANNEL                 ADC_CHANNEL_3
#define ADCCLK_ENABLE()                 __HAL_RCC_ADC1_CLK_ENABLE() ;
#define ADCCLK_DISABLE()                 __HAL_RCC_ADC1_CLK_DISABLE() ;


/* --------------------------- RTC HW definition -------------------------------- */

#define RTC_OUTPUT       DBG_RTC_OUTPUT

#ifdef __cplusplus
}
#endif

#endif /* __S62F_CONF_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
