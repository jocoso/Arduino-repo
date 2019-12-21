#define BLUE  0
#define RED   1
#define GREEN 2

int redLed = 6;
int greenLed = 5;
int blueLed = 3;
int redPin = 9;
int greenPin = 10;
int bluePin = 11;

// Save the current state of the LED light OFF/ON
bool state[3];

void setup() {
  // Normal LED
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);

  // RGB LED
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  paint(GREEN);
  delay(1000);
  paint(BLUE);
  delay(1000);
  paint(RED);
  delay(1000);
}

// Turn a normal LED on and changes the color of the RGB LED to that corresponding color
void paint(int color) {
  switch(color) {
    case BLUE:
      blackout();
      setColor(0, 0, 255);
      digitalWrite(blueLed, HIGH);
      state[BLUE] = true;
      break;
    case RED:
      blackout();
      setColor(255, 0, 0);
      digitalWrite(redLed, HIGH);
      state[RED] = true;
      break;
    case GREEN:
      blackout();
      setColor(0, 255, 0);
      digitalWrite(greenLed, HIGH);
      state[GREEN] = true;
      break;   
  }
}

// Changes color of the RGB LED to the given RGB value 
void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}

// Turn off any light in the ON state
 void blackout() {
  if(state[BLUE]) {
      digitalWrite(blueLed, LOW);
      state[BLUE] = false;
  }
  
  if(state[RED]) {
      digitalWrite(redLed, LOW);
      state[RED] = false;
  }
  
  if(state[GREEN]) {
      digitalWrite(greenLed, LOW);
      state[GREEN] = false;
  }
 }
