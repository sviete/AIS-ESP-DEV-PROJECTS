#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  printf("setup");
}

void loop() {
  // put your main code here, to run repeatedly:
  printf("in main loop");  
  printf("OK");
  printf("OK");
  printf("OK");
  int z = myFunction(1,2);
  sleep(20);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}