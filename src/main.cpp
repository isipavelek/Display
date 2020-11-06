#include <Arduino.h>
#include <def.h>
#define DISPLAY PTD

const byte tabla[]={0x5f,0x06,0x3b,0x2f,0x66,0x6d,0x7c,0x07,0x7f,0x67};
byte i=0;

int main (void){
  DDD=0xff;
	UCSR0B = 0;
  for(;;){
    DISPLAY=tabla[i++];
    if(i==10)i=0;
    _delay_ms(1000);
  }
  return 0;
}