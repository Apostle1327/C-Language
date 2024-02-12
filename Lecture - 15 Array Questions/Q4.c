// Add an element to the end of the array.
// Take both the Injecting And Adding Values from the user.

#include <stdio.h>
#include <conio.h>

int main()

{
    int n, c;

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

    printf("Enter the Value to be Added : ");
    scanf("%d", &c);

    a[n] = c;

//  Array after Addition.
    printf("\n=/=/=/=/=/=/=/=/ Array After Addition =/=/=/=/=/=/=/=/=/=\n\n");

    for ( int i = 0 ; i < n + 1 ; i++)
    {
        printf("Array A[%d] = %d\n", i, a[i]);
    }

    return 0;
}