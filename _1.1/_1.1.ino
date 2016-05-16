int ledPin3 = 3;// leds que volem encendre 
int ledPin5 = 5;
int ledPin6 = 6;
int ledPin9 = 9;
int ledPin10 = 10;
int ledPin11 = 11;

int val1 = 10;  // valor de la variable de lluminositat
int val2 = 50;
int val3 = 100;
int val4 = 255;

void setup()

{  
 
  pinMode(ledPin3, OUTPUT); // configuració de les sortides 
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin9, OUTPUT);
  pinMode(ledPin10, OUTPUT);
  pinMode(ledPin11, OUTPUT);
}

void loop()

{


   analogWrite(ledPin3, val1 / 4); // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
   analogWrite(ledPin5, val1 / 4);
   analogWrite(ledPin6, val1 / 4);
   analogWrite(ledPin9, val1 / 4);
   analogWrite(ledPin10, val1 / 4);
   analogWrite(ledPin11, val1 / 4);
  
  delay (2000);

   analogWrite(ledPin3, val2 / 4); 
   analogWrite(ledPin5, val2 / 4);
   analogWrite(ledPin6, val2 / 4);
   analogWrite(ledPin9, val2 / 4);
   analogWrite(ledPin10, val2 / 4);
   analogWrite(ledPin11, val2 / 4);
  
   delay (2000);

   analogWrite(ledPin3, val3 / 4); 
   analogWrite(ledPin5, val3 / 4);
   analogWrite(ledPin6, val3 / 4);
   analogWrite(ledPin9, val3 / 4);
   analogWrite(ledPin10, val3 / 4);
   analogWrite(ledPin11, val3 / 4);
  
   delay (2000);

   analogWrite(ledPin3, val4 / 4); 
   analogWrite(ledPin5, val4 / 4);
   analogWrite(ledPin6, val4 / 4);
   analogWrite(ledPin9, val4 / 4);
   analogWrite(ledPin10, val4 / 4);
   analogWrite(ledPin11, val4 / 4);
  
   delay (2000);
}

  

