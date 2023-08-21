#include<stdio.h>

int main()
{
    int n,s,c = 0,p = 0;
    scanf("%i",&n);

    for(int i = 0; i < n; i++)
    {
        scanf("%i",&s);
        if(s == -1)
        {
            if(p > 0) p--;
            else c++;
        }
        else p += s;
    }
    printf("%i",c);
}