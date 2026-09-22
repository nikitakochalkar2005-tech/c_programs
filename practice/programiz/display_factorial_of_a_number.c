#include <stdio.h>
/**
 * @brief this function display factorial of a number
 * @param number: kis number ka factorial chahiye
 * @return void: mujhe function ke andar operation karana hai
 */

void display_factorial_of_a_number(int number)
{
    int factorial;
    for (int divisor = 1; divisor <= number; divisor++)
    {
        factorial = number % divisor;
        if (factorial == 0)
        {
            printf("%i factorial is = %i\n", number, divisor);
        }
    }
}

int main(void)
{
    int number;
    printf("enter a number to find factorials:\n");
    scanf("%i", &number);
    display_factorial_of_a_number(number);
    return 0;
}
