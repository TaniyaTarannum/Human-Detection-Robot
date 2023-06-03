int get = 2;
int led=6;
int gpsvcc = A0;
int del = 60000;
void setup() {
  pinMode(get, INPUT);
  pinMode(led, OUTPUT);
}
void loop() {
  int sensorValue = digitalRead(get);
  if (sensorValue == 1) {
    analogWrite(gpsvcc, 169);
    digitalWrite(led,HIGH);
    delay(del);
    analogWrite(gpsvcc, 0);
    digitalWrite(led,LOW);
  delay(del);
  }
}