#include <stdio.h>
#include <stdlib.h>

typedef struct node_operation
{
    int data;
    struct node_operation *next;

} node_operation;

/**
 * @brief this function create a node
 * @param int data: parameter mai konsa data isliye liya kiyu node ka data mujhe dalana hai
 * @return node_operation *: address return karana hai
 */

node_operation *create_node(int data)
{
    node_operation *new_node = (node_operation *)malloc(sizeof(node_operation));
    if (new_node == NULL)
    {
        fprintf(stderr, "memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

/**
 * @brief this function append a node
 * @param head: mujhe sirf head node address pata hai isliye head liya
 * @param data:new node ka data
 * @return node_operation: return karana hai head append karane ke bad ka address
 */

node_operation *append_node(node_operation *head, int data)
{
    node_operation *new_node = create_node(data);
    node_operation *current = head;
    if (head == NULL)
    {
        return new_node;
    }
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = new_node;
    return head;
}
/**
 * @brief this function delete a node
 * @param head: mujhe sirf head node address pata hai isliye head liya
 * @param position: konte position ki node delete karani hai
 * @return node_operation: return karana hai head delete karane ke bad ka address
 */

node_operation *delete_node(node_operation *head, int position)
{
    node_operation *current = head;
    if (head == NULL)
    {
        printf("node is empty:\n");
        return NULL;
    }
    if (position == 1)
    {
        head = head->next;
        free(current);
        return head;
    }
    for (int index = 1; index < position - 1 && current != NULL; index++)
    {
        current = current->next;
    }
    if (current == NULL || current->next == NULL)
    {
        printf(" position is out of bound:\n");
        return head;
    }
    node_operation *delete_position_node = current->next;
    current->next = delete_position_node->next;
    free(delete_position_node);
    return head;
}

/**
 * @brief this function prepend node
 * @param head: head ka address isliye liya kiyu mujhe sirf head ka hi address pata hai
 * @param data: node mai kis data ko add karana hai
 * @return node_operation: new node ka head address return
 */

node_operation *prepend_node(node_operation *head, int data)
{
    node_operation *new_node = create_node(data);
    if (head == NULL)
    {
        return new_node;
    }
    new_node->next = head;
    return new_node;
}
/**
 * @brief this function insert a node
 * @param head: head ka address pata hai isliye ye  parameter liya
 * @param data: node mai kis data ko insert karana hai
 * @return node_operation: head node return karani hai update wali
 */

node_operation *insert_a_node(node_operation *head, int data, int position)
{
    node_operation *new_node = create_node(data);
    node_operation *current = head;
    if (head == NULL)
    {
        return new_node;
    }
    if (position == 1)
    {
        new_node->next = head;
        head = new_node;
        return new_node;
    }
    for (int index = 1; index < position - 1 && current != NULL; index++)
    {
        current = current->next;
    }
    if (current == NULL)
    {
        printf("postion is out of bound:\n");
        free(new_node);
        return head;
    }
    new_node->next = current->next;
    current->next = new_node;

    return head;
}

void print_list(node_operation *head)
{
    node_operation *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void free_list(node_operation *head)
{
    while (head != NULL)
    {
        node_operation *next = head->next;
        free(head);
        head = next;
    }
}

int main(void)
{
    node_operation *head = NULL;

    head = append_node(head, 10);
    head = append_node(head, 20);
    head = append_node(head, 30);
    printf("After append: ");
    print_list(head);

    head = prepend_node(head, 5);
    printf("After prepend: ");
    print_list(head);

    head = insert_a_node(head, 15, 3);
    printf("After insert: ");
    print_list(head);

    head = delete_node(head, 2);
    printf("After delete: ");
    print_list(head);

    free_list(head);
    return 0;
}
