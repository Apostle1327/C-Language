// W.A.P. to check if a given number is divisible by both 3 & 5 or not.
// Must use UDF, Take the value of the Digit from the user.

#include <stdio.h>

int divi(int dig)
{
    if ( dig % 3 == 0 && dig % 5 == 0)
    {
        printf("Said number %d is Divisible by 3 & 5", dig);
    }
    else
    {
        printf("Said number %d is not Divisible by 3 & 5", dig);
    }
}

int main ()

{
    int dig;

    printf("Enter the Digits you'd Like to check : ");
    scanf("%d", &dig);

    printf("\n=/=/=/=/=/=/=/=/ Checking Divisiblity =/=/=/=/=/=/=/=/=/=\n\n");

    divi(dig);
}