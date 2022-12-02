#include "utils/heapify.h"

void heap_sort(long long int arr[], long long int size)
{
    for (long long int i = (size / 2 - 1); i >= 0; i--)
        heapify(arr, size, i);

    for (long long int i = size - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}
