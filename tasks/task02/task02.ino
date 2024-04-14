#include <TaskManagerIO.h>;
const int pin3 = 3;  
const int pin5 = 5;  
const int pin6 = 6;  
const int pin9 = 9;  
const int pin10 = 10;  


const int interval3 = 10000;  
const int interval5 = 1000;  
const int interval6 = 500;  
const int interval9 = 100;  
const int interval10 = 50;

int state3 = LOW;
int state5 = LOW;
int state6 = LOW;
int state9 = LOW;
int state10 = LOW;

void toggleLed(int pin, int &state) {
  	if (state == LOW)
      {
        state =  HIGH;
      }
      else 
      {
        state = LOW;
      }
      digitalWrite(pin, state);
}


void setup() {
  pinMode(pin3, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin9, OUTPUT);
  pinMode(pin10, OUTPUT);

taskManager.scheduleFixedRate(interval3, [] {
    toggleLed(pin3, state3);
	}, TIME_MICROS);

taskManager.scheduleFixedRate(interval5, [] {
		toggleLed(pin5, state5);
	}, TIME_MICROS);

taskManager.scheduleFixedRate(interval6, [] {
		toggleLed(pin6, state6);
	}, TIME_MICROS);

taskManager.scheduleFixedRate(interval9, [] {
		toggleLed(pin9, state9);
	}, TIME_MICROS);

taskManager.scheduleFixedRate(interval10, [] {
		toggleLed(pin10, state10);
	}, TIME_MICROS);
}


void loop() {
  taskManager.runLoop();
}
