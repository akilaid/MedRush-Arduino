#ifndef DISPENSE_H
#define DISPENSE_H

#include <Arduino.h>
#include <EEPROM.h>
#include "servoController.h"
#include "handleCup.h"
#include "homingServo.h"
#include "vibrator.h"

int madd = 0;
int aadd = 1;
int eadd = 2;

int TrayM;
int TrayA;
int TrayE;

void dispenseMorning()
{
  TrayM = EEPROM.read(madd);
  if (TrayM == 1)
  {
    EEPROM.update(madd, 2);
    digitalWrite(dirPin, HIGH);
    delay(500);
    Serial.println("Dropped morning row 1");
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
    vibrateON();
    activeServo();
    handleCup();
    homingServo();
  }
  else if (TrayM == 2)
  {
    EEPROM.update(madd, 3);
    digitalWrite(dirPin, HIGH);
    delay(500);
    
    Serial.println("Dropped morning row 2");
    int revs = 2;
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
    vibrateON();
    activeServo();
    handleCup();
    homingServo();
  }
  else if (TrayM == 3)
  {
    EEPROM.update(madd, 0);
    digitalWrite(dirPin, HIGH);
    delay(500);
    
    Serial.println("Dropped morning row 3");
    int revs = 3;
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
    vibrateON();
    activeServo();
    handleCup();
    homingServo();
  }
  else
  {
    Serial.println("All morning trays are empty!");
    digitalWrite(LEDr, HIGH);
  }
  
}

void dispenseAfternoon()
{
  TrayA = EEPROM.read(aadd);
  if (TrayA == 1)
  {
    EEPROM.update(aadd, 2);
    digitalWrite(dirPin, HIGH);
    delay(500);
    Serial.println("Dropped Afternoon row 1");
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
    activeServo();
    handleCup();
    homingServo();
  }
  else if (TrayA == 2)
  {
    EEPROM.update(aadd, 3);
    digitalWrite(dirPin, HIGH);
    delay(500);
    Serial.println("Dropped Afternoon row 2");
    int revs = 2;
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
    activeServo();
    handleCup();
    homingServo();
  }
  else if (TrayA == 3)
  {
    EEPROM.update(aadd, 0);
    digitalWrite(dirPin, HIGH);
    delay(500);
    Serial.println("Dropped Afternoon row 3");
    int revs = 3;
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
    activeServo();
    handleCup();
    homingServo();
  }
  else
  {
    Serial.println("All Afternoon trays are empty!");
  }
}

void dispenseEvening()
{
  TrayE = EEPROM.read(eadd);
  if (TrayE == 1)
  {
    EEPROM.update(eadd, 2);
    digitalWrite(dirPin, HIGH);
    delay(500);
    Serial.println("Dropped Afternoon row 1");
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
    activeServo();
    handleCup();
    homingServo();
  }
  else if (TrayE == 2)
  {
    EEPROM.update(eadd, 3);
    digitalWrite(dirPin, HIGH);
    delay(500);
    Serial.println("Dropped Afternoon row 2");
    int revs = 2;
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
    activeServo();
    handleCup();
    homingServo();
  }
  else if (TrayE == 3)
  {
    EEPROM.update(eadd, 0);
    digitalWrite(dirPin, HIGH);
    delay(500);
    Serial.println("Dropped Afternoon row 3");
    int revs = 3;
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
    activeServo();
    handleCup();
    homingServo();
  }
  else
  {
    Serial.println("All Afternoon trays are empty!");
  }
}


#endif
