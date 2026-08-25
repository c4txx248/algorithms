#include <stdio.h>

#define SIZE 5

int main(void)
{
    int stack[SIZE];
    int top = -1;

    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    printf("Top = %d\n", stack[top]);

    printf("Pop: %d\n", stack[top--]);
    printf("Pop: %d\n", stack[top--]);
    printf("Pop: %d\n", stack[top--]);

    return 0;
}