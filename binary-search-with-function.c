#include <stdio.h>

int binarySearch(int numbers[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int middle = (left + right) / 2;

        if (numbers[middle] == target)
            return middle;

        if (numbers[middle] < target)
            left = middle + 1;
        else
            right = middle - 1;
    }

    return -1;
}

int main(void)
{
    int numbers[] = {10, 20, 30, 40, 50};

    int result = binarySearch(numbers, 5, 40);

    printf("Index = %d\n", result);

    return 0;
}