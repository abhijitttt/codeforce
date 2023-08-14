#include<stdio.h>

int main()
{
    int n,k,t = 0;
    scanf("%i %i",&n,&k);
    int num[n];
    
    for(int i = 0; i < n; i++)
    {
        scanf("%i",&num[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(num[i] >= num[k-1] && num[i] > 0)
        {
            t += 1;
        }
    }
    printf("%i\n",t);
}
