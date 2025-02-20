/********************************************************************************************************
 * @file    app_config.h
 *
 * @brief   This is the header file for B91m
 *
 * @author  Driver Group
 * @date    2019
 *
 * @par     Copyright (c) 2019, Telink Semiconductor (Shanghai) Co., Ltd. ("TELINK")
 *
 *          Licensed under the Apache License, Version 2.0 (the "License");
 *          you may not use this file except in compliance with the License.
 *          You may obtain a copy of the License at
 *
 *              http://www.apache.org/licenses/LICENSE-2.0
 *
 *          Unless required by applicable law or agreed to in writing, software
 *          distributed under the License is distributed on an "AS IS" BASIS,
 *          WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *          See the License for the specific language governing permissions and
 *          limitations under the License.
 *
 *******************************************************************************************************/
#pragma once
/* Enable C linkage for C++ Compilers: */
#if defined(__cplusplus)
extern "C" {
#endif
#include "driver.h"
#include "common.h"


#if(MCU_CORE_B92)

#define I2C_GPIO_SDA_PIN   GPIO_FC_PB3
#define I2C_GPIO_SCL_PIN   GPIO_FC_PB2
#elif(MCU_CORE_B91)

#define I2C_GPIO_SDA_PIN   I2C_GPIO_SDA_B3
#define I2C_GPIO_SCL_PIN   I2C_GPIO_SCL_B2
#elif(MCU_CORE_B93)

#define I2C_GPIO_SDA_PIN   I2C_GPIO_SDA_B2
#define I2C_GPIO_SCL_PIN   I2C_GPIO_SCL_B3
#endif


#define     I2C_MASTER_WRITE_READ_NO_DMA                  1  //this mode can read and write data from fifo one byte a time
#define     I2C_MASTER_WRITE_READ_DMA                     2  //this mode can read and write data through DMA, four byte a time
#if(MCU_CORE_B92||MCU_CORE_B93)
#define     I2C1_M_MASTER_WRITE_READ_NO_DMA               3  //this mode can read and write data from fifo one byte a time
#endif

#define     I2C_MASTER_WRITE_READ_MODE                    I2C_MASTER_WRITE_READ_NO_DMA

/* Disable C linkage for C++ Compilers: */
#if defined(__cplusplus)
}
#endif
