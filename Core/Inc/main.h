/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Display_Min1_F_Pin GPIO_PIN_13
#define Display_Min1_F_GPIO_Port GPIOC
#define SW1_TRIGGER_Pin GPIO_PIN_0
#define SW1_TRIGGER_GPIO_Port GPIOD
#define LED1_LED2_Pin GPIO_PIN_1
#define LED1_LED2_GPIO_Port GPIOD
#define Display_Min1_C_Pin GPIO_PIN_0
#define Display_Min1_C_GPIO_Port GPIOA
#define Display_Min1_D_Pin GPIO_PIN_1
#define Display_Min1_D_GPIO_Port GPIOA
#define Display_Min1_E_Pin GPIO_PIN_2
#define Display_Min1_E_GPIO_Port GPIOA
#define Display_Min10_C_Pin GPIO_PIN_3
#define Display_Min10_C_GPIO_Port GPIOA
#define Display_Min10_D_Pin GPIO_PIN_4
#define Display_Min10_D_GPIO_Port GPIOA
#define Display_Min10_E_Pin GPIO_PIN_5
#define Display_Min10_E_GPIO_Port GPIOA
#define Display_Hrs1_C_Pin GPIO_PIN_6
#define Display_Hrs1_C_GPIO_Port GPIOA
#define Display_Hrs1_D_Pin GPIO_PIN_7
#define Display_Hrs1_D_GPIO_Port GPIOA
#define Display_Hrs1_E_Pin GPIO_PIN_0
#define Display_Hrs1_E_GPIO_Port GPIOB
#define Display_Hrs10_C_Pin GPIO_PIN_1
#define Display_Hrs10_C_GPIO_Port GPIOB
#define Display_Hrs10_D_Pin GPIO_PIN_2
#define Display_Hrs10_D_GPIO_Port GPIOB
#define Display_Hrs10_E_Pin GPIO_PIN_10
#define Display_Hrs10_E_GPIO_Port GPIOB
#define Display_Hrs10_G_Pin GPIO_PIN_11
#define Display_Hrs10_G_GPIO_Port GPIOB
#define Display_Hrs10_F_Pin GPIO_PIN_12
#define Display_Hrs10_F_GPIO_Port GPIOB
#define Display_Hrs10_A_Pin GPIO_PIN_13
#define Display_Hrs10_A_GPIO_Port GPIOB
#define Display_Hrs10_B_Pin GPIO_PIN_14
#define Display_Hrs10_B_GPIO_Port GPIOB
#define Display_Hrs1_G_Pin GPIO_PIN_15
#define Display_Hrs1_G_GPIO_Port GPIOB
#define Display_Hrs1_F_Pin GPIO_PIN_8
#define Display_Hrs1_F_GPIO_Port GPIOA
#define Display_Hrs1_A_Pin GPIO_PIN_9
#define Display_Hrs1_A_GPIO_Port GPIOA
#define Display_Hrs1_B_Pin GPIO_PIN_10
#define Display_Hrs1_B_GPIO_Port GPIOA
#define Display_Min10_F_Pin GPIO_PIN_11
#define Display_Min10_F_GPIO_Port GPIOA
#define Display_Min10_G_Pin GPIO_PIN_12
#define Display_Min10_G_GPIO_Port GPIOA
#define SW3_MODE_CLEAR_Pin GPIO_PIN_15
#define SW3_MODE_CLEAR_GPIO_Port GPIOA
#define Display_Min10_A_Pin GPIO_PIN_5
#define Display_Min10_A_GPIO_Port GPIOB
#define Display_Min10_B_Pin GPIO_PIN_6
#define Display_Min10_B_GPIO_Port GPIOB
#define Display_Min1_G_Pin GPIO_PIN_7
#define Display_Min1_G_GPIO_Port GPIOB
#define Display_Min1_A_Pin GPIO_PIN_8
#define Display_Min1_A_GPIO_Port GPIOB
#define Display_Min1_B_Pin GPIO_PIN_9
#define Display_Min1_B_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
