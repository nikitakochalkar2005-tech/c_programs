#include <stdio.h>
#include <stdbool.h>
#include <string.h>
/**
 ***
 * @brief This function searches for a pattern in the given text using
 * the naïve pattern matching algorithm.
 *
 * @param text The text in which the pattern is searched.
 * @param pattern The pattern to be searched in the text.
 *
 * @return Returns the first position of the pattern if found;
 * otherwise, returns -1.
 */

int pattern_matching(char *text, char *pattern)
{
    int text_length = strlen(text);
    int pattern_length = strlen(pattern);
    int max_length = text_length - pattern_length;
    int comparison = 0;
    for (int shift_index = 0; shift_index <= max_length; shift_index++)
    {
        bool match_found = true;
        for (int char_index = 0; char_index < pattern_length; char_index++)
        {
            comparison++;
            if (pattern[char_index] != text[char_index + shift_index])
            {
                bool match_found = false;
            }
        }
        if (match_found)
        {
            printf("total character comparison %i\n", comparison);
            return shift_index + 1;
        }
    }
    return -1;
}

int main(void)
{
    char *text = "1101011";
    char *first_pattern = "101";
    int result = pattern_matching(text, first_pattern);
    if (result == -1)
    {
        printf("match is not found\n");
    }
    else
    {
        printf("match is found %i\n", result);
    }
    return 0;
}
