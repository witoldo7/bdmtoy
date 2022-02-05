#ifndef __COMMON_USB_H__
#define __COMMON_USB_H__
#include <string.h>
#include <stdio.h>
#include <stdint.h>

#include "stm32f10x_gpio.h"

#include "cmddesc.h"

// I'd much rather have these private but the assisted functions / TAP_shared prevents that
extern uint16_t receiveBuffer[ADAPTER_BUFzIN/2];
extern volatile uint32_t usbrec;


#endif
