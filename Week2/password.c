// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    bool result = false;
    int upperCount = 0;
    int lowerCount = 0;
    int digitCount = 0;
    int symCount = 0;

    int i = 0;
    while (password[i])
    {
        if (isupper(password[i]))
        {
            upperCount = upperCount + 1;
        }
        else if (islower(password[i]))
        {
            lowerCount = lowerCount + 1;
        }
        else if (isdigit(password[i]))
        {
            digitCount = digitCount + 1;
        }
        else if (ispunct(password[i]))
        {
            symCount = symCount + 1;
        }
        i++;
    }

    if (upperCount > 0 && lowerCount > 0 && digitCount > 0 && symCount > 0)
    {
        result = true;
    }
    else
    {
        result = false;
    }

    return result;
}