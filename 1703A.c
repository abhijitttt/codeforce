#include<ctype.h>
#include<stdio.h>
#include<string.h>

int main()
{
    int a;
    scanf("%i\n",&a);

    for(int i = 0; i < a; i++)
    {
        char s[4];
        gets(s);
        for(int j = 0; j < strlen(s); j++)
        {
            s[j] = toupper(s[j]);
        }
        if(strcmp("YES",s) == 0) printf("YES\n");
        else printf("NO\n");
    }
}