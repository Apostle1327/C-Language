// W.A.P. that Defines a Function to Print only Odd Elements from a 1D array.
// Take the values of all elements from the User.

#include <stdio.h>

// Defining the Function.

int oddElements(int a[], int size)
{
    printf("The Odd Elements of Defined Array are : ");

    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("%d\n", a[i]);
        }
    }
}

int main()

{
    int s;

    printf("Enter the Size of the Array : ");
    scanf("%d", &s);

    int a[s];

    printf("Enter the Elements of the Array : \n");
    
    for (int i = 0 ; i < s ; i++)
    {
        printf("Enter the Element %d : ", i);
        scanf("%d", &a[i]);
    }

    
    oddElements(a, s);

    return 0;
}