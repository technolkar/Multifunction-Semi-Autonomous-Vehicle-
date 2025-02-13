int LM_1 = 2;
int LM_2 = 3;
int RM_1 = 4;
int RM_2 = 5;

int R_S = 6;
int L_S = 7;


void setup()
{
  pinMode(9,OUTPUT);    // trig
  pinMode(10,INPUT);     //echo
  pinMode(LM_1,OUTPUT);
  pinMode(LM_2,OUTPUT);
  pinMode(RM_1,OUTPUT);
  pinMode(RM_2,OUTPUT);
  pinMode(R_S,INPUT);
  pinMode(L_S,INPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(9,HIGH);
  delayMicroseconds(10);
  digitalWrite(9,LOW);
  int distance=pulseIn(10,HIGH);
  distance=(distance*0.17);
  Serial.println(distance);
  if (distance<=100)
  {
    digitalWrite(LM_1,LOW);
    digitalWrite(LM_2,LOW);
    digitalWrite(RM_1,LOW);
    digitalWrite(RM_2,LOW);
  }
  else {
    if((digitalRead(R_S) == 0)&&(digitalRead(L_S) == 0)){forward();}
    if((digitalRead(R_S) == 0)&&(digitalRead(L_S) == 1)){turnLeft();}
    if((digitalRead(R_S) == 1)&&(digitalRead(L_S) == 0)){turnRight();}
    if((digitalRead(R_S) == 1)&&(digitalRead(L_S) == 1)){stop_motor();}
}
}

void forward()
{
  digitalWrite(LM_1,LOW);
  digitalWrite(LM_2,HIGH);
  digitalWrite(RM_1,HIGH);  
  digitalWrite(RM_2,LOW);
}
 void turnRight()
 {
  digitalWrite(LM_1,LOW);
  digitalWrite(LM_2,LOW);
  digitalWrite(RM_1,HIGH);
  digitalWrite(RM_2,LOW);
} 
void turnLeft()
{
  digitalWrite(LM_1,LOW);
  digitalWrite(LM_2,HIGH);
  digitalWrite(RM_1,LOW);
  digitalWrite(RM_2,LOW);
}
void stop_motor()
{
  digitalWrite(LM_1,LOW);
  digitalWrite(LM_2,LOW);
  digitalWrite(RM_1,LOW);
  digitalWrite(RM_2,LOW);
}
