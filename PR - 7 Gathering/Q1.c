// Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and %.
// Use UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.

#include <stdio.h>
#include <conio.h>


int addition (int val1, int val2)
{
    return val1 + val2;
}

int subtraction (int val1, int val2)
{
    return val1 - val2;
}

int multiplication (int val1, int val2)
{
    return val1 * val2;
}

int division (int val1, int val2)
{
    return val1 / val2;
}

int modulo (int val1, int val2)
{
    return val1 % val2;
}

int main ()

{
    int choice, val1, val2;

// Beginnig of the Operation.
    do{

    printf("\n\n=/=/=/=/=/=/=/=/ Choose from the Options Below =/=/=/=/=/=/=/=/=/=\n\n");
        
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 to Exit the Menu.\n\n");

        printf("Opt for Your Desired Option : ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("\nYou have Successfully Exited the Program.");
            break;
        }

        printf("\nEnter the First Number : ");
        scanf("%d", &val1);

        printf("Enter the Second Number : ");
        scanf("%d", &val2);

        switch (choice)
        
        {
        case 1:
            printf("\nThe Addition of %d & %d is : %d", val1, val2, addition(val1, val2));
            break;

        case 2:
            printf("\nThe Subtraction of %d & %d is : %d", val1, val2, subtraction(val1, val2));
            break;

        case 3:
            printf("\nThe Multiplication of %d & %d is : %d", val1, val2, multiplication(val1, val2));
            break;

        case 4:
            if (val2 != 0)
            {
                printf("\nThe Division of %d & %d is : %d", val1, val2, division(val1, val2));
            }
            else
            {
                printf("\nThe Operation cannot be Performed with 0 as Divider");
            }
            break;

        case 5:
            printf("\nThe Modulus of %d & %d is : %d", val1, val2, modulo(val1, val2));
            break;
        
        default:
            printf("\nPlease enter a Correct value from the List");
            break;
        }
    }while (1);

    return 0;
}

