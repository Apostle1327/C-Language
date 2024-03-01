// W.A.P. to find the length of the String by passing a string as an argument.
// Must use UDF, Take the value of Array from the user.

#include <stdio.h>

int len(char *word)

{
    int l;

    for (l = 0; word[l] != '\0'; l++)
    {
    }

    return l;
}

int main()

{
    printf("\n=/=/=/=/=/=/=/=/ Injecting Elements in the String =/=/=/=/=/=/=/=/=/=\n\n");

    char word[50];

    printf("Enter the Elements of the String : ");
    scanf("%s", &word);

    printf("\n=/=/=/=/=/=/=/=/ Length of the String =/=/=/=/=/=/=/=/=/=\n\n");

    printf("The Length of the said String is : %d", len(word));
}