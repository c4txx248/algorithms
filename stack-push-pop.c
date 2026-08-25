#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int value)
{
    if (top == SIZE - 1)
    {
        printf("Stack is full\n");
        return;
    }

    stack[++top] = value;
}

int pop(void)
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }

    return stack[top--];
}

int main(void)
{
    push(10);
    push(20);
    push(30);

    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());

    return 0;
}