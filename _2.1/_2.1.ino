int sensorPin = A0;    // pin d'entrada del potenciòmetre
int ledPin1 = 1;      // pins a utilitzar
int ledPin2 = 2; 
int ledPin3 = 3;
int ledPin4 = 4;
int ledPin5 = 5;
int ledPin6 = 6;
int ledPin7 = 7;
int ledPin8 = 8;


int sensorValue = 0;  // variable per emmagatzemar el valor del potenciometre 

void setup() {
  // declara el pin de sortida
  pinMode(ledPin1, OUTPUT);   
  pinMode(ledPin2, OUTPUT); 
  pinMode(ledPin3, OUTPUT); 
  pinMode(ledPin4, OUTPUT); 
  pinMode(ledPin5, OUTPUT); 
  pinMode(ledPin6, OUTPUT); 
  pinMode(ledPin7, OUTPUT); 
  pinMode(ledPin8, OUTPUT);

}

void loop() {
  
  sensorValue = analogRead(sensorPin);   // llegeix el valor del potenciòmetre 
  
  // funions dels leds (HIGH/LOW)
   digitalWrite(ledPin1, HIGH);  
   digitalWrite(ledPin2, LOW); 
   digitalWrite(ledPin3, HIGH);  
   digitalWrite(ledPin4, LOW); 
   digitalWrite(ledPin5, HIGH);  
   digitalWrite(ledPin6, LOW); 
   digitalWrite(ledPin7, HIGH);  
   digitalWrite(ledPin8, LOW);   
   
   delay(sensorValue);          
  
  
   digitalWrite(ledPin1, LOW);  
   digitalWrite(ledPin2, HIGH);
   digitalWrite(ledPin3, LOW);  
   digitalWrite(ledPin4, HIGH);
   digitalWrite(ledPin5, LOW);  
   digitalWrite(ledPin6, HIGH);
   digitalWrite(ledPin7, LOW);  
   digitalWrite(ledPin8, HIGH);
   
   delay(sensorValue); 

 
  
}


 
