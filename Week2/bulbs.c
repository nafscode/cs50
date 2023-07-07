#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    string message;
    int lenght;
    int decimal;

    message = get_string("Message: ");
    lenght = strlen(message);

    // Iterate through the characters of the string
    for (int i = 0; i < lenght; i++)
    {
        // Convert the character into decimal
        decimal = (int)message[i];

        // Convert decimal to binary
        int binary[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
        int j = 0;
        while (decimal > 0)
        {
            binary[j] = decimal % 2;
            decimal = decimal / 2;
            j++;
        }

        for (int k = BITS_IN_BYTE - 1; k >= 0; k--)
        {
            print_bulb(binary[k]);
        }
        printf("\n");
    }

}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}