#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/**
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
    int text_len = strlen(text);
    int pattern_len = strlen(pattern);
    int max_shift = text_len - pattern_len; // formula of max shift MAX = is S-R
    bool match_found;
    int comparisons = 0;
    for (int shift_index = 0; shift_index <= max_shift; shift_index++)
    {
        match_found = true;

        for (int char_index = 0; char_index < pattern_len; char_index++)
        {
            comparisons++;
            if (pattern[char_index] != text[char_index + shift_index])
            {
                match_found = false;
                break;
            }
        }

        if (match_found)
        {
            printf("total character comparisons %i\n", comparisons);
            return shift_index + 1;
        }
    }

    return -1;
}

int main(void)
{
    char *text = "THECATISBLACK";
    char *first_pattern = "CAT";
    int result = pattern_matching(text, first_pattern);
    if (result == -1)
    {
        printf("match not found\n");
    }
    else
    {
        printf("match is found");
    }
    return 0;
}
