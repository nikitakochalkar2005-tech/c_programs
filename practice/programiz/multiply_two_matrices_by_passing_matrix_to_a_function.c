#include <stdio.h>

/**
 * @brief this function display a matrix
 *@param array: is array ko display karana hai
 *@param array_size: array_size kitani hogi
 *@return void:
 */

void display_first_array(int row_size, int column_size, int array[][column_size])
{
    for (int row_index = 0; row_index < row_size; row_index++)
    {
        for (int column_index = 0; column_index < column_size; column_index++)
        {
            printf("%d\t", array[row_index][column_index]);
        }
        printf("\n");
    }
}
/**
 * @brief this function display second array
 * @param array: kis array ko print karana hai
 * @param row_size: array ki row ki kya size rahegi
 * @param column_size: array ki column ki size kya hogi
 * @return void
 */
void display_second_array(int row_size, int column_size, int array[][column_size])
{
    for (int row_index = 0; row_index < row_size; row_index++)
    {
        for (int column_index = 0; column_index < column_size; column_index++)
        {
            printf("%d\t", array[row_index][column_index]);
        }
        printf("\n");
    }
}
/**
 * @brief this function multiply tow matrix
 * @param first_matrix: first_matrix jis se multiply karana hai
 * @param second_matrix: second_matrix jis se multiply karana hai
 * @return void:
 */
void multiply_two_matrix(
    int first_matrix_row_size,
    int first_matrix_column_size,
    int second_matrix_column_size,
    int first_matrix[][first_matrix_column_size],
    int second_matrix[][second_matrix_column_size],
    int result[][second_matrix_column_size])
{
    for (int row_index = 0; row_index < first_matrix_row_size; row_index++)
    {

        for (int column_index = 0; column_index < second_matrix_column_size; column_index++)
        {
            result[row_index][column_index] = 0;
            for (int counter = 0; counter < first_matrix_column_size; counter++)
            {
                result[row_index][column_index] += first_matrix[row_index][counter] * second_matrix[counter][column_index];
            }
            printf("%d\t", result[row_index][column_index]);
        }
        printf("\n");
    }
}

int main(void)
{
    int first_matrix_row_size;
    int first_matrix_column_size;
    int matrix_second_row_size;
    int matrix_second_column_size;
    printf("enter first matrix row size\n");
    scanf("%d", &first_matrix_row_size);
    printf("enter first matrix column size\n");
    scanf("%d", &first_matrix_column_size);
    printf("enter second matrix row size:\n");
    scanf("%d", &matrix_second_row_size);
    printf("enter second matrix column size:\n");
    scanf("%d", &matrix_second_column_size);
    if (first_matrix_column_size != matrix_second_row_size)
    {
        printf("Invalid matrix sizes for multiplication.\n");
        printf("First matrix ke columns aur second matrix ki rows same honi chahiye.\n");
        return 1;
    }

    int first_matrix[first_matrix_row_size][first_matrix_column_size];
    int second_matrix[matrix_second_row_size][matrix_second_column_size];
    int result_matrix[first_matrix_row_size][matrix_second_column_size];
    printf("first matrix element:\n");
    for (int row_index = 0; row_index < first_matrix_row_size; row_index++)
    {

        for (int column_index = 0; column_index < first_matrix_column_size; column_index++)
        {

            printf("enter a array element at postion [%d][%d]:", row_index, column_index);
            scanf("%d", &first_matrix[row_index][column_index]);
        }
        printf("\n");
    }
    printf("second matrix element\n");
    for (int row_index = 0; row_index < matrix_second_row_size; row_index++)
    {
        for (int column_index = 0; column_index < matrix_second_column_size; column_index++)
        {
            printf("enter a array element at postion [%d][%d]:", row_index, column_index);
            scanf("%d", &second_matrix[row_index][column_index]);
        }
        printf("\n");
    }
    display_first_array(first_matrix_row_size, first_matrix_column_size, first_matrix);
    printf("second matrix\n");
    display_second_array(matrix_second_row_size, matrix_second_column_size, second_matrix);

    printf("after multiply both matrix:\n");
    multiply_two_matrix(first_matrix_row_size, first_matrix_column_size, matrix_second_column_size, first_matrix, second_matrix, result_matrix);
    return 0;
}
