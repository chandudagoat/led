#include <Arduino.h>

int greenPin = 9;

void setup()
{
  pinMode(greenPin, OUTPUT);
}

void loop()
{
  analogWrite(greenPin, 40);
}
