#include <stdio.h>
#include <Arduino.h>

#define MS 100

int myFunction(int, int);
void green();
void yellow();
void red();

void setup()
{
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  green();
  yellow();
  red();
}

void green()
{
  digitalWrite(7, HIGH);
  delay(MS);
  digitalWrite(7, LOW);
  delay(MS);
}

void yellow()
{
  digitalWrite(6, HIGH);
  delay(MS);
  digitalWrite(6, LOW);
  delay(MS);
}

void red()
{
  digitalWrite(8, HIGH);
  delay(MS);
  digitalWrite(8, LOW);
  delay(MS);
}
