
#define LED_PIN 7

#define BLINKS 5

#define BLINK_DURATION 200

void setup() {
  // Set the LED pin as output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Turn on the LED for one second
  digitalWrite(LED_PIN, 0);
  delay(1000);

  // Blink the LED five times for one second
  for (int i = 0; i <= BLINKS; i++) {
    digitalWrite(LED_PIN, 0);
    delay(BLINK_DURATION / 2);
    digitalWrite(LED_PIN, 1);
    delay(BLINK_DURATION / 2);
  }

  // Turn off the LED and exit the loop
  digitalWrite(LED_PIN, 1);
  while (true) {
  }
}
