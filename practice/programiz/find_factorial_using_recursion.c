#include <stdio.h>
/**
 * @brief this function display a factorial of a number
 * @param number: mujhe factorial cahiye number ke isliye ye factorial parameter liya
 * @return int: mujhe factorial return karana hai
 */
int factorial_of_a_number(int number)
{
    if (number == 1)
    {
        return 1;
    }
    number = number * factorial_of_a_number(number - 1);
    return number;
}

int main(void)
{
    int number;
    printf("enter a number to find a factorial:\n");
    scanf("%d", &number);
    int result = factorial_of_a_number(number);
    printf("factorial of a number is:%d", result);

    return 0;
}
