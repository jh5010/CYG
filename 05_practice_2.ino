#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, 1);
  delay(1000);
}

void loop() {
  for (i=0;i<=5;i++) {
    digitalWrite(PIN_LED, 0);
    delay(100);
    digitalWrite(PIN_LED, 1);
    delay(100);
  while(1) {
  } // infinite loop
}
