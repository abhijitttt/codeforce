#include<stdio.h>

int main()
{
    int n,sum = 0;
    scanf("%i",&n);
    int x[n],y[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%i %i",&x[i],&y[i]);
        if(y[i] - x[i] >= 2) sum++;
    }
    printf("%i",sum);
}