#include <stdio.h>

void display_array_element(int array_size, int array[])
{
    for (int index = 0; index < array_size; index++)
    {
        printf("%d\n", array[index]);
    }
}

void search_element_on_array(int array_size, int array[], int key_to_find)
{
    for (int index = 0; index < array_size; index++)
    {
        if (array[index] == key_to_find)
        {
            printf("element %d is an index %d:\n", key_to_find, index);
        }
    }
}
void copy_array_element(int array[], int new_array[], int array_size, int new_array_size)
{
    for (int index = 0; index < array_size; index++)
    {
        new_array[index] = array[index];
    }
}

int insert_element(int array_size, int array[], int position_to_insert_element, int key)
{
    if (position_to_insert_element < 0 || position_to_insert_element > array_size)
    {
        printf("position should be between 0 and array size\n");
        return 0;
    }

    for (int index = array_size; index > position_to_insert_element; index--)
    {
        array[index] = array[index - 1];
    }
    array[position_to_insert_element] = key;
    return 1;
}

int delete_element(int array_size, int array[], int delete_at_position)
{
    if (delete_at_position < 0 || delete_at_position >= array_size)
    {
        printf("position should be between 0 and array size - 1\n");
        return 0;
    }

    for (int index = delete_at_position; index < array_size - 1; index++)
    {
        array[index] = array[index + 1];
    }
    return 1;
}

void bubble_sort(int array_size, int array[])
{
    for (int counter = 0; counter < array_size; counter++)
    {
        for (int index = 0; index < (array_size - 1); index++)
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

int binary_search(int array_size, int array[], int key)
{
    bubble_sort(array_size, array);
    int lower_index = 0;
    int higher_index = array_size - 1;
    while (lower_index < higher_index)
    {
        int middle_index = (lower_index + higher_index) / 2;
        int middle_key = array[middle_index];
        if (key == middle_key)
        {
            printf("%d\n", middle_index);
            return middle_key;
        }
        else if (key < middle_key)
        {
            lower_index = middle_index - 1;
        }
        else
        {
            higher_index = middle_index + 1;
        }
    }
}

int main(void)
{
    int array_size = 4;
    int array[6] = {1, 3, 42, 4};

    display_array_element(array_size, array);
    search_element_on_array(array_size, array, 4);
    if (insert_element(array_size, array, 2, 89))
    {
        array_size++;
    }
    display_array_element(array_size, array);
    printf("-------------------------\n");
    if (delete_element(array_size, array, 2))
    {
        array_size--;
    }
    display_array_element(array_size, array);
    bubble_sort(array_size, array);
    printf("-----------------------\n");
    display_array_element(array_size, array);
    printf("*************\n");
    binary_search(array_size, array, 3);
    return 0;
}
