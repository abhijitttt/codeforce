#include<stdio.h>
#include<string.h>

int main()
{
    char s[201];
    gets(s);
    int l = strlen(s);

    for(int i = 0; i < l; i++)
    {
        if(s[i] == '.') printf("0");
        else
        {
            if(s[i+1] == '.')
            {
                printf("1");
                i++;
            }
            else
            {
                printf("2");
                i++;
            }
        }
    }
}