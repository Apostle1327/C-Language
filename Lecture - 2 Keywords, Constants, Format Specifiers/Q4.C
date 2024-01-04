// Q.4 Write a program to find simple Interest.

#include<stdio.h>
#include<conio.h>

void main()

{
long int p = 15000;
 int r = 10;
 int t = 2;
 float si= (p*r*t)/100;

 clrscr();

 printf("The Simple interest of this Principle is : %f", si);

 getch();
}