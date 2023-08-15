#include<stdio.h>

int main()
{
    int n,k=0;
    scanf("%i",&n);
    int num[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%i",&num[i]);
        k += num[i];
    }
    printf("%.12f",(double)k/n);
}