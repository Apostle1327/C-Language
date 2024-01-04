// Q.4 W.A.P. to find Simple Interest.
// Take the values of Principle Amount, Rate of Interest, And Time from user.

#include<stdio.h>
#include<conio.h>

main()

{
 long int p,r,t;

 clrscr();

 printf("The Principle Amount is : ");
 scanf("%ld", &p);

 printf("The Rate of Interest is : ");
 scanf("%ld", &r);

 printf("The Time Period is : ");
 scanf("%ld", &t);

 printf("\nThe Simple Interest of This entire equation is : %ld", p*r*t/100);

 getch();

}