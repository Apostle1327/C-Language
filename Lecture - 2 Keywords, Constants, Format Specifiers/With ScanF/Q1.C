// Q.1 W.A.P. to find the area of a circle.
// Take the radius data from the user.

#include<stdio.h>
#include<conio.h>

void main()
{
 int r;
 float pi = 3.14;

 clrscr();

 printf("Enter the Radius of the circle : ");
 scanf("%d", &r);

 printf("The area of given circle is %f\n", pi*r*r);

 getch();

}
