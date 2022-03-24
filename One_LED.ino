
#define BUTTON 7
#define LED1 8

void setup() {
  // put your setup code here, to run once:
  pinMode(BUTTON, INPUT);
  pinMode(LED1, OUTPUT);
}
// Brendan
void loop() {
  if(digitalRead(BUTTON) == HIGH) {
    digitalWrite(LED1, HIGH);
    delay(500);
    digitalWrite(LED1, LOW);
    delay(500);
  }
  else {
    digitalWrite(LED1, LOW);
  }
}
