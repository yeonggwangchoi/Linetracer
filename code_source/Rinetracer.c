#include <mega128.h>
#include <delay.h>

void main(void)
{
    DDRD=0x00;
    PORTB=0x00;
    DDRB=0xFF;
    TCCR1A=0xA1;
    TCCR1B=0x05;
    TCNT1H=0x00;
    TCNT1L=0x00;
    ICR1H=0x00;
    ICR1L=0x00;
    OCR1AH=0x00;
    OCR1AL=0x00;
    OCR1BH=0x00;
    OCR1BL=0x00;
    OCR1CH=0x00;
    OCR1CL=0x00; 
    while (1)
    {             
         if(PIND==0x05)                   //직진
         {
            PORTB.0=1;
            PORTB.1=0;                                  
            PORTB.2=0;
            PORTB.3=1;
        
            OCR1AL=0xFF;
            OCR1BL=0xFF;
        
            delay_us(5);
         }                                
         else if(PIND==0x07)              //후진
         {
            PORTB.0=0;
            PORTB.1=1;
            PORTB.2=1;
            PORTB.3=0;
        
            OCR1AL=0xFF;
            OCR1BL=0xFF;
        
            delay_us(5);
         }
         else if(PIND==0x01)              //약간 우회전
         {
            PORTB.0=1;
            PORTB.1=0;
            PORTB.2=0;
            PORTB.3=1;
        
            OCR1AL=0xFF;
            OCR1BL=0x5F;
        
            delay_us(5);
         }
         else if(PIND==0x03)              //우회전      
         {
            PORTB.0=1;
            PORTB.1=0;
            PORTB.2=0;
            PORTB.3=1;
        
            OCR1AL=0xFF;
            OCR1BL=0x00;
        
            delay_us(5);
         }
         else if(PIND==0x04)              //약간 좌회전
         {
            PORTB.0=1;
            PORTB.1=0;
            PORTB.2=0;
            PORTB.3=1;
        
            OCR1AL=0x5F;
            OCR1BL=0xFF;
        
            delay_us(5);
         }                                 
         else if(PIND==0x06)               //좌회전
         {
            PORTB.0=1;
            PORTB.1=0;
            PORTB.2=0;
            PORTB.3=1;
        
            OCR1AL=0x00;
            OCR1BL=0xFF;
        
            delay_us(5);
         }
         else if(PIND==0x00)                //정지
         {
            PORTB.0=0;
            PORTB.1=0;
            PORTB.2=0;
            PORTB.3=0;
        
            OCR1AL=0x00;
            OCR1BL=0x00;
        
            delay_us(5);
         }
         
    }
}