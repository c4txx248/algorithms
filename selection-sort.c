#include <stdio.h>

int main(void)
{
    int numbers[] = {5, 2, 8, 1, 3};

    for (int i = 0; i < 5 - 1; i++)
    {
        int smallest = i;

        for (int j = i + 1; j < 5; j++)
        {
            if (numbers[j] < numbers[smallest])
            {
                smallest = j;
            }
        }

        int temp = numbers[i];

        numbers[i] = numbers[smallest];
        numbers[smallest] = temp;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}