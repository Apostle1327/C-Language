// W.A.P. to Check if given String is a Palindrome or Not.
// Take the Elements of the String from the user.

#include <stdio.h>
#include <string.h>

int main()
{
    char incep[20];

// Entering a Random String.
    printf("\n=/=/=/=/=/=/=/=/ Palindrome Check =/=/=/=/=/=/=/=/=/=\n\n");

    printf("Enter a Random String : ");
    scanf("%s", incep);

    char dupli[20];

    int pLen = strlen(incep);

    for ( int i = 0; i < pLen; i++)
    {
         dupli[i] = incep[pLen - i - 1];
    }
    dupli[pLen] = '\0';

    int palindrome = 1;

    for ( int i = 0; i < strlen(incep); i++ )
    {
        if (incep[i] != dupli[i])
        {
            palindrome = 0;
            break;
        }

    }
        if (palindrome)
        {
            printf("\nGiven String is a Palindrome.");
        }
        else
        {
            printf("\nGiven String is Not a Palindrome.");
        }

    return 0;
}