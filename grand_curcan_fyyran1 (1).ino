int sensorState=0;
void setup()
{
  pinMode(2,INPUT); // Pin 2 as INPUT
  pinMode(13,OUTPUT); // Pin 13 as OUTPUT
  Serial.begin(9600);
}
void loop()
{
  //Read the state of sensor/digital input
  sensorState=digitalRead(2);
  //check if sensor pin is high. if it is, set the
  // LED on.
  if (sensorState == HIGH ) // check  if PIR is triggered
  {
    digitalWrite(13,HIGH);    
    Serial.println("Sensor activated!");
  }
  else
  {
    digitalWrite(13,LOW);
  }
    delay(100);         // Delay alittle bit to improve simulation performance
}