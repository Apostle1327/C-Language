// W.A.P. to create a login mechanism by entering the right email & password.
// You can compare it with your desired email & password.

#include <stdio.h>
#include <string.h>

int main()

{
    char pass[100];
    int len, letter = 0, digit = 0, specialSym = 0;
    char sym[] = {'!', '@', '#', '$', '%', '^', '&', '*'};

    printf("Create Your Password : ");
    scanf("%s", pass);
    len = strlen(pass);

    if (len <= 6)
    {
        printf("Password is Not strong enough!, it must be at least 6 characters long.");
        return 0;
    }

    for (int i = 0; i < len; i++)
    {
        if ((pass[i] >= 'a' && pass[i] <= 'z') || (pass[i] >= 'A' && pass[i] <= 'Z'))
        {
            letter = 1;
        }

        else if (pass[i] >= '0' && pass[i] <= '9')
        {
            digit = 1;
        }

        else
        {
            for (int j = 0; j < sizeof(sym) / sizeof(sym[0]); j++)
            {
                if (pass[i] == sym[j])
                {
                    specialSym = 1;
                    break;
                }
            }
        }
    }

    if (letter && digit && specialSym)
    {
        printf("\nPassword is strong!");
    }
    else
    {
        printf("\nPassword is not strong enough!. It must contain at least one letter, one digit, and one special symbol.");
    }

    return 0;
}