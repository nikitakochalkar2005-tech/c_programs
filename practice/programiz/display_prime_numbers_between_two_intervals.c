#include <stdio.h>
/**
 * @brief this function display between two intervals
 * @param start_number: the starting number of the interval
 * @param end_number: the ending number of the interval
 * @return int: the function returns 0 if successful, -1 if an error occurs
 */

int display_prime_number_between_two_intervals(int start_number, int end_number)
{
    for (int number = start_number; number <= end_number; number++)
    {
        int is_prime = 1;

        if (number < 2)
        {
            is_prime = 0;
        }
        else if (number != 2 && number != 3 && (number % 2 == 0 || number % 3 == 0))
        {
            is_prime = 0;
        }

        for (int i = 5; i * i <= number; i = i + 6)
        {
            if (number % i == 0 || number % (i + 2) == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if (is_prime)
        {
            printf("it a prime number:%i\n", number);
        }
    }

    return 0;
}

int main(void)
{
    int start_number, end_number;
    printf("Enter the starting number of the interval: ");
    scanf("%d", &start_number);
    printf("Enter the ending number of the interval: ");
    scanf("%d", &end_number);
    display_prime_number_between_two_intervals(start_number, end_number);
    return 0;
}
