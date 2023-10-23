#ifndef MORNING_H
#define MORNING_H

#include <Arduino.h>

const int dirPin = 12;
const int stepPin = 13;
const int stepsPerRevolution = 2048;

void dispenseMorning()
{
  digitalWrite(dirPin, HIGH);
  delay(500);
  Serial.println("Dropped morning");
  int revs = 1;
  for (int i = 0; i < revs; i++) // Run the loop 10 times
  {
    for (int x = 0; x < stepsPerRevolution; x++)
    {
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPin, LOW);
      delayMicroseconds(500);
    }
  }
  delay(1000); // Wait for a second between each run
}

#endif
