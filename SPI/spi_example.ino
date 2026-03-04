#include <SPI.h>

void setup() {
  SPI.begin();
  Serial.begin(9600);
}

void loop() {
  SPI.transfer('A');
  delay(1000);
}