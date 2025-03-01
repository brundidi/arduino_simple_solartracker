#include <Servo.h>

#define SERVO_PIN 7
#define LOW_INTENSITY 100
#define SPEED 50

Servo servo1;
int angle = 90;

void setup() {
  Serial.begin(9600);
  servo1.attach(SERVO_PIN);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  servo1.write(angle);
  delay(5000);
}

void loop() {
  float ldr1 = analogRead(A0);
  float ldr2 = analogRead(A1);

  Serial.print("LDR1= "); Serial.println(ldr1);
  Serial.print("LDR2= "); Serial.println(ldr2);

  if (ldr1 > LOW_INTENSITY && ldr2 > LOW_INTENSITY) {
    Serial.println("centered");
  } else if (ldr1 > LOW_INTENSITY && ldr2 < LOW_INTENSITY) {
    angle = min(angle + 1, 180);
    servo1.write(angle);
    Serial.println("angle++");
  } else if (ldr2 > LOW_INTENSITY && ldr1 < LOW_INTENSITY) {
    angle = max(angle - 1, 0);
    servo1.write(angle);
    Serial.println("angle--");
  }
  delay(SPEED);
}