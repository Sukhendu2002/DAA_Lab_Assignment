    // Given a sorted array and a number X, search two elements of array such that their sum is X. Expected time complexity is O(n).
    #include <stdio.h>

    void findTwoElements(int arr[], int n, int x)
    {
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (arr[i] + arr[j] == x)
            {
                printf("%d %d", arr[i], arr[j]);
                return;
            }
            else if (arr[i] + arr[j] < x)
                i++;
            else
                j--;
        }
        printf("No two elements found");
    }

    int main()
    {
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int n = sizeof(arr) / sizeof(arr[0]);
        int x = 11;
        findTwoElements(arr, n, x);
        return 0;
    }