// Pin numbers
int redPin  = 11;
int greenPin = 10;
int bluePin = 9;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  setColor(255, 0, 0); // RED
  delay(1000);
  setColor(0, 255, 0); // GREEN
  delay(1000);
  setColor(0, 0, 255); // BLUE
  delay(1000);
  setColor(255, 255, 0); // YELLOW
  delay(1000);
  setColor(80, 0, 80); // PURPLE
  delay(1000);
  setColor(0, 255, 255); // AQUA
  delay(1000);
}

void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
