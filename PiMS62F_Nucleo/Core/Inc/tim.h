/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    tim.h
  * @brief   This file contains all the function prototypes for
  *          the tim.c file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __TIM_H__
#define __TIM_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern TIM_HandleTypeDef htim2;
extern TIM_HandleTypeDef htim3;
extern TIM_HandleTypeDef htim4;
extern TIM_HandleTypeDef htim6;
#if defined(USE_EMOD_IMS62F)
//extern TIM_HandleTypeDef htim5;
extern TIM_HandleTypeDef htim9;
#else
extern TIM_HandleTypeDef htim8;
#endif
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void MX_TIM3_Init(void);

/* USER CODE BEGIN Prototypes */
void MX_TIM2_Init(void);
void MX_TIM4_Init(void);
#if defined (USE_EMOD_IMS62F)
//void MX_TIM5_Init(void);
void MX_TIM9_Init(void);
#else
void MX_TIM8_Init(void);
#endif
/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __TIM_H__ */

