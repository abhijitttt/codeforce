#include<stdio.h>

int main()

{
    int n,x,y,sum = 1;
    scanf("%i",&n);
    scanf("%i",&x);
    int e[201];

    for(int i = 0; i < x; i++)
    {
        scanf("%i",&e[i]);
    }

    scanf("%i",&y);
    for(int i = 0; i < y; i++)
    {
         scanf("%i",&e[x+i]);
    }

    for(int i = 0; i < x+y; i++)
    {
        for(int j = 0; j < x+y-i-1;j++)
        {
            if(e[j] > e[j+1])
            {
                int temp = e[j];
                e[j] = e[j+1];
                e[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < x+y-1; i++)
    {
        if(e[i] != e[i+1]) sum++;
    }

    if(n == 1)
    {
        if(x != 0 || y != 0)
        {
            printf("I become the guy.");
        }
        else printf("Oh, my keyboard!");
    }
    else
    {
        if(sum == n) printf("I become the guy.");
        else printf("Oh, my keyboard!");
    }
}