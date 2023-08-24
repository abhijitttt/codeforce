#include<stdio.h>
#include<string.h>

int main()
{
    int a;
    scanf("%i\n",&a);
    char s[101];
    for(int i = 0; i < a; i++)
    {
        gets(s);
        int l = strlen(s);
        for(int j = 0; j < l-2; j+=2)
        {
            printf("%c",s[j]);
        }
        printf("%c%c",s[l-2],s[l-1]);
        printf("\n");
    }
}