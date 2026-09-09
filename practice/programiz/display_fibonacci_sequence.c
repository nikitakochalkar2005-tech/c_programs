#include <stdio.h>
/**
 * @brief this function display the sequence of fibonacci
 * @param number the number of fibonacci sequence to be displayed
 * @return the fibonacci sequence of the given number
 */
int fibonacci_sequence(int number)
{

    if (number < 0)
    {
        return -1;
    }
    else if (number == 0)
    {
        return 0;
    }
    else if (number == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci_sequence(number - 1) + fibonacci_sequence(number - 2);
    }
}
int main(void)
{
    int number;
    printf("enter a number to display fibonacci sequence: ");
    scanf("%i", &number);
    for (int i = 0; i <= number; i++)
    {
        int sequence = fibonacci_sequence(i);

        printf("%i\n", sequence);
    }
}