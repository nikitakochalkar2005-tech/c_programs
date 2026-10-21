#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * @brief mujhe apana khud ka data type create karana hai jis mai integer value store karani hai or next node ka address store karana hai
 */

typedef struct operation_of_node
{
    int data;
    struct operation_of_node *next;

} operation_of_node;

/**
 * @brief this function create node:
 * @param data: kise store karana hai node mai
 * @return *operation_of_node: node ka address return karega
 */

operation_of_node *create_node(int data)
{
    operation_of_node *new_node = (operation_of_node *)malloc(sizeof(operation_of_node));
    if (new_node == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
/**
 *@brief this function display a node data
 *@param *head = address of head node
 *@return void: khuch return nahi karana hai
 */

void display_node_data(operation_of_node *head)
{
    if (head == NULL)
    {
        printf("node is empty:\n");
        return;
    }
    operation_of_node *current = head;
    while (current != NULL)
    {
        printf("%i\n", current->data);
        current = current->next;
    }
}
/**
 *@brief this function change a node
 *@param data: konta data store karana hai head mai
 *@return *new_node: naye node address send karata hai
 */

operation_of_node *prepend_head_node(operation_of_node *head, int data)
{
    operation_of_node *new_node = create_node(data);
    new_node->next = head;
    head = new_node;
    return head;
}
/**
 *@brief this function append a node
 *@param operation_of_node *node: node ka address jo null address mai insert karana hai
 *@param data: kis data ko insert karana hai
 */
operation_of_node *append_node(operation_of_node *head, int data)
{
    operation_of_node *new_node = create_node(data);
    if (head == NULL)
    {
        return new_node;
    }
    operation_of_node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    return head;
}

/*
 *@brief this function delete the node
 *@param head: node delete karana hai to head suru karege kiyu head ka address hame pata hai
 *return operation_of_node *: address return karana
 */

operation_of_node *delete_node(operation_of_node *head, int key)
{
    operation_of_node *temp = head;

    if (head == NULL)
    {
        return NULL;
    }
    if (head->data == key)
    {
        operation_of_node *temp = head;
        head = temp->next;
        free(temp);
        return head;
    }

    while (temp->data != key)
    {
        temp = temp->next;
        // head = head->data;
        // free(head);
    }
    free(temp);
    return head;
}

int main(void)
{
    operation_of_node *head = create_node(10);
    //  display_node_data(head);
    operation_of_node *var = prepend_head_node(head, 20);
    display_node_data(var);
    operation_of_node *var1 = create_node(30);
    append_node(var1, 50);
    // printf("**\n");
    display_node_data(var1);
    printf("%p", head);

    return 0;
}
