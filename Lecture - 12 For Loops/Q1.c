// W.A.P. to Print the sum of 1 to N numbers.
// Must use For Loops, Take the Value of N from the user.

#include <stdio.h>
#include <conio.h>

// Main Program Beginning.

int main()

{

    int a = 1, b, sum = 0;

    printf("\nEnter the Value of b : ");
    scanf("%d", &b);

// Deploying The Loop.

    for (a; a <= b; a++)
    {
        printf(" %d ", a);
        sum = sum + a;
    }

    printf("\n\nAddition of All Numbers : %d", sum);

    return 0;
}