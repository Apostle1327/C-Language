// Create an array of integers and find the sum of all the elements in the array.
// Take the Values of Operands from the User.

#include <stdio.h>
#include <conio.h>

int main()

{
    int n, sum = 0;

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

// Adding all the Injected values of the Array.
    printf("\n=/=/=/=/=/=/=/=/ Adding the Values =/=/=/=/=/=/=/=/=/=\n\n");

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    printf("\nAddition of Array Values : %d", sum);

    return 0;
}
    