#include "stm32f4xx.h"


int main (void)
{
	uint32_t i;
	
	// Enable Clock for Port D
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;  
	
	// Init LED Port D
	// 00 = gpi mode
	// 01 = gpo mode
	GPIOD->MODER = 0x55000000;
	
	// Output Type init
	// 0 = push pull
	// 1 = opden drain
	GPIOD->OTYPER = 0;
	
	// init output speed
	GPIOD->OSPEEDR = 0;
	
	// init 
	

	// infit loop
	while(1)
	{
		GPIOD->ODR = 0xF000;
		
		GPIOD->ODR = 0x0000;
	
	}
}