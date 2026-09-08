#include <stdio.h>
/**
 * @brief this function calculates a factorial of a number
 * @param number konte number ka factorial chahiye
 * @return number number ka pura factorial nikal kar return karega factorial_number() function
 */
int factorial_number(int number)
{

    if (number < 0) // gar user negative  number dalata hai to -1 return karo
    {
        printf("negative number factorial does not exist:");
        return -1;
    }
    else if (number == 0 || number == 1) // jab ham bar function ko call kar rahe hai ek se decrease to least mai 1! ya 0! aaya to return 1 karana
    {
        return 1;
    }

    else
    {
        number = number * factorial_number(number - 1);
    }
    return number;
}

int main(void)
{
    int number;
    printf("enter a number to find a factorial:\n");
    scanf("%i", &number);
    int return_factorial_value = factorial_number(5);
    printf("%i factorial is:%i\n", number, return_factorial_value);
    return 0;
}
