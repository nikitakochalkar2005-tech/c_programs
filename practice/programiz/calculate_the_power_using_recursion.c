#include <stdio.h>

/**
 * @brief this function calculates the power of a number using recursion
 * @param base the base number
 * @param exponent the exponent
 * @return the result of base raised to the power of exponent
 */

int power_of_a_number(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }

    return base * power_of_a_number(base, exponent - 1);
}

int main(void)
{
    int exponent;
    int base;
    printf("enter a base:\n");
    scanf("%i", &base);
    printf("enter a exponent:\n");
    scanf("%i", &exponent);
    int power = power_of_a_number(base, exponent);
    printf("power of a number is:%i", power);
    return 0;
}