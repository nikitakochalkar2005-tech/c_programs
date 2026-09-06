#include <stdio.h>
/**
 * @brief This function checks if a given number is positive, negative, or zero.
 * @param number  parameter ka isliye likha hai kiyu hame ye dikhna number positive hai ya negative
 * @return int
 */

int number_positive_negative(int number)
{
    if (number < 0)
    {
        printf("number is negative\n");
    }
    else if (number == 0)
    {
        printf("number is zero\n");
    }
    else
    {
        printf("number is positive");
    }
    return 0;
}

int main(void)
{
    int number;
    printf("enter a number:\n");
    scanf("%i", &number);
    number_positive_negative(number);
    return 0;
}
