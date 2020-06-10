#include "HCSR04.h"

HCSR04 HCSR04;

void setup(){
  Serial.begin(9600);
}

void loop(){
  double distance = HCSR04.getDistance(5,4);
  Serial.print(distance);
  Serial.println(" cm");
}
