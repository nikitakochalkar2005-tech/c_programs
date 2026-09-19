#include <stdio.h>

/**
 * @brief this function add two numbers
 * @param first number: addition ke liye pehla number
 * @param second number: addition ke liye dusra number
 * @return the sum of the two numbers
 */
int addition(int first_number, int second_number)
{
    return first_number + second_number;
}

/***
 * @brief this function subtract two numbers
 * @param first number: subtraction ke liye pehla number
 * @param second number: subtraction ke liye dusra number
 * @return the difference of the two numbers
 */
int subtraction(int first_number, int second_number)
{
    return first_number - second_number;
}

/**
 * @brief this function multiply two numbers
 * @param first number: multiplication ke liye pehla number
 * @param second number: multiplication ke liye dusra number
 * @return the product of the two numbers
 */
int multiplication(int first_number, int second_number)
{
    return first_number * second_number;
}

/**
 * @brief this function divide two numbers
 * @param first number: division ke liye pehla number
 * @param second number: division ke liye dusra number
 * @return the quotient of the two numbers
 */
int division(int first_number, int second_number)
{
    return first_number / second_number;
}

/***
 * @brief this function find the remainder of two numbers
 * @param first number: remainder ke liye pehla number
 * @param second number: remainder ke liye dusra number
 * @return int: the remainder of the two numbers
 */
int calculate_remainder(int first_number, int second_number)
{
    return first_number % second_number;
}

/***
 * @brief this function performs the selected operation on two numbers
 * @param first number: the first number
 * @param second number: the second number
 * @param operation: the operation to be performed
 * @return the result of the operation
 */
int perform_operation(int first_number, int second_number, char operation)
{
    switch (operation)
    {
    case '+':
        return addition(first_number, second_number);
    case '-':
        return subtraction(first_number, second_number);
    case '*':
        return multiplication(first_number, second_number);
    case '/':
        if (second_number == 0)
        {
            printf("Error: division by zero is not allowed.\n");
            return 0;
        }
        return division(first_number, second_number);
    case '%':
        if (second_number == 0)
        {
            printf("Error: division by zero is not allowed.\n");
            return 0;
        }
        return calculate_remainder(first_number, second_number);
    default:
        printf("Invalid operation\n");
        return 0;
    }
}

int main(void)
{
    int first_number;
    int second_number;
    char operation;

    printf("Enter first number: ");
    if (scanf("%d", &first_number) != 1)
    {
        printf("Error: please enter a valid first number.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%d", &second_number) != 1)
    {
        printf("Error: please enter a valid second number.\n");
        return -1;
    }

    printf("Enter operation (+, -, *, /, %%): ");
    if (scanf(" %c", &operation) != 1)
    {
        printf("Error: please enter a valid operation.\n");
        return -1;
    }

    printf("Result: %d\n", perform_operation(first_number, second_number, operation));
    return 0;
}
