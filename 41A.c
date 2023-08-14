#include<stdio.h>
#include<string.h>

int main()
{
    char s[101],t[101];
    gets(s);
    gets(t);

    int l = strlen(s);

    for(int i = 0; i < l; i++)
    {
        if(s[i] != t[l-i-1])
        {
            printf("NO"); 
            return 0;
        } 
    }
    printf("YES");
}