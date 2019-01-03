// Bicycle Indicator System v0.1
// Version: PROTO_1.0
// Desc: This is the main program that controls the light system and
//       activates the corresponding light via a wireless signal.
// Requirements for Board:
// > 433 MHz Receiver Module (External Component)
// > RCSwitch Library (Software Programming)

// Library Dependencies used by program. DO NOT REMOVE!
#include <RCSwitch.h>

// Variables used by program. ONLY MODIFY IF NEEDED!
int var;
int PinOut1 = 12;
int PinOut2 = 13;
RCSwitch mySwitch = RCSwitch();
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

// EXPERIMENTAL FUNCTION! MAY CHANGE IN FUTURE!
void FlashLED(int ledPin){
  // FlashLED function uses arguements to determine which LED
  // to flash depending on the input it receives.
  // '1' tells it to flash the right hand side LED on pin 12.
  // '2' tells it to flash the left hand side LED on pin 13.
  Serial.println("Initializing flash pattern!");
  var = 0;
  while(var < 50){
    digitalWrite(ledPin,HIGH);
    delay(500);
    digitalWrite(ledPin,LOW);
    delay(500);
    var++;
  }
}

void loop() {
  // THIS IS EXPERIMENTAL CODE ONLY! MAY BE REMOVED IN FUTURE VERSIONS!
  if (Serial.available()){
  //Checks if there is any text input from serial port.
  
    int state = Serial.parseInt(); //Parses input as integer value.
    if (state == 1) 
      { 
        FlashLED(PinOut1); 
        Serial.println("FlashLED Timeout!"); 
      } 
    if (state == 2) 
      {
        FlashLED(PinOut2);
        Serial.println("FlashLED Timeout!");
    }
  // THIS IS EXPERIMENTAL CODE ONLY! MAY BE REMOVED IN FUTURE VERSIONS!
  } 
}
