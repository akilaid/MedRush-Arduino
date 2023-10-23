#ifndef HANDLECUP_H
#define HANDLECUP_H

#include <Arduino.h>

int LEDr = 2;
int LEDg = 4;
int LEDb = 5;

const int buttonPin = 7;
int buttonState = 0;

void handleCup(){
  do
      {
        digitalWrite(LEDb, HIGH); // Turn on the LED
        delay(50);                // Wait for 50 milliseconds
        digitalWrite(LEDb, LOW);  // Turn off the LED
        delay(50);                // Wait for 50 milliseconds
        digitalWrite(LEDb, HIGH); // Turn on the LED
        delay(50);                // Wait for 50 milliseconds
        digitalWrite(LEDg, HIGH);  // Turn off the LED
        delay(50);    
        digitalWrite(LEDb, LOW); // Turn on the LED
        delay(50);                // Wait for 50 milliseconds
        digitalWrite(LEDg, LOW);  // Turn off the LED
        delay(50);                // Wait for 50 milliseconds
        digitalWrite(LEDg, HIGH); // Turn on the LED
        delay(50);                // Wait for 50 milliseconds
        digitalWrite(LEDg, LOW);  // Turn off the LED
        delay(50);  
        buttonState = digitalRead(buttonPin);
      } while (buttonState == LOW);
      do
      {
        digitalWrite(LEDr, HIGH); // Turn on the LED
        delay(50);                // Wait for 50 milliseconds
        digitalWrite(LEDr, LOW); // Turn off the LED
        delay(50);
        digitalWrite(LEDr, HIGH); // Turn on the LED
        delay(50);                // Wait for 50 milliseconds
        digitalWrite(LEDr, LOW);
        delay(1000);                // Wait for 50 milliseconds
        buttonState = digitalRead(buttonPin);
      } while (buttonState == HIGH);
}

#endif
