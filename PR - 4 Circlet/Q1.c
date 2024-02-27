// W.A.P. to print the below pattern.
// Must use Nester for loop.

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("\n=/=/=/=/=/=/=/=/ Printing Pattern =/=/=/=/=/=/=/=/=/=\n\n");

    for (int i = 41; i <= 45; i++)
    {
        for (int j = 41; j <= i; j++)
        {
            printf(" %2d", j);
        }
        printf("\n");
    }

    return 0;
}

