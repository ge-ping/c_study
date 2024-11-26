#include <stdio.h>

int main() 
{
    int a[100000]={0};
    int l,i,j,k,m,t=0;
    int u,v,z;
    //读入街道长度
    scanf("%d",&l);
    z=l;
    for(i=0;i<l+1;i++) a[i]=1;//令有树为1，一共l+1棵树
    
    scanf("%d",&m);
    for(i=0;i<m;i++)//循环读入区间
    {

    scanf("%d %d",&u,&v);
    for(j=u;j<v+1;j++)//令区间的地方为0
    a[j]=0;

    }
    for(k=0;k<z+1;k++)//判断街道还有几颗树
    {if(a[k]==1)
    t++;}

    printf("%d",t);

    return 0; 
}