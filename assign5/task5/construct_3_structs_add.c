#include <stdio.h>
#include <stdlib.h>
#include "snode.h"
typedef struct snode node_t;

node_t *setup()
{
    // TODO:head declared for you
    node_t *head;
    // Allocate three more pointers
    // head for the first Node, and temporary pointers node1, node2 and node3
    node_t *node1 = (node_t *)malloc(sizeof(node_t));
    node_t *node2 = (node_t *)malloc(sizeof(node_t));
    node_t *node3 = (node_t *)malloc(sizeof(node_t));
    // Allocate three node pointees and store references to them in the three pointers
    // Dereference each pointer to store the appropriate number and string into the length and str fields in its pointee.
    // Dereference each pointer to access the .next field in its pointee,
    // and use pointer assignment to set the .next field to point to the appropriate Node.

    strcpy(node1->str, "hello");
    node1->length = 5;
    node1->next = node2;

    strcpy(node2->str, "there");
    node2->length = 5;
    node2->next = node3;

    strcpy(node3->str, "prof");
    node3->length = 4;
    node3->next = NULL;

    head = node1;

    return head;
}

void teardown(node_t *head)
{
    // TODO: free all dynamic memory you requested.
    // Please complete the prototype of teardown.
    // You are not allowed to use globals

    // create a temporary node pointer to head
    node_t *temp = head;
    // while the head node is still
    while (head != NULL)
    {
        // store the next node in the temporary node
        temp = head->next;
        // free the head node
        free(head);
        // assign the temp node to the head
        head = temp;
    }
}

void add(node_t **head, char *str, int length)
{
    // TODO: implement add to add a new node to front, pointed by head

    // assign a block of memory the size of node_t to our add node
    node_t *add_node = (node_t *)malloc(sizeof(node_t));
    // copy the string from the source str to the add_node str in the struct
    strcpy(add_node->str, str);
    // assign length to the add_node length variable in the struct
    add_node->length = length;
    // assign the head node pointer to the next node
    add_node->next = *head;
    // assign the add_node node to the head node pointer
    *head = add_node;
}

void dump_all(node_t *);
int main(int argc, char **argv)
{
    node_t *head = setup();
    add(&head, "hi", 2);
    dump_all(head);
    teardown(head);
    return 0;
}

void dump_all(node_t *head)
{
    printf("head -> ");
    node_t *cur = head;
    while (cur != NULL)
    {
        printf("%s ", cur->str);
        cur = cur->next;
    }
    printf("\ndone\n ");
}
