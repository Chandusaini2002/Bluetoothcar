char val = 0;
int LED = 13;
int  M1 = 12;
int M2 = 11;
int  M3 = 10;
int  M4 = 9;

void setup ()
{
    Serial.begin(9600);
    
    pinMode(LED ,OUTPUT);
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
    
    if (val == 'A')
    {
        digitalWrite(M1, HIGH);
        digitalWrite(M2, LOW);
        digitalWrite(M3, HIGH);
        digitalWrite(M4, LOW);
        
    }
    
    if (val == 'B')
    {
       digitalWrite(M1, LOW);
        digitalWrite(M2, HIGH);
        digitalWrite(M3, HIGH);
        digitalWrite(M4, LOW); 
    }
    
    if (val =='C')
    {
        digitalWrite(M1, LOW);
        digitalWrite(M2, HIGH);
        digitalWrite(M3, LOW);
        digitalWrite(M4, HIGH);
    }
    
    if (val == 'D')
    {
        digitalWrite(M1, HIGH);
        digitalWrite(M2, LOW);
        digitalWrite(M3, LOW);
        digitalWrite(M4, HIGH);
    }
    
    if (val == 'E')
    {
        digitalWrite(LED, HIGH);
        
    }
    
    else if (val == 'O')
    {
        digitalWrite(M1, LOW);
        digitalWrite(M2, LOW);
        digitalWrite(M3, LOW);
        digitalWrite(M4, LOW);
        digitalWrite(LED, LOW);
        
    }
}