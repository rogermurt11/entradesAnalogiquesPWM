/******************************************************************
 **                                                              **       
 **                       SIRENA                    ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************

int durada,freq,i;
int pot1 =A0 ;
int pot2=A2;
int speaker =9;




//***************  SETUP   ****************************************
void setup() {

}

//*************    LOOP   ******************************************
void loop() {
  
/*  i=1;
  while (i=1) {*/
  durada = analogRead(A0);
  freq = analogRead (A1);

  tone(speaker,freq,durada); 

  delay(1000);
}
