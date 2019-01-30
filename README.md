# automatictrash

Poubelle ouverture automatique

Ce projet à été réalisé par [@siham](https://github.com/siham87) et [@wildcat](https://github.com/wildcat7534)

## Video :
[![video](https://img.youtube.com/vi/WuTwOEJFxqc/0.jpg)](https://www.youtube.com/watch?v=WuTwOEJFxqc)


## **Bibliothéque utilisée**
+ [Servo](https://www.arduino.cc/en/reference/servo)
+ [HCSR04](https://github.com/Martinsos/arduino-lib-hc-sr04)

## **Matériel**
+ Arduino
+ [Servo-moteur](https://www.notion.so/Servo-moteur-e14d30be350848388474c76f5a35ad0d)
+ [Capteur de proximité (HC-SR04)](https://www.notion.so/Capteur-de-proximit-HC-SR04-ada4172375f54d41ac3a6df0b7cc493d)

## **Montage**

![schema : ](schemaautomatictrash.jpg)

## **Code**

```
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
```

![photo: ](automatictrash.jpg)
