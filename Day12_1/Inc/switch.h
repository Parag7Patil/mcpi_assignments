/*
 * switch.h
 *
 *  Created on: Apr 6, 2024
 *      Author: parag
 */

#ifndef SWITCH_H_
#define SWITCH_H_

#include "stm32f4xx.h"
#include "stm32f407xx.h"

#define SWITCH_GPIO		GPIOA
#define SWITCH_GPIO_EN	0

#define SWITCH			0

void SwitchInit(uint32_t pin);
int SwitchGetState(uint32_t pin);

#endif /* SWITCH_H_ */
