int var;
int ledPin = 13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  Serial.println("Begin Test...");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  var = 0;
  while(var < 100){
    digitalWrite(ledPin,LOW);
    delay(1000);
    digitalWrite(ledPin,HIGH);
    delay(1000);
    var++;
  }
  Serial.println("Test Complete!");
  delay(1000);
  exit(0);
}
