const int pin = 3;
const int pin2 = 5;
const int pin3 = 6;
const int pin4 = 9;
const int pin5 = 10;


int state = LOW; 
int state2 = LOW;
int state3 = LOW;
int state4 = LOW;
int state5 = LOW;


unsigned long previousMillis = 0; 
unsigned long previousMillis2 = 0; 
unsigned long previousMillis3 = 0; 
unsigned long previousMillis4 = 0; 
unsigned long previousMillis5 = 0;  


const long interval = 10000;
const long interval2 = 1000;
const long interval3 = 500;
const long interval4 = 100;
const long interval5 = 50;  

void setup() {

  pinMode(pin, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
}

void loop() {

  unsigned long currentMillis = micros();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    if (state == LOW) {
      state = HIGH;
    } else {
      state = LOW;
    }

    digitalWrite(pin, state);
  }

  if (currentMillis - previousMillis2 >= interval2) {
    previousMillis2 = currentMillis;

    if (state2 == LOW) {
      state2 = HIGH;
    } else {
      state2 = LOW;
    }

    digitalWrite(pin2, state2);
  }

  if (currentMillis - previousMillis3 >= interval3) {
    previousMillis3 = currentMillis;

    if (state3 == LOW) {
      state3 = HIGH;
    } else {
      state3 = LOW;
    }

    digitalWrite(pin3, state3);
  }

  if (currentMillis - previousMillis4 >= interval4) {
    previousMillis4 = currentMillis;

    if (state4 == LOW) {
      state4 = HIGH;
    } else {
      state4 = LOW;
    }

    digitalWrite(pin4, state4);
  }

  if (currentMillis - previousMillis5 >= interval5) {
    previousMillis5 = currentMillis;

    if (state5 == LOW) {
      state5 = HIGH;
    } else {
      state5 = LOW;
    }

    digitalWrite(pin5, state5);
  }

}
