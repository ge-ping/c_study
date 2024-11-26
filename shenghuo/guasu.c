#include <stdio.h>
int main()
{
    int x = 30, y = 10, n = 30;
    // int n,x,y;同时挂科
    //  scanf("%d,%d,%d",&n,&x,&y);
    if (x > y)
    {
        printf("max=%d", x);
    }
    else
        printf("max=%d", y);
    if ((x + y) > n)
    {
        printf("min=%d", y - x);
    }
    else
        printf("min=%d", 0);

    return 0;
}
