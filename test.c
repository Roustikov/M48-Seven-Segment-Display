/*****************************************************
This program was produced by the
CodeWizardAVR V2.05.0 Professional
Automatic Program Generator
© Copyright 1998-2010 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 21.07.2013
Author  : 
Company : 
Comments: 


Chip type               : ATmega48PA
AVR Core Clock frequency: 8,000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 128
*****************************************************/

#include <mega48a.h>
#include <delay.h>
int cnt=0;
void display(int a)
{
int d=90;
delay_ms(20); 
switch(a)
{
case 0:
{PORTD=0x00; PORTC=0x00; PORTD.0=1; PORTD.1=1; PORTD.3=1; PORTC.3=1; PORTC.4=1; PORTC.5=1;} break;
case 1:
{PORTD=0x00; PORTC=0x00; PORTD.3=1; PORTC.5=1;}  break;
case 2:
{PORTD=0x00; PORTC=0x00; PORTC.3=1; PORTC.5=1; PORTD.4=1; PORTD.0=1; PORTD.1=1;}  break;
case 3:
{PORTD=0x00; PORTC=0x00; PORTC.3=1; PORTC.5=1; PORTD.4=1; PORTD.3=1; PORTD.1=1;} break;
case 4:
{PORTD=0x00; PORTC=0x00; PORTC.4=1; PORTC.5=1; PORTD.4=1; PORTD.3=1;}  break;
case 5:
{PORTD=0x00; PORTC=0x00; PORTC.3=1; PORTC.4=1; PORTD.4=1; PORTD.3=1; PORTD.1=1;}  break;
case 6:
{PORTD=0x00; PORTC=0x00; PORTC.3=1; PORTC.4=1; PORTD.4=1; PORTD.0=1; PORTD.1=1; PORTD.3=1;}  break;
case 7:
{PORTD=0x00; PORTC=0x00; PORTC.3=1; PORTC.5=1; PORTD.3=1;}  break;
case 8:
{PORTD=0x00; PORTC=0x00; PORTD.0=1; PORTD.1=1; PORTD.3=1; PORTD.4=1; PORTC.3=1; PORTC.4=1; PORTC.5=1;} break;
case 9:
{PORTD=0x00; PORTC=0x00; PORTD.1=1; PORTD.3=1; PORTD.4=1; PORTC.3=1; PORTC.4=1; PORTC.5=1;} break;
case 99:
{PORTD=0x00; PORTC=0x00;
PORTD.1=1; delay_ms(d); 
PORTD.0=1; delay_ms(d);PORTD.1=0; 
PORTC.4=1; delay_ms(d);PORTD.0=0; 
PORTC.3=1; delay_ms(d);PORTC.4=0;
PORTC.5=1; delay_ms(d);PORTC.3=0; 
PORTD.3=1; delay_ms(d);PORTC.5=0; 
PORTD.1=1; delay_ms(d);PORTD.3=0; PORTD.1=0;
cnt=0;
} break;
}

}


void main(void)
{
// Declare your local variables here
unsigned char normal;
// Crystal Oscillator division factor: 1
#pragma optsize-
CLKPR=0x80;
CLKPR=0x00;
#ifdef _OPTIMIZE_SIZE_
#pragma optsize+
#endif

// Input/Output Ports initialization
// Port B initialization
// Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
// State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=T 
PORTB=0xFF;
DDRB=0x00;

// Port C initialization
// Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
// State6=T State5=T State4=T State3=T State2=T State1=T State0=T 
PORTC=0x00;
DDRC=0xFF;

// Port D initialization
// Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
// State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=T 
PORTD=0x00;
DDRD=0xFF;

// Timer/Counter 0 initialization
// Clock source: System Clock
// Clock value: Timer 0 Stopped
// Mode: Normal top=0xFF
// OC0A output: Disconnected
// OC0B output: Disconnected
TCCR0A=0x00;
TCCR0B=0x00;
TCNT0=0x00;
OCR0A=0x00;
OCR0B=0x00;

// Timer/Counter 1 initialization
// Clock source: System Clock
// Clock value: Timer1 Stopped
// Mode: Normal top=0xFFFF
// OC1A output: Discon.
// OC1B output: Discon.
// Noise Canceler: Off
// Input Capture on Falling Edge
// Timer1 Overflow Interrupt: Off
// Input Capture Interrupt: Off
// Compare A Match Interrupt: Off
// Compare B Match Interrupt: Off
TCCR1A=0x00;
TCCR1B=0x00;
TCNT1H=0x00;
TCNT1L=0x00;
ICR1H=0x00;
ICR1L=0x00;
OCR1AH=0x00;
OCR1AL=0x00;
OCR1BH=0x00;
OCR1BL=0x00;

// Timer/Counter 2 initialization
// Clock source: System Clock
// Clock value: Timer2 Stopped
// Mode: Normal top=0xFF
// OC2A output: Disconnected
// OC2B output: Disconnected
ASSR=0x00;
TCCR2A=0x00;
TCCR2B=0x00;
TCNT2=0x00;
OCR2A=0x00;
OCR2B=0x00;

// External Interrupt(s) initialization
// INT0: Off
// INT1: Off
// Interrupt on any change on pins PCINT0-7: Off
// Interrupt on any change on pins PCINT8-14: Off
// Interrupt on any change on pins PCINT16-23: Off
EICRA=0x00;
EIMSK=0x00;
PCICR=0x00;

// Timer/Counter 0 Interrupt(s) initialization
TIMSK0=0x00;

// Timer/Counter 1 Interrupt(s) initialization
TIMSK1=0x00;

// Timer/Counter 2 Interrupt(s) initialization
TIMSK2=0x00;

// USART initialization
// USART disabled
UCSR0B=0x00;

// Analog Comparator initialization
// Analog Comparator: Off
// Analog Comparator Input Capture by Timer/Counter 1: Off
ACSR=0x80;
ADCSRB=0x00;
DIDR1=0x00;

// ADC initialization
// ADC disabled
ADCSRA=0x00;

// SPI initialization
// SPI disabled
SPCR=0x00;

// TWI initialization
// TWI disabled
TWCR=0x00;
display(0);
normal=PINB.1;
while (1)
    {
    while(normal==PINB.1)
    {} 
    while(normal!=PINB.1)
    {}
     
            if(cnt<10)
            {
            display(cnt);
            cnt++;
            }    
            else
            {  
            display(99);
            display(0);
            cnt++;
            }  
    }
}      