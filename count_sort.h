
#include "utils/get_max.h"

void count_sort(int *arr, int size)
{
    int output[size];
    int max = get_max(arr, size);
    int count[max + 1];

    for (int i = 0; i < (max + 1); i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < size; i++)
        count[arr[i]]++;

    for (int i = 1; i < (max + 1); i++)
        count[i] += count[i - 1];

    for (int i = size - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < size; i++)
        arr[i] = output[i];
}