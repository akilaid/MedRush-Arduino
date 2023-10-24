#ifndef VIBRATOR_H
#define VIBRATOR_H

#include <Arduino.h>

int vibrator = 3;

unsigned long startTime = 0;
const unsigned long vibrationDuration = 5000; // 5 seconds in milliseconds

void vibrateON()
{
    digitalWrite(vibrator, HIGH);
    startTime = millis(); // Record the start time when the vibrator is turned on
}

void vibrateUpdate()
{
    if (millis() - startTime >= vibrationDuration)
    {
        digitalWrite(vibrator, LOW); // Turn off the vibrator after 5 seconds
    }
}

#endif
