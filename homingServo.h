#ifndef HOMINGSERVO_H
#define HOMINGSERVO_H

#include <Arduino.h>
#include "vibrator.h"

const int limitSW = 8;
int limitSWState = 1;

const int dirPin = 12;
const int stepPin = 13;
const int stepsPerRevolution = 2048;


void homingServo()
{
  Serial.println("Homing servo...");
  digitalWrite(dirPin, LOW);
  delay(500);
  limitSWState = digitalRead(limitSW);
  while (limitSWState == LOW)
  {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
    limitSWState = digitalRead(limitSW);
    vibrateUpdate();
  }
  delay(1000);
   Serial.println("Homing completed");
}

#endif
