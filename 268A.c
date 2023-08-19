#include<stdio.h>

int main()
{
    int n;
    scanf("%i",&n);
    int a[n],s[n],sum = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%i %i",&a[i],&s[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i] == s[j]) sum++;
        }
    }

    printf("%i",sum);
}