int lmotorpin1=5;
int lmotorpin2=6;
int rmotorpin1=10;
int rmotorpin2=11;
int sensor=2;
int sensorstate=0;

void setup(){
  pinMode(sensor,INPUT);
  pinMode(lmotorpin1,OUTPUT);
  pinMode(lmotorpin2,OUTPUT);
  pinMode(rmotorpin1,OUTPUT);
  pinMode(rmotorpin2,OUTPUT);
}

void loop(){
  sensorstate=digitalRead(sensor);
  if(sensorstate==HIGH){
    digitalWrite(lmotorpin1,HIGH);
    digitalWrite(lmotorpin2,LOW);
    digitalWrite(rmotorpin1,HIGH);
    digitalWrite(rmotorpin2,LOW);
  }
  else {
    digitalWrite(rmotorpin1,LOW);
    digitalWrite(rmotorpin2,HIGH);
    digitalWrite(lmotorpin1,LOW);
    digitalWrite(lmotorpin2,LOW);
  }
}
