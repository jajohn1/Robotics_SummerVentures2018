



// really needs work. Code is probably messed up, and the button doesn't read
const int NSR = 2;
const int NSY = 3;
const int NSG = 4;
const int EWR = 5;
const int EWY = 6;
const int EWG = 7;
const int emer = 9;
int state = 1;


void setup ()
{
  pinMode(NSR, OUTPUT);
  pinMode(NSY, OUTPUT);
  pinMode(NSG, OUTPUT);
  pinMode(EWR, OUTPUT);
  pinMode(EWY, OUTPUT);
  pinMode(EWG, OUTPUT);
  pinMode(emer, INPUT);
 
}

void loop()
{
boolean emer = digitalRead(emer);


{
  if (state == 1)
{ 
  pinMode(NSR, buttonPressed);
  pinMode(NSY, LOW);
  pinMode(NSG, !buttonPressed);
  pinMode(EWR, buttonPressed);
  pinMode(EWY, LOW);
  pinMode(EWG, LOW);
  
  state = 2;
  
  delay(3000);
}

  else if (state == 2)
{  
  digitalWrite(NSR, buttonPressed);
  digitalWrite(NSY, !buttonPressed);
  digitalWrite(NSG, LOW);
  digitalWrite(EWR, buttonPressed);
  digitalWrite(EWY, LOW);
  digitalWrite(EWG, LOW);
  
  state = 3;
  
  delay(3000);
}

  else if (state == 3)
{ 
  digitalWrite(NSR, buttonPressed);
  digitalWrite(NSY, LOW);
  digitalWrite(NSG, LOW);
  digitalWrite(EWR, buttonPressed);
  digitalWrite(EWY, LOW);
  digitalWrite(EWG, !buttonPressed);
  
  state = 4;
  
  delay(3000);
}
else
{  
  digitalWrite(NSR, buttonPressed);
  digitalWrite(NSY, LOW);
  digitalWrite(NSG, LOW);
  digitalWrite(EWR, buttonPressed);
  digitalWrite(EWY, !buttonPressed);
  digitalWrite(EWG, LOW);
  
  state = 1;
  
  delay(3000);
}
}
}
