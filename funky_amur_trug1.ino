int tempSensorPin = A0;
int buzzerPin = 8;

const float temperatureThreshold = 10.0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

pinMode(buzzerPin,OUTPUT);

digitalWrite(buzzerPin,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
 int sensorValue = analogRead(tempSensorPin);

 float temperature = sensorValue*(3.0/1023.0)*10;

 Serial.print("Temperature: ");
Serial.print(temperature);
Serial.print("C");

if (temperature > temperatureThreshold)
{
  digitalWrite(buzzerPin,HIGH);
  }
  else
  {
    digitalWrite(buzzerPin,LOW);
    }

delay(1000);
}