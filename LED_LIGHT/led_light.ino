// LED LIGHT switch from on state to off state every second

int led = 13;

void setup() {
  pinMode(led, OUTPUT); // Tell arduino pin13 is an output 
}

void loop() {
  digitalWrite(led, HIGH); // Turn Light On
  delay(1000);             // Wait a Second
  digitalWrite(led, LOW);  // Turn Light off
  delay(1000);
}
