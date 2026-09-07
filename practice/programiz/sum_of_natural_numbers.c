#include <stdio.h>
/**
 * @brief this function calculates the sum of first n natural numbers
 * @return int sum of natural number
 * @param first_number kis number ko add karana hai
 * @param second_number kis number ko add karana hai
 * @param stop_number kaha tak hame sum add karani hai
 */
int sum_natural_numbers(int number, int stop_number)
{
    int sum = 0;
    for (number = 1; number <= stop_number; number++)
    {
        sum = sum + number;
    }
    return sum;
}

int main(void)
{
    int number;
    int stop_number;
    printf("enter a first number for starting the sum:\n ");
    scanf("%i", &number);
    printf("enter a last number for stopping the sum:\n ");
    scanf("%i", &stop_number);

    // int sum = sum_natural_numbers(number, stop_number);
    printf("%i", sum_natural_numbers(number, stop_number));
    return 0;
}
