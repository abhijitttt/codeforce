#include<stdio.h>

int main()
{
    int n,k,sum = 0;
    scanf("%i %i",&n,&k);
    int num[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%i",&num[i]);
        if(num[i] + k <= 5) sum++;
    }

    printf("%i",sum/3);
}