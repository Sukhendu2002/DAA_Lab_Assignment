// How many number of distinct binary search trees and binary trees possible, given 'n' number of elements? Derive it. [Hint: Number of distinct BSTs is Catalan number]

#include <stdio.h>
#include <math.h>

long int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

long int binomialCoeff(int n, int k)
{
    long int res = 1;
    if (k > n - k)
        k = n - k;

    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

long int catalanNumber(int n)
{
    long int c = binomialCoeff(2 * n, n);
    return c / (n + 1);
}

long int countBST(int n)
{
    long int count = catalanNumber(n);
    return count;
}

long int countBT(int n)
{
    long int count = catalanNumber(n);
    return count * factorial(n);
}

int main()
{
    int count1, count2, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    count1 = countBST(n);
    count2 = countBT(n);
    printf("\nNumber of distinct binary search trees: %ld\n", count1);
    printf("Number of distinct binary trees: %ld\n", count2);
    return 0;
}