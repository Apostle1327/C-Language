// W.A.P. to convert the given string in Lowercase.
// Do the Conversion without using String Functions, Take the elements of string from the user.

#include <stdio.h>
#include <conio.h>

int main ()

{
    char Conv[20];

// Injecting the Upperscase String.
    printf("\n=/=/=/=/=/=/=/=/ Entering the String =/=/=/=/=/=/=/=/=/=\n\n");
    
    printf("Input any String in Uppercase : ");
    scanf("%s", Conv);

    for ( int i = 0; Conv[i] != 0; i++)

    {
        if ( Conv[i] >= 'A' && Conv[i] <= 'Z')
        {
            Conv[i] += 32;
        }
    }

    printf("\n%s", Conv);

    return 0;
}