#include "swap.h"

void heapify(long long int arr[], long long int size, long long int i)
{
    long long int max = i;
    long long int left = 2 * i + 1;
    long long int right = 2 * i + 2;

    if (left < size && arr[left] > arr[max])
        max = left;

    if (right < size && arr[right] > arr[max])
        max = right;

    if (max != i)
    {
        swap(&arr[i], &arr[max]);
        heapify(arr, size, max);
    }
}
