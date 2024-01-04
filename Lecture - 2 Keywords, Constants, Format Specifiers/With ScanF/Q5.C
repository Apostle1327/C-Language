// Q.5 W.A.P. to find the perimeter of a Circle
// take the value of Radius from the user.

#include<stdio.h>
#include<conio.h>

main()

{
 int r;
 float pi = 3.14;

 clrscr();

 printf("The Radius of given Circle is : ");
 scanf("%d", &r);

 printf("\nThe Perimeter of the given Circle is : %5.4f", 2*pi*r);

 getch();

}