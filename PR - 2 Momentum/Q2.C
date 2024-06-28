// Q2. W.A.P. to Input Electricity unit charges & Calculate the total electricity bill.
// Charge the Bill according to Given Condition, Take the Values of Units from the user.

#include <stdio.h>
#include <conio.h>

// Main Program Begins.

main()

{

	// Passing Variables.

	int Units;
	float Charges, GST, FA;

	// Assigning Values to The Variables.

	clrscr();

	printf("Enter the Amount of Units : ");
	scanf("%d", &Units);

	// Deploying Condition.

	if (Units <= 50)
	{
		Charges = (Units * 0.50);

		printf("\n%f", Charges);
	}
	else if (Units >= 51 && Units <= 150)
	{
		Charges = (Units - 50) * 0.75 + (50 * 0.50);

		printf("\n%f", Charges);
	}
	else if (Units >= 151 && Units <= 250)
	{
		Charges = (Units - 150) * 1.20 + (50 * 0.50) + (100 * 0.75);

		printf("\n%f", Charges);
	}
	else
	{
		Charges = (Units - 250) * 1.50 + (50 * 0.50) + (100 * 0.75) + (100 * 1.20);

		printf("\n%f", Charges);
	}

	GST = Charges * 0.20;

	printf("\n\nAdditional Tax : %f", GST);

	FA = (Charges + GST);

	printf("\n\n\nYour Final Payable Amount is : %f", FA);

	getch();
}
