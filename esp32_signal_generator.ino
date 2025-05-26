#include <Arduino.h>

const int outputPin = 25;
int freq = 1000;  // default frequency 1kHz

void setup() {
  Serial.begin(115200);
  ledcSetup(0, freq, 8);
  ledcAttachPin(outputPin, 0);
  ledcWrite(0, 127);  // 50% duty cycle
}

void loop() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    int newFreq = input.toInt();
    if (newFreq > 0) {
      freq = newFreq;
      ledcSetup(0, freq, 8);
      ledcWrite(0, 127);
      Serial.print("Updated frequency to: ");
      Serial.println(freq);
    }
  }
}
