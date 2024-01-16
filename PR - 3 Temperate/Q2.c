// W.A.P. to Count the total Number of Digits of Given Number.
// Take the Value of number from the User.

#include <stdio.h>
#include <conio.h>

// Main Program beginning.

int main()

{
    int count = 0, number;

    printf("Enter the Number : ");
    scanf("%d", &number);

// Deploying the Loop.

    for (number, count; number != 0; count++)
    {
        number = number / 10;
    }

    printf("\nDigit count of the Number is : %d", count);

    return 0;
}