// Find the index of a specific element in the array.
// Take the Injecting Value from the user.

#include <stdio.h>
#include <conio.h>

int main()

{

    int n, s;

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
    printf("\n=/=/=/=/=/=/=/=/ Printing Injected Values =/=/=/=/=/=/=/=/=/=\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Array A[%d] = %d\t", i, a[i]);
    }

//  Gathering the info to Search.
    printf("\n\n=/=/=/=/=/=/=/=/ Enter The Array Value =/=/=/=/=/=/=/=/=/=\n\n");

    printf("Enter the Array Value to be Searched : ");
    scanf("%d", &s);

    printf("Said Number is at Index Position : ");

    for (int i = 0; i < n; i++)
    {
        if (a[i] == s)
        {
            s = i;
            printf("%d\n", i);
        }
    }
    return 0;
}
