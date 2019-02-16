// Variables used by program. ONLY MODIFY IF NEEDED!
int var;
int PinOut1 = 12;
int PinOut2 = 13;

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
