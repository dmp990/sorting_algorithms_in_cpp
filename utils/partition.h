#include "swap.h"

/*
    The following function implements Lomuto partition scheme.
    For more information, visit: https://en.wikipedia.org/wiki/Quicksort#Lomuto_partition_scheme
*/

long long int partition(long long int arr[], long long int low, long long int high)
{
    long long int pivot = arr[high];

    int temp_pivot_index = low - 1;

    for (long long int i = low; i <= high - 1; i++)
    {
        if (arr[i] <= pivot)
        {
            swap(&arr[++temp_pivot_index], &arr[i]);
        }
    }
    swap(&arr[++temp_pivot_index], &arr[high]);
    return temp_pivot_index;
}