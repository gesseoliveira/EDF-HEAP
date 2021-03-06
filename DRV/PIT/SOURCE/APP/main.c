/**
 ******************************************************************************
 * @file    main.c
 * @author  Plinio Barbosa da Silva
 * @version V1.0
 * @brief   Default main function.
 ******************************************************************************
 */


#include "sys_cfg_stm32f407.h"
#include "stm32f4xx.h"
#include "PIT.h"



int main(void)
{
	// Initialize peripheral and power interface clock
	Sys_Enable_Peripherals_Clock();
	// Set the CPU clock and bus clock to 80MHz
	Sys_Configure_Clock_168MHz();

	for(;;)
	{
		(void)Set_Timer(0, 1000, MiliSec);
		// Create a timer event of 500ms
		(void)Set_Timer(1, 500, MiliSec);

		for(;;)
		{
			if(Get_Timer(0) == ANSWERED_REQUEST)
				(void)Set_Timer(0, 10000, MiliSec); // Restart the timer for the led1
		}
	}
}
