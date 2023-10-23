#ifndef SERVOCONTROLLER_H
#define SERVOCONTROLLER_H

#include <Arduino.h>
#include <Servo.h>

Servo myservo;
int pos = 0;

void activeServo()
{
  for (pos = 0; pos <= 60; pos += 1)
  { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos); // tell servo to go to position in variable 'pos'
    delay(15);          // waits 15 ms for the servo to reach the position
  }
  delay(500);
  for (pos = 60; pos >= 0; pos -= 1)
  {                     // goes from 180 degrees to 0 degrees
    myservo.write(pos); // tell servo to go to position in variable 'pos'
    delay(2);           // waits 15 ms for the servo to reach the position
  }
  Serial.println("Servo activated");
}

#endif
