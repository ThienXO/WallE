#include <stdio.h>


//roboter.c
extern char userInput[64];
extern int validInput;
extern void wallCheck;
extern void validateInput();
extern void autoPilot();

extern int wallthere;

//movement.c
extern void move();

//FUNCTIONS


//VARIABLES
extern int i;
extern int s;
extern int a;
extern int b;
extern int c;
extern int d;

//IST ANTWORT OK?
void validateInput()
{
    if(*userInput == 'j' || *userInput == 'n')
    {
         validInput = 1;
         //printf("Valid\n");
    } else
    {
        validInput = 0;
        //printf("Not Valid\n");
    }
}


//Wand?
void wall()
{
    if(*userInput == 'j')
    {
        wallthere = 1;
    }
    else
    {
        wallthere = 0;
    }
}

void calculate ()
{
         (b = s - a + 1); //Breite angefangen von 1 zu messen


}

void size()
{
    (c = a - 1); //Addierte 1 wieder abziehen
    (d = b);
}

void autoPilot()
{
    printf("%d\n", c);
    printf("%d\n", d);
    printf("Ende\n");

}
