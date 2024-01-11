// Q5. W.A.P. to print Leap Years between Two given Numbers.
// Must use While Loops, Use values of the Numbers from User.

#include<stdio.h>
#include<conio.h>


main()

{
 int yearBegin, yearEnd;

 clrscr();

// Main program Begins.

 printf("Enter the Value of Beginnig Year : ");
 scanf("%d", &yearBegin);

 printf("Enter the Value of Ending Year : ");
 scanf("%d", &yearEnd);

// Deploying Loop.

 while(yearBegin <= yearEnd)

 {
// Loop Statements.

	if(yearBegin%4==0)
	{
		printf("\n%d", yearBegin);
	}

	yearBegin = yearBegin + 1;
 }


 getch();
}