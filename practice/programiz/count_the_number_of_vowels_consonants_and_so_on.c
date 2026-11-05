#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * @brief this function count of number vowels consonants and space
 * @param string: is string kitane vowel aur consonant aur digit hai
 *
 */

void count_consonant_vowel_and_number(char *string)
{
    auto vowel = 0;
    auto digit = 0;
    auto consonants = 0;
    auto space = 0;
    for (int index = 0; string[index] != '\0'; index++)
    {

        if (isalpha(string[index]))
        {
            char lower_character = (char)tolower((unsigned char)string[index]);
            if (lower_character == 'a' || lower_character == 'o' || lower_character == 'e' || lower_character == 'u' || lower_character == 'i')
            {
                vowel++;
            }
            else
            {
                consonants++;
            }
        }
        if (isdigit(string[index]))
        {
            digit++;
        }
        if (isspace(string[index]))
        {
            space++;
        }
    }
    printf("Total vowels in \"%s\" = %d\n", string, vowel);
    printf("Total consonants in \"%s\" = %d\n", string, consonants);
    printf("Total digits in \"%s\" = %d\n", string, digit);
    printf("Total space in \"%s\" = %d\n", string, space);
}

int main(void)
{

    char *string = "niki123ta";
    count_consonant_vowel_and_number(string);
    return 0;
}
