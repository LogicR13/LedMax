/*
 Name:		LedMax.ino
 Created:	05.04.2021 12:23:04
 Author:	Logic
*/

// подключние библиотек
#include <LedControl.h>

int DATA_PIN = 12;
int CLOCK_PIN = 11;
int CS_PIN = 10;
int NUM_DEVICES = 3;

// создаем объект
LedControl LC = LedControl(DATA_PIN, CLOCK_PIN, CS_PIN, NUM_DEVICES);

// the setup function runs once when you press reset or power the board

void setup() 
{
	Serial.begin(9600);
	Serial.println("Start");
}

// the loop function runs over and over again until power down or reset
void loop() 
{
  
}
