void swap(long long int *first, long long int *second)
{
    long long int tmp = *first;
    *first = *second;
    *second = tmp;
}

void selection_sort(long long int arr[], long long int size)
{
    long long int min;

    for (long long int i = 0; i < size - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
            if (arr[j] < arr[min])
                min = j;
        swap(&arr[min], &arr[i]);
    }
}