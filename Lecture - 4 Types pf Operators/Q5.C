// Q5. W.A.P. to find the Formula's Answer (x+y)^3.
// Take the Values of all Operands from the User.

#include<stdio.h>
#include<conio.h>

main()

{
 int x,y;

 clrscr();

 printf("The value of x is : ");
 scanf("%d", &x);

 printf("The value of y is : ");
 scanf("%d", &y);

 printf("\n\nAnswer of The Formula is : %d", (x+y) * (x+y) * (x+y) );

 getch();
}