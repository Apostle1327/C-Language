// W.A.P. to find the reverse of a 1D array.
// Must use Chain of Pointers, Take the values of the Array from the user.

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

    int *ptr;
    ptr = &a[0];

// Reversing the value with the help of pointer.
    printf("\n=/=/=/=/=/=/=/=/ Reversing the Values of Array =/=/=/=/=/=/=/=/=/=\n\n");

    for (int i = n - 1; i >= 0; i--)
    {
        printf("Array A[%d] : %d\n", i, *(ptr + i));
    }

    return 0;
}