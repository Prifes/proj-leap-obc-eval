/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#include "stm32l4xx_hal.h"

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
#define GYRO_DRDY_Pin GPIO_PIN_5
#define GYRO_DRDY_GPIO_Port GPIOE
#define ACC_DRDY_Pin GPIO_PIN_6
#define ACC_DRDY_GPIO_Port GPIOE
#define MAG_DRDY_Pin GPIO_PIN_13
#define MAG_DRDY_GPIO_Port GPIOC
#define INTERNAL_I2C3_SCL_Pin GPIO_PIN_0
#define INTERNAL_I2C3_SCL_GPIO_Port GPIOC
#define INTERNAL_I2C3_SDA_Pin GPIO_PIN_1
#define INTERNAL_I2C3_SDA_GPIO_Port GPIOC
#define QUADSPI_NRST_Pin GPIO_PIN_3
#define QUADSPI_NRST_GPIO_Port GPIOC
#define COMTX_BUSY_Pin GPIO_PIN_0
#define COMTX_BUSY_GPIO_Port GPIOA
#define COMTX_NRST_Pin GPIO_PIN_1
#define COMTX_NRST_GPIO_Port GPIOA
#define COMTX_DIO1_Pin GPIO_PIN_2
#define COMTX_DIO1_GPIO_Port GPIOA
#define COMTX_DIO2_Pin GPIO_PIN_3
#define COMTX_DIO2_GPIO_Port GPIOA
#define COMTX_DIO3_Pin GPIO_PIN_4
#define COMTX_DIO3_GPIO_Port GPIOA
#define COMTX_SPI1_SCK_Pin GPIO_PIN_5
#define COMTX_SPI1_SCK_GPIO_Port GPIOA
#define COMTX_SPI1_MISO_Pin GPIO_PIN_6
#define COMTX_SPI1_MISO_GPIO_Port GPIOA
#define COMTX_SPI1_MOSI_Pin GPIO_PIN_7
#define COMTX_SPI1_MOSI_GPIO_Port GPIOA
#define COMTX_NCS_Pin GPIO_PIN_4
#define COMTX_NCS_GPIO_Port GPIOC
#define COMADL_NTC_Pin GPIO_PIN_5
#define COMADL_NTC_GPIO_Port GPIOC
#define COMAMP_DISABLE_Pin GPIO_PIN_0
#define COMAMP_DISABLE_GPIO_Port GPIOB
#define COMRX_INA_ALERT_Pin GPIO_PIN_1
#define COMRX_INA_ALERT_GPIO_Port GPIOB
#define COMAMP_VCC_SWITCH_Pin GPIO_PIN_2
#define COMAMP_VCC_SWITCH_GPIO_Port GPIOB
#define COMRX_BUSY_Pin GPIO_PIN_7
#define COMRX_BUSY_GPIO_Port GPIOE
#define COMRX_DIO1_Pin GPIO_PIN_8
#define COMRX_DIO1_GPIO_Port GPIOE
#define COMRX_DIO2_Pin GPIO_PIN_9
#define COMRX_DIO2_GPIO_Port GPIOE
#define COM_I2C_SCL_Pin GPIO_PIN_10
#define COM_I2C_SCL_GPIO_Port GPIOB
#define COM_I2C_SDA_Pin GPIO_PIN_11
#define COM_I2C_SDA_GPIO_Port GPIOB
#define COMRX_DIO3_Pin GPIO_PIN_12
#define COMRX_DIO3_GPIO_Port GPIOB
#define COMRX_SPI2_SCK_Pin GPIO_PIN_13
#define COMRX_SPI2_SCK_GPIO_Port GPIOB
#define COMRX_SPI2_MISO_Pin GPIO_PIN_14
#define COMRX_SPI2_MISO_GPIO_Port GPIOB
#define COMRX_SPI2_MOSI_Pin GPIO_PIN_15
#define COMRX_SPI2_MOSI_GPIO_Port GPIOB
#define COMRX_NCS_Pin GPIO_PIN_8
#define COMRX_NCS_GPIO_Port GPIOD
#define COMRX_NRST_Pin GPIO_PIN_9
#define COMRX_NRST_GPIO_Port GPIOD
#define COMADL_INA_ALERT_Pin GPIO_PIN_10
#define COMADL_INA_ALERT_GPIO_Port GPIOD
#define COMTX_INA_ALERT_Pin GPIO_PIN_11
#define COMTX_INA_ALERT_GPIO_Port GPIOD
#define PSU_I2C4_SCL_Pin GPIO_PIN_12
#define PSU_I2C4_SCL_GPIO_Port GPIOD
#define PSU_I2C4_SDA_Pin GPIO_PIN_13
#define PSU_I2C4_SDA_GPIO_Port GPIOD
#define PSU_NCS1_Pin GPIO_PIN_6
#define PSU_NCS1_GPIO_Port GPIOC
#define PSU_NCS2_Pin GPIO_PIN_7
#define PSU_NCS2_GPIO_Port GPIOC
#define PSU_NCS3_Pin GPIO_PIN_8
#define PSU_NCS3_GPIO_Port GPIOC
#define USER_BUTTON_Pin GPIO_PIN_9
#define USER_BUTTON_GPIO_Port GPIOC
#define PSU_NCS0_Pin GPIO_PIN_15
#define PSU_NCS0_GPIO_Port GPIOA
#define PSU_SPI3_SCK_Pin GPIO_PIN_10
#define PSU_SPI3_SCK_GPIO_Port GPIOC
#define PSU_SPI3_MISO_Pin GPIO_PIN_11
#define PSU_SPI3_MISO_GPIO_Port GPIOC
#define PSU_SPI3_MOSI_Pin GPIO_PIN_12
#define PSU_SPI3_MOSI_GPIO_Port GPIOC
#define LED_RGB_R_Pin GPIO_PIN_3
#define LED_RGB_R_GPIO_Port GPIOD
#define LED_RGB_G_Pin GPIO_PIN_4
#define LED_RGB_G_GPIO_Port GPIOD
#define LED_RGB_B_Pin GPIO_PIN_5
#define LED_RGB_B_GPIO_Port GPIOD
#define CAN2_STB_Pin GPIO_PIN_7
#define CAN2_STB_GPIO_Port GPIOB
#define BACKUP_I2C1_SCL_Pin GPIO_PIN_8
#define BACKUP_I2C1_SCL_GPIO_Port GPIOB
#define BACKUP_I2C1_SDA_Pin GPIO_PIN_9
#define BACKUP_I2C1_SDA_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
