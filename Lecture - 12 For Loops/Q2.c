// W.A.P. to Print the Factorial of Number N.
// Must use For Loop, Take the Value of N from the User.


#include<stdio.h>
#include<conio.h>


// Main program Beginnig.


int main()

{

    int a, m=1;

    printf("\nEnter the Value of terms : ");
    scanf("%d", &a);

// Deploying the Loop.

    for(a ; a>0 ; a--)
    {
        printf(" %d ", a);

        m = m*a;
    }

    printf("\n\nFactorial : %d", m);

    return 0;
}