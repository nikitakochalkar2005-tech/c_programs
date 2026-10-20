#include <stdio.h>
/*
 * @brief Print a matrix using a multidimensional array
 * @param array:  first matrix jise multiply karana hai
 * @param second_array: second matrix jise multiply karana hai
 * @return void: return nahi karana hai
 */
void multiplay_matrix_using_multiply_dimensional_array(int array[][5], int second_array[][5])
{
    int multiply[5][5] = {0};
    for (int index_row = 0; index_row < 5; index_row++)
    {
        for (int index_column = 0; index_column < 5; index_column++)
        {
            for (int counter = 0; counter < 5; counter++)
            {

                multiply[index_row][index_column] += array[index_row][counter] * second_array[counter][index_column];
            }
            printf("%i\t", multiply[index_row][index_column]);
        }
        printf("\n");
    }
}

int main(void)
{
    int second_array[5][5] = {{1, 3, 4, 2, 1}, {2, 3, 4, 1, 2}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};
    int array[5][5] = {{12, 67, 2, 4, 67}, {1, 34, 5, 6, 7}, {23, 6, 7, 8, 4}, {12, 35, 67, 43, 45}, {23, 67, 23, 34, 3}};
    multiplay_matrix_using_multiply_dimensional_array(array, second_array);

    return 0;
}