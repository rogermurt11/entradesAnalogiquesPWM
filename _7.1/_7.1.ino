//** **
//** Morse **
//** **
//** **
//******************************************************************************/
//****** Includes *************************************************************
//****** Variables ************************************************************
// pin for speaker
const int pin = 8;
int note = 1047;
int velocitat = 10;
//****** Setup ****************************************************************
void setup()
{
}
//****** Loop *****************************************************************
void loop()
{
//H ** HOLA ISAAC ESTIC APROVAT  **
punt();
punt();
punt();
punt();
//Espai entre lletres
espaiL();

//O
ratlla();
ratlla();
ratlla();
//Espai entre lletres
espaiL();
//L
punt();
ratlla();
punt();
punt();

espaiL();
// A
punt();
ratlla();
//Espai entre paraules
espaiP();

//I
punt();
punt();

espaiL();
//S
punt();
punt();
punt();

espaiL();
//A
punt();
ratlla();

espaiL();
//A
punt();
ratlla();

espaiL();
//C
ratlla();
punt();
ratlla();
punt();

espaiP();

//E
punt();

espaiL();
//S
punt();
punt();
punt();

espaiL();
//T
ratlla();

espaiL();

espaiL();
//I
punt();
punt();

espaiL();
//C 
ratlla();
punt();
ratlla();
punt();

espaiP();
//A
punt();
ratlla();

espaiL();
//P
punt();
ratlla();
ratlla();
punt();

espaiL();
//R
punt();
ratlla();
punt();

espaiL();
//O
ratlla();
ratlla();
ratlla();

espaiL();
//V
punt();
punt();
punt();
ratlla();

espaiL();
//A
punt();
ratlla();

espaiL();
//T
ratlla();

espaiP();
 
}
//****** Funcions *************************************************************
void punt()
{
tone(pin, note, 1000/velocitat);
delay(1000/velocitat);
delay(1000/velocitat);
}
void ratlla()
{
tone(pin, note, 3*(1000/velocitat));
delay(3*(1000/velocitat));
delay(1000/velocitat);
}
void espaiL() //Espai entre lletres
{
delay(2*(1000/velocitat));
}
void espaiP() //Espai entre paraules
{
delay(6*(1000/velocitat));
}


