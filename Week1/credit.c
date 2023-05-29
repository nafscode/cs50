#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int count = 0;
    int sum = 0;
    int product;
    int secondDigit;
    long int first;
    long int second;
    // The first value from the left is initialized to false //
    bool isSecondDigit = false;

    long int credit = get_long("Credit card number please: ");
    long int tempCredit = credit;

    // Step 1: Iterate through the digits from right to left
    while (credit > 0) {
        secondDigit = credit % 10;
        credit /= 10;
        count++;

        // Step 2: Double the value of every second digit
        product = secondDigit * (isSecondDigit ? 2 : 1);

        // Step 3: If the product is two digits, add the digits together
        if (product > 9) {
            product = (product % 10) + 1;
        }

        sum += product; // Add all digits together //

        // Step 4: Change the next digit to true then false throughout the iteration //
        isSecondDigit = !isSecondDigit;

    }

    first = tempCredit;
    while(first >= 10)
    {
        first = first / 10;
    }

    second = tempCredit;

    while(second >= 100)
    {
        second = second / 10;
    }

    // Step 5: Check if the total sum is divisible evenly by 10

    if (sum % 10 == 0 && count == 16 && (second == 51 || second == 52 || second == 53 || second == 54 || second == 55))
    {
        printf("MASTERCARD\n");
    }
    else if (sum % 10 == 0 && count == 15 && (second == 34 || second == 37))
    {
        printf("AMEX\n");
    }
    else if (first == 4 && sum % 10 == 0 && (count == 13 || count == 16))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}