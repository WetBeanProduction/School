const int Botton = 7;
const int EWGreen = 8;
const int EWYellow = 9;
const int EWRed = 10;
const int NSGreen = 11;
const int NSYellow = 12;
const int NSRed = 13;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}
  
void loop()
{
  
    /*
  digitalWrite(EWRed, HIGH);//rød så længe første kryds kører 23sek.
  digitalWrite(NSRed, HIGH);//første kryds skifter til gul 3sek.
  digitalWrite(NSYellow, HIGH);
  delay(3000);
  digitalWrite(NSYellow,LOW);//Den skifter til grøn 10sek.
  digitalWrite(NSRed, LOW);
  digitalWrite(NSGreen, HIGH);
  delay(10000);
  digitalWrite(NSGreen, LOW);//Den skifter til gult 3sek.
  digitalWrite(NSYellow, HIGH);
  delay(3000);
  digitalWrite(NSYellow, LOW);//Den skifter til rødt 23sek.
  digitalWrite(NSRed, HIGH);
  digitalWrite(EWYellow, HIGH);//Den skifter til gult i det andet krydt
  delay(3000);
  digitalWrite(EWYellow,LOW);
  digitalWrite(EWRed, LOW);
  digitalWrite(EWGreen, HIGH);//Den skifter til grønt i 10sek.
  delay(10000);
  digitalWrite(EWGreen, LOW);//Den skifter til gult i 5sek.
  digitalWrite(EWYellow, HIGH);
  delay(3000);
  digitalWrite(EWYellow, LOW);//Den skifter til rødt i 23sek. hvor den kører igennem første kryds
  */
  if(digitalRead(Botton) == HIGH)
  {
    digitalWrite(EWGreen, HIGH);
    delay(500); 
    digitalWrite(EWGreen, LOW);
    digitalWrite(EWYellow, HIGH);
    delay(500);
    digitalWrite(EWYellow, LOW);
    digitalWrite(EWRed, HIGH);
    delay(500);  
    digitalWrite(EWRed, LOW);
    digitalWrite(NSGreen, HIGH);
    delay(500);
    digitalWrite(NSGreen, LOW);
    digitalWrite(NSYellow, HIGH);
    delay(500);
    digitalWrite(NSYellow, LOW);
    digitalWrite(NSRed, HIGH);
    delay(500);
    digitalWrite(NSRed, LOW);
    return;
  }
  else
  {
    digitalWrite(NSRed, HIGH);
    delay(500);
    digitalWrite(NSRed, LOW);
    digitalWrite(NSYellow, HIGH);
    delay(500);
    digitalWrite(NSYellow, LOW);
    digitalWrite(NSGreen, HIGH);
    delay(500);
    digitalWrite(NSGreen, LOW);
    digitalWrite(EWRed, HIGH);
    delay(500);  
    digitalWrite(EWRed, LOW);
    digitalWrite(EWYellow, HIGH);
    delay(500);
    digitalWrite(EWYellow, LOW);
    digitalWrite(EWGreen, HIGH);
    delay(500); 
    digitalWrite(EWGreen, LOW);
    return;
  }
  
    
}
