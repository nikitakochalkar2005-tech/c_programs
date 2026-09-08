#include <stdio.h>
/**
 * @brief this function generate the multiplication table
 * @param number the number for which to generate the multiplication table
 * @return void function par operation karana hai
 */
void multiplication_table(int number)
{

    for (int number_multiply = 1; number_multiply <= 10; number_multiply++)
    {

        int product = number * number_multiply;
        printf("%d * %d = %d\n", number, number_multiply, product);
    }
}

int main(void)
{
    int number;
    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &number);
    multiplication_table(number);
    return 0;
}
