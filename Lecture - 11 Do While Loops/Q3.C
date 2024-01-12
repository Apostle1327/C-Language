// W.A.P. to Print Even Numbers from 1 to N.
// Must use a Do-While Loop, Take the value of N from the user.

#include <stdio.h>
#include <conio.h>

// Main program Beginning.

main()
{
	int A = 1, B;

	clrscr();

	printf("Enter the value of B : ");
	scanf("%d", &B);

// Deploying Loop.

	do
	{

	// Loop Statement.

		if (A % 2 == 0)
		{
			printf("\n%d", A);
		}

	// Statement Increment.

		A++;
	} while (A <= B);
	
	getch();
}