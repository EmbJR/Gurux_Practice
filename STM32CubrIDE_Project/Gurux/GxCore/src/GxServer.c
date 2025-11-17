/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

//printf needs this,
#include <stdio.h>

#include "../../dlms/include/bytebuffer.h"
#include "../../dlms/include/dlmssettings.h"
#include "../../dlms/include/variant.h"
#include "../../dlms/include/cosem.h"
#include "../../dlms/include/server.h"
#include "../../dlms/include/date.h"
#include "../../dlms/include/gxserializer.h"