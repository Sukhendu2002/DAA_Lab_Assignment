#include<stdio.h>
#include<limits.h>
 
// Matrix Ai has dimension p[i-1] x p[i] for i = 1..n
 
int MatrixChainMultiplication(int p[], int i, int j)
{
    if (i == j)
        return 0;
    int k;
    int min = INT_MAX;
    int count;
  
    // place parenthesis at different places between first
    // and last matrix, recursively calculate count of
    // multiplications for each parenthesis placement and
    // return the minimum count
    for (k = i; k < j; k++) {
        count = MatrixChainOrder(p, i, k) + 
                MatrixChainOrder(p, k + 1, j) + 
                p[i - 1] * p[k] * p[j];
  
        if (count < min)
            min = count;
    }
  
    // Return minimum count
    return min;
}
 
int main()
{
    int n,i;
    printf("Enter number of matrices\n");
    scanf("%d",&n);
 
    n++;
 
    int arr[n];
 
    printf("Enter dimensions \n");
 
    for(i=0;i<n;i++)
    {
        printf("Enter d%d :: ",i);
        scanf("%d",&arr[i]);
    }
 
    int size = sizeof(arr)/sizeof(arr[0]);
 
    printf("Minimum number of multiplications is %d ", MatrixChainMultiplication(arr, size));
 
    return 0;
}
