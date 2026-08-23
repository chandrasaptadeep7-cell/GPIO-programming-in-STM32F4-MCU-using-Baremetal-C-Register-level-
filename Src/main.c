#include <stdint.h>

void delay(void);

//Defining base addresses
#define AHB1ENR (0x30+0x40023800)
#define GPIOB_MODER (0x40020400 + 0x00)
#define GPIOB_ODR (0x40020400 + 0x14)


int main(void){

	//Defining via pointer
	volatile uint32_t* CLK = (uint32_t*)AHB1ENR;
	volatile uint32_t* MODER = (uint32_t*)GPIOB_MODER;
	volatile uint32_t* ODR = (uint32_t*)GPIOB_ODR;


//Accessing each register via pointer dereferencing

//Enable RCC_AHB1EN
	*CLK |= (1<<1);

//Reset GPIOB_Mode register, clear the GPIO B12 mode bits
	*MODER &= ~(3<<24);

// Setting pin no 12 as Output. Work as pinMode() as Arduino IDE.
	*MODER |= (1<<24);

//Set pin no 12 to Logic High
	*ODR |=  (1<<12);



    /* Loop forever */
	do{
		*ODR ^=  (1<<12);
		delay();

	}
	while(1);
}

void delay(void)
{
	for (uint32_t i = 0; i<=1000000; i++);
}
