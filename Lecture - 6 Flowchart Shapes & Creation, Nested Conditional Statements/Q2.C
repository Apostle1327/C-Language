// Q2. W.A.P. To find the Maximum number from the given 4 Numbers.
// Must use Nested if-else, Take the values of Numbers from the User.

#include<stdio.h>
#include<conio.h>

main()

{
 int A, B, C, D;

 clrscr();

 printf("Enter The Value of A : ");
 scanf("%d", &A);

 printf("Enter The Value of B : ");
 scanf("%d", &B);

 printf("Enter The Value of C : ");
 scanf("%d", &C);

 printf("Enter The Value of D : ");
 scanf("%d", &D);

 if(A>B)
 {
	if(A>C)
	{
		printf("\nThe Maximum Valus is %d", A);
	}
	else if(A>D)
	{
		printf("\nThe Greater Value is %d", A);
	}
	else
	{
		printf("\nThe Greater Value is %d", D);
	}
 }
 else if(B>C)
	{
		if(B>D)
		{
			printf("\nThe Greater Value is %d", B);
		}
		else if (B>A)
		{
			printf("\nThe Greater Value is %d", B);
		}
		else
		{
			printf("\nThe Greater Value is %d", A);
		}
	}
	else if(C>D)
	{
		if(C>A)
		{
			printf("\nThe Greater Value is %d", C);
		}
		else if(C>B)
		{
			printf("\nThe Greater Value is %d", C);
		}
		else
		{
			printf("\n The Greater Value is %d", B);
		}
	}

	else
	{
		printf("\nThe Greater Valus is %d", D);
	}
 getch();

}