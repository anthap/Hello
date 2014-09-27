void setup()
{
  for(int i=8; i<13; i++)
  {
    pinMode(i, INPUT);
  }
}

void loop()
{
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<100;j++)
    {
      int ran=random(8,13);
      digitalWrite(ran, HIGH);
      delay(50);
      digitalWrite(ran,LOW);
    }
    int rand=random(8,13);
    digitalWrite(rand,HIGH);
    delay(2000);
    digitalWrite(rand,LOW);
  }
}
    
  
