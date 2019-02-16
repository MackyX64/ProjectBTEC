// Bicycle Indicator System v0.4
// Version: PROTO_0.4
// Desc: This is the main program that controls the light system and
//       activates the corresponding light via a wireless signal.
// Requirements for Board:
// > 433 MHz Receiver Module (External Component)
// > RCSwitch Library (Software Programming)

// Library Dependencies used by program. DO NOT REMOVE!
#include <RCSwitch.h>
// Local Header file used by program. DO NOT REMOVE!
#include "BikeIndCtrl_FlashRoutine.h"

RCSwitch mySwitch = RCSwitch(); // Not used. Will be used later.
// 

// Program setup - Code for initializing and setting up board.
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PinOut1,OUTPUT);
  pinMode(PinOut2,OUTPUT);
  digitalWrite(PinOut1,LOW);
  digitalWrite(PinOut2,LOW);
  Serial.println("Ready!");
}

void loop() {
  // THIS IS EXPERIMENTAL CODE ONLY! MAY BE REMOVED IN FUTURE VERSIONS!
  if (Serial.available()){
  //Checks if there is any text input from serial port.
  
    int state = Serial.parseInt(); //Parses input as integer value.
    if (state == 1) 
      { 
        Serial.println("IndLED.left(enable)"); //Debug text to print to serial monitor.
        FlashLED(PinOut1); 
        Serial.println("FlashLED.timeout()"); 
      } 
    if (state == 2) 
      {
        Serial.println("IndLED.left(enable)"); //Debug text to print to serial monitor.
        FlashLED(PinOut2);
        Serial.println("FlashLED.timeout()"); 
    }
  // THIS IS EXPERIMENTAL CODE ONLY! MAY BE REMOVED IN FUTURE VERSIONS!
  } 
}
