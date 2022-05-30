char val = 0;
int white_led = 3;
int red_led = 2;
int  M1 = 7;
int  M2 = 6;
int  M3 = 5;
int  M4 = 4;

void setup ()
{
    Serial.begin(9600);
    
    pinMode(white_led ,OUTPUT);
    pinMode(red_led ,OUTPUT);
    pinMode(M1 ,OUTPUT);
    pinMode(M2 ,OUTPUT);
    pinMode(M3 ,OUTPUT);
    pinMode(M4 ,OUTPUT);
}

void loop()
{
    if(Serial.available() == 1)
    {
        Serial.print(val);
        val = Serial.read();
        Serial.print("\n");
    }
    
    if (val == 'F')
    {
        digitalWrite(M1, HIGH);
        digitalWrite(M2, LOW);
        digitalWrite(M3, HIGH);
        digitalWrite(M4, LOW);
        digitalWrite(white_led,HIGH);
        digitalWrite(red_led,LOW);
        
    }
    
    if (val == 'R')
    {
        digitalWrite(M1, LOW);
        digitalWrite(M2, HIGH);
        digitalWrite(M3, HIGH);
        digitalWrite(M4, LOW); 
        digitalWrite(white_led,HIGH);
        digitalWrite(red_led,HIGH);
    }
    
    if (val =='B')
    {
        digitalWrite(M1, LOW);
        digitalWrite(M2, HIGH);
        digitalWrite(M3, LOW);
        digitalWrite(M4, HIGH);
        digitalWrite(white_led,LOW);
        digitalWrite(red_led,HIGH);
    }
    
    if (val == 'L')
    {
        digitalWrite(M1, HIGH);
        digitalWrite(M2, LOW);
        digitalWrite(M3, LOW);
        digitalWrite(M4, HIGH);
        digitalWrite(white_led,HIGH);
        digitalWrite(red_led,HIGH);
    }
    
    if (val == 'E')
    {
      //  digitalWrite(LED, HIGH);
        
    }
    
    else if (val == 'S')
    {
        digitalWrite(M1, LOW);
        digitalWrite(M2, LOW);
        digitalWrite(M3, LOW);
        digitalWrite(M4, LOW);
        digitalWrite(white_led, LOW);
        digital write(red_led ,HIGH);
        
    }
}
