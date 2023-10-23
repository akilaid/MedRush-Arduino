#ifndef EVENING_H
#define EVENING_H

#include <Arduino.h>

void dispenseEvening()
{
  digitalWrite(dirPin, HIGH);
  delay(500);
  Serial.println("Dropped Evening");
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
