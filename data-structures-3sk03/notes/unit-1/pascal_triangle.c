#include <stdio.h>
/***
 * @brief this function display the pascal triangle
 * @param array kis array ko  pascal triangle convert karana hai
 * @param column kitane column rahege
 * @param row kitane row rahege
 * @return sum mujhe return mai sum ki value chahiye
 */
int pascal_triangle(int row_size, int column_size, int array[row_size][column_size])
{
    int sum = 0;

    for (int row_index = 0; row_index < row_size; row_index++)
    {
        for (int index = 0; index <= row_index; index++)
        {
            int result = array[row_index][index];
            printf("%i  ", result);
            sum = sum + result;
        }
        printf("\n");
    }
    return sum;
}
int main(void)
{
    int row_size;
    int column_size;
    printf("enter a row size:\n");
    scanf("%i", &row_size);
    printf("enter a column size:\n");
    scanf("%i", &column_size);
    int array[row_size][column_size];
    printf("enter the row column elements:\n");

    for (int row_index = 0; row_index < row_size; row_index++)
    {
        for (int column_index = 0; column_index < column_size; column_index++)
        {
            scanf("%i", &array[row_index][column_index]);
        }
    }

    int sum = pascal_triangle(row_size, column_size, array);
    printf("Total Sum = %i\n", sum);

    return 0;
}
