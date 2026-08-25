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
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            struct Node *current = head;

            while (current->next != NULL)
                current = current->next;

            current->next = newNode;
        }
    }

    struct Node *current = head;

    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\n");

    current = head;

    while (current != NULL)
    {
        struct Node *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}