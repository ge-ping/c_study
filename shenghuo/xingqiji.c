#include <stdio.h>
int main()
{ // 明天星期几
    int a;
    scanf("%d", &a);
    // int mingtian;
    if (a < 7)
    {
        // mingtian=jingtian+1;
        printf("m is%d ", a + 1);
    }
    else
    {
        printf("m is 1");
    }
    return 0;
}