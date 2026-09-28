#include <stdio.h>
/**
 * @brief this function display of a sum of natural numbers
 * @return sum: return sum of natural number
 * @param natural_number: first natural parameter isliye liya kiyu hame sum nikalana hai
 */

long sum_of_natural_numbers(long natural_number)
{
    if (natural_number <= 1)
    {
        return natural_number;
    }
    long sum = natural_number + sum_of_natural_numbers(natural_number - 1);
    return sum;
}

int main(void)
{
    long natural_number;
    printf("enter a natural number to find sum:\n");
    scanf("%ld", &natural_number);
    long int result = sum_of_natural_numbers(natural_number);
    printf("%ld\n", result);

    return 0;
}
