#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[1000] = {2};
    int t, he = 0, left = 0, right = 0;
    int x, i, j;
    while (he != n * n)
    {
        scanf("%d", &x);
        right += x;
        for (i = left; i < right; i++)
        {
            a[i] = 0;
            he += x;
            left = right + x;
        }
        if (n * n != he)
        {
            scanf("%d", &x);
            right += x;
            for (i = left; i < right; i++)
            {
                a[i] = 1;
                he += x;
                left = right + x;
            }
        }
    }
    for (i = 0; i < n * n; i++)
    {    for (j = 0; j < n; j++)
        {
            printf("%d", a[i]);
        }
    printf("\n");
    }
    return 0;
}