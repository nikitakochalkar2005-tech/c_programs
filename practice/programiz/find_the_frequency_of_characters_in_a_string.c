#include <stdio.h>
/**
 * @brief this function find the frequency of character in a string
 * @param string: string is liye ki ismaise frequency calculate karana hai
 * @return void: kuch return nahi karana direct print karana hai
 */
void frequency_of_character_in_a_string(char *string)
{
    int frequency_array[256] = {0};
    for (int index = 0; string[index] != '\0'; index++)
    {
        unsigned char character = (unsigned char)string[index];
        frequency_array[character]++;
    }

    printf("\n-------- frequency character --------\n");
    for (int ascii_value = 0; ascii_value < 256; ascii_value++)
    {
        if (frequency_array[ascii_value] > 0 && ascii_value != '\n')
        {
            printf("Character '%c' : %d time(s)\n", ascii_value, frequency_array[ascii_value]);
        }
    }
}

int main(void)
{
    char string[256];
    printf("enter a string to find the frequency of character: ");
    scanf("%255s", string);
    frequency_of_character_in_a_string(string);
    return 0;
}
