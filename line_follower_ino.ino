// Line Follower Robot using 2 IR Range Sensors
int IR1=8;      //Right sensor
int IR2=9;      //Left Sensor
// Right Wheel Motor pins
int enR = 5;
int MotorRpin1=2;
int MotorRpin2=3;
// Left Wheel Motor pins
int enL = 6;
int MotorLpin1=4;
int MotorLpin2=7;


void setup() 
{
  pinMode(enR, OUTPUT);
  pinMode(enL, OUTPUT);
  pinMode(IR1,INPUT);
  pinMode(IR2,INPUT);
  pinMode(MotorRpin1,OUTPUT);
  pinMode(MotorRpin2,OUTPUT);
  pinMode(MotorLpin1,OUTPUT);
  pinMode(MotorLpin2,OUTPUT);
}
void loop() 
{
  //digitalRead in pins IR1 ans IR2 return "HIGH" when the sensor is on black tape, and LOW otherwise
   if(digitalRead(IR1)==HIGH && digitalRead(IR2)==HIGH) //IR will not glow on black line
  {
    //Stop both Motors
    digitalWrite(MotorRpin1,LOW);
    digitalWrite(MotorRpin2,LOW);
    digitalWrite(MotorLpin1,LOW);
    digitalWrite(MotorLpin2,LOW);
   analogWrite (enR, 0);
   analogWrite (enL, 0);
  }

  else if(digitalRead(IR1)==LOW && digitalRead(IR2)==LOW)  //IR not on black line
  {
    //Move both the Motors forward
    digitalWrite(MotorRpin1,HIGH);
    digitalWrite(MotorRpin2,LOW);
    digitalWrite(MotorLpin1,HIGH);
    digitalWrite(MotorLpin2,LOW);
    analogWrite (enR, 200);
    analogWrite (enL, 200); //enable pins set speed of rotation of motors
  }

  else if(digitalRead(IR1)==LOW && digitalRead(IR2)==HIGH)
  {
    //Tilt robot towards left by stopping the left wheel and moving the right one
    digitalWrite(MotorRpin1,HIGH);     
    digitalWrite(MotorRpin2,LOW);
    digitalWrite(MotorLpin1,LOW);
    digitalWrite(MotorLpin2,HIGH);
    analogWrite (enR, 200);
    analogWrite (enL, 150); 
   delay(100);
  }

  else if(digitalRead(IR1)==HIGH && digitalRead(IR2)==LOW)
  {
    //Tilt robot towards right by stopping the right wheel and moving the left one
     digitalWrite(MotorRpin1,LOW);
    digitalWrite(MotorRpin2,HIGH);
    digitalWrite(MotorLpin1,HIGH);
    digitalWrite(MotorLpin2,LOW);
    analogWrite (enR, 150);
    analogWrite (enL, 200);
   delay(100);
  }

  else
  {
    //Stop both the motors
    digitalWrite(MotorRpin1,LOW);
    digitalWrite(MotorRpin2,LOW);
    digitalWrite(MotorLpin1,LOW);
    digitalWrite(MotorLpin2,LOW);
    analogWrite (enR, 0);
   analogWrite (enL, 0);
  }
}
