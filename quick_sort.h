#include "utils/partition.h"

void quick_sort(long long int arr[], long long int left, long long int right)
{
    if (left >= right || left < 0)
    {
        return;
    }
    int part = partition(arr, left, right);
    quick_sort(arr, left, part - 1);
    quick_sort(arr, part + 1, right);
}
