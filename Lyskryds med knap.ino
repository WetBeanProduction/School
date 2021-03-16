const int Button = 7;
const int EWGreen = 8;
const int EWYellow = 9;
const int EWRed = 10;
const int NSGreen = 11;
const int NSYellow = 12;
const int NSRed = 13;

unsigned long mspassed;
int	led = 0;
int mswait = 3000;
bool ButtonPressed = false;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  
  mspassed = millis();
  digitalWrite(NSRed, HIGH);
  digitalWrite(EWRed, HIGH);
  digitalWrite(EWYellow, HIGH);
  
  
}
  
void loop()
{
   if(digitalRead(Button) == HIGH)
   {
     ButtonPressed = true;
   }
  if(millis() - mspassed > mswait)
  {
    digitalWrite(NSRed, LOW);
    digitalWrite(NSYellow, LOW);
    digitalWrite(NSGreen, LOW);
    digitalWrite(EWRed, LOW);
    digitalWrite(EWYellow, LOW);
    digitalWrite(EWGreen, LOW);
  

   
    led++;
    if(led > 5)
      led = 0;
   
    if(led == 0)
    {
      digitalWrite(NSRed, HIGH);
      digitalWrite(EWRed, HIGH);
      digitalWrite(EWYellow, HIGH);
        if(ButtonPressed)
      {
        mswait = 1000;
        ButtonPressed = false;
      }
      else
      mswait = 3000;
    }
    if(led == 1)
    {
      digitalWrite(NSRed, HIGH);
      digitalWrite(EWGreen, HIGH);
      mswait = 10000;
    }
    if(led == 2)
    {
      digitalWrite(EWYellow, HIGH);
      digitalWrite(NSRed, HIGH);
      mswait = 3000;
    }
      if(led == 3)
      {
      digitalWrite(EWRed, HIGH);
      digitalWrite(NSRed, HIGH); 
      digitalWrite(NSYellow, HIGH);
      mswait = 3000;
      }
    if(led == 4)
    {
      digitalWrite(EWRed, HIGH);
      digitalWrite(NSGreen, HIGH);
        mswait = 10000;
      
    }
    if(led == 5)
    {
      digitalWrite(EWRed, HIGH);
      digitalWrite(NSYellow, HIGH);
      mswait = 3000;
    }
    
    mspassed = millis();
  }
}
