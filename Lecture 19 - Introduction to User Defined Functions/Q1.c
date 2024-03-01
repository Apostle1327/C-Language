// W.A.P. to find the cube of a given number using UDF.
// Must use UDF, Take the value of the Digit from the user.

#include <stdio.h>

// Defining the Function.

int cube(int dig)
{
    int cube;
    cube = dig * dig * dig;
}

int main()

{
    int dig;

    printf("Enter the Digit in Play : ");
    scanf("%d", &dig);

    printf("\n=/=/=/=/=/=/=/=/ Cube of Digit =/=/=/=/=/=/=/=/=/=\n\n");

    printf("Cube of the said Digit is : %d", cube(dig));

    return 0;
}