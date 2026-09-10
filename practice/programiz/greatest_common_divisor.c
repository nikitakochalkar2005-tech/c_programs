#include <stdio.h>
/**
 *@brief this function display a greatest common divisor
 *@param first_number  ke divisor nikalane hai
 *@param second_number ke divisor nikalane hai
 *@return void mujhe function mai kuch ouput nahi chahiye kiyu mujhe function ke andar operation  karana hai
 */
void greatest_common_divisor(int first_number, int second_number)
{
    int greatest_common_divisor = 1;
    // printf("divisor of first number is:%i\n", first_number);
    for (int divisor = 1; divisor <= first_number && divisor <= second_number; divisor++)
    {
        if (first_number % divisor == 0 && second_number % divisor == 0)
        {
            printf("found common divisor is:%i\n", divisor);
            greatest_common_divisor = divisor;
        }
    }

    printf("greatest common divisor is:%i\n", greatest_common_divisor);
}
int main(void)
{
    int first_number;
    int second_number;
    printf("enter a first number to find a greatest common divisor:\n");
    scanf("%i", &first_number);
    printf("enter a second number to find a greatest common divisor:\n");
    scanf("%i", &second_number);
    greatest_common_divisor(12, 18);
    return 0;
}
