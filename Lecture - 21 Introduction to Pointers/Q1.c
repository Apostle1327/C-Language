// W.A.P. to ind the square of each element of a given 1D array.
// Must use Pointers, Take the elements of the Array from the user.

#include <stdio.h>

int main()

{
    int n;

    printf("Enter The size of Array : ");
    scanf("%d", &n);

// Injecting values in the Array.
    printf("\n=/=/=/=/=/=/=/=/ Injecting Values into Array A =/=/=/=/=/=/=/=/=/=\n\n");

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Array A[%d] : ", i);
        scanf("%d", &a[i]);
    }

// Performing Multiplication of the Array elements using Pointer.

    int *ptr;
    ptr = &a[0];

    printf("\n=/=/=/=/=/=/=/=/ Square of the Array Elements =/=/=/=/=/=/=/=/=/=\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("\nArray A[%d] = %d", i, (*(ptr + i)) * (*(ptr + i)));
    }

    return 0;
}