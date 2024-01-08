#ifndef EMPTYTRAYS_H
#define EMPTYTRAYS_H

#include <Arduino.h>
#include "servoController.h"

// const int dirPin = 12;
// const int stepPin = 13;

// const int dirPin = 12;
// const int stepPin = 13;
// const int stepsPerRevolution = 2048;
// const int stepSpeed = 500;
const int servoDelay = 500;
void emptyTrays()
{
    Serial.println("Emptying trays");
    for (int x = 0; x < stepsPerRevolution; x++)
    {
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(stepSpeedDispense);
        digitalWrite(stepPin, LOW);
        delayMicroseconds(stepSpeedDispense);
    }
    delay(servoDelay);
    activeServo();
    for (int x = 0; x < stepsPerRevolution; x++)
    {
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(stepSpeedDispense);
        digitalWrite(stepPin, LOW);
        delayMicroseconds(stepSpeedDispense);
    }
    delay(servoDelay);
    activeServo();
    for (int x = 0; x < stepsPerRevolution; x++)
    {
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(stepSpeedDispense);
        digitalWrite(stepPin, LOW);
        delayMicroseconds(stepSpeedDispense);
    }
    delay(servoDelay);
    activeServo();
    for (int x = 0; x < stepsPerRevolution; x++)
    {
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(stepSpeedDispense);
        digitalWrite(stepPin, LOW);
        delayMicroseconds(stepSpeedDispense);
    }
    delay(servoDelay);
    activeServo();
    for (int x = 0; x < stepsPerRevolution; x++)
    {
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(stepSpeedDispense);
        digitalWrite(stepPin, LOW);
        delayMicroseconds(stepSpeedDispense);
    }
    delay(servoDelay);
    activeServo();
    for (int x = 0; x < stepsPerRevolution; x++)
    {
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(stepSpeedDispense);
        digitalWrite(stepPin, LOW);
        delayMicroseconds(stepSpeedDispense);
    }
    delay(servoDelay);
    activeServo();
    for (int x = 0; x < stepsPerRevolution; x++)
    {
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(stepSpeedDispense);
        digitalWrite(stepPin, LOW);
        delayMicroseconds(stepSpeedDispense);
    }
    delay(servoDelay);
    activeServo();
    for (int x = 0; x < stepsPerRevolution; x++)
    {
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(stepSpeedDispense);
        digitalWrite(stepPin, LOW);
        delayMicroseconds(stepSpeedDispense);
    }
    delay(servoDelay);
    activeServo();
    for (int x = 0; x < stepsPerRevolution; x++)
    {
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(stepSpeedDispense);
        digitalWrite(stepPin, LOW);
        delayMicroseconds(stepSpeedDispense);
    }
    delay(servoDelay);
    activeServo();
    for (int x = 0; x < stepsPerRevolution; x++)
    {
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(stepSpeedDispense);
        digitalWrite(stepPin, LOW);
        delayMicroseconds(stepSpeedDispense);
    }
    delay(servoDelay);
    activeServo();

}

#endif
