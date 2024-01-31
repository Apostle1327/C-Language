// W.A.P. to find Leap Years between two given Numbers, and store them in an Array.
// Take the Values of Years from the user, Print the array out at the end of the program.

#include <stdio.h>
#include <conio.h>

int main()

{
    int y1, y2, n = 0;

// Enterting the Value of Year 1.

    printf("\n=/=/=/=/=/=/=/=/ Value of Year 1 =/=/=/=/=/=/=/=/=/=\n");

    printf("Enter the Value of Starting Year : ");
    scanf("%d", &y1);

// Enterting the Value of Year 2.

    printf("\n=/=/=/=/=/=/=/=/ Value of Year 2 =/=/=/=/=/=/=/=/=/=\n");

    printf("Enter the Value of Ending Year : ");
    scanf("%d", &y2);

// Filtering out Leap Year's from the Data Dump & Storing them in A new array.

    int lYear[50];

    for (int i = y1; i <= y2; i++)
    {
        if (i % 4 == 0)
        {
            lYear[n++] = i;
        }
    }

    for (int i = 0 ; i < n ; i++)
    {
        printf("lYear[%d] = %d\n", i, lYear[i]);
    }
}