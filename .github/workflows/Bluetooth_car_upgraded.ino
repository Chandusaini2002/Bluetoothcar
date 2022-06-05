char val = 0;
int bazar = 8;
int rightled1 = 3;
int leftled1 = 2;
int rightled2 = 9;
int leftled2 = 10;


int  M1 = 7;
int  M2 = 6;
int  M3 = 5;
int  M4 = 4;

void setup ()
{
    Serial.begin(9600);
    pinMode(bazar ,OUTPUT);
    pinMode(rightled1 ,OUTPUT);
    pinMode(rightled2 ,OUTPUT);
    pinMode(leftled1 ,OUTPUT);
    pinMode(leftled2 ,OUTPUT);
    
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
        digitalWrite(leftled1,HIGH);
        digitalWrite(rightled1,HIGH);
        
    }
    
    if (val == 'R')
    {
        digitalWrite(M1, LOW);
        digitalWrite(M2, HIGH);
        digitalWrite(M3, HIGH);
        digitalWrite(M4, LOW); 
        digitalWrite(rightled1,HIGH);
        digitalWrite(rightled2,HIGH);
    }
    
    if (val =='B')
    {
        digitalWrite(M1, LOW);
        digitalWrite(M2, HIGH);
        digitalWrite(M3, LOW);
        digitalWrite(M4, HIGH);
        digitalWrite(rightled2,HIGH);
        digitalWrite(leftled2,HIGH);
    }
    
    if (val == 'L')
    {
        digitalWrite(M1, HIGH);
        digitalWrite(M2, LOW);
        digitalWrite(M3, LOW);
        digitalWrite(M4, HIGH);
        digitalWrite(leftled1,HIGH);
        digitalWrite(leftled2,HIGH);
    }
    
    if (val == 'Z')
    {
        digitalWrite(bazar, HIGH);
        
    }
    
    else if (val == 'S')
    {
        digitalWrite(M1, LOW);
        digitalWrite(M2, LOW);
        digitalWrite(M3, LOW);
        digitalWrite(M4, LOW);
        digitalWrite(rightled1, LOW);
        digitalWrite(rightled2, LOW);
        digitalWrite(leftled1 ,LOW);
        digitalWrite(leftled2 ,LOW);
        digitalWrite(bazar, LOW);
}}