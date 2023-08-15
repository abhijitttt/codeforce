#include<stdio.h>
#include<string.h>

int main()
{
    char n[101],k[101];
    gets(n);
    gets(k);
    int l = strlen(n);

    for(int i = 0; i < l; i++)
    {
        if(n[i] == k[i]) printf("0");
        else printf("1");
    }

}