#include <stdio.h>
extern void wallCheck();
extern void move();
extern void autoPilot();

//VARIABLES
extern int i;
extern int s;
extern int a;
extern int b;
extern int c;
extern int d;


int main()
{
while( c == 0)
{
    wallCheck();
    move();
}

if (i == 2)
{
    autoPilot();
}
}
