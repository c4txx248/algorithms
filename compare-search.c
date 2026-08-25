#include <stdio.h>

int main(void)
{
    int numbers[] = {5, 2, 8, 1, 3};

    /* Linear search */
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == 8)
        {
            printf("8 found at index %d\n", i);
            break;
        }
    }

    /* Bubble sort */
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];

                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}