#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char yuan[1000],gai[1000];
    gets(yuan);
    strcpy(gai,yuan);

    int i,lens;
    lens=strlen(gai);
    for(i=0;i<lens;i++)
        if(isalpha(gai[i]))
        {
            if(islower(gai[i]))
            {
            gai[i]=26-gai[i]%97+'a'-1;
            }
            else gai[i]=26-gai[i]%65+'A'-1;
        }
    puts(yuan);
    puts(gai);
}