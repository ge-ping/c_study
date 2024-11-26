#include <stdio.h>
int main()
{




    int k,x=1;
    int q=0;
    scanf("%d",&k);
    int cday=1;
    while (cday<=k){
        int daysthis=(k-cday+1)>=x?x:(k-cday+1);
        q+=x*daysthis;
        cday+=daysthis;
        x++;
    }
    printf("%d",q);


    return 0;
    
}