
void insertion_sort(long long int arr[], long long int size)
{
    long long int i, j;
    long long int temp;
    for (i = 1; i < size; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}