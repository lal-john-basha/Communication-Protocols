#include <Wire.h>

void setup() {
  Wire.begin();
  Serial.begin(9600);
}

void loop() {
  Wire.beginTransmission(8);
  Wire.write("Hello");
  Wire.endTransmission();
  delay(1000);
}