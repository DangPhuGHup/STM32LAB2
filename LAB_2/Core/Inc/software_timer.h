/*
 * software_timer.h
 *
 *  Created on: Sep 24, 2024
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer_SEG1_flag;       // co cho led7 thu nhat
extern int timer_SEG2_flag;       // co cho led7 thu hai
void setTimer1(int duration);
void setTimer_SEG1(int duration); // LED 7 doan thu nhat
void setTimer_SEG2(int duration); // LED 7 doan thu hai
void setTimer_break(int duration);// 0.5 giay nghi giua led7 thu nhat va led7 thu hai

void timerRun();


#endif /* INC_SOFTWARE_TIMER_H_ */
