#include <stdlib.h>
#include <stdio.h>
/**
 * @brief this function find a largest number
 * @param *array: jis array mai se largest number find karana hai
 * @param total_number_of_elements_store_in_array: kitane numbers store karana hai array mai
 * @return int: largest number return karana hai
 */

int find_largest_number(int *array, int total_numbers_of_elements_store_in_array)
{
    int largest = array[0];
    for (int index = 1; index < total_numbers_of_elements_store_in_array; index++)
    {
        if (*(array + index) > largest)
        {
            largest = array[index];
        }
    }
    return largest;
}
/**
 * @brief this function allocate memory
 * @param total_number_of_elements_store_in_array: kitane element store karane hai array mai
 *@return *int: memory allocation ka address return karana hai
 */
int *memory_allocation(int total_numbers_of_elements_store_in_array)
{
    int *allocate_memory = malloc(total_numbers_of_elements_store_in_array * sizeof(int));
    if (allocate_memory == NULL)
    {
        printf("memory allocation is failed for %d element\n", total_numbers_of_elements_store_in_array);
        return NULL;
    }
    return allocate_memory;
}

int main(void)
{
    int total_number_of_elements_store_in_array;
    printf("enter a total numbers of elements store in array: ");
    scanf("%d", &total_number_of_elements_store_in_array);

    if (total_number_of_elements_store_in_array <= 0)
    {
        printf("invalid size");
        return 1;
    }

    int *array = memory_allocation(total_number_of_elements_store_in_array);
    if (array == NULL)
    {
        return 1;
    }
    for (int index = 0; index < total_number_of_elements_store_in_array; index++)
    {
        printf("enter a array element[%d]:", index);
        scanf("%d", array + index);
    }
    int max_number = find_largest_number(array, total_number_of_elements_store_in_array);
    printf("max number is = %d", max_number);
    free(array);
    array = NULL;

    return 0;
}
