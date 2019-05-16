/*
 * GccApplication2.c
 *
 * Created: 15-05-2019 15:50:29
 * Author : G J S S BHANU
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include<util/delay.h>
void PWM_init_()
{
	TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
	DDRB|=(1<<PB3);
}


int main(void)
{
	DDRD=0XFF;
	DDRD=0X00;
    /* Replace with your application code */
    while (1) 
    {
		PWM_init_();
		if(PIND &(1<<PB0)==0)
		{
			OCR0=100;
		}
		if((PIND & (1<<PD1)==0))
		{
			OCR0=200;
		}
    }
}

