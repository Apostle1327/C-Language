// W.A.P. to to convert the given string in Uppercase.
// Do the Conversion without using String Functions, Take the elements of string from the user.

#include <stdio.h>
#include <conio.h>

int main ()

{
    char Conv[20];

// Injecting the Lowercase String.
    printf("\n=/=/=/=/=/=/=/=/ Entering the String =/=/=/=/=/=/=/=/=/=\n\n");
    
    printf("Input any String in Lowercase : ");
    scanf("%s", Conv);

    for ( int i = 0; Conv[i] != 0; i++)

    {
        if ( Conv[i] >= 'a' && Conv[i] <= 'z')
        {
            Conv[i] -= 32;
        }
    }

    printf("\n%s", Conv);

    return 0;
}