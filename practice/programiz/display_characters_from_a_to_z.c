#include <stdio.h>
/**
 * @brief this function display the characters from a to z
 */
void character_display()
{
    for (int character = 'A'; character <= 'Z'; character++)
    {
        printf("%c ", character);
    }
}

int main(void)
{
    character_display();
    return 0;
}
