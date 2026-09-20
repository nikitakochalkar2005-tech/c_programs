#include <stdio.h>

/***
 * @brief This program displays all prime numbers between two intervals using a function.
 * @param start_number: kahase intervals start karana hai prime number ka
 * @param end_number: kahatak intervals end karana hai prime number ka
 * @return void: kuch bhi return nahi karana hai
 */

void prime_number_between_two_intervals(int start_number, int end_number)
{
    for (int number = start_number; number <= end_number; number++)
    {
        int isprime = 1;
        if (number < 2)
        {
            isprime = 0;
        }
        if (number == 2 || number == 3)
        {
            isprime = 1;
        }
        if (number > 3 && (number % 2 == 0 || number % 3 == 0))
        {
            isprime = 0;
        }
        for (int i = 5; i * i <= number; i = i + 6)
        {
            if (number % i == 0 || number % (i + 2) == 0)
            {
                isprime = 0;
                // printf("it not a prime number:%i\n", number);
            }
        }
        if (isprime)
        {
            printf("it a prime number:%i\n", number);
        }
    }
}

int main(void)
{
    prime_number_between_two_intervals(2, 10);

    return 0;
}
