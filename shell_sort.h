
void shell_sort(long long int arr[], long long int size)
{
    for (long long int gap = size / 2; gap > 0; gap /= 2)
    {
        for (long long int i = gap; i < size; i++)
        {
            long long int temp = arr[i];
            long long int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
            {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}