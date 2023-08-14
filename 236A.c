#include<stdio.h>
#include<string.h>

int main()
{
    char n[150];
    int x = 0,l;

    gets(n);

    l = strlen(n);
    for(int i = 0; i < l; i++)
    {
        for(int j = 0; j < l-i-1; j++)
        {
            if(n[j] > n[j+1])
            {
                char temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < l ; i++)
    {
        if(n[i] != n[i+1])
        {
            x++;
        }
    }

    if(x%2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
}  
