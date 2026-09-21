#include <stdio.h>
/***
 * @brief this function check number armstrong or not armstrong
 * @param number: number parameter isliye liya kiyu check karana hai number armstrong hai ya nahi
 * @return void: return void
 */

void armstrong_number(int number)
{
    int digit;
    int reverse = 0;
    int original_number = number;
    while (number != 0)
    {
        digit = number % 10;
        reverse = (reverse * 10) + digit;
        number = number / 10;
    }

    {
    }
    if (original_number == reverse)
    {
        printf("Armstrong number\n");
    }
    else
    {
        printf("Not an Armstrong number\n");
    }
}

int main(void)
{
    armstrong_number(153);
    return 0;
}
