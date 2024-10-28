#include <AFMotor.h>

AF_DCMotor m1(1);//define motor 1 as m1
AF_DCMotor m2(2);//define motor 2 as m2
AF_DCMotor m3(3);//define motor 3 as m3
AF_DCMotor m4(4);//define motor 4 as m4

int sensor=2;
int sensorstate=0;
void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Robojax Motor test!");
  
  pinMode(sensor,INPUT);

  // initial state of motor turn on motor
  m1.setSpeed(0);//motor 1 is turned off to turn on change 0, to 255
  m2.setSpeed(0);//motor 2 is turned off  

}

void loop() {
  uint8_t i;
  sensorstate=digitalRead(sensor);
  if(sensorstate==HIGH){
  Serial.println("Motor 1 FORWARD 100% speed");
  m1.run(FORWARD);
  m1.setSpeed(speed(100));
  Serial.println("m2 FORWARD 100%");
 m2.run(FORWARD);
 m2.setSpeed(speed(100));  
 delay(3000);
  }
  else{
  Serial.println("M1 BACKWARD 80%");
  m1.run(BACKWARD );
  m1.setSpeed(speed(80));
  Serial.println("m2 BACKWARD 60%");
 m2.run(BACKWARD );
 m2.setSpeed(speed(60));
  }
}
int speed(int b)
{
return map(b,0,100,0,255);
}
