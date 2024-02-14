// Q.1 W.A.P. to find all the negative elements from a given 1D array.
// Take the Values of the Elements from the User.

#include <stdio.h>
#include <conio.h>

int main()
{
    int s;

    printf("Enter the Size of The Array : ");
    scanf("%d", &s);

// Injecting values in the Array.
    printf("\n=/=/=/=/=/=/=/=/ Injecting Values in the Array =/=/=/=/=/=/=/=/=/=\n\n");

    int a[s];

    for ( int i = 0; i < s ; i++)
    {
        printf("Array A[%d] : ", i);
        scanf("%d", &a[i]);

    }

// Printing the Elements of The array.
    printf("\n\n=/=/=/=/=/=/=/=/ Printing the Original Array =/=/=/=/=/=/=/=/=/=\n\n");

    for ( int i = 0 ; i < s ; i++)
    {
        printf("Array A[%d] : %d\t", i, a[i]);
    }

// Filtering out The Negative Values from the Array & Printing them.
    printf("\n\n=/=/=/=/=/=/=/=/ Printing Negative Values of the Array =/=/=/=/=/=/=/=/=/=\n\n");

    for ( int i = 0 ; i < s ; i++)
    {
        if (a[i] < 0)
        {
            printf("Array A[%d] : %d\n", i, a[i]);
        }
    }

    return 0;
}