#include <Servo.h> 

Servo servo_3; 
void setup() {
  pinMode(8, INPUT);
  pinMode(6, OUTPUT);
  servo_3.attach(3);

}

void loop() {
  if (digitalRead(8) == LOW) { 

    digitalWrite(6, HIGH); 

    servo_3.write(180);
    delay(5000);
  } else { 
    digitalWrite(6, Low);
    servo_3.write(0);
  }
 

}