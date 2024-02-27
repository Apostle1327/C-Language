// W.A.P. to print the below pattern.
// Must use Nester for loop.

#include <stdio.h>
#include <conio.h>

int main()
{
    int number = 11, rows;

    printf("Enter the amount of rows to be Printed : ");
    scanf("%d", &rows);

     printf("\n=/=/=/=/=/=/=/=/ Printing Pattern =/=/=/=/=/=/=/=/=/=\n\n");

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %2d", number);
            number++;
        }
        printf("\n");
    }

    return 0;
}
