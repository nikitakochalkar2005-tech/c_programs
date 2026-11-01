#include <stdio.h>
/**
 * @brief this function swap the number in cyclic oder
 *@param first_number: first number jise swap karana hai
 * @param second_number: second number jise swap karana hai
 * @param third_number: third number jise swap karana hai
 * @return void: kuch return nahi karana hai
 */

void swap_numbers_in_cyclic_oder(int *first_number, int *second_number, int *third_number)
{
    *first_number = *first_number + *second_number + *third_number;
    printf("second_number = %d\n", *second_number = *first_number - (*second_number + *third_number));
    printf("third_number = %d\n", *third_number = *first_number - (*second_number + *third_number));
    printf("first_number = %d\n", *first_number = *first_number - (*second_number + *third_number));
}

int main(void)
{
    int first_number;
    int second_number;
    int third_number;
    printf("enter a first number:\n");
    scanf("%d", &first_number);
    printf("enter a second number:\n");
    scanf("%d", &second_number);
    printf("enter a third number:\n");
    scanf("%d", &third_number);
    printf("****************************************\n");
    printf("before swapping numbers\n **************************************** :\nfirst_number = %d\nsecond_number = %d\nthird_number = %d\n", first_number, second_number, third_number);
    printf("****************************************\n");
    printf("after swapping\n");
    printf("****************************************\n");
    swap_numbers_in_cyclic_oder(&first_number, &second_number, &third_number);
    return 0;
}
