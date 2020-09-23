#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  digitalWrite(PIN_LED, 0);
  delay(1000);
  for (int a=0 ; a<=4 ; a=a+1)
  {
      digitalWrite(PIN_LED, 1);
      delay(100);
      digitalWrite(PIN_LED, 0);
      delay(100);
  }
  while(1)
  {
    digitalWrite(PIN_LED, 1);
  }
}
