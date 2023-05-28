#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;
    while (height < 1 || height > 8)
    {
        height = get_int("Height: ");
    }
    for (int i = 1; i <= height; i++)
    {
        for (int k = 1; k <= height - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}