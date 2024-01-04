// Q.2 W.A.P. to find the area of a Rectangle.
// Take the values of Legth and Width from the user.

#include<stdio.h>
#include<conio.h>

main()

{
 int l,w;

 clrscr();

 printf("The Length of given Rectangle is : ");
 scanf("%d", &l);

 printf("The Width of given Rectangle is : ");
 scanf("%d", &w);

 printf("\nThe Are of given Rectangle is : %d", l*w);

 getch();
}