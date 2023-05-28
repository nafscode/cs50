#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start_size = 0;
    int end_size = 0;

    while (start_size < 9)
    {
        printf("Enter the start size:");
        scanf("%d", &start_size);
    }
    while (end_size < start_size)
    {
        printf("Enter the end size:");
        scanf("%d", &end_size);
    }
    // TODO: Calculate number of years until we reach threshold
    int count = 0;
    while (start_size < end_size)
    {
        start_size = start_size + (int)(start_size/3.0) - (int)(start_size/4.0);
        count++;
    }

    // TODO: Print number of years
    printf("Years: %d", count);
    return 0;

}