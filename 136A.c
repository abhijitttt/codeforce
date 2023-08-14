#include<stdio.h>

int main()
{
    int n;
    scanf("%i",&n);
    int num[n],sum[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%i",&num[i]);
    }
    for(int i = 1; i < n+1; i++)
    {
        for(int j = 0; j< n; j++)
        {
            if(num[j] == i)
            {
                printf("%i ",j+1);
            }
        }
    }
}