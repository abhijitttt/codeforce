#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char num[100],temp;
    int n[100],j = 0;
    gets(num);
    int l = strlen(num);
    for(int i = 0; i < l; i++)
    {
        if(i % 2 == 0)
        {
            n[j] =  (int)num[i];
            j++;
        }
    }
    for(int i = 0; i < l;i++)
    {
        for(int x = 0; x < l-i+1; x++)
        {
            if(n[x]>n[x+1])
            {
                temp = n[x];
                n[x] = n[x+1];
                n[x+1] = n[x];
            }
        }
    }
    for(int i = 0; i < j; i++)
    {
        if(i == j - 1)
        {
            printf("%c",n[i]);
        }
        else
        {
            printf("%c%c",n[i],'+');
        }
    }
}