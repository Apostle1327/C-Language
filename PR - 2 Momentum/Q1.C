// Q1. W.A.P. to check whether a Number is Even or Odd.
// Must use Ternary operators, Take the values of Number from the User.

main()

{
 int A;

 clrscr();

 // Assigning Values to the Variable.

 printf("Enter the Value of A : ");
 scanf("%d", &A);

 //Deploying the Condition.

 ( A % 2 == 0)?

	printf("\nGiven Number is Even")
 :

   printf("\nGiven Number is Odd")
 ;
 getch();
}