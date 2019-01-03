int var;
int PinOut1 = 12;
int PinOut2 = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PinOut1,OUTPUT);
  pinMode(PinOut2,OUTPUT);
  digitalWrite(PinOut1,LOW);
  digitalWrite(PinOut2,LOW);
  Serial.println("Ready!");
}
void FlashLED(int ledPin){
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
  // put your main code here, to run repeatedly:
  if (Serial.available())
  {
    int state = Serial.parseInt();
    if (state == 1) 
      { 
        FlashLED(PinOut1); 
        Serial.println("Beginning Flash Sequence..."); 
      } 
    if (state == 2) 
      {
        Serial.println("Beginning Flash Sequence...");
        FlashLED(PinOut2);
    }
  }
}
