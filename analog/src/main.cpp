#include <stdio.h>
#include <stdlib.h>
#include <Arduino.h>

int greenPin = 10;

void setup()
{
  pinMode(greenPin, OUTPUT);
}

void loop()
{
  analogWrite(greenPin, 225);
  delay(1000);
  analogWrite(greenPin, 10);
  delay(1000);
}
