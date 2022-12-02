
long long int partition(long long int arr[], long long int left, long long int right)
{
    long long int temp1 = 0, temp2 = left + 1;

    for (long long int i = left + 1; i < right; i++)
    {
        if (arr[i] <= arr[left])
        {
            temp1 = arr[i];
            arr[i] = arr[temp2];
            arr[temp2] = temp1;
            temp2++;
        }
    }
    temp1 = arr[temp2 - 1];
    arr[temp2 - 1] = arr[left];
    arr[left] = temp1;
    return temp2;
}