
void merge(long long int arr[], long long int left, long long int middle, long long int right)
{
    long long int i, j, k;
    long long int temp1 = middle - left + 1;
    long long int temp2 = right - middle;
    long long int *arr1 = new long long int[temp1];
    long long int *arr2 = new long long int[temp2];

    for (i = 0; i < temp1; i++)
    {
        arr1[i] = arr[left + i];
    }
    for (j = 0; j < temp2; j++)
    {
        arr2[j] = arr[middle + j + 1];
    }
    i = 0;
    j = 0;
    k = left;

    while (i < temp1 && j < temp2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[k] = arr1[i];
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < temp1)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < temp2)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }
    delete arr1;
    delete arr2;
}