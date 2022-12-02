#include <Arduino.h>


uint8_t output = 0b10101010;
uint8_t i = 0;
uint8_t nextBit;

int main(){

  while (1){

    PORTD &= ~(1<<PD4);
    for (i = 0; i < 8; i++)
    {
      nextBit=(output>>1)&0b00000001;
      if(nextBit){
        PORTD|=(1<<PD5);//Salida
      }


    }
    
  }
}
