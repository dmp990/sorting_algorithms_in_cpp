#include "utils/swap.h"

void cocktail_sort(long long int arr[], long long int size)
{
    bool is_swap = true;
    long long int start = 0, end = size - 1;

    while (is_swap)
    {
        is_swap = false;
        for (long long int i = start; i < end; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(&arr[i], &arr[i + 1]);
                is_swap = true;
            }
        }
        if (!is_swap)
            break;
        is_swap = false;
        end--;
        for (long long int j = end - 1; j >= start; j--)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                is_swap = true;
            }
        }
        start++;
    }
}