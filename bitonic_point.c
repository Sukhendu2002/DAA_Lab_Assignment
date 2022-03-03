#include <stdio.h>

int binarySearch(int arr[], int left, int right)
{
    if (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
            return mid;
        if (arr[mid] < arr[mid + 1])
            return binarySearch(arr, mid + 1, right);
        else
            return binarySearch(arr, left, mid - 1);
    }

    return -1;
}

int main()
{
    int arr[] = {6, 7, 8, 11, 9, 5, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = binarySearch(arr, 1, n - 2);
    if (index != -1)
    {
        printf("Bitonic point is %d", arr[index]);
    }
    return 0;
}