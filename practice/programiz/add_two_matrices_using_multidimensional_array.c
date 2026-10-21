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
    int first_array_row, first_array_column;
    int second_array_row, second_array_column;

    printf("enter a first array row size:");
    scanf("%i", &first_array_row);
    printf("enter a first array column size:");
    scanf("%i", &first_array_column);
    printf("enter a size row of a second array:");
    scanf("%i", &second_array_row);
    printf("enter a size column of a second array:");
    scanf("%i", &second_array_column);
    int first_Array[first_array_row][first_array_column], second_array[second_array_row][second_array_column];
    for (int index_row = 0; index_row < first_array_row; index_row++)
    {
        for (int index_column = 0; index_column < first_array_column; index_column++)
        {
            printf("enter a value of first array[%i][%i]:", index_row, index_column);
            scanf("%i", &first_Array[index_row][index_column]);
        }
    }
    for (int index_row = 0; index_row < second_array_row; index_row++)
    {
        for (int index_column = 0; index_column < second_array_column; index_column++)
        {
            printf("enter a value of second array[%i][%i]:", index_row, index_column);
            scanf("%i", &second_array[index_row][index_column]);
        }
    }

    add_two_matrices(first_Array, second_array);
    return 0;
}
