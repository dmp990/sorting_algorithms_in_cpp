
void bubble_sort(long long int arr[], long long int size)
{
    long long int temp;
    bool swap;
    for (long long int i = 0; i < size - 1; i++)
    {
        swap = false;
        for (long long int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = true;
            }
        }
        if (swap == false)
        {
            return;
        }
    }
}