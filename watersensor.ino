int LED = 3;
int sensor = 2;

void setup()
{
  pinMode(sensor,INPUT);   
  pinMode(LED,OUTPUT); 
  Serial.begin(9600);
}

void loop()
{
  
  
    int receive = digitalRead(sensor);
    Serial.println(receive);
    if ( receive == 1)
    {
      digitalWrite(LED, HIGH);
    }
    else
    {
      digitalWrite(LED, LOW);
    }
  
}
