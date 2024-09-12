#include "Sonar.h"

Sonar::Sonar(int trig, int echo){
      this-> trig = trig;
      this-> echo = echo;
    }
void Sonar::begin(){
      pinMode(trig, OUTPUT);
      pinMode(echo, INPUT);
    }
float Sonar::distance(int value){
      if(value == 0){
        return dur() / _CM;
      }
      if(value == 1){
        return dur() / _IN;
      }
    }
int Sonar::dur(){
      digitalWrite(trig, HIGH);
      delayMicroseconds(10);
      digitalWrite(trig, LOW);
      return pulseIn(echo, true);
    }