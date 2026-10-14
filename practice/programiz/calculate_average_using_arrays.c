#include <stdio.h>
/**
 *@brief this function display the average of numbers using array
 *@param array : kis array ka average nikalana hai
 *@param array_size : size of array
 *@return average of numbers
 */

int average_of_numbers(int array[], int array_size)
{
    int average = 0;
    int numbers_sum = 0;
    for (int index = 0; index < array_size; index++)
    {

        numbers_sum = numbers_sum + array[index];
    }
    average = numbers_sum / array_size;

    return average;
}

int main(void)
{
    printf("enter a array size:");
    int array_size;
    scanf("%d", &array_size);
    int array[array_size];
    for (int index = 0; index < array_size; index++)
    {
        printf("enter a array element:\n");

        scanf("%d", &array[index]);
        printf("element %i is: ", index + 1);
        printf("%i\n", array[index]);
    }
    int average = average_of_numbers(array, array_size);

    printf("average of a given arrays is:%d\n", average);
    return 0;
}
