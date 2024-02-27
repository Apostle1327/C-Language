// W.A.P. to print the below pattern.
// Must use Nester for loop.

#include <stdio.h>
#include <conio.h>

int main()
{
    int rows, count = 0, count1 = 0, k = 0, space;

    printf("Enter the amount of rows to be Printed : ");
    scanf("%d", &rows);

    printf("\n=/=/=/=/=/=/=/=/ Printing Pattern =/=/=/=/=/=/=/=/=/=\n\n");

    for (int i = 1; i <= rows; ++i)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            printf("  ");
            ++count;
        }
        while (k != 2 * i - 1)
        {
            if (count <= rows - 1)
            {
                printf("%d ", i + k);
                ++count;
            }
            else
            {
                ++count1;
                printf("%d ", (i + k - 2 * count1));
            }
            ++k;
        }
        count1 = count = k = 0;
        printf("\n");
    }

    return 0;
}
