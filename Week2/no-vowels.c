// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string word);

int main(int argc, string argv[])
{
    if (argc < 2)
    {
        printf("Please provide a word!");
        return 1;
    }
    string replaced = replace(argv[1]);

    printf("%s\n", replaced);

    return 0;
}


string replace(string vowel)
{

    for (int i = 0; i < strlen(vowel); i++)
    {
        switch (vowel[i])
        {

            case 'a':
                vowel[i] = 54;
                break;

            case 'e':
                vowel[i] = 51;
                break;

            case 'i':
                vowel[i] = 49;
                break;

            case 'o':
                vowel[i] = 48;
                break;

            default:
                vowel[i] = vowel[i];
        }
    }

    return vowel;
}