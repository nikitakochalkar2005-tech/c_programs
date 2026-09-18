#include <stdio.h>
/***
 * @brief this function display factors of a number
 * @param number : parameter number to find factors
 * @return
 */
void display_factors_of_number(int number)
{
    for (int divisor = 1; divisor <= number; divisor++)
    {
        if (number % divisor == 0)
        {
            printf("it a factor of number:%i\n", divisor);
        }
    }
}

int main(void)
{
    int number;
    printf("enter a number to find factors:");
    scanf("%d", &number);
    display_factors_of_number(number);

    return 0;
}
