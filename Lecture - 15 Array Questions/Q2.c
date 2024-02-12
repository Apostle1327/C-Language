// Update a specific element in the array.
// Take both the Injecting And Updating Values from the user.

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

    printf("\nEnter the Index Destination : ");
    scanf("%d", &c);

    printf("\nEnter the Value to be Updated : ");
    scanf("%d", &v);

    a[c] = v;

//  Printing the Updated Values.
    printf("\n=/=/=/=/=/=/=/=/ Updated Array =/=/=/=/=/=/=/=/=/=\n\n");

    for ( int i = 0 ; i < n ; i++)
    {
        printf("Array A[%d] = %d\n", i, a[i]);
    }

    return 0;
}