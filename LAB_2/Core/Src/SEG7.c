/*
 * SEG7.c
 *
 *  Created on: Sep 24, 2024
 *      Author: Admin
 */
#include "SEG7.h"
int index_led = 0;
int led_buffer[4] = {1, 2, 3, 4};
const int MAX_LED = 4;
void print_SEG7(int num)
{
	switch(num)
			  {
			      case 0:
			    	          HAL_GPIO_WritePin(GPIOB, SEG0_Pin, GPIO_PIN_RESET);
			    	          HAL_GPIO_WritePin(GPIOB, SEG1_Pin, GPIO_PIN_RESET);
			    	          HAL_GPIO_WritePin(GPIOB, SEG2_Pin, GPIO_PIN_RESET);
			    	          HAL_GPIO_WritePin(GPIOB, SEG3_Pin, GPIO_PIN_RESET);
			    	          HAL_GPIO_WritePin(GPIOB, SEG4_Pin, GPIO_PIN_RESET);
			    	          HAL_GPIO_WritePin(GPIOB, SEG5_Pin, GPIO_PIN_RESET);
			    	          HAL_GPIO_WritePin(GPIOB, SEG6_Pin, GPIO_PIN_SET);
			                  break;
			      case 1:
			    	          HAL_GPIO_WritePin(GPIOB, SEG0_Pin, GPIO_PIN_SET);
			                  HAL_GPIO_WritePin(GPIOB, SEG1_Pin, GPIO_PIN_RESET);
			                  HAL_GPIO_WritePin(GPIOB, SEG2_Pin, GPIO_PIN_RESET);
			                  HAL_GPIO_WritePin(GPIOB, SEG3_Pin, GPIO_PIN_SET);
			                  HAL_GPIO_WritePin(GPIOB, SEG4_Pin, GPIO_PIN_SET);
			                  HAL_GPIO_WritePin(GPIOB, SEG5_Pin, GPIO_PIN_SET);
			                  HAL_GPIO_WritePin(GPIOB, SEG6_Pin, GPIO_PIN_SET);
			                  break;
			      case 2:
			    	          HAL_GPIO_WritePin(GPIOB, SEG0_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG1_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG2_Pin, GPIO_PIN_SET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG3_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG4_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG5_Pin, GPIO_PIN_SET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG6_Pin, GPIO_PIN_RESET);
			      	          break;
			      case 3:
			    	          HAL_GPIO_WritePin(GPIOB, SEG0_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG1_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG2_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG3_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG4_Pin, GPIO_PIN_SET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG5_Pin, GPIO_PIN_SET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG6_Pin, GPIO_PIN_RESET);
			      	          break;
			      case 4:
			    	          HAL_GPIO_WritePin(GPIOB, SEG0_Pin, GPIO_PIN_SET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG1_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG2_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG3_Pin, GPIO_PIN_SET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG4_Pin, GPIO_PIN_SET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG5_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG6_Pin, GPIO_PIN_RESET);
			      	          break;
			      case 5:
			    	          HAL_GPIO_WritePin(GPIOB, SEG0_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG1_Pin, GPIO_PIN_SET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG2_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG3_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG4_Pin, GPIO_PIN_SET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG5_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG6_Pin, GPIO_PIN_RESET);
			      	          break;
			      case 6:
			    	          HAL_GPIO_WritePin(GPIOB, SEG0_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG1_Pin, GPIO_PIN_SET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG2_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG3_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG4_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG5_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG6_Pin, GPIO_PIN_RESET);
			      	          break;
			      case 7:
			    	          HAL_GPIO_WritePin(GPIOB, SEG0_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG1_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG2_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG3_Pin, GPIO_PIN_SET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG4_Pin, GPIO_PIN_SET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG5_Pin, GPIO_PIN_SET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG6_Pin, GPIO_PIN_SET);
			      	          break;
			      case 8:
			    	          HAL_GPIO_WritePin(GPIOB, SEG0_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG1_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG2_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG3_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG4_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG5_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG6_Pin, GPIO_PIN_RESET);
			      	          break;
			      case 9:
			    	          HAL_GPIO_WritePin(GPIOB, SEG0_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG1_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG2_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG3_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG4_Pin, GPIO_PIN_SET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG5_Pin, GPIO_PIN_RESET);
			      	          HAL_GPIO_WritePin(GPIOB, SEG6_Pin, GPIO_PIN_RESET);
			      	          break;
			  }
}
void update7SEG(int index)
{
	 switch (index){
	     case 0:
	    	 HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET);
	    	 HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
	    	 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
	    	 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
	    	 print_SEG7(led_buffer[0]);
	         break;
	     case 1:
	    	 HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
	    	 HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
	    	 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
	    	 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
	    	 print_SEG7(led_buffer[1]);
	     	 break;
	     case 2:
	    	 HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
	    	 HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
	    	 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
	    	 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
	    	 print_SEG7(led_buffer[2]);
	     	 break;
	     case 3:
	    	 HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
	    	 HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
	    	 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
	    	 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
	    	 print_SEG7(led_buffer[3]);
	     	 break;
	     default:
		     break;
	 }
}
