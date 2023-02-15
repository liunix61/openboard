/********************************************************************************************************
 * @file    app_ui.h
 *
 * @brief   This is the header file for app_ui
 *
 * @author  Zigbee Group
 * @date    2021
 *
 * @par     Copyright (c) 2021, Telink Semiconductor (Shanghai) Co., Ltd. ("TELINK")
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
 *******************************************************************************************************/
#ifndef _APP_UI_H_
#define _APP_UI_H_
/**********************************************************************
 * CONSTANT
 */

/**********************************************************************
 * TYPEDEFS
 */
enum{
	APP_STATE_NORMAL,
	APP_FACTORY_NEW_SET_CHECK
};

#define 	SEND_DATA	        	0x00   // ָ���̵�ַ��������
#define 	OPEN_ECHO 	  	   	 	0x01   // �򿪻���
#define 	CLOSE_ECHO 		    	0x02   // �رջ���
#define 	SET_BAUDRATE 	    	0x03   // ���ò����� �̶�����
#define 	SET_PERMIT_TIME     	0x04   // �޶�����ʱ���趨
#define 	SET_ID              	0x05   // �趨ID
#define 	SET_PER_BRO_TIME    	0x06   // �趨�㲥ID������
#define 	SET_SHORT_TIME			0x07   // ���ö̰����ʱ�� ms  ��λ��������
#define 	SET_LONG_TIME			0x08   // ���ó������ʱ�� ms  ��λ��������
#define 	SEND_SHORT_ADDR			0x09   // RF��������̵�ַ
#define 	SEND_LONG_ADDR			0x0A   // RF����������ַ
#define 	SEND_ID					0x0B   // RF��������ID
#define 	SET_GPIO_LEVEL			0x0C   // ����ĳ��GPIO���Ÿߵ͵�ƽ״̬
#define 	READ_GPIO_LEVEL			0x0D   // ��ĳ��GPIO���Ÿߵ͵�ƽ״̬
#define 	SET_GPIO_STATE			0x0E   // �����豸����/���������豸����ʱ��ĳ��IO�����ƽ״̬
#define 	SET_GPIO_SYS_EXP		0x0F   // �����豸����ʱ��ĳ��IO�����ƽ״̬
#define 	SET_GPIO_PWM_OPEN	    0x10   // ����GPIO  PWM ���� �ߵ�ƽʱ��
#define 	SET_GPIO_PWM_CLOSE	    0x11   // �ر�GPIO  PWM ����
#define 	SET_GPIO_PWM_RESTART    0x12   // ���� PWM ����
#define 	SHOW_MODE				0x13   // ��ʾ��ǰģʽ
#define 	SHOW_DEVICE_ID 			0x14   // ��ʾDEVICE_ID
#define 	SHOW_PER_BRO_TIME   	0x15   // ��ʾ�㲥DEVICE_ID������
#define 	SHOW_PERMIT_TIME    	0x16   // ��ʾ�޶�����ʱ��
#define 	SHOW_ECHO           	0x17   // ��ʾ�Ƿ��л���
#define 	SHOW_PAN_ID      		0x18   // ��ʾPAN_ID
#define 	SHOW_C_LONG_ADDR    	0x19   // ��ʾcoordinator����ַ
#define 	SHOW_LONG_ADDR      	0x1A   // ��ʾ����ַ
#define 	SHOW_SHORT_ADDR      	0x1B   // ��ʾ�̵�ַ
#define 	SHOW_DEVICE_KIND    	0x1C   // ��ʾ�豸����
#define 	SHOW_BUTTON_TICK	    0x1D   // ��ʾ�����Ͷ̰�ʱ��
#define 	SHOW_BUTTON_SELECT	    0x1E   // ��ʾ״̬������ѡ��͵�ƽ
#define 	SHOW_PWM_SELECT	   	    0x1F   // ��ʾPWM ���� �� ռ�ձ�
#define 	SHOW_ALL				0x20   // ��ʾ��������
#define 	OPEN_FEEDBACK		    0x21   // �����ú�ķ���
#define 	CLOSE_FEEDBACK	    	0x22   // �ر����ú�ķ���
#define 	SET_DEFAULT 	    	0x30   // ����Ĭ��
#define 	SET_RESET 	   	    	0x31   // ��λоƬ
#define 	SET_FACTORY		    	0x32   // �ָ���������

#define LED_ON						1
#define LED_OFF						0
#define TICKS_INTERVAL    	 		10	// ��λ������
#define DEBOUNCE_TICKS    	 		2	// MAX 8

#define EVENT_CB(ev)   if(handle->cb[ev]) handle->cb[ev]((Button*)handle)

typedef void (*BtnCallback)(void*);

typedef enum {
	PRESS_DOWN = 0,
	PRESS_UP,
	PRESS_REPEAT,
	SINGLE_CLICK,
	DOUBLE_CLICK,
	LONG_PRESS_START,
	LONG_PRESS_HOLD,
	number_of_event,
	NONE_PRESS
}PressEvent;

typedef struct Button {
	uint16_t ticks;
	uint8_t  l_pre_s: 1;
	uint8_t  repeat : 3;
	uint8_t  event  : 4;
	uint8_t  state  : 3;
	uint8_t  debounce_cnt : 3;
	uint8_t  active_level : 1;
	uint8_t  button_level : 1;
	uint8_t  (*hal_button_Level)(void);
	BtnCallback cb[number_of_event];
	struct Button* next;
}Button;

typedef enum{
    D_COORDINATOR = 0x0,
	D_ROUTER 	  = 0x1,
	D_END_DEV     = 0x2,
}device_type_e;

typedef enum{
    NV_FACTORY = 0xff,
    NV_RECODE  = 2,
}nvram_state_e;

typedef struct PWM_INFO {
	unsigned char num;
	unsigned char dutycycle;
	unsigned char temp[2];
	unsigned int tick_max;
}PWM_INFO;

typedef struct Module_Col {
	volatile nvram_state_e  NvramState;
	volatile uint8_t   module_function; // ģʽѡ��
	volatile uint8_t   device_id; 	    // �豸ID : 0 - 255
	volatile uint8_t   permit_time; 	// ������������ʱ�� ��λ:��
	volatile uint8_t   per_bro_time;    // ���ڹ㲥����IDʱ�� ��λ:��
	volatile uint32_t  baudrate; 	    // ������
	volatile uint8_t   feedback_open:1;			// �Ƿ�����ú�ķ���
	volatile uint8_t   echo_open:1; 	    	// �Ƿ�������
	volatile uint8_t   join_net_io_level:1; 	// ��������IO������ƽ
	volatile uint8_t   sys_exception_io_level:1;// ��������IO������ƽ
	volatile uint8_t   join_net_io; 	        // ��������IO
	volatile uint8_t   sys_exception_io; 	    // ��������IO
	volatile PWM_INFO  pwm_info; 	    		// PWM
	volatile uint8_t short_ticks;  // ( 0 - 255 /TICKS_INTERVAL)
	volatile uint16_t long_ticks;  // ( 3000 /TICKS_INTERVAL)
	volatile uint8_t gpio_group_num;
	volatile uint8_t pwm_group_num;

}Module_Col;

extern volatile Module_Col g_config_st;

void CFG_Load(void);
void CFG_Save(void);
void CFG_Default(void);

void light_init(void);
void light_on(void);
void light_off(void);
void led_on(u32 pin);
void led_off(u32 pin);

void button_init(struct Button* handle, uint8_t(*pin_level)());
void button_attach(struct Button* handle, PressEvent event, BtnCallback cb);
PressEvent get_button_event(struct Button* handle);
int  button_start(struct Button* handle);
void button_stop(struct Button* handle);
int button_ticks(void *par);
void Key_Init(void);

unsigned char  my_set_gpio_level(unsigned char num, unsigned char value);
unsigned char  my_read_gpio_level(unsigned char num);
unsigned char  my_set_pwm_run(unsigned char num, unsigned int frequency, unsigned int dutycycle);
unsigned char  my_set_pwm_stop(void);
unsigned char  my_set_pwm_restart(void);

void app_handler(void);
#endif	/* _APP_UI_H_ */
