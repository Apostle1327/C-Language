// Q3. W.A.P. to find the Third Angle of a Right Angle if two other angles are given.
// Take the Values of Angle from User.

#include<stdio.h>
#include<conio.h>

main()

{
 int FA, SA, TA;

 clrscr();

 printf("The Value of First Angle is : ");
 scanf("%d", &FA);

 printf("The Value of Second Angle is : ");
 scanf("%d", &SA);

 TA = 180-(FA + SA);

 printf("\nThe Value of Third Angle would be : %d", TA);

 getch();
}