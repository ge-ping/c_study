#include <stdio.h>
#include <math.h>
#define si stu[i]
#define sj stu[j]
int  main()
{
    struct Student
    {
        char xm [200];
        int f1;
        int f2;
        int f3;
    }stu[200];

    int i,j,k,n;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {scanf("%s %d %d %d",&stu[i].xm,&stu[i].f1,&stu[i].f2,&stu[i].f3);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (abs(si.f1-si.f1)<=10&&abs(si.f2-sj.f2)<=10&&abs(si.f3-sj.f3)<=10)
                printf("%s %s\n",si.xm,sj.xm);
        }
    }


    return 0;
}