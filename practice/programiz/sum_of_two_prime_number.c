#include <stdio.h>
/**
 * @brief this function check wether number is prime or not
 * @param number: is number check karana hai
 * @return int : mujhe prime number return
 */

int is_prime_first_number(int first_number)
{
    int isprime = 1;
    int result = 0;
    if (first_number < 2)
    {
        isprime = 0;
    }

    if (first_number == 2 || first_number == 3)
    {
        isprime = 1;
    }
    if (first_number > 3 && (first_number % 2 == 0 || first_number % 3 == 0))
    {
        isprime = 0;
    }
    for (int i = 5; i * i <= first_number; i = i + 6)
    {
        if (first_number % i == 0 || first_number % (i + 2) == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime == 1)
    {
        result = first_number;
    }
    return result;
}
/**
 *@brief this function check wether a number is prime or not
 *@param number:parameter is liya kiyu hame check karana hai number prime hai ya nahi
 *@return int: return prime number karega
 */
/**
 * @brief this function check wether number is prime or not
 * @param number: is number check karana hai
 * @return int : mujhe prime number return
 */

int is_prime_second_number(int second_number)
{
    int isprime = 1;
    int result = 0;
    if (second_number < 2)
    {
        isprime = 0;
    }

    if (second_number == 2 || second_number == 3)
    {
        isprime = 1;
    }
    if (second_number > 3 && (second_number % 2 == 0 || second_number % 3 == 0))
    {
        isprime = 0;
    }
    for (int i = 5; i * i <= second_number; i = i + 6)
    {
        if (second_number % i == 0 || second_number % (i + 2) == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime == 1)
    {
        result = second_number;
    }
    return result;
}
int main(void)
{
    int first_number;
    int second_number;
    int sum;
    printf("enter a  first number:\n");
    scanf("%d", &first_number);
    printf("enter a second number:\n");
    scanf("%d", &second_number);
    int first_number_for_sum = is_prime_first_number(first_number);
    int second_number_for_sum = is_prime_second_number(second_number);
    if (first_number_for_sum == 0 || second_number_for_sum == 0)
    {
        printf("this numbers is not the prime number sum please enter both prime number:\n");
    }
    else
    {
        sum = first_number_for_sum + second_number_for_sum;
        printf("the prime numbers sum is:%d", sum);
    }

    return 0;
}
