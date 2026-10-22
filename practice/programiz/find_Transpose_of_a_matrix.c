#include <stdio.h>
/**
 * @brief this function display matrix element
 * @param matrix: matrix parameter isliye liya kiyu kis matrix ke element print karana hai
 * @return void: kuch return nahi karana hai
 */

void display_matrix_element(int matrix[][3])
{
    for (int row_index = 0; row_index < 3; row_index++)
    {
        for (int column_index = 0; column_index < 3; column_index++)
        {
            printf("%i\t", matrix[row_index][column_index]);
        }
        printf("\n");
    }
}

/**
 * @brief this function matrix is a covert into transpose matrix
 * @param matrix: kis matrix ko transpose karana hai
 * @return void: kuch return nahi karana hai
 */

void transpose_matrix(int matrix[][3])
{
    for (int row_index = 0; row_index < 3; row_index++)
    {
        for (int column_index = 0; column_index < 3; column_index++)
        {
            printf("%i\t", matrix[column_index][row_index]);
        }
        printf("\n");
    }
}

int main(void)
{
    int array[][3] = {{1, 2, 3}, {2, 4, 5}, {2, 4, 6}};
    printf("Before transpose matrix:\n");
    display_matrix_element(array);
    printf("After transpose matrix:\n");
    transpose_matrix(array);

    return 0;
}
