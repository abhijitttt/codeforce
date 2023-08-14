#include<ctype.h>
#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int sum = 0;
    gets(str);


    int l = strlen(str);

    for(int i = 0; i < l; ++i)
    {
        if(str[i] == '4' || str[i] == '7') sum++;
    }
    if(sum == 4 || sum == 7) printf("YES");
    else printf("NO");
}