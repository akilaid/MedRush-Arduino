#include <SoftwareSerial.h>
#include "handleDispense.h"
#include "vibrator.h"
#include "emptyTrays.h"

SoftwareSerial Slave(10, 11); // RX, TX

void setup()
{
  Serial.begin(9600);
  Slave.begin(4800);
  pinMode(vibrator, OUTPUT);
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
  vibrateUpdate();
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
    if (letters == "emptyTrays")
    {
      emptyTrays();
    }
    else if (letters == "dropPillsM")
    {
      dispenseMorning();
    }
    else if (letters == "dropPillsA")
    {
      dispenseAfternoon();
    }
    else if (letters == "dropPillsE")
    {
      dispenseEvening();
    }
    else if (letters == "timedout")
    {
      Serial.println("Timed out");
    }
    else if (letters == "timeupdated")
    {
      Serial.println("Time updated");
      EEPROM.update(madd, 1);
      delay(1000);
      EEPROM.update(aadd, 1);
      delay(1000);
      EEPROM.update(eadd, 1);
    }
    else
    {
      Serial.println("Unknown command");
      digitalWrite(LEDr, HIGH);
      delay(50);
      digitalWrite(LEDr, LOW);
      delay(50);
      digitalWrite(LEDr, HIGH);
      delay(50);
      digitalWrite(LEDr, LOW);
      delay(50);
    }
  }
}
