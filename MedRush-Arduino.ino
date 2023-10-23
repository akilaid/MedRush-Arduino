#include <SoftwareSerial.h>
#include "handleMorning.h"
#include "handleAfternoon.h"
#include "servoController.h"
#include "handleEvening.h"
#include "handleCup.h"
#include "homingServo.h"

SoftwareSerial Slave(10, 11); // RX, TX

void setup()
{
  Serial.begin(9600);
  Slave.begin(4800);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LEDb, OUTPUT);
  pinMode(LEDg, OUTPUT);
  pinMode(LEDr, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(limitSW, INPUT_PULLUP);
  myservo.attach(9);
  myservo.write(0);
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  homingServo();
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if (Slave.available())
  {
    String command = Slave.readStringUntil('\n'); // Read the command as a String
    String letters = "";                          // Initialize an empty string to store the letters
    for (int i = 0; i < command.length(); i++)
    {
      if (isAlpha(command[i]))
      {                        
        letters += command[i];
      }
    }
    Serial.println("Command : " + letters);
    if (letters == "dropPills")
    {
      dispenseMorning();
      activeServo();
      handleCup();
      homingServo();
    }
    if (letters == "dropPillsM")
    {
      dispenseMorning();
      activeServo();
      handleCup();
      homingServo();
    }
    if (letters == "dropPillsA")
    {
      dispenseAfternoon();
      activeServo();
      handleCup();
      homingServo();
    }
    if (letters == "dropPillsE")
    {
      dispenseEvening();
      activeServo();
      handleCup();
      homingServo();
    }
    if (letters == "wifiConnected")
    {
      //move servo to relevant tray#
      Serial.println("Connected to wifi");
    }
  }
}
