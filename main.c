/*
************************************
** @file :  main.c
** @name :  EhabMagdyElhadidy
** @brief:  learn >----factorial
************************************
*/

#include <stdio.h>
#include <stdlib.h>
unsigned int Number , counter ;
unsigned int Factorial =1;
int main()
{

    printf ("Enter the Number  : ");
    scanf ("%i", &Number );
    for (counter = Number ; counter >=1 ; counter --)
    {
        Factorial *= counter ;
    }
    printf ("Factorial = %i",Factorial);
    return 0;
}
