#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;
    while (height < 1 || height > 8)
    {
        height = get_int("Height: ");
    }
    /* Outer loop for each row*/
    for (int i = 1; i <= height; i++)
    {
        /* Space before the left pyramid*/
        for (int j = 1; j <= height -i; j++)
        {
            printf(" ");
        }
        /* left pyramid*/
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        /* Middle space*/
        printf("  ");

        /* Right pyramid*/
        for (int p = 1; p <= i; p++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;

}