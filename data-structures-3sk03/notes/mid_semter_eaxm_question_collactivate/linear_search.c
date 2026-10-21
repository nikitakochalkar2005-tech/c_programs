#include <stdio.h>
/**
 * @brief std output mai  mujhe array ke elements print karana hai
 * n = 0, compiler error
 * n = 1, 1 value print on the console
 * n = 2, 2 value print on the console
 * n = 5, number of step 5
 * O(n) time complexity
 * @param array  jo array ke elements print karane uske liye ye parameter  diya
 * @param size array ke size ke liye parameter diya
 * @returns nothing
 */
void print_students_information(int array[], int size)
{
    for (int index = 0; index <= (size - 1); index++)
    {
        printf("%i ", array[index]);
    }
    printf("\n");
}
/**
 *
 * @brief array ke elements maise ek given key search karani hai
 * @param array is array ke indar key search karana hai
 * @param key kis value  ko search karana hai
 * @returns index if key is found, -1 if key is not found
 * time complexity O(n)
 *
 */
int search_array_elements(int array[], int key, int size)
{
    for (int index = 0; index < size; index++)
    {
        if (array[index] == key)
        {
            return index;
        }
    }

    return -1;
}

/**
 * @brief  array  maise  se kisi ek index ki value ko delete karana hai
 * @param array kis array mai se index value delete karani hai uske liye
 * @returns int  kiyu std output mai hame konta index value delete huai o dekhana hai
 */
int delete_array_element(int array[], int index)
{
    printf("%i index par element ki value: %i\n", index, array[index]);
    int deleted_element = array[index];
    array[index] = 0;
    return deleted_element;
}

/**
 * @brief this function will sort an array using the bubble sort algorithm
 * @param array the array whose elements are to be sorted
 * n = 0, f(n) =
 */
void sort_array_elements(int array[], int size)
{
    for (int counter = 0; counter < size; counter++)
    {
        for (int index = 0; index < size; index++)
        {
            int first_number = array[index];
            int second_number = array[index + 1];
            if (first_number > second_number)
            {

                array[index] = array[index] + array[index + 1];
                array[index + 1] = array[index] - array[index + 1];
                array[index] = array[index] - array[index + 1];
            }
        }
    }
}

int main(void)
{
    int size = 5;
    int user_ids[] = {1, 2, 5, 6, 3};

    printf(" array operations \n");
    printf("press 1 to print array elements\n");
    printf("press 2 to search a key in an array\n");
    printf("press 3 to delete a value at an index\n");
    printf("press 4 to sort the array elements\n");

    int input = -1;
    scanf("%i", &input);

    switch (input)
    {
    case 1:
        print_students_information(user_ids, size);
        break;

    case 2:
        int key = -1;
        printf("enter the key to search in the array\n");
        scanf("%i", &key);
        int index = search_array_elements(user_ids, key, size);
        if (index == -1)
        {
            printf("%i not found in the array\n", key);
        }
        else
        {
            printf("%i found in the array, at index %i\n", key, index);
        }
        break;

    case 3:
        index = -1;
        printf("array before deleting\n");
        print_students_information(user_ids, size);
        printf("enter the index to delete the value at index\n");
        scanf("%i", &index);
        print_students_information(user_ids, size);
        delete_array_element(user_ids, index);
        printf("array after deleting\n");
        print_students_information(user_ids, size);
        break;

    case 4:
        printf("array before sorting\n");
        print_students_information(user_ids, size);
        sort_array_elements(user_ids, size);
        printf("array after sorting\n");
        print_students_information(user_ids, size);
        break;

    default:
        printf("please enter correct input\n");
        break;
    }
    return 0;
}
