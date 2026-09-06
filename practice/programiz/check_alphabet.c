#include <stdio.h>
#include <ctype.h>
/**
 * @brief this function check wether the given character is alphabet or not
 * @param character parameter isliye likha ki hame dekhana hai character alphabet hai
 */
int check_alphabet(char character)
{
    if (isalpha(character))
    {
        printf("%c is an alphabet", character);
    }
    else
    {
        printf("%c is not an alphabet", character);
    }
    return 0;
}

int main(void)
{
    char character;
    printf("enter a character:\n");
    scanf("%c", &character);
    check_alphabet(character);
}
