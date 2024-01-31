// W.A.P. to perform the Merge Operation of two 1D arrays & Store it in A Different Array.
// The size of Both the Arrays can be Different, Take the Values of All Operands from the User.

#include <stdio.h>
#include <conio.h>

int main()

{
    int a, b;

// Enterting the Components of Array A.

    printf("\n=/=/=/=/=/=/=/=/ Components of Array A =/=/=/=/=/=/=/=/=/=\n");

    printf("\nEnter the size of Array A : ");
    scanf("%d", &a);

    int a1[a];

    for (int i = 0; i < a; i++)
    {
        printf("Array A[%d] : ", i);
        scanf("%d", &a1[i]);
    }

// Enterting the Components of Array B.

    printf("\n=/=/=/=/=/=/=/=/ Components of Array B =/=/=/=/=/=/=/=/=/=\n");

    printf("\nEnter the size of Array B : ");
    scanf("%d", &b);

    int b1[a];

    for (int i = 0; i < b; i++)
    {
        printf("Array B[%d] : ", i);
        scanf("%d", &b1[i]);
    }

// Merging the Components of Array A & Array B in Array C.

    printf("\n=/=/=/=/=/=/=/=/ Merging Array A & Array B =/=/=/=/=/=/=/=/=/=\n");

    int c[a + b];

    for (int i = 0; i < a; i++)
    {
        c[i] = a1[i];
    }

    for (int i = 0; i < b; i++)
    {
        c[a + i] = b1[i];
    }

    for (int i = 0; i < a + b; i++)
    {
        printf("Array C[%d] : %d\n", i, c[i]);
    }

    return 0;
}