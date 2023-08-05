char val = 0;
int bazar = 10;
int forntled = 3;
int backled = 2;
int rightled = 8;
int leftled = 9;



int  M1 = 7;
int  M2 = 6;
int  M3 = 5;
int  M4 = 4;

void setup ()
{
    Serial.begin(9600);
    pinMode(bazar ,OUTPUT);
    pinMode(forntled ,OUTPUT);
    pinMode(backled ,OUTPUT);
    pinMode(leftled ,OUTPUT);
    pinMode(rightled ,OUTPUT);
    
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
        digitalWrite(forntled,HIGH);
        
        
    }
    
    if (val == 'R')
    {
        digitalWrite(M1, LOW);
        digitalWrite(M2, HIGH);
        digitalWrite(M3, HIGH);
        digitalWrite(M4, LOW); 
        digitalWrite(rightled,HIGH);
        
    }
    
    if (val =='B')
    {
        digitalWrite(M1, LOW);
        digitalWrite(M2, HIGH);
        digitalWrite(M3, LOW);
        digitalWrite(M4, HIGH);
        digitalWrite(backled,HIGH);
        
    }
    
    if (val == 'L')
    {
        digitalWrite(M1, HIGH);
        digitalWrite(M2, LOW);
        digitalWrite(M3, LOW);
        digitalWrite(M4, HIGH);
        digitalWrite(leftled,HIGH);
       
    }
    
    if (val == 'Z')
    {
        digitalWrite(bazar, HIGH);
        
        digitalWrite(forntled,HIGH);
        delay(500);
        digitalWrite(bazar, LOW);
        digitalWrite(forntled,LOW);
        delay(500);
        digitalWrite(bazar, HIGH);
        
        digitalWrite(backled,HIGH);
        delay(500);
        digitalWrite(bazar, LOW);
        digitalWrite(backled,LOW);
        
        
        
        
    }
    
    else if (val == 'S')
    {
        digitalWrite(M1, LOW);
        digitalWrite(M2, LOW);
        digitalWrite(M3, LOW);
        digitalWrite(M4, LOW);
        digitalWrite(rightled, LOW);
        
        digitalWrite(leftled ,LOW);
        digitalWrite(forntled ,LOW);
        digitalWrite(backled ,LOW);
        
        digitalWrite(bazar, LOW);
}}
