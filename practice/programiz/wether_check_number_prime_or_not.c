#include <stdio.h>
/***
 * @brief this function check wether a number is prime or not
 * @param number : number parameter isliye diya kiyu hame ek number ko check karana hai prime hai ki nahi
 * @return void: mujhe function mai operation  perform karana hai
 */

void prime_number(int number)
{
    if (number <= 1)
    {
        printf("invalid\n");
        return;
    }
    if (number == 2 || number == 3)
    {
        printf("given number is a prime:%i\n", number);
        return;
    }
    if (number % 2 == 0 || number % 3 == 0)
    {
        printf("given number is a not prime:%i\n", number);
        return;
    }
    for (int i = 3; i * i <= number; i += 2)
    {
        if (number % i == 0 || number % (i + 2) == 0)
        {
            printf("number is a not prime:%i\n", number);
            return;
        }
    }

    printf("given number is a prime number:%i\n", number);
}

int main(void)
{
    int number;
    printf("enter a number to find prime or not:\n");
    scanf("%i", &number);
    prime_number(number);
}