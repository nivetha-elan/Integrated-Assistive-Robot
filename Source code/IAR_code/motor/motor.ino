#include <AFMotor.h>

AF_DCMotor m1(1);//define motor 1 as m1
AF_DCMotor m2(2);//define motor 2 as m2
AF_DCMotor m3(3);//define motor 3 as m3
AF_DCMotor m4(4);//define motor 4 as m4


void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Robojax Motor test!");

  // initial state of motor turn on motor
  m1.setSpeed(0);//motor 1 is turned off to turn on change 0, to 255
  m2.setSpeed(0);//motor 2 is turned off  
  m3.setSpeed(0);//motor 3 is turned off 
  m4.setSpeed(0); //motor 4 is turned off 
}

void loop() {
  uint8_t i;
  
  Serial.println("Motor 1 FORWARD 100% speed");
  m1.run(FORWARD);
  m1.setSpeed(speed(100));
  Serial.println("m2 FORWARD 100%");
 m2.run(FORWARD);
 m2.setSpeed(speed(100));  
 Serial.println("Motor 3 FORWARD 100% speed");
  m3.run(FORWARD);
  m3.setSpeed(speed(100));
  Serial.println("Motor 4 FORWARD 100% speed");
  m4.run(FORWARD);
  m4.setSpeed(speed(100));
  delay(3000);
  

  
  m1.run(RELEASE);
  Serial.println("M1 RELEASE");
 m2.run(RELEASE);
  Serial.println("m2 RELEASE");  
   m3.run(RELEASE);
  Serial.println("m3 RELEASE"); 
   m4.run(RELEASE);
  Serial.println("m4 RELEASE"); 
  delay(3000); 

  

  Serial.println("M1 BACKWARD 80%");
  m1.run(BACKWARD );
  m1.setSpeed(speed(80));
  Serial.println("m2 BACKWARD 60%");
 m2.run(BACKWARD );
 m2.setSpeed(speed(60));
  Serial.println("m3 BACKWARD 60%");
 m3.run(BACKWARD );
 m3.setSpeed(speed(60));
  Serial.println("m4 BACKWARD 60%");
 m4.run(BACKWARD );
 m4.setSpeed(speed(60));


  delay(3000);

  
 delay(3000);
  m1.run(RELEASE);
  Serial.println("M1 RELEASE");
  m2.run(RELEASE);
  Serial.println("m2 RELEASE");  
   m3.run(RELEASE);
  Serial.println("m3 RELEASE"); 
   m4.run(RELEASE);
  Serial.println("m4 RELEASE");   
  
  delay(3000);   
  Serial.println("=============");



  
}

/*
 * get pereentage value  0 to 100% and 
 * conversts it to 0 to 255 which is motor speed used by Arduino
 * written by Ahmad Shamshiri on Feb 12, 2021
 */
int speed(int b)
{
return map(b,0,100,0,255);
}
