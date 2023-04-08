/*
 * 7_segment_display.h
 *
 *  Created on: Mar 29, 2023
 *      Author: bened
 */

#ifndef INC_7_SEGMENT_DISPLAY_H_
#define INC_7_SEGMENT_DISPLAY_H_
#define CLOCK 0
#define TIMER 1

#include "main.h"
#include "stdint.h"
void display_Min1(uint8_t num);
void display_Min10(uint8_t num);
void display_Hrs1(uint8_t num);
void display_Hrs10(uint8_t num);
void Set_hour(uint8_t Hrs , uint8_t Min);
void display_clear_all(void);
void display_init(void);
void clock_mode(void);
void timer_mode(void);



#endif /* INC_7_SEGMENT_DISPLAY_H_ */
