#include <Servo.h>
#include <HCSR04.h>
UltraSonicDistanceSensor distanceSensor(8, 7);
Servo servoMotor;

void setup() {
  
  Serial.begin(9600);
  servoMotor.attach(10);
}

void loop() {
  
  double distance = distanceSensor.measureDistanceCm();

  Serial.println(distance);
  
  if(distance < 30  && distance > 0){
    servoMotor.write(80); 
    delay(5000);
  }else{
    
 servoMotor.write(10);
  
  }
  

}
