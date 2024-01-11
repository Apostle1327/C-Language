// Q1. W.A.P. to Print 1 to 10.
// Must use While Loop.

#include<stdio.h>
#include<conio.h>

main()

{
 int A = 1;

 clrscr();

 while(A <= 10)      //Loop Initialization

 {
	printf("\n%d", A);              // Loop Statements

	A = A+1;        //Loop Increment
 }
 getch();
}