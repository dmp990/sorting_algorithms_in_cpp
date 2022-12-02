#include <vector>

#include "insertion_sort.h"

void bucket_sort(long long int arr[], long long int size)
{
    vector<vector<long long int>> vec(size);
    long long temp = arr[0];
    long long temp2 = 0;

    for (long long i = 1; i < size; i++)
        temp = arr[i] > temp ? arr[i] : temp;

    for (long long int i = 0; i < size; i++)
        vec[(arr[i] * size) / (temp + 1)].push_back(arr[i]);

    for (long long int i = 0; i < size; i++)
    {
        for (long long int j = 0; j < vec[i].size(); j++)
        {
            arr[temp2] = vec[i][j];
            temp2++;
        }
    }

    insertion_sort(arr, size);
}
