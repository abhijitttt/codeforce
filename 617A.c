#include<stdio.h>

int main()
{
    int num[]={5,4,3,2,1},l,sum = 0;
    scanf("%i",&l);

    for(int i = 0;i < 5;i++)
    {
        sum =sum + l/num[i];
        l = l % num[i];
    }
    printf("%i",sum);
}