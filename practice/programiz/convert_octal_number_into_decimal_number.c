#include <stdio.h>

/**
 * @brief this function convert octal number into a decimal number
 * @param octal_number: parameter is liye liya kiyu mujhe octal number ko decimal convert karana hai
 * @return decimal_number: return mujhe decimal number karana hai
 */

int octal_number_convert_into_decimal_number(int octal_number)
{
    int weight = 1;
    int remainder;
    int decimal_number = 0;
    while (octal_number > 0)
    {
        remainder = octal_number % 10;
        decimal_number = decimal_number + (remainder * weight);
        weight = weight * 8;
        octal_number = octal_number / 10;
    }
    return decimal_number;
}

int main(void)
{
    int octal_number;
    printf("enter a octal number to convert into decimal number:\n");
    scanf("%i", &octal_number);
    int decimal_number = octal_number_convert_into_decimal_number(octal_number);
    printf("octal number %i is convert into a decimal number is:%i\n ", octal_number, decimal_number);
    return 0;
}