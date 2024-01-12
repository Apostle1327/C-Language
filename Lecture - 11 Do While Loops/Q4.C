// W.A.P. to Print Fibonacci Sequence.
// Must use a Do-While Loop.

#include <stdio.h>
#include <conio.h>

// Main program Beginnig.

main()
{
	int i = 3, N;
	int A = 0, B = 1;
	int nextValue = A + B;

	clrscr();

	printf("Enter the Number of Terms You want Printed : ");
	scanf("%d.", &N);

	printf("\nFibonacci Sequence : %d %d ", A, B);

// Deploying Loop.

	do
	{

	// Loop Statement

		printf("%d ", nextValue);

		A = B;
		B = nextValue;
		nextValue = A + B;

	// Statement Incrememnt.
	
		++i;

	} while (i <= N);
	getch();
}