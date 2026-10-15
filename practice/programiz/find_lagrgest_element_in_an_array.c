#include <stdio.h>
/**
 * @brief this function display largest element in an array
 * @param array: kis array mai se largest element chahiye
 * @param array_size: array ki kya size hogi
 * @return largest element in an array
 */

int largest_element_in_an_array(int array[], int array_size)
{
    int max = array[0];
    for (int index = 1; index < array_size; index++)
    {
        if (array[index] > max)
        {
            max = array[index];
        }
    }
    printf("largest element among a array is:%i", max);
    return max;
}

int main(void)
{
    int array_size;
    printf("enter a array size:\n");
    scanf("%i", &array_size);

    int array[array_size];
    for (int index = 0; index < array_size; index++)
    {
        printf("enter a array element at index:%i\n", index);
        scanf("%i", &array[index]);
        printf("element at index: %i is %i\n", index, array[index]);
    }
    largest_element_in_an_array(array, array_size);
    return 0;
}
