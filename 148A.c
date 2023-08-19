#include<stdio.h>

int main()
{
    int n[5],sum = 0;
    for(int i = 0; i < 5; i++)
    {
        scanf("%i",&n[i]);
    }
    
    int a = n[0],b = n[1],c = n[2],d = n[3];
    while(a <= n[4])
    {
        sum++;
        a += n[0];
    }

    while(b <= n[4])
    {
        if(b % n[0] != 0)
        {
            sum++;
        }
        b += n[1];
    }

    while(c <= n[4])
    {
        if(c % n[0] != 0 && c % n[1] != 0)
        {
            sum++;
        }
        c += n[2];
    }

    while(d <= n[4])
    {
        if(d % n[0] != 0 && d % n[1] != 0 && d % n[2] != 0)
        {
            sum++;
        }
        d += n[3];
    }


    printf("%i",sum);
}