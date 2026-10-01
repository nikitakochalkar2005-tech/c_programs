#include <stdio.h>

/**
 * @brief this function converts binary number to decimal and vice versa
 * @param binary_number the binary number to be converted
 * @param decimal_number the decimal number to be converted
 * @return 0 if successful, -1 if failed
 * @note This function assumes the input is valid
 */

int convert_binary_to_decimal(int binary)
{
    int decimal = 0;
    int weight = 1;
    int remainder;
    while (binary > 0)
    {
        remainder = binary % 10;
        decimal = decimal + (remainder * weight);
        weight = weight * 2;
        binary = binary / 10;
    }
    return decimal;
}

int main(void)
{
    int binary;
    printf("enter the  binary digit 0 and 1 to find decimal digit:\n");
    scanf("%i", &binary);
    int decimal_digit = convert_binary_to_decimal(binary);
    printf("binary digit %i convert into the decimal digit %i", binary, decimal_digit);

    return 0;
}
