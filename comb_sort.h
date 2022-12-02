#include "utils/swap.h"

void comb_sort(long long int arr[], long long int size)
{
    long long int gap = size;
    bool check = true;

    while (gap != 1 || check == true)
    {
        gap = (gap * 10) / 13;
        if (gap < 1)
            gap = 1;
        check = false;

        for (long int i = 0; i < (size - gap); i++)
        {
            if (arr[i] > arr[i + gap])
            {
                swap(&arr[i], &arr[i + gap]);
                check = true;
            }
        }
    }
}