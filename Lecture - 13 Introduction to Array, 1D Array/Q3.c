// W.A.P. to Perform the Addition Operation of Two 1D Arrays & store it in a Different Array.
// The size of Both the Array's should be same, Take the Values of Operands of Both Array's from the User.

#include <stdio.h>
#include <conio.h>

int main()

{
    int n;

    printf("Enter the size of Array : ");
    scanf("%d", &n);

// Enterting the Components of Array A.

    printf("\n=/=/=/=/=/=/=/=/ Components of Array A =/=/=/=/=/=/=/=/=/=\n");

    printf("\nEnter the Components of Array A\n");

        int a[n];

        for (int i = 0 ; i < n ; i++)
        {
            printf("Array A[%d] : ", i);
            scanf("%d", &a[i]);
        }

// Enterting the Components of Array B.

    printf("\n=/=/=/=/=/=/=/=/ Components of Array B =/=/=/=/=/=/=/=/=/=\n");

    printf("\nEnter the Components of Array B\n");

        int b[n];

        for (int i = 0 ; i < n ; i++)
        {
            printf("Array B[%d] : ", i);
            scanf("%d", &b[i]);
        }

// Making a Third Array and Storing The Values of Answers gathered by Performing the Addition.

printf("\n=/=/=/=/=/=/=/=/ Array C =/=/=/=/=/=/=/=/=/=\n\n");

    int c[n];

    for (int i = 0 ; i < n ; i++)
    {
        c[i] = a[i] + b[i];
        printf("Addition of Both Arrays is c[%d] = %d\n", i, c[i]);
    }

    return 0;
}