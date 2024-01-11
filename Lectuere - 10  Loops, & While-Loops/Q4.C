// Q4. W.A.P. to Print Odd Numbers from N to 1.
// Must use While Loop, Take the Value of N from user.
#include<stdio.h>
#include<conio.h>


main()

{
 int A, B = 1;

// Main Program begins.

 clrscr();

 printf("Enter the Value of A : ");
 scanf("%d", &A);

// Deploying Loop.

 while(A >= B)

 {
	if(A%2 == 1)
	{
		printf("\n%d", A);
	}

   A = A-1;
 }

 getch();

}