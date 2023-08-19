#include<stdio.h>

int main()
{
    int n,sum = 0,l;
    scanf("%i",&n);
    int k[n],p = 0,q = n - 1;

    for(int i = 0; i < n; i++)
    {
        scanf("%i",&k[i]);
    }

    int max = k[0];
    int min = k[n-1];

    for(int i = 0; i < n; i++)
    {
        l = n - i - 1;
        if(k[i] > max)
        {
            max = k[i];
            if( max == k[i]) p = i;
        }

        if(k[l] < min)
        {
            min = k[l];
            if(min == k[l]) q = l;
        }
    }

    int r = n - 1;

    if(p > q)
    {
        printf("%i",p+n-q-2);
    }
    else printf("%i",p+n-q-1);
}