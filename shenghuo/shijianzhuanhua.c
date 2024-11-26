#include <stdio.h>
int main(){
    /*char a, b, c, d;
	scanf("%c%c%c.%c", &a, &b, &c, &d);
	printf("%c.%c%c%c", d, c, b, a);
	return 0;*/

    /*int s,v;
    int shi1,shi2,fen1,fen2,t;
    scanf("%d %d",&s,&v);
    if(s%v!=0)
        t=s/v+1;
    else t=s/v;
    t+=10;
    if(t<480)
        {
        if(t%60!=0)
        {   shi1=t/60;
            fen1=t%60;
            shi2=8-shi1-1;
            fen2=60-fen1;
            printf("%02d:%2d",shi2,fen2);
        }
        else{
            shi1=8-t/60;
            printf("%02d:00",shi1);
            }}
    else {
        if(t%60!=0)
        {   shi1=t/60;
            fen1=t%60;
            shi2=24-(shi1-8)-1;
            fen2=60-fen1;
            printf("%02d:%02d",shi2,fen2);
        }
        else{
            shi1=t/60;
            fen1=t%60;
            shi2=24-(shi1-8);
            printf("%02d:00",shi2);
            }
    }*/




    int x,y;
    scanf("%d %d",&x,&y);
    int a=x*10+y;
    printf("%d",a/19);
    return 0;
}

