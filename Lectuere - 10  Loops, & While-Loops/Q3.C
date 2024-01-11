// Q3. W.A.P. to Print 1 to N.
// Must use While Loop, take the Value of N from the user.


#include<stdio.h>
#include<conio.h>


main()

{
 int A = 1, B;

 clrscr();

 printf("Enter the Value of B : ");
 scanf("%d", &B);

// Initializing Loop.

 while (A <= B)
 {

// Loop Statement.

 printf("\n%d", A);

// Loop Increment.

 A = A + 1;
 }

 getch();
}