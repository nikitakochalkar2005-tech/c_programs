#include <stdio.h>
/**
 * @brief this function display the all elements in 2D array
 * @param array kis array ko print karana hai
 * @param row_size row ki size kitani hogi
 * @param column_Size column ki size kitani hogi
 */

void print_array_elements(int column_size, int row_size, int array[row_size][column_size])
{
    for (int row_index = 0; row_index < row_size; row_index++)
    {
        for (int column_index = 0; column_index < column_size; column_index++)
        {
            printf("%i  ", array[row_index][column_index]);
        }
        printf("\n");
    }
}
/**
 * @brief this function traversal the array elements zig-zig pattern
 * @param array konte array traversal karana isliye ye parameter define kiya
 * @param row_size array row ki size kitani hogi
 * @param column_size array column ki size kitani hogi
 */
void traversal_array_elements(int row_size, int column_size, int array[row_size][column_size])
{
    for (int pass = 0; pass < row_size * column_size - 1; pass++)
    {
        for (int row_index = 0; row_index < row_size; row_index++)
        {
            for (int column_index = 0; column_index < column_size - 1; column_index++)
            {

                if (array[row_index][column_index] > array[row_index][column_index + 1])
                {
                    array[row_index][column_index] = array[row_index][column_index] + array[row_index][column_index + 1];
                    array[row_index][column_index + 1] = array[row_index][column_index] - array[row_index][column_index + 1];
                    array[row_index][column_index] = array[row_index][column_index] - array[row_index][column_index + 1];
                }
            }
            if (row_index < row_size - 1 && array[row_index][column_size - 1] > array[row_index + 1][0])
            {
                array[row_index][column_size - 1] = array[row_index][column_size - 1] + array[row_index + 1][0];
                array[row_index + 1][0] = array[row_index][column_size - 1] - array[row_index + 1][0];
                array[row_index][column_size - 1] = array[row_index][column_size - 1] - array[row_index + 1][0];
            }
        }
    }
}
/**
 * @brief this function searching the element form 2D array
 * @param array konte array mai se search karana hai element
 * @param row_size array ki row ki size kya hogi
 * @param column_size array ki column ki size kya hogi
 * @param key array mai se konte element search karana hai
 */
void search_array_element(int row_size, int column_size, int array[row_size][column_size], int key)
{
    for (int row_index = 0; row_index < row_size; row_index++)
    {
        for (int column_index = 0; column_index < column_size; column_index++)
        {
            if (array[row_index][column_index] == key)
            {
                printf("\n");
                printf("Key %i found at Row: %i, Column: %i\n", key, row_index, column_index);
            }
        }
    }
}
/**
 * @brief this function sort the array elements
 * @param array konte array mai se sort karana hai element
 * @param row_size array ki row ki size kya hogi
 * @param column_size array ki column ki size kya hogi
 * @return void mujhe function ke andar operation karana hai return kuch bhi nahi karana hai
 */
void sort_array_elements(int row_size, int column_size, int array[row_size][column_size])
{
    for (int row_index = 0; row_index < row_size; row_index++)
    {
        for (int pass = 0; pass < column_size - 1; pass++)
        {
            {
                for (int column_index = 0; column_index < column_size - 1 - pass; column_index++)
                {
                    if (array[row_index][column_index] > array[row_index][column_index + 1])
                    {
                        array[row_index][column_index] = array[row_index][column_index] + array[row_index][column_index + 1];
                        array[row_index][column_index + 1] = array[row_index][column_index] - array[row_index][column_index + 1];
                        array[row_index][column_index] = array[row_index][column_index] - array[row_index][column_index + 1];
                    }
                }
            }
        }
    }
}
int main(void)
{

    int array[3][3] = {{1, 10, 3}, {14, 5, 6}, {72, 8, 19}};
    print_array_elements(3, 3, array);
    traversal_array_elements(3, 3, array);
    search_array_element(3, 3, array, 19);
    sort_array_elements(3, 3, array);
    print_array_elements(3, 3, array);
    return 0;
}
