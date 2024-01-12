// Q1. W.A.P. to Print 1 to 10.
// Must use Do While Loops.

#include <stdio.h>
#include <conio.h>

// Main program Beginning.

main()

{
    int A = 1;

    clrscr();

// Deploying Loop

    do
    {
    // Loop Statement.

        printf("\n%d", A);

    // Statement Increment.

        A++;

    } while (A <= 10);

    getch();
}