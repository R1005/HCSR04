#include "Arduino.h"
#include "HCSR04.h"

HCSR04::HCSR04(){
}

double HCSR04::getDistance(int trigger,int echo){
  double Duration = 0;
  double Distance = 0;
  pinMode(echo,INPUT);
  pinMode(trigger,OUTPUT);
  
  digitalWrite(trigger,LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);
  
  Duration = pulseIn(echo,HIGH);
    if (Duration > 0) {
      Duration = Duration/2;
      Distance = Duration*340*100/1000000;
    }
  return Distance;
}
