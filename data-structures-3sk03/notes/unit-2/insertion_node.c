#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct insertion_node
{
    int data;
    struct insertion_node *next_node;
} node;

/**
 * @brief this function create a node
 * @param data: node ka data
 * @return node ka address
 */
node *create_node(int data)
{
    node *node_create = (node *)malloc(sizeof(node *));
    node_create->data = data;
    node_create->next_node = NULL;
    return node_create;
}
/**
 * @brief this function add node in a first position it called as head
 * @param head: head node isliye kiyu mujhe head ko next node  mai covert karana hai
 * @param data: kon sa data add karana hai first/head position mai
 * @return new node address after prepend
 */
node *prepend_node(node *head, int data)
{
    node *new_node = create_node(data);

    if (head == NULL)
    {
        return new_node;
    }
    new_node->next_node = head;
    head = new_node;
    return new_node;
}
/**
 * @brief this function add node in a last option
 * @param head: jis node last mai add karana hai isliye liya head parameter
 * @param data: is node ke data ko last mai add karana hai
 * @return update wali node ka address return
 */

node *append_node(node *head, int data)
{
    node *new_node = create_node(data);
    node *current = head;
    if (head == NULL)
    {
        return new_node;
    }
    while (current->next_node != NULL)
    {
        current = current->next_node;
    }
    current->next_node = new_node;
    return head;
}
/**
 * @brief this function insertion node in a specific required position
 * @param head: head node isliye kiyu is mai dusari node insert karani hai
 * @param data: data is data ko insertion karana hai
 * @return new node ka address
 */

node *insertion_node(node *head, int data, int postion)
{
    node *new_node = create_node(data);
    node *current = head;
    for (int index = 1; index < postion - 1 && current != NULL; index++)
    {
        current = current->next_node;
    }
    if (current == NULL)
    {
        printf("position invalid");
        return head;
    }
    new_node->next_node = current->next_node;
    current->next_node = new_node;
    return head;
}

int main(void)
{
    node *var = create_node(30);
    node *var2 = prepend_node(var, 12);
    node *var3 = append_node(var2, 15);
    printf("%i\n", var3->data);
    printf("%i\n", var3->next_node->data);
    printf("%i\n", var3->next_node->next_node->data);

    return 0;
}
