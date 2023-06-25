#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");

    float letters = (float)count_letters(text);
    float words = (float)count_words(text);
    float sentences = (float)count_sentences(text);

    float L = ((letters/ words) * 100);
    float S = ((sentences / words) * 100);

    float subindex = 0.0588 * L - 0.296 * S - 15.8;
    int index = round(subindex);

    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
    return (0);
}

int count_letters(string text)
{
    int count = 0;

    int lenght = strlen(text);
    for (int i = 0; i < lenght; i++)
    {
        if (isalpha(text[i]))
        {
            count++;
        }
    }
    return (count);
}

int count_words(string text)
{
    int count = 1;

    int lenght = strlen(text);
    for (int i = 0; i < lenght; i++)
    {
        if (text[i] == ' ')
        {
            count++;
        }
    }
    return (count);
}

int count_sentences(string text)
{
    int count = 0;

    int lenght = strlen(text);
    for (int i = 0; i < lenght; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++;
        }
    }
    return (count);
}