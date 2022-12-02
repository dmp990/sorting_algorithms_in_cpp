#include "utils/merge.h"

void merge_sort(long long int arr[], long long int size)
{
    long long int curr_size;
    long long int left_start;
    for (curr_size = 1; curr_size <= size - 1; curr_size *= 2)
    {
        for (left_start = 0; left_start < size - 1; left_start += 2 * curr_size)
        {
            long long int middle = std::min(left_start + curr_size - 1, size - 1);
            long long int right_end = std::min(left_start + 2 * curr_size - 1, size - 1);
            merge(arr, left_start, middle, right_end);
        }
    }
}