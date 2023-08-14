#include<stdio.h>

int main()
{
    int k,n,w,num,sum = 0;
    scanf("%i %i %i",&k,&n,&w);

    for(int i = 1; i<=w; i++)
    {
        num = k*i;
        sum =sum + num;
    }
    if(sum>n) printf("%i",sum-n);
    else printf("0");

    
}