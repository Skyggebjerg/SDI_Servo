#include <Arduino.h>

#include <M5Atom.h> 
#include "AtomMotion.h"
//#include <PS4Controller.h>

AtomMotion Atom;
int servoPos;
int stigning;
int hastighed;

void setup(){ 
  M5.begin(true, false, true);
  Atom.Init();

  //PS4.begin("4C:75:25:AD:78:7A");
  Serial.println("Ready.");
  servoPos =  0;
  stigning = 1;
  hastighed = 1;
  Atom.SetMotorSpeed(1, hastighed);
}

void loop() {

       
    servoPos = 45;
     Atom.SetServoAngle(1,servoPos);
     delay(2000);
      servoPos = 0;
      Atom.SetServoAngle(1,servoPos);
      delay(2000);
}