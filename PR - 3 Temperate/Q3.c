// W.A.P. to Find the Sum of First and Last digit of a Given Number.
// Must use For Loop, Take the value of the Number from the User.

#include <stdio.h>
#include <conio.h>

// Main Program Beginning.

int main()
{

    int number, sum = 0, firstdigit, lastdigit;

    printf("\nEnter the Number : ");
    scanf("%d", &number);

    firstdigit = number;
    lastdigit = number % 10;

// Deploying the Loop.

    for (number, firstdigit, lastdigit; firstdigit >= 10; firstdigit = firstdigit / 10)
    {
    }

    sum = firstdigit + lastdigit;

    printf("\nAddition of First and Last digit is : %d + %d = %d", firstdigit, lastdigit, sum);

    return 0;
}
