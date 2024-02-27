// W.A.P. to print the below pattern.
// Must use Nester for loop.

#include <stdio.h>
#include <conio.h>

int main()
{
    int number, rows;

    printf("Enter the starting value of the loop : ");
    scanf("%d", &number);

    printf("\nEnter the amount of rows to be Printed : ");
    scanf("%d", &rows);

    printf("\n=/=/=/=/=/=/=/=/ Printing Pattern =/=/=/=/=/=/=/=/=/=\n\n");

    
    for ( int i = 1; i <= rows; i++)
    {
        for ( int j = 1; j <= i; j++)
        {
            printf("%2d", j);
        }
        for ( int j = 1; j <= 2*(rows-i);j++)
        {
            printf("  ");
        }
        for ( int j = i; j >= 1; j--)
        {
            printf("%2d", j);
        }
        printf("\n");
    }

    return 0;
}
