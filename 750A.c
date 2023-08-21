#include<stdio.h>

int main()
{
    int n,k,i=1;
    scanf("%i %i",&n,&k);
    int t = 240-k;

    while(t >= 5*i)
    {
        t -= 5*i;
        if(i == n) 
        {
            printf("%i",i);
            return 0;
        }
        i++;
    }
    printf("%i",i-1);
}