#include<stdio.h>

int main()
{
    int n,sum=1;
    scanf("%i",&n);
    int num[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%i",&num[i]);
    }
    for(int i = 0; i < n-1; i++)
    {
        if(num[i] != num[i+1]) sum++;
    }
    printf("%i",sum);
}