// W.A.P. to find the sum of all 1D Array elements by passing an array as an argument.
// Must use UDF, Take the value of Array from the user.

#include <stdio.h>

int arraySum(int a[], int d)
{
    int sum = 0;

    for ( int i = 0; i < d; i++)
    {
        sum += a[i];
    }

    return sum;
}

int main ()

{
    int d;

    printf("Enter the size of the Array : ");
    scanf("%d", &d);

    printf("\n=/=/=/=/=/=/=/=/ Injecting Values in the Array =/=/=/=/=/=/=/=/=/=\n\n");

    int a[d];

    for ( int i = 0; i < d; i++)
    {
        printf("Array a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    printf("\n=/=/=/=/=/=/=/=/ Performing Addition =/=/=/=/=/=/=/=/=/=\n\n");

    printf("Sum of the Said Array is : %d", arraySum(a, d));
}