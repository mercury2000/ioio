#ifndef __FEATURES_H__
#define __FEATURES_H__

#include "GenericTypeDefs.h"

void SetPinDigitalOut(int pin, int value, int open_drain);
void SetPinDigitalIn(int pin, int pull);
void SetPinAnalogIn(int pin);
void SetPinPwm(int pin, int pwm_num);
void SetPinUartRx(int pin, int uart_num, int enable);
void SetPinUartTx(int pin, int uart_num, int enable);
void SetPinSpi(int pin, int spi_num, int mode, int enable);
void HardReset();
void SoftReset();


#endif  // __FEATURES_H__
