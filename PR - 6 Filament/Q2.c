// W.A.P. to count the Frequency of each character in a given string.
// Take the Elements of the String from the user.

#include <stdio.h>
#include <string.h>

int main()

{

    char incep[30];
    int freq[250] = {0};

// Entering a Random String.
    printf("\n=/=/=/=/=/=/=/=/ Frequency Check =/=/=/=/=/=/=/=/=/=\n\n");

    printf("Enter a Random String : ");
    scanf("%s", incep);

    for ( int i = 0; incep[i] != 0; i++)
    {
        freq[(int)incep[i]]++;
    }

    printf("\nFrequency of each Letter : \n");

    for ( int i = 0; i < 250; i++)
    {
        if (freq[i] != 0 && ( i >= 32 && i <= 126))
        {
            printf("%c :> %d\n", i, freq[i]);
        }
    }

    return 0;
}