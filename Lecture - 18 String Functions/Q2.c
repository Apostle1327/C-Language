// W.A.P. to Create a Login Mechanism by entering the right eMail id & Password.
// You can also compare it with Your desired eMail & Password too, Take all the values from the user.

#include <stdio.h>
#include <string.h>

int main()

{
    char login[100], password[100];
    char testLogin[] = "admin@rnwmultimedia.in";
    char testPassword[] = "rnwProfessor1327";


    printf("Login with your eMail : ");
    scanf("%s", login);
    
    printf("Enter your Password : ");
    scanf("%s", password);

    if (strlen(login) == strlen(testLogin) && strlen(password) == strlen(testPassword))
    {
        printf("\nYou have Logged in Successfully!");
    }
    else
    {
        printf("\nInvalid credentials, Please enter correct data.");
    }

    return 0;
}