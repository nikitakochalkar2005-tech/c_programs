#include <stdio.h>

/**
 * @brief this function display a greatest common divisor
 * @param first_number kiyu likha kiyu hame two numbers common divisor nikalana hai us mai se ye first number hogaya
 * @param second_number kiyu likha kiyu hame two numbers common divisor nikalana hai us mai se ye second number hogaya
 * @return int kiyu mujhe greatest common divisor value return karani hai
 * @var gcd variable  means greatest common divisor
 */

int greatest_common_divisor(int first_number, int second_number)
{
    int gcd;
    for (int divisor = 1; divisor <= first_number && divisor <= second_number; divisor++)
    {
        if (first_number % divisor == 0 && second_number % divisor == 0)
        {
            printf("common divisor is :%i\n", divisor);
            gcd = divisor;
        }
    }
    return gcd;
}
/**
 *@brief this function display the lcm of two numbers
 *@param first_number kiyu ki hame number ka lcm likana hai  two numbers lcm ye first number hai
 *@param second_number kiyu ki hame number ka lcm nikala na hai two numbers lcm ye second number hai
 *@return int mujhe lcm ki value return karani hai isliye maine int likha hai
 */

int lcm_of_two_numbers(int first_number, int second_number)
{
    int gcd = greatest_common_divisor(first_number, second_number);
    int least_common_multiple = (first_number * second_number) / gcd;
    return least_common_multiple;
}

int main(void)
{
    printf("enter a first number two find LCM\n");
    printf("enter a second number two find LCM\n");
    int first_number, second_number;
    scanf("%i", &first_number);
    scanf("%i", &second_number);
    int lcm = lcm_of_two_numbers(first_number, second_number);
    printf("LCM of %i and %i is %i\n", first_number, second_number, lcm);

    return 0;
}
