#include <stdio.h>
/**
 * @brief this function print the array elements
 * @param student_marks  konte array ko print karana hai
 *  @param student_roll_numbers  konte array ko print karana hai
 * @param student_marks_size array ki kitani size hogai
 * @param students_roll_numbers_size array ki size kitani rahegi
 */
void print_array_elements(int student_marks[], int students_marks_size, int students_roll_number_size, int students_roll_numbers[])
{
    printf("Below is the information about the students' marks\n");
    for (int index = 0; index < students_marks_size; index++)
    {
        printf("%i\n", student_marks[index]);
    }
    printf("Below are the students' roll numbers:\n");
    for (int index = 0; index < students_roll_number_size; index++)
    {
        printf("%i\n", students_roll_numbers[index]);
    }
}

/***
 * @brief this function delete the element form a array
 */
void delete_array_element(int students_marks[], int students_marks_size, int students_roll_numbers[], int students_roll_numbers_size, int index_marks, int index_roll_number)
{
    students_marks[index_marks] = 0;
    students_roll_numbers[index_roll_number] = 0;
}

/**
 * @brief in this function we are sorting the students marks
 */

void sort_array_elements_students_marks(int students_marks[], int students_marks_size) // int students_roll_numbers_size, //int students_roll_numbers[])
{
    for (int counter = 0; counter < students_marks_size; counter++)
    {
        for (int index = 0; index < (students_marks_size - 1); index++)
        {
            int first_mark = students_marks[index];
            int second_mark = students_marks[index + 1];

            if (first_mark > second_mark)
            {
                students_marks[index] = students_marks[index] + students_marks[index + 1];
                students_marks[index + 1] = students_marks[index] - students_marks[index + 1];
                students_marks[index] = students_marks[index] - students_marks[index + 1];
            }
        }
    }
}

/**
 * @brief this function sort the students roll numbers
 */
void sort_array_elements_students_roll_numbers(int students_roll_numbers[], int students_roll_numbers_size) // int students_roll_numbers_size, //int students_roll_numbers[])
{
    for (int counter = 0; counter < students_roll_numbers_size; counter++)
    {
        for (int index = 0; index < (students_roll_numbers_size - 1); index++)
        {
            int first_mark = students_roll_numbers[index];
            int second_mark = students_roll_numbers[index + 1];

            if (first_mark > second_mark)
            {
                students_roll_numbers[index] = students_roll_numbers[index] + students_roll_numbers[index + 1];
                students_roll_numbers[index + 1] = students_roll_numbers[index] - students_roll_numbers[index + 1];
                students_roll_numbers[index] = students_roll_numbers[index] - students_roll_numbers[index + 1];
            }
        }
    }
}

/**
 *
 */
void insert_students_mark(int students_marks[], int students_marks_size, int insert_students_mark, int insert_students_mark_index)
{

    if (insert_students_mark_index < 0 || insert_students_mark_index > students_marks_size)
    {
        printf("index should be greater than zero and less than size\n");
    }

    int new_students_marks_size = students_marks_size + 1;
    int new_students_marks[new_students_marks_size];
    copy_insert_students_mark(students_marks, students_marks_size, new_students_marks_size, new_students_marks);
    for (int index = students_marks_size; index > insert_students_mark_index; index--)
    {
        new_students_marks[index] = new_students_marks[index - 1];
    }
    new_students_marks[insert_students_mark_index] = insert_students_mark;
    printf("student mark below\n");
    for (int index = 0; index < new_students_marks_size; index++)
    {
        printf("%i\n", new_students_marks[index]);
    }
}

/**
 * @brief ye function element ko copy karata hai
 */
void copy_insert_students_mark(int students_marks[], int students_marks_size, int new_students_marks_size, int new_students_marks[])
{

    for (int index = 0; index < students_marks_size; index++)
    {
        new_students_marks[index] = students_marks[index];
    }
}

/**
 * @brief this function insert a roll number  in a array
 *
 */

void insert_students_roll_number(int students_roll_number[], int students_roll_numbers_size, int insert_students_roll_number, int insert_students_roll_number_index)
{

    if (insert_students_roll_number_index < 0 || insert_students_roll_number_index > students_roll_numbers_size)
    {
        printf("index should be greater than zero and less than size\n");
    }

    int new_students_roll_numbers_size = students_roll_numbers_size + 1;
    int new_students_roll_number[new_students_roll_numbers_size];
    copy_insert_students_roll_number(students_roll_number, students_roll_numbers_size, new_students_roll_numbers_size, new_students_roll_number);
    for (int index = students_roll_numbers_size; index > insert_students_roll_number_index; index--)
    {
        new_students_roll_number[index] = new_students_roll_number[index - 1];
    }
    new_students_roll_number[insert_students_roll_number_index] = insert_students_roll_number;
    printf("new roll number is below\n");
    for (int index = 0; index < new_students_roll_numbers_size; index++)
    {
        printf("%i\n", new_students_roll_number[index]);
    }
}

/**
 * @brief ye function element ko copy karata hai
 */
void copy_insert_students_roll_number(int students_roll_number[], int students_roll_numbers_size, int new_students_roll_numbers_size, int new_students_roll_number[])
{

    for (int index = 0; index < students_roll_numbers_size; index++)
    {
        new_students_roll_number[index] = students_roll_number[index];
    }
}

int main(void)
{
    int students_marks_size = 8;
    int students_marks[] = {90, 67, 45, 89, 34, 67, 98, 67};
    int students_roll_numbers_size = 14;
    int students_roll_numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 11, 34, 56, 45};
    printf("press 1 to print the array elements student roll numbers and marks:\n");
    printf("press 2 to delete the student roll number and marks:\n");
    printf("press 3 to sort the students marks\n");
    printf("press 4 to sort students roll numbers:\n");
    printf("press 5 to insert a roll number:\n");
    printf("press 6 to insert a mark:\n");
    int input = -1;
    scanf("%i", &input);
    switch (input)
    {
    case 1:
        print_array_elements(students_marks, students_marks_size, students_roll_numbers_size, students_roll_numbers);
        break;
    case 2:
        printf("before delete marks and  roll number\n");
        print_array_elements(students_marks, students_marks_size, students_roll_numbers_size, students_roll_numbers);
        delete_array_element(students_marks, students_marks_size, students_roll_numbers, students_roll_numbers_size, 5, 11);
        printf("after delete marks and roll number\n");
        print_array_elements(students_marks, students_marks_size, students_roll_numbers_size, students_roll_numbers);
        break;
    case 3:
        printf("before sorting the marks\n");
        print_array_elements(students_marks, students_marks_size, students_roll_numbers_size, students_roll_numbers);
        sort_array_elements_students_marks(students_marks, students_marks_size);
        printf("after sorting the marks\n");
        print_array_elements(students_marks, students_marks_size, students_roll_numbers_size, students_roll_numbers);
        break;
    case 4:
        printf("before sorting the roll number\n");
        print_array_elements(students_marks, students_marks_size, students_roll_numbers_size, students_roll_numbers);
        sort_array_elements_students_roll_numbers(students_roll_numbers, students_roll_numbers_size);
        printf("after sorting the roll number\n");
        print_array_elements(students_marks, students_marks_size, students_roll_numbers_size, students_roll_numbers);
        break;
    case 5:
        printf("before inserting the roll number\n");
        print_array_elements(students_marks, students_marks_size, students_roll_numbers_size, students_roll_numbers);
        insert_students_roll_number(students_roll_numbers, students_roll_numbers_size, 10, 11);
        // printf("after inserting  the roll number\n");
        // print_array_elements(students_marks, students_marks_size, students_roll_numbers_size, students_roll_numbers);
        break;
    case 6:
        printf("before inserting the marks\n");
        print_array_elements(students_marks, students_marks_size, students_roll_numbers_size, students_roll_numbers);
        insert_students_mark(students_marks, students_marks_size, 68, 6);
        // printf("after inserting the marks\n");
        // print_array_elements(students_marks, students_marks_size, students_roll_numbers_size, students_roll_numbers);
        break;

    default:
        printf(" choice doesn't exist ");
        break;
    }

    return 0;
}
