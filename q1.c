#include <stdio.h>

void findSmallest(int d, int s)
{
    if (s == 0)
    {
        (d == 1) ? printf("Smallest number is ") << 0
                 : printf("Not possible");
        return;
    }

    if (s > 9 * d)
    {
        printf("Not possible");
        return;
    }

    int res[d];
    s -= 1;
    for (int i = d - 1; i > 0; i--)
    {
        if (s > 9)
        {
            res[i] = 9;
            s -= 9;
        }
        else
        {
            res[i] = s;
            s = 0;
        }
    }
    res[0] = s + 1;
    printf("Smallest number is ");
    for (int i = 0; i < d; i++)
        printf("%d", res[i]);
}

int main()
{
    int s = 9, d = 2;
    findSmallest(d, s);
    return 0;
}