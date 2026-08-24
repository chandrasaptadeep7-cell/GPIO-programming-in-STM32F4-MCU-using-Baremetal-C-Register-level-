#include <stdint.h>

//FUNCTION PROTOTYPES
void delay(void);
void debounce_delay(void);

//Defining base addresses
#define AHB1ENR (0x30+0x40023800)
#define GPIOB_MODER (0x40020400 + 0x00)
#define GPIOB_ODR (0x40020400 + 0x14)
#define GPIOB_IDR (0x40020400 + 0x10)
#define GPIOB_PUPDR (0x40020400 + 0x0C)


int main(void){

	//Defining via pointer
	volatile uint32_t* CLK = (uint32_t*)AHB1ENR;
	volatile uint32_t* MODER = (uint32_t*)GPIOB_MODER;
	volatile uint32_t* ODR = (uint32_t*)GPIOB_ODR;
	volatile uint32_t* IDR = (uint32_t*)GPIOB_IDR;
	volatile uint32_t* PUPDR = (uint32_t*)GPIOB_PUPDR;


//Accessing each register via pointer dereferencing

//Enable RCC_AHB1EN
	*CLK |= (1<<1);

//Reset GPIOB_Mode register, clear the GPIO B12 mode bits
	*MODER &= ~(3<<24);

// Setting pin no 12 as Output. Work as pinMode() as Arduino IDE.
	*MODER |= (1<<24);

// Set B10 as input
	*MODER &= ~(3<<20);

// SET INTERNAL PULLUP TO AVOID CONNECTING EXTERNAL REGISTER
	*PUPDR &= ~(3<<20);
	*PUPDR |= (1<<20);

//Set pin no 12 to Logic LOW
	*ODR &=  ~(1<<12);



    /* Loop forever */
	do{
//IF BUTTON IS PRESSED THEN OF B10 PIN THE LED WILL BLINK
		if(!(*IDR & (1<<10))){

			debounce_delay();

		*ODR |=  (1<<12); //SET B12 TO HIGH
		delay();			//WAIT FOR 1/2 SECOND
		*ODR &=  ~(1<<12);	//SET B12 TO HIGH
		delay();			//WAIT FOR 1/2 SECOND
		}
		else{

			*ODR &=  ~(1<<12);
		}

	} while(1);
}

void delay(void)
{
	for (uint32_t i = 0; i<=(1000000/2); i++);
}


void debounce_delay(void)
{
	for (uint32_t i = 0; i<=10000; i++);
}
