#include <stdio.h>
/**
 * @brief this function check wether number is palindrome or not
 */

void number_palindrome(int number)
{
    int original_number = number;
    int digit;
    int reverse = 0;
    while (number != 0)
    {
        digit = number % 10;
        reverse = (reverse * 10) + digit;
        number = number / 10;
    }
    if (original_number == reverse)
    {
        printf("number is a palindrome");
    }
    else
    {
        printf("number is not a palindrome");
    }
}

int main(void)
{
    int number;
    printf("enter a number\n");
    scanf("%i", &number);
    number_palindrome(number);
    return 0;
}
