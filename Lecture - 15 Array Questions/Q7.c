// Add a new element at a specific index in the array.
// Take the Values of Injecting and Value Addition from the user.

#include <stdio.h>
#include <conio.h>

int main()

{
    int n, c, v;

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

//  Printing the Injected Values.
    printf("\n=/=/=/=/=/=/=/=/ Original Array =/=/=/=/=/=/=/=/=/=\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Array A[%d] = %d\t", i, a[i]);
    }

//  Updating the Array.
    printf("\n\n=/=/=/=/=/=/=/=/ Array Updation =/=/=/=/=/=/=/=/=/=\n\n");

    printf("\nEnter the Value Destination : ");
    scanf("%d", &c);

    printf("\nEnter the Value to be Added : ");
    scanf("%d", &v);

    for (int i = n; i >= n - 1; i--)
    {
        a[i] = a[i - 1];
    }

    a[c] = v;

//  Array after Adding.
    printf("\n\n=/=/=/=/=/=/=/=/ Array after Adding =/=/=/=/=/=/=/=/=/=\n\n");

    for (int i = 0; i < n + 1; i++)

    {
        printf("Array A[%d] = %d\n", i, a[i]);
    }

    return 0;
}