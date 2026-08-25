#include <stdio.h>

int main(void)
{
    int numbers[] = {10, 20, 30, 40, 50};
    int target = 30;
    int found = 0;

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == target)
        {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Not found\n");
    }

    return 0;
}