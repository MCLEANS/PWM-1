/*
 * PWM1.cpp
 *
 * Created: 4/4/2019 10:21:55 AM
 * Author : MCLEANS
 */ 
#define F_CPU 1000000UL

#include <avr/io.h>


int main(void)
{
    //Set the data direction to OUTPUT
    DDRD|=(1<<PIND5);
    //WGM (Waveform generation mode)
    TCCR1A|=(1<<WGM11);
    TCCR1B|=(1<<WGM12)|(1<<WGM13);

    //create period
    ICR1=19999;
    //prescaler
    TCCR1B|=(1<<CS10);
    //output mode
    TCCR1A|=(1<<COM1A0)|(1<<COM1A1);
    //OCR1A OR OCR1B
    OCR1A=ICR1-1500;

    while (1) 
    {
    }
}

