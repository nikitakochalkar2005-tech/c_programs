#include <stdio.h>
/**
 *@brief this function display greatest common divisor
 *@param first_number:first_number parameter isliye liya kiyu common divisor nikala hai two number ka ye first number hai
 *@param second_number:second_number parameter isliye liya kiyu common divisor nikala hai two number ka ye second_number hai
 *@return int: greatest common divisor return karana hai
 */

int greatest_common_divisor(int first_number, int second_number)
{

    if (second_number == 0)
    {
        return first_number;
    }
    return greatest_common_divisor(second_number, first_number % second_number);
}

int main(void)
{
    int first_number;
    int second_number;
    printf("enter a first number to find a greatest common divisor:\n");
    scanf("%i", &first_number);
    printf("enter a second number to find a greatest common divisor:\n");
    scanf("%i", &second_number);
    int result = greatest_common_divisor(first_number, second_number);
    printf("greatest common divisor is:%i", result);
    return 0;
}
