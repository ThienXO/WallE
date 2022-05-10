#include <stdio.h>

//roboter.c
extern int wallthere;



//r.system.c
extern void calculate();
extern void autoPilot();
extern void size();


//VARIABLES
extern int i;   //Drehung
extern int s;   //Schritt
extern int a;
extern int b;
extern int c;
extern int d;




void move()
{

if(wallthere == 1)
{
    i++;
    printf("Drehung\n");
    printf("Drehung: %d\n", i);
} else
{
    s++;
    printf("Schritt\n");
    printf("Schritt: %d\n", s);
};

if(i != 1 )
{
    a++;
}

//Wand messen
if(i == 1)
{
    printf("Laenge: %d\n", a);

}

if(i == 2)
{
    calculate();
    size();
//    autoPilot();
}
}
