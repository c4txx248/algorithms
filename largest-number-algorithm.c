#include <stdio.h>

int main(void)
{
    int numbers[] = {10, 45, 23, 67, 12};
    int largest = numbers[0];

    for (int i = 1; i < 5; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    printf("Largest = %d\n", largest);

    return 0;
}