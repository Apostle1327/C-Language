// Q1. W.A.P. to Find the Minimum Number from given 3 Numbers.
// Must use Ternary Operators, Take the Values of Numbers from the User.

#include<stdio.h>
#include<conio.h>

// Main Program Begins.

main()

{
// Passing Variables
 int A, B, C;

 clrscr();

// Assigning Values to the Variables.

 printf("Enter The Value of A : ");
 scanf("%d", &A);

 printf("Enter The Value of B : ");
 scanf("%d", &B);

 printf("Enter The Value of C : ");
 scanf("%d", &C);

// Applying Condition using Ternary Opertators.

 (A<B) ?
	 (A<C) ?
		 printf("\n%d is the Minimum Value", A)
		 :
		 printf("\n%d is the Minimum Value", C)
 :
 (B<C) ?
	printf("\n%d is the Minimum Value", B)
	:
	printf("\n%d is the Minimum Value", C)

 ;
 getch();
}