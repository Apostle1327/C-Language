// Update multiple elements in the array simultaneously.
// Take the Values of Injecting and Updation from the user.

#include <stdio.h>
#include <conio.h>

int main()

{
    int n, nUp, nIn;

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

//  Gathering the info to Update.
    printf("\n\n=/=/=/=/=/=/=/=/ Enter The Array Value =/=/=/=/=/=/=/=/=/=\n\n");

    printf("Enter the Amount of Values to be Updated : ");
    scanf("%d", &nUp);

    printf("Enter the Elements to be Changed with : \n");

    for ( int i = 0; i < nUp; i++)
    {
        int nVa;

        printf("New Value Index a[%d] : ", i);
        scanf("%d", &nIn);

        printf("Value to be Updated : ");
        scanf("%d", &nVa);

        a[nIn] = nVa;
    }

    printf("\nUpdated Array : ");

    for (int i = 0 ; i < nUp ; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
