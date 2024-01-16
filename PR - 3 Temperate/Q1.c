// W.A.P. to Print all the Alphabets from A to Z by skipping 3 Alphabets.
// Must use Do-While Loop.

#include <stdio.h>
#include <conio.h>

// Main Program Beginning.

int main()

{
    int i = 'a';

// Deploying The Loop.

    do
    {
        printf("%c\n", i);
        i = i + 4;

    } while (i <= 'z');

    return 0;
}