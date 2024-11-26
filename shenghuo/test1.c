#include <stdio.h>
int main() // 找钱
{
    int price = 0;
    int bill = 0;
    printf("请输入:");
    scanf("%d", &price);
    printf("票面");
    scanf("%d", &bill);
    if (bill >= price)
    {
        printf("应该找您：%d\n", bill - price);
    }

    return 0;
}