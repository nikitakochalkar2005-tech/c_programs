#include <stdio.h>
/**
 * @brief this function reverse the array elements
 * @param array konte array ko reverse karana hai
 * @param size array ki size kitani hai
 * @return void  mujhe function mai process execute  karana koi bhi output nahi chahiye function se
 */
void reverse_array_element(int array[], int size)
{
    for (int index = 0, end = size - 1; index < end; index++, end--)
    {

        array[index] = array[index] + array[end];
        array[end] = array[index] - array[end];
        array[index] = array[index] - array[end];
        // printf("%i\n", array[index]);
        //  printf("%i\n", array[3]);
    }
}

int main(void)
{
    int size = 4;
    int array[] = {1, 7, 78, 9};

    reverse_array_element(array, size);
    for (int i = 0; i < size; i++)
    {

        printf("%i\n", array[i]);
    }
    return 0;
}