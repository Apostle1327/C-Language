// Q2. W.A.P. to find Gross Salary by Adding HRA, DA, & TA.
// Take the values of Basic Salary, HRA, TA, & DA from the User,

#include<stdio.h>
#include<conio.h>

main()

{
 int BS, GS, HRA, TA, DA;

 clrscr();

 printf("The Value of Basic Salary is : ");
 scanf("%d", &BS);

 printf("The Value of HRA is : ");
 scanf("%d", &HRA);

 printf("The Value of TA is : ");
 scanf("%d", &TA);

 printf("The Value of DA is : ");
 scanf("%d", &DA);

 GS = BS + HRA + TA + DA;

 printf("\nGross Salary is : %d", GS);


 getch();
}