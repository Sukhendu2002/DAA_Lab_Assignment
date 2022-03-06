#include <stdio.h>
void findSmallestLargest(int a[], int size)
{
    int min_i, temp, i, j;

    for (i = 0; i < size - 1; i++)
    {
        min_i = i;
        for (j = i + 1; j < size; j++)
        {
            if (a[j] < a[min_i])
            {
                min_i = j;
            }
        }
        temp = a[min_i];
        a[min_i] = a[i];
        a[i] = temp;
    }
    printf("second largest value: %d second smallest value: %d\n", a[size - 2], a[1]);
}
int main()
{
    int size;
    int a[] = {11, 90, 1, 3, 50};
    size = sizeof(a) / sizeof(a[0]);
    findSmallestLargest(a, size);
}