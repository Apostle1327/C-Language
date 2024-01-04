// W.A.P. to find the Area of a Triangle.
// Take the Values of Base and Height from the user.

#include<stdio.h>
#include<conio.h>

main()
{
 int b,h;
 float d = 0.5;

 clrscr();

 printf("The Base of given Triangle is : ");
 scanf("%d", &b);

 printf("The Height of given Triangle is : ");
 scanf("%d", &h);

 printf("\nThe Area of given Triangle is : %f", d*(b*h));

 getch();
}