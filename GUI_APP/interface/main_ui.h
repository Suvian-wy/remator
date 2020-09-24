#ifndef __MAIN_UI_H
#define __MAIN_UI_H
#include "atkp.h"
#include <stdbool.h>
#include <stdint.h>
/********************************************************************************
 * ������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
 * ALIENTEK MiniFly_Remotor
 * ���������
 * ����ԭ��@ALIENTEK
 * ������̳:www.openedv.com
 * ��������:2018/6/1
 * �汾��V1.0
 * ��Ȩ���У�����ؾ���
 * Copyright(C) ������������ӿƼ����޹�˾ 2014-2024
 * All rights reserved
 ********************************************************************************/

void main_ui(void);
void miniFlyMsgACKProcess(atkp_t* p);

void setRCLock(bool set);
bool getRCLock(void);

void setTrimFlag(bool set);
bool getTrimFlag(void);

void setMFLowPower(bool set);
bool getMFLowPower(void);

void setIsMFCanFly(bool set);
bool getIsMFCanFly(void);

void setFlightPowerStatus(bool set);
bool getFlightPowerStatus(void);
#endif /*__MAIN_UI_H*/
