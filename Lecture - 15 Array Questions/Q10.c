// Find  the Min and Max elements in an Array.
// Take the Values of Injecting from the user.

#include <stdio.h>
#include <conio.h>

int main()

{
    int n, aMin, aMax;

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

// Decalring and Identifying Min & Max elements.

    aMin = a[0];
    aMax = a[0];

    for (int i = 1 ; i < n ; i++)
    {
        if (a[i] > aMax)
        {
            aMax = a[i];
        }
        if (a[i] < aMin)
        {
            aMin = a[i];
        }
    }

// Printing Min & Max Values from the Array.

    printf("\n\n=/=/=/=/=/=/=/=/ Min & Max =/=/=/=/=/=/=/=/=/=\n");

    printf("\n Max Value from the Array A : %d", aMax);
    printf("\n Min Value from the Array A : %d", aMin);

}
    