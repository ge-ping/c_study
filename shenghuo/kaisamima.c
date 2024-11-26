#include <stdio.h>
int main()
{
    char zm[100]; 
    int n, i; 
    scanf("%d", &n); 
    scanf("%s",&zm);
    
    
    for(i = 0; zm[i] != '\0'; i++)
        putchar((zm[i])%97+n+'a'); 
}