#include <stdio.h>

int main()
{
    int shijian;
    scanf("%d", &shijian);
    shijian = shijian % 100;
    switch (shijian)
    {
    case 1:
    case 2:
    case 12:
        printf("winter");
        break;
    case 3:
    case 4:
    case 5:
        printf("spring");
        break;
    case 6:
    case 7:
    case 8:
        printf("summer");
        break;
    case 9:
    case 10:
    case 11:
        printf("autumn");
        break;
    }
    return 0;
}