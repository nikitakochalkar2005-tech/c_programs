#include <stdio.h>
/**
 * @brief this function sort the array elements
 * @param array konte array elements ko sort karana hai
 * @param size size of the array
 */
int sort_array_elements(int array[], int size)
{
    for (int counter = 0; counter < (size); counter++)
    {
        for (int index = 0; index < (size - 1); index++)
        {
            if (array[index] > array[index + 1])
            {
                array[index] = array[index] + array[index + 1];
                array[index + 1] = array[index] - array[index + 1];
                array[index] = array[index] - array[index + 1];
            }
        }
    }
}

/**
 * @brief this function print the array elements on std screen
 * @param array konte array elements ko print karana hai
 * @param size array ki size kitani rahegi
 */
int print_array_elements(int array[], int size)
{
    for (int index = 0; index < (size); index++)
    {
        printf("%i\n", array[index]);
    }
}

/**
 * @brief this  function search element from the sort array
 * @param array konte array mai se element search karana hai
 * @param size array ki size kitani hai
 * @param key konte element ko search karana hai
 * @return int
 */
int binary_search(int array[], int size, int key)
{
    int base_index = 0;
    int higher_index = size - 1;
    while (base_index <= higher_index)
    {
        int middle_index = (base_index + higher_index) / 2;
        int middle_key = array[middle_index];

        if (middle_key == key)
        {
            printf("%i\n", middle_index);
            return middle_index;
        }
        else if (key < middle_key)
        {

            higher_index = middle_index - 1;
        }
        else
        {
            base_index = middle_index + 1;
        }
    }
    return -1;
}

int main(void)
{
    int size = 6;
    int array[] = {43, 100, 89, 56, 34, 70};
    int choice;
    printf("enter 1 to print the array element:\n");
    printf("enter 2 sort array elements:\n");
    printf("enter 3 for binary search element:\n");
    printf("enter a choice:\n");
    scanf("%i", &choice);
    switch (choice)
    {
    case 1:
        print_array_elements(array, size);
        break;
    case 2:
        sort_array_elements(array, size);
        print_array_elements(array, size);
        break;
    case 3:
        int key_element;
        printf("please choice the key from a array to find:\n");
        sort_array_elements(array, size);
        print_array_elements(array, size);
        printf("enter a element:");
        scanf("%i", &key_element);
        printf("element find at a index:");
        binary_search(array, size, key_element);
        break;
    default:
        break;
    }
    return 0;
}
