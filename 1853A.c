#include<stdio.h>

int main()
{
    int t;
    scanf("%i",&t);
    while(t--)
    {
        int n,valid = 1;
        scanf("%i",&n);
        long long int num[n],min = 10000000000;
        for(int i = 0; i < n; i++)
        {
            scanf("%lld",&num[i]);
        }

        for(int i = 0; i < n-1; i++)
        {
            if(num[i] > num[i+1]) valid = 0;

            long long int tmp = num[i+1] - num[i];
            if(tmp < min) min = tmp;
        }

        if(valid == 0) printf("0\n");
        else printf("%lld\n",(min+2)/2);
    }
}