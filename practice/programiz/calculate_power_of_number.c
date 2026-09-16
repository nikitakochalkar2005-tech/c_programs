#include <stdio.h>
#include <math.h>
/**
 *@brief this function calculate  power of a number
 *@param number : kis number ka power calculate karana hai
 *@return int : mujhe return power kar hai
 */

double calculate_power_of_number(int base_number, int exponent_number)
{
    return pow(base_number, exponent_number);
}

int main(void)
{
    int base_number;
    int exponent_number;
    printf("enter  base number:\n");
    scanf("%i", &base_number);
    printf("enter  exponent number :\n");
    scanf("%i", &exponent_number);
    if (base_number == 0 && exponent_number < 0)
    {
        printf("0 cannot have a negative exponent.\n");
        return 1;
    }

    double result = calculate_power_of_number(base_number, exponent_number);
    printf("power of given number is: %f\n", result);
    return 0;
}
