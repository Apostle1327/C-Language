// W.A.P. to Print the Multiplication table of N Number.
// Must use For Loop, take the value of N from the user.

#include <stdio.h>
#include <conio.h>

// Main program Beginning.

int main()

{

    int N, i = 1;

    printf("Enter the Value of N number : ");
    scanf("%d", &N);

// Deploying The Loop.

    for (N; i <= 10; i++)
    {
        printf("%d * %d = %d\n", N, i, N * i);
    }
}
