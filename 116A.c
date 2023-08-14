#include<stdio.h>

int main()
{
    int test;
    scanf("%i",&test);
    int sum[test],j[test],k[test];


    for(int i = 0; i < test; i++)
    {
        scanf("%i %i",&j[i],&k[i]);
        sum[0] = k[0] - j[0];
    }
    for(int i = 1; i < test; i++)
    {     
        sum[i] = sum[i-1] + k[i] - j[i];
    }
    int max = sum[0];
    for(int i = 0; i < test; i++)
    {
        if(sum[i] > max)  max = sum[i];
    }
    printf("%i",max);
}