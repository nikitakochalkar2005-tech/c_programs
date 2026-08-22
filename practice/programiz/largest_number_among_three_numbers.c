#include <stdio.h>
/**
 * @brief This program tells which number is the largest among three numbers
 * @brief mujhe numbers user se lene hai .
 */

int main(void)
{
    int first_number, second_number, third_number;
    printf("enter a first number:");
    scanf("%i", &first_number);
    printf("enter a second number:");
    scanf("%i", &second_number);
    printf("enter a third number:");
    scanf("%i", &third_number);
    if (first_number >= second_number && first_number >= third_number)
    {
        printf("first number %i is greater, than  second number %i and third number %i:", first_number, second_number, third_number);
    }
    else if (second_number >= first_number && second_number >= third_number)
    {
        printf("second number %i is greater, than first number %i and third number %i:", second_number, first_number, third_number);
    }
    else if (third_number >= first_number && third_number >= second_number)
    {
        printf("third number %i is greater, than first number %i and second number %i:", third_number, first_number, second_number);
    }

    return 0;
}
