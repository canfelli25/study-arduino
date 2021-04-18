int triggerPin = 13;
int echoPin = 12;
int ledPin = 8;
int pingTravelTime;
float lightSpeedCm = 0.034;

void setup() {
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(10);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  // travel time is in microseconds
  pingTravelTime = pulseIn(echoPin, HIGH);
  float dist = distance(pingTravelTime);

  // when object is within 10cm
  // light should on
  if(dist > 10.0) {
    digitalWrite(ledPin, LOW);  
  } else {
    digitalWrite(ledPin, HIGH);
  }
  delay(25);
}

float distance(int pingTravelTime) {
  return  pingTravelTime * lightSpeedCm / 2;
}
