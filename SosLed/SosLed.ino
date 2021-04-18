int outputLed = 8;
int dit = 50;
int dah = 150;

void setup() {
  // put your setup code here, to run once:
pinMode(outputLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 3; i++) {
    quickLight();
  }

  for(int i = 0; i < 3; i++) {
    longLight();  
  }

  for(int i = 0; i < 3; i++) {
    quickLight();
  }

  delay(1000);

}

void quickLight() {
digitalWrite(outputLed, HIGH);
delay(dit);
digitalWrite(outputLed, LOW);
delay(dit);
}

void longLight() {
digitalWrite(outputLed, HIGH);
delay(dah);
digitalWrite(outputLed, LOW);
delay(dah);
}
