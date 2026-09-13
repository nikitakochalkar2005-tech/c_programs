#include <stdio.h>
/**
 *@brief this function count  number of digit an integer
 *@param number : isliye ye parameter kis number ka digit an integer chahiye
 *@return int: mujhe count return karana hai
 *
 *
 *
 */

int count_number_of_digit_an_integer(int number)
{
    int count = 0;
    if (number == 0)
    {
        return 1;
    }
    if (number < 0)
    {
        number = -number;
        }
    while (number != 0)
    {
        number = number / 10;
        count++;
    }
    return count;
}

int main(void)
{
    int number;
    printf("enter a number:\n");
    scanf("%i", &number);
    int result = count_number_of_digit_an_integer(number);

    printf("number of digit count is = %i", result);
    return 0;
}
