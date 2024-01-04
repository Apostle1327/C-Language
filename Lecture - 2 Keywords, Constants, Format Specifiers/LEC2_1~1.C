// W.A.P. to perform all arithmatic operators such as +, -, *, /, and %
// take the values of the operands from user.

#include<stdio.h>
#include<conio.h>

main()

{

 int a,b;

 clrscr();

 printf("The Value of A is : ");
 scanf("%d", &a);

 printf("The Value of B is : ");
 scanf("%d", &b);

 printf("\nThe Addition of both the values x+y is : %d\n", a + b);
 printf("The Subtraction of both the values x-y is : %d\n", a - b);
 printf("The Multiplication of both the values x*y is : %d\n", a * b);
 printf("The Division of both the values x/y is : %d\n", a / b);
 printf("The Modulo of both the values x%%y is : %d\n", a % b);

 getch();

}
