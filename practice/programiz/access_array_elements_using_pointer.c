#include <stdio.h>

/**
 * @brief this function  access array elements using pointer
 *@param array: kis array ko access karana hai
 *@param array_row_size: array ki row size
 *@param array_column_size: array ki column size
 *@return void: rahega
 */
void access_array_elements_using_pointer(int array_row_size, int array_column_size, int array[][array_column_size])
{
    for (int row_index = 0; row_index < array_row_size; row_index++)
    {
        for (int column_index = 0; column_index < array_column_size; column_index++)
        {
            int array_element = array[row_index][column_index];
            int *array_element_address = &array_element;

            printf("%d\t", *array_element_address);
        }
        printf("\n");
    }
}

int main(void)
{
    int array_column_size;
    int array_row_size;
    printf("enter a array row size\n:");
    scanf("%d", &array_row_size);
    printf("enter a array column size\n");
    scanf("%d", &array_column_size);
    int array[array_row_size][array_column_size];
    for (int row_index = 0; row_index < array_row_size; row_index++)
    {
        for (int column_index = 0; column_index < array_column_size; column_index++)
        {
            printf("enter a array element at index [%d][%d]: ", row_index, column_index);
            scanf("%d", &array[row_index][column_index]);
        }
    }

    // int array[3][3] = {{1, 2, 3}, {3, 4, 5}, {3, 2, 3}};
    access_array_elements_using_pointer(array_row_size, array_column_size, array);
    return 0;
}