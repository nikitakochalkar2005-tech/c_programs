#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
typedef struct prepend
{
    int data;
    struct prepend *next_node;
} node;

/**
 * @brief this function create node
 * @param data: node ka data
 * @return void kuch return nahi karega
 */

node *create_node(int data)
{
    node *new_node = (node *)malloc(sizeof(node));
    if (new_node == NULL)
    {
        fprintf(stderr, "memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    new_node->data = data;
    new_node->next_node = NULL;
    return new_node;
}

/**
 * @brief this function add data in first position
 * @param
 */

node *add_first_position(int data, node *head)
{
    node *new_node = create_node(data);
    if (head == NULL)
    {
        return new_node;
    }
    new_node->next_node = head;
    return new_node;
}

int main(void)
{
    int total_data;
    int new_data;
    node *head = NULL;

    printf("enter a total data for adding in a node:\n");
    if (scanf("%d", &total_data) != 1 || total_data < 0)
    {
        fprintf(stderr, "invalid number of nodes\n");
        return EXIT_FAILURE;
    }

    for (int index = 0; index < total_data; index++)
    {
        printf("enter a data:\n");
        if (scanf("%d", &new_data) != 1)
        {
            fprintf(stderr, "invalid node data\n");
            return EXIT_FAILURE;
        }

        head = add_first_position(new_data, head);
    }

    printf("\nFinal Linked List: ");
    node *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next_node;
    }
    printf("NULL\n");

    while (head != NULL)
    {
        node *next = head->next_node;
        free(head);
        head = next;
    }

    return 0;
}
