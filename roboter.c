#include <stdio.h>

//helper.c
void requestInput();
void scanInput(char *input);
void errorMessage();
void finish();

//r.system.c
void validateInput();
void wall();

//movement.c
void autoPilot();
void size();


//VARIABLES
int validInput;
int i = 0;
int s = 0;
int a = 0;
int b = 0;
int c;
int d;



char userInput[64];

int wallthere;

void wallCheck()
{
    do
    {
        requestInput();
        scanInput(userInput);
        validateInput();

        if(validInput == 0 && i != 2)
        {
            errorMessage();
        }
    }

    while(validInput == 0);

    validInput= 0;

    wall();

    //printf("Wall: %d\n", wallthere);
}




