/********************************************************************************************************
 * @file    dut_cmd.h
 *
 * @brief   This is the header file for B91m
 *
 * @author  Driver Group
 * @date    2022
 *
 * @par     Copyright (c) 2022, Telink Semiconductor (Shanghai) Co., Ltd. ("TELINK")
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
#ifndef _DUT_CMD_H_
#define _DUT_CMD_H_

/////////////////////////    DEFAULT_TEST_CASE     //////////////////////////////
#define  DUTCMD_DEFAULT         				0x0000

/////////////////////////    GPIO_DEMO_TEST_CASE   //////////////////////////////
#define  DUTCMD_GPIO_INPUT         				0x0100
#define	 DUTCMD_GPIO_OUTPUT_LOW					0x0101
#define	 DUTCMD_GPIO_OUTPUT_HIGH				0x0102
#define	 DUTCMD_GPIO_DIGITAL_PULL_UP		    0x0103
#define	 DUTCMD_GPIO_ANALOG_PULL_UP_1M       	0x0104
#define	 DUTCMD_GPIO_ANALOG_PULL_UP_10K       	0x0105
#define	 DUTCMD_GPIO_ANALOG_PULL_DOWN_100K      0x0106
#define	 DUTCMD_GPIO_IRQ						0x0107
#define	 DUTCMD_GPIO_IRQ_RISC0					0x0108
#define	 DUTCMD_GPIO_IRQ_RISC1					0x0109
#define	 DUTCMD_GPIO_IRQ_SEL					0x010A
#define	 DUTCMD_GPIO_IRQ_REPORT					0x010B
#define	 DUTCMD_GPIO_IRQ_SEL_REPORT			    0x010C

#define    TL_TEST_RESP_OK     					1
#define    TL_TEST_RESP_ERR    					0
#define    RESP_TYPE_PARAM_ERR  				0xff
/////////////////////////    ADC_DEMO_TEST_CASE   //////////////////////////////
#define	 AUTO_TEST_DUTCMD_ADC_TEST						0x0200

/////////////////////////    AES_DEMO_TEST_CASE   //////////////////////////////
#define	 DUTCMD_AES_TEST						0x0300

/////////////////////////   ALG_REG_DEMO_TEST_CASE   //////////////////////////////
#define	 DUTCMD_ANALOG_BYTE_WRITE				0x0400
#define	 DUTCMD_ANALOG_HALFWORD_WRITE			0x0401
#define	 DUTCMD_ANALOG_WORD_WRITE				0x0402
#define	 DUTCMD_ANALOG_BUFF_WRITE				0x0403
#define	 DUTCMD_ANALOG_WORD_DMA_WRITE			0x0404
#define	 DUTCMD_ANALOG_BUFF_DMA_WRITE			0x0405
#define	 DUTCMD_ANALOG_ADDR_DATA_WRITE			0x0406

/////////////////////////   Audio_DEMO_TEST_CASE   //////////////////////////////
#define	 DUTCMD_AUDIO_TEST						0x0500

/////////////////////////   RF_DEMO_TEST_CASE   //////////////////////////////
#define	 DUTCMD_RF_TEST							0x0600

/////////////////////////   BT_DEMO_TEST_CASE   //////////////////////////////
#define	 DUTCMD_BT_TEST							0x0700

/////////////////////////   Coremark_DEMO_TEST_CASE   //////////////////////////////
#define	 DUTCMD_COREMARK_TEST					0x0800

/////////////////////////   Dhrystone_DEMO_TEST_CASE   //////////////////////////////
#define	 DUTCMD_DHRYSTONE_TEST					0x0900

/////////////////////////   Flash_DEMO_TEST_CASE   //////////////////////////////
#define	 DUTCMD_Flash_TEST						0x0a00

/////////////////////////   IIC_DEMO_TEST_CASE   //////////////////////////////
#define	 DUTCMD_I2C_TEST						0x0b00

/////////////////////////   LPC_DEMO_TEST_CASE   //////////////////////////////
#define	 DUTCMD_LPC_TEST						0x0c00

/////////////////////////   MDEC_DEMO_TEST_CASE   //////////////////////////////
#define	 DUTCMD_MDEC_TEST						0x0d00

/////////////////////////   NPE_DEMO_TEST_CASE   //////////////////////////////
#define	 DUTCMD_NPE_TEST						0x0e00

/////////////////////////   PKE_DEMO_TEST_CASE   //////////////////////////////
#define	 DUTCMD_PKE_TEST						0x0f00

/////////////////////////   PM_DEMO_TEST_CASE   //////////////////////////////
#define	 DUTCMD_PM_TEST							0x1000

/////////////////////////   PWM_DEMO_TEST_CASE   //////////////////////////////
#define	 DUTCMD_PWM_CONTINUE	 			    0x1100
#define	 DUTCMD_PWM_COUNT	 			        0x1101
#define  DUTCMD_PWM_IR							0x1102
#define  DUTCMD_PWM_IR_FIFO 					0x1103
#define  DUTCMD_PWM_IR_DMA						0x1104
/////////////////////////   S7816_DEMO_TEST_CASE   //////////////////////////////
#define	 DUTCMD_S7816_TEST						0x1200

/////////////////////////   STimer_DEMO_TEST_CASE   //////////////////////////////
#define	 DUTCMD_STIMER_TEST						0x1300

/////////////////////////   Timer_DEMO_TEST_CASE   //////////////////////////////
#define	 DUTCMD_TIMER_TEST						0x1400

/////////////////////////   TRNG_DEMO_TEST_CASE   //////////////////////////////
#define	 DUTCMD_TRNG_TEST						0x1500

/////////////////////////   UART_DEMO_TEST_CASE   //////////////////////////////
#define	 DUTCMD_UART_TEST						0x1600

/////////////////////////   USB_DEMO_TEST_CASE   //////////////////////////////
#define	 DUTCMD_USB_TEST						0x1700

#endif /* _DUT_CMD_H_ */
