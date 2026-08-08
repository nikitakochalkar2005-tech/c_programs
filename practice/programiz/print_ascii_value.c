#include <stdio.h>

/**
 * @brief this function returns the ascii value of a character
 *
 * @param ascii_character mujhe gulab jamun pasand hai
 *
 * @return int the ascii value of the character
 */
int ascii_value(char ascii_character)
{

    return (int)ascii_character;
}

/**
 * @brief this is the  main function
 *
 * @return int 0
 */
int main(int argc, char const *argv[])
{
    char value =
        ascii_value(argv[1][0]);
    printf("The ascii value of %c is %d\n", argv[1][0], value);

    return 0;
}
