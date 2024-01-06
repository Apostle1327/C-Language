// Q2. W.A.P. to find if a Given Number is Neutral or Not.
// Must use Ladder if-else, Take the Value of Number from the User.

#include<stdio.h>
#include<conio.h>

main()

{
 int num;

 clrscr();

 printf("Enter any Number : ");
 scanf("%d", &num);

 if(num < 0)
 {
	printf("\nGiven Number is Not Neutral");
 }
 else if (num == 0, num >= 0)
 {
	printf("\nNumber is Neutral");
 }

 getch();
}