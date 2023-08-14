#include<stdio.h>

int main()
{
    int num = 0,k;
    scanf("%i\n",&k);
    char c[k];
    gets(c);

    for(int i = 0; i < k; i++)
    {
        if(c[i] == c[i+1])
        {
            num++;
        }
    }
    printf("%i",num);
}