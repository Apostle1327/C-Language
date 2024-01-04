//Q1. W.A.P. to Find the Minimum Number from Given 3 Numbers.
//Use Nested if-else, Take the Values of Numbers from the User.

#include<stdio.h>
#include<conio.h>

main()

{
 int A, B, C;

 clrscr();

 printf("Enter The Value of A : ");
 scanf("%d", &A);

 printf("Enter The Value of B : ");
 scanf("%d", &B);

 printf("Enter The Value of C : ");
 scanf("%d", &C);

 if(B<A)
 {
	if(B<C)
	{
		printf("\nB is the Minimum Number");
	}
	else
	{
		printf("\nC is the Minimum Number");
	}
 }
 else
 {
	if(A<C)
	{
		printf("\nA is the Minimum Value");
	}
	else
	{
		printf("\nC is the Minimum Value");
	}
 }

 getch();
}