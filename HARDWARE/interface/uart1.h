#ifndef __UART1_H
#define __UART1_H
#include "sys.h"
#include <stdbool.h>

/********************************************************************************	 
 * 本程序只供学习使用，未经作者许可，不得用于其它任何用途
 * ALIENTEK MiniFly
 * UART1驱动代码	
 * 正点原子@ALIENTEK
 * 技术论坛:www.openedv.com
 * 创建日期:2017/5/12
 * 版本：V1.3
 * 版权所有，盗版必究。
 * Copyright(C) 广州市星翼电子科技有限公司 2014-2024
 * All rights reserved
********************************************************************************/

//UART3配置
#define USB_TYPE USART1
#define USB_PERIF RCC_APB2Periph_USART1
#define ENABLE_USB_RCC RCC_APB2PeriphClockCmd
#define USB_IRQ USART1_IRQn

#define USB_GPIO_PERIF RCC_APB2Periph_GPIOA
#define USB_GPIO_PORT GPIOA
#define USB_GPIO_TX_PIN GPIO_Pin_9
#define USB_GPIO_RX_PIN GPIO_Pin_10
#define USB_GPIO_AF_TX_PIN GPIO_PinSource9
#define USB_GPIO_AF_RX_PIN GPIO_PinSource10
#define USB_GPIO_AF_TX GPIO_AF_USART1
#define USB_GPIO_AF_RX GPIO_AF_USART1

#define USB_BAUDRATE 115200

void usbInit(void); /*串口初始化*/
bool usbTest(void);
bool usbGetDataWithTimout(u8* c); /*从接收队列读取数据(带超时处理)*/
void usbSendData(u8* data, u32 size); /*发送原始数据*/
void usbSendDataIsrBlocking(u32 size, u8* data); /*中断方式发送原始数据*/
int usbPutchar(int ch); /*发送一个字符到串口*/
// void usbSendDataDmaBlocking(u32 size, u8* data); /*通过DMA发送原始数据*/
void usbIsr(void); /*串口中断服务函数*/
// void usbDmaIsr(void); /*DMA中断服务函数*/
// void usbTxenFlowctrlIsr(void);
bool getusbConnectState(void);

#endif /* __UART1_H */
