// W.A.P. to print the below pattern.
// Must use Nester for loop.

#include <stdio.h>
#include <conio.h>

int main()

{
//    int rows;

//     printf("Enter  the amount of rows to be Printed : ");
//     scanf("%d", &rows);

    printf("\n=/=/=/=/=/=/=/=/ Printing Pattern =/=/=/=/=/=/=/=/=/=\n\n");
    int i = 0;

    for (i = 1; i <= 5; i++)
    {
        if (i == 1 || i == 3)
        {
            printf("* * * * *");
        }
        else
        {
            printf("*       *");
        }

        if ( i == 3 || i == 5)
        {
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}