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
extern int updateSEG7_flag; // timer cho ham update SEG7
extern int timer_display_flag; // timer cho 0.25s moi SEG7

void setTimer1(int duration);
void setTimer2(int duartion);
void setTimer3(int duration);
void setTimer4(int duration);
void setTimer5(int duration);
void setTimer6(int duration);
void setTimerDOT(int duartion);
void setTimerUpdateSEG7(int duration);
void setTimer_display(int duration);

void timerRun();


#endif /* INC_SOFTWARE_TIMER_H_ */
