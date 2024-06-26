int tempSensorPin = A0;
int ledpin1=5;
int ledpin2=6;
int ledpin3=7;

const float temperatureThreshold1 = 2.0;
const float temperatureThreshold2 = 5.0;
const float temperatureThreshold3 = 10.0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledpin1,OUTPUT);
pinMode(ledpin2,OUTPUT);
pinMode(ledpin3,OUTPUT);
}

void loop() {

 int sensorValue = analogRead(tempSensorPin);

 float temperature = sensorValue*(3.0/1023.0)*10;

 Serial.print("Temperature: ");
Serial.print(temperature);
Serial.print("C");

if (temperature > temperatureThreshold1)
{
  digitalWrite(ledpin1,HIGH);
  delay(1000);
  }
  else
  { 
    digitalWrite(ledpin1,LOW);
    delay(1000);
    }
if (temperature > temperatureThreshold2)
{
  digitalWrite(ledpin2,HIGH);
  delay(1000);
  }
  else
  { 
    digitalWrite(ledpin2,LOW);
    delay(1000);
    }
if (temperature > temperatureThreshold3)
{
  digitalWrite(ledpin3,HIGH);
  delay(1000);
  }
  else
  { 
    digitalWrite(ledpin3,LOW);
    delay(1000);
    }
}
