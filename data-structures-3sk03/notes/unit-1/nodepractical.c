#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct nodepractical
{
    int data;
    struct nodepractical *next_node;
} node;

/**
 * @brief this function created a node
 * @param data: node ke andar konsa data dalana hai
 * @return node address
 */

node *create_node(int data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next_node = NULL;
    return new_node;
}
/***
 * @brief this function display the node element
 * @param head: address of head node
 * @return void
 */
void display_node(node *head)
{
    node *current = head;
    if (head == NULL)
    {
        printf("node is empty");
    }
    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next_node;
    }
}
/**
 * @brief this function append node in the last of node
 * @param data: kis data ko last mai add karana hai
 * @param head: head node mai add last mai add karana hai
 * @return head address update wala
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
 * @brief this function delete node from head node
 * @param head: head node mai se node delete karana hai
 * @param data: kis node ko delete karana hai data
 * @return head address update wala
 */
node *delete_node(node *head, int data)
{
    node *current = head;
    if (head == NULL)
    {
        printf("node is empty can not be deleted\n");
        return NULL;
    }
    while (current->next_node != NULL && current->next_node->data != data)
    {
        current = current->next_node;
    }
    if (current->next_node != NULL)
    {
        node *temp = current->next_node;
        current->next_node = current->next_node->next_node;
        free(temp);
    }

    return head;
}

int main(void)
{
    node *var = create_node(10);
    node *var1 = create_node(13);
    var->next_node = var1;
    append_node(var, 5);
    display_node(var);
    delete_node(var, 5);
    display_node(var);
    return 0;
}
