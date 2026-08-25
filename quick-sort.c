#include <stdio.h>

void quickSort(int numbers[], int low, int high)
{
    if (low >= high)
        return;

    int pivot = numbers[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (numbers[j] < pivot)
        {
            i++;

            int temp = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = temp;
        }
    }

    int temp = numbers[i + 1];
    numbers[i + 1] = numbers[high];
    numbers[high] = temp;

    int pivotIndex = i + 1;

    quickSort(numbers, low, pivotIndex - 1);
    quickSort(numbers, pivotIndex + 1, high);
}

int main(void)
{
    int numbers[] = {5, 2, 8, 1, 3};

    quickSort(numbers, 0, 4);

    for (int i = 0; i < 5; i++)
        printf("%d ", numbers[i]);

    printf("\n");

    return 0;
}