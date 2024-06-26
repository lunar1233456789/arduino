int buttonpin1=4;
int buttonpin2=5;
int buttonpin3=6;
int buttonpin4=7;
int led1=8;
int buttonstate1=0;
int buttonstate2=0;
int buttonstate3=0;
int buttonstate4=0;
void setup() {
  
  pinMode(led1,OUTPUT);
  pinMode(buttonpin1,INPUT);
   pinMode(buttonpin2,INPUT);
    pinMode(buttonpin3,INPUT);
     pinMode(buttonpin4,INPUT);
}

void loop() {
  buttonstate1=digitalRead(buttonpin1);
  buttonstate2=digitalRead(buttonpin2);
  buttonstate3=digitalRead(buttonpin3);
  buttonstate4=digitalRead(buttonpin4);
  if (buttonstate1==HIGH && buttonstate2==LOW && buttonstate3==HIGH && buttonstate4==LOW)
  {
    digitalWrite(led1,HIGH);
  
  }
  else
  {
    digitalWrite(led1,LOW);
    
  } 
}