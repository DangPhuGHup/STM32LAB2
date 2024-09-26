/*
 * software_timer.h
 *
 *  Created on: Sep 24, 2024
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag; // chu ky 1s LED
extern int timer2_flag; // chu ky 1.5s cho SEG7 dau tien
extern int timer3_flag; // chu ky 1.5s cho SEG7 thu hai
extern int timer4_flag; // timer interrupt 0.5S
extern int timer5_flag; // chu ky 1.5s cho 2 SEG7 thu ba
extern int timer6_flag; // chu ky 1.5s cho 2 SEG7 thu tu
extern int timerDOT_flag; // timer cho 2 led o giua
//extern int timer_SEG1_flag;       // co cho led7 thu nhat
//extern int timer_SEG2_flag;       // co cho led7 thu hai
//
void setTimer1(int duration);
void setTimer2(int duartion);
void setTimer3(int duration);
void setTimer4(int duration);
void setTimer5(int duration);
void setTimer6(int duration);
void setTimerDOT(int duartion);
//void setTimer_SEG1(int duration); // LED 7 doan thu nhat
//void setTimer_SEG2(int duration); // LED 7 doan thu hai
//void setTimer_break(int duration);// 0.5 giay nghi giua led7 thu nhat va led7 thu hai

void timerRun();


#endif /* INC_SOFTWARE_TIMER_H_ */
