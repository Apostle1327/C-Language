// Q1. W.A.P. to find the minimum number from other 2 given Numbers.
// Must use if-else, Take the values of the number from the user.

#include<stdio.h>
#include<conio.h>

main()

{
 int A, B, Min;

 clrscr();

 printf("The value of First Number is : ");
 scanf("%d", &A);

 printf("The Value of Second Number is : ");
 scanf("%d", &B);

 if(A<B)
 {
	Min = A;
 }else
 {
	Min = B;
 }
 printf("\nMinimum from both the Numbers is : %d", Min);

 getch();
}