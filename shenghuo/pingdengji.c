#include <stdio.h>

 
int  main()
{
    struct Student
    {
        char xm [200];
        int f1;
        int f2;
        int he;
        int zong;
    }stu[200];

    int i,n;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {scanf("%s %d %d",&stu[i].xm,&stu[i].f1,&stu[i].f2);
        stu[i].he=stu[i].f1+stu[i].f2;
        stu[i].zong=stu[i].f1*7+stu[i].f2*3;
    }

    for (i=0;i<n;i++)
    {
        if(stu[i].he>140&&stu[i].zong>800)
        printf("Excllent\n");
        else printf("Not Excllent\n");
    }
    return 0;
}