#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main(void)
{
    struct Node *head = NULL;

    struct Node *newNode = malloc(sizeof(struct Node));

    newNode->data = 10;
    newNode->next = head;

    head = newNode;

    printf("%d\n", head->data);

    free(head);

    return 0;
}