#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct append_node
{
    int data;
    struct append_node *next_node;
} append_node;

/**
 * @brief this function create node
 * @param data: node ka data
 * @return new_node: new_node return karega
 */
append_node *create_node(int data)
{
    append_node *new_node = (append_node *)malloc((sizeof(append_node)));
    new_node->data = data;
    new_node->next_node = NULL;
    return new_node;
}

/**
 * @brief this function add node in a first
 * @param head: head node isliye kiyu mujhe is head node next node banana hai
 * @param new_node: new node ko mujhe head node banana hai isliye liya
 * @return agar node empty hai to new_node return karega agar empty nahi hai to fir prepend wala node return karega
 *
 */

append_node *prepend_node(append_node *head, int data)
{
    append_node *new_node = create_node(data);
    if (head == NULL)
    {
        return new_node;
    }
    new_node->next_node = head;
    head = new_node;
    return head;
}

/**
 * @brief this function append a node
 * @param data: kis data ko append karana hai
 * @param head: jis exting node mai append karana hai
 * @return *append_node: update node ka address return karana hai
 *
 */
append_node *adding_least_postion_in_node(append_node *head, int append_data)
{
    append_node *current = head;

    if (head == NULL)
    {
        printf(" node is empty:");
        return NULL;
    }

    while (current != NULL)
    {
        if (current->next_node == NULL)
        {
            current->next_node = create_node(append_data);
            return head;
        }

        current = current->next_node;
    }

    return head;
}
int main(void)
{
    append_node *current = create_node(10);
    append_node *new = prepend_node(current, 5);
    printf("%d\n", new->data);
    printf("%i\n", new->next_node->data);
    printf("***\n");
    append_node *se = adding_least_postion_in_node(new, 4);
    while (se != NULL)
    {
        printf("%i\n", se->data);
        se = se->next_node;
    }

    return 0;
}