//Q1. W.A.P. to Convert Temperature from degrees Celsius to Farenheit..
// Take the Temperature Values from the User.

#include<stdio.h>
#include<conio.h>

main()

{

 int c,f;

 clrscr();

 printf("The Value of Celsius is : ");
 scanf("%d", &c);

 f = ( c * 9/5 ) + 32;
 printf("\nThe Value of farenheit would be : %d", f);

 getch();

}
