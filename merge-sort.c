#include <stdio.h>

void merge(int numbers[], int left, int middle, int right)
{
    int temp[100];
    int i = left;
    int j = middle + 1;
    int k = 0;

    while (i <= middle && j <= right)
    {
        if (numbers[i] < numbers[j])
            temp[k++] = numbers[i++];
        else
            temp[k++] = numbers[j++];
    }

    while (i <= middle)
        temp[k++] = numbers[i++];

    while (j <= right)
        temp[k++] = numbers[j++];

    for (i = left, k = 0; i <= right; i++, k++)
        numbers[i] = temp[k];
}

void mergeSort(int numbers[], int left, int right)
{
    if (left < right)
    {
        int middle = (left + right) / 2;

        mergeSort(numbers, left, middle);
        mergeSort(numbers, middle + 1, right);

        merge(numbers, left, middle, right);
    }
}

int main(void)
{
    int numbers[] = {5, 2, 8, 1, 3};

    mergeSort(numbers, 0, 4);

    for (int i = 0; i < 5; i++)
        printf("%d ", numbers[i]);

    printf("\n");

    return 0;
}