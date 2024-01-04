// Q.4 W.A.P. to Find the Formula's Answer
//(i) (x+y)^2.(x+y)^2 (ii) (x+y)(x+y) (iii) x*x+y*y+2xy
// Take the values of Operands from the User.

#include<stdio.h>
#include<conio.h>

main()
{
 int x,y;

 clrscr();

 printf("The Value of x is : ");
 scanf("%d", &x);

 printf("The Value of y is : ");
 scanf("%d", &y);

 printf("\nFirst Formula : %d", ((x+y)*(x+y)) * ((x+y)*(x+y)) );
 printf("\nSecond Formula : %d", (x+y) * (x+y));
 printf("\nThird Formula : %d", ((x*x) + (y*y) + (2*x*y)) );

 getch();

}