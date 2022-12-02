#include "utils/swap.h"

void gnome_sort(long long int arr[], long long int size)
{
    long long int index = 0;

    while (index < size)
    {
        if (index == 0)
            index++;
        if (arr[index] >= arr[index - 1])
        {
            index++;
        }
        else
        {
            swap(&arr[index], &arr[index - 1]);
            index--;
        }
    }
}