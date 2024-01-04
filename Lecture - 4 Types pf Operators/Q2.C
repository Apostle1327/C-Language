// Q.2 W.A.P. to Swap two Variables Without using a Third Variable.
// Take the values of Operands from the user.

#include<stdio.h>
#include<conio.h>

main()

{
 int A,B;

 clrscr();

 printf("The Value of A is : ");
 scanf("%d", &A);

 printf("The Value of B is : ");
 scanf("%d", &B);

 printf("\nInitial Value : A = %d, B = %d\n", A,B);

 A = A+B;
 B = A-B;
 A = A-B;

 printf("\nValue after Swapping : A = %d, B = %d\n", A,B);

 getch();

}
