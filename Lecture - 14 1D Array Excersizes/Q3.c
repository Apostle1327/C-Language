// W.A.P. to find Square of each element from the Array.
// take the values of Element from the user.

#include <stdio.h>
#include <conio.h>

int main()

{
    int s;

// Declaring the Size of Array.

    printf("\n=/=/=/=/=/=/=/=/ Size of Array =/=/=/=/=/=/=/=/=/=\n");

    printf("\nEnter the size of Array : ");
    scanf("%d", &s);

// Injecting elements into the Array.
    printf("\n=/=/=/=/=/=/=/=/ Injecting Elements and Finding their Square Root =/=/=/=/=/=/=/=/=/=\n");

    int q[s];

    for (int i = 0; i < s; i++)
    {
        printf("Array S[%d] : ", i);
        scanf("%d", &q[i]);
    }

    for (int i = 0; i < s; i++)
    {
        q[i] = q[i] * q[i];
    }

    printf("Square Root of Each elements in the Array\n");

        for ( int i = 0; i < s; i++)
        {
            printf("Array S[%d] : %d\n", i, q[i]);
        }

}