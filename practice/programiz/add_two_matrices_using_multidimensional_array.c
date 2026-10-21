#include <stdio.h>
/**
 * @brief this function add two matrix
 * @param first_array: first  array jise add karana hai
 * @param second_array: second array jise add karana hai
 * @return void
 */

void add_two_matrices(int first_array[][3], int second_array[][3])
{
    int sum;
    for (int index_row = 0; index_row < 3; index_row++)
    {
        for (int index_column = 0; index_column < 3; index_column++)
        {
            sum = first_array[index_row][index_column] + second_array[index_row][index_column];
            printf("%i\t", sum);
        }
        printf("\n");
    }
}

int main(void)
{  
    int first_Array[3][3] = {{1, 2, 3}, {2, 3, 4}, {1, 2, 4}};
    int second_array[3][3] = {{2, 3, 4}, {2, 4, 5}, {2, 3, 4}};
    add_two_matrices(first_Array, second_array);
    return 0;
}
