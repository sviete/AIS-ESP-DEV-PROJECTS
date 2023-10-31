#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  printf("OK");
}

void loop() {
  // put your main code here, to run repeatedly:
  printf("loop");  
  printf("OK");
  printf("OK");
  printf("OK");
  sleep(2);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}