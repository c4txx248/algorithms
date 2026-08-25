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

    for (int i = 1; i <= 5; i++)
    {
        struct Node *newNode = malloc(sizeof(struct Node));

        newNode->data = i * 10;
        newNode->next = head;

        head = newNode;
    }

    int target = 30;
    struct Node *current = head;

    while (current != NULL)
    {
        if (current->data == target)
        {
            printf("Found\n");
            break;
        }

        current = current->next;
    }

    if (current == NULL)
        printf("Not found\n");

    current = head;

    while (current != NULL)
    {
        struct Node *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}