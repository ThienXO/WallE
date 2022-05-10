#include <stdio.h>

//roboter.c
extern char userInput[64];
extern void wallCheck();



void requestInput()
{
    printf("\nIst da eine Wand?\nAntwort (j/n): ");
}

void scanInput(char *input)
{
    scanf("%s", input);
}

void errorMessage()
{
    printf("Das habe ich nicht verstanden.\n");
}



