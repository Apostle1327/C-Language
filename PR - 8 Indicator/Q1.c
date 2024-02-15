// W.A.P. to find the length of a string.
// Must use a Pointer, Take the Values of String from the User.

#include <stdio.h>
#include <conio.h>

int main()

{
    char incep[50];
    int length = 0;

// Injecting a Random String.
    printf("\n=/=/=/=/=/=/=/=/ Entering the String =/=/=/=/=/=/=/=/=/=\n\n");

    printf("Enter any Random String : ");
    scanf("%s", incep);

    char *p;
    p = incep;

    do
    {
        length++;
        p++;

    } while (*p != '\0');

    printf("\nLenght of the Said String is : %d", length);

        return 0;
}