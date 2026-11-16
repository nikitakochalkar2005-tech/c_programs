#include <stdio.h>
#include <stdbool.h>
typedef struct stack
{
    int array[5];
    int top_element;
} stack;

/**
 * @brief this function reset tha stack
 * @param stack : stack ka address chahiye
 * @return void:
 */

void reset_stack(stack *stack_reset)
{
    stack_reset->top_element = -1;
}

/**
 * @brief this function check stack empty or not
 * @param stack_is_empty: stack ka address
 * @return bool
 */
bool stack_is_empty(stack *full_stack)
{
    if (full_stack->top_element == -1)
    {
        return true;
    }
    return false;
}

/**
 * @brief this function check stack is full or not
 * @param stack_full :is mai check karana hai stack full hai ya nahi isliye ye variable liye hai
 * @return bool
 */

bool stack_is_full(stack *stack_full)
{
    if (stack_full->top_element == 4)
    {
        return true;
    }
    return false;
}

/**
 * @brief this function insert a element on top
 * @param stack_insert: is mai insert karana hai
 * @param value_of_element: element ki value kya hogi
 * @return void
 */

void stack_insert(stack *insert, int value_of_element)
{
    if (stack_is_full(insert))
    {
        printf("stack  is overflow");
        return;
    }
    insert->top_element++;
    insert->array[insert->top_element] = value_of_element;
    printf("%d\n", value_of_element);
}

/**
 * @brief this function delete element on top of stack
 * @param delete_top: is delete karana hai
 * @return void
 */

void delete_top_element(stack *delete_top_element)
{
    if (stack_is_empty(delete_top_element))
    {
        printf("stack is empty\n");
        return;
    }

    printf("%d", delete_top_element->array[delete_top_element->top_element]);
    delete_top_element->top_element--;
}

int main(void)
{
    stack insert;
    reset_stack(&insert);
    stack_insert(&insert, 30);
    printf("***********\n");
    delete_top_element(&insert);

    return 0;
}
