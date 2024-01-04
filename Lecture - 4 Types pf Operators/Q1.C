// Q.1 W.A.P. to Swap Two Variables using a Third Variable.
// Take the values of Variables from the User.

#include<stdio.h>
#include<conio.h>

main()

{
 int A, B, C;

 clrscr();

 printf("The Value of A is : ");
 scanf("%d", &A);

 printf("The Value of B is : ");
 scanf("%d", &B);

 printf("\nInitial Value : A = %d B = %d\n", A, B);

 C = A;
 A = B;
 B = C;


 printf("\nValues After Swapping ; A = %d B = %d", A, B);

 getch();
}