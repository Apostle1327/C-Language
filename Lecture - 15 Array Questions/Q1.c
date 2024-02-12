// Create an array and Inject values in it, then print the elements of the Array.
// Take the values of Elements from the user.

#include <stdio.h>
#include <conio.h>

int main()

{

    int n;

    printf("Enter The size of Array : ");
    scanf("%d", &n);

// Injecting values in the Array.
printf("\n=/=/=/=/=/=/=/=/ Injecting Values into Array A =/=/=/=/=/=/=/=/=/=\n\n");

    int a[n];

    for( int i = 0 ; i < n ; i++)
    {
        printf("Array A[%d] : ", i);
        scanf("%d", &a[i]);
    }

//  Printing the Injected Values.
printf("\n=/=/=/=/=/=/=/=/ Printing Injected Values =/=/=/=/=/=/=/=/=/=\n\n");

    for ( int i = 0 ; i < n ; i++)
    {
        printf("Array A[%d] = %d\n", i, a[i]);
    }
    return 0;
}
