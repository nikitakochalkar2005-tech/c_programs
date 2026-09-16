#include <stdio.h>
/**
 *@brief this function reverse a number
 *@param kis number ko reverse karana hai
 *@return int: mujhe reverse number return karana hai isliye function ko return type int diya hai
 */

int reverse_number(int number)
{
    int digit;
    int reverse = 0;
    while (number > 0)
    {
        digit = number % 10;
        reverse = (reverse * 10) + digit;
        number = number / 10;
    }
    return reverse;
}

int main(void)
{
    int number;
    printf("enter a number to reverse that number: ");
    scanf("%i", &number);
    int result = reverse_number(number);
    printf("%i", result);
    return 0;
}
