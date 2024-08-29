// Pin configuration
const int ledPin = 0; // Pin 0 on ATtiny85 (physical pin 5)

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
 
  digitalWrite(ledPin, HIGH);
  delay(10); //  ON
  digitalWrite(ledPin, LOW);
  delay(50); //  OFF

  digitalWrite(ledPin, HIGH);
  delay(10); //  ON
  digitalWrite(ledPin, LOW);

  digitalWrite(ledPin, HIGH);
  delay(10); //  ON
  digitalWrite(ledPin, LOW);
  delay(50); //  OFF

  digitalWrite(ledPin, HIGH);
  delay(10); //  ON
  digitalWrite(ledPin, LOW);

  digitalWrite(ledPin, HIGH);
  delay(10); //  ON
  digitalWrite(ledPin, LOW);
  delay(50); //  OFF

  digitalWrite(ledPin, HIGH);
  delay(10); //  ON
  digitalWrite(ledPin, LOW);

  digitalWrite(ledPin, HIGH);
  delay(10); //  ON
  digitalWrite(ledPin, LOW);
  delay(50); //  OFF

  digitalWrite(ledPin, HIGH);
  delay(10); //  ON
  digitalWrite(ledPin, LOW);

  digitalWrite(ledPin, HIGH);
  delay(10); //  ON
  digitalWrite(ledPin, LOW);
  delay(50); //  OFF

  digitalWrite(ledPin, HIGH);
  delay(80); //  ON
  digitalWrite(ledPin, LOW);

  delay(500);
}
