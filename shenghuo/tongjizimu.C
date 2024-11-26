#include <stdio.h>//统计字母
int main(void)  
{  
    int a[26] = { 0 };  
    int ch;  
    while ((ch = getchar()) != EOF && ch != '\n')  //遍历字符串数组
        if (ch >= 'a' && ch <= 'z')  
            a[(int)ch - 97]++;  //捕捉对应项，a的asc码为97 减去97即为数组第0项
    for (int i = 0; i < 26; i++)  
        printf("%d ", a[i]);  //循环输出对应项
    return 0;  
}  