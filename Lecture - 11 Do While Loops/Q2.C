// Q2. W.A.P. to print 10 to 1.
// Must use Do-While Loop.

#include <stdio.h>
#include <conio.h>

// Main program Beginnig.

main()

{
	int A = 10, B = 1;

	clrscr();

// Deploying Loop.

	do
	{

	// Loop Statement.

		printf("\n%d", A);

	// Statement Decrement.
		A--;

	} while (A >= 1);

	getch();
}