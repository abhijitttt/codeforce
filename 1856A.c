#include<stdio.h>

int main()
{
    int t;
    scanf("%i",&t);
    for(int i = 0; i < t; i++)
    {
        int n,sum = 0;
        scanf("%i",&n);
        int num[n];
        for(int j = 0; j < n; j++)
        {
            scanf("%i",&num[j]);
        }
        for(int j = 0; j < n-1; j++)
        {
            if(num[j] > num[j+1])
            {
                int l = num[j];
                sum += l;
                for(int m = 0; m < n; m++)
                {
                    num[m] -= l;
                    if(num[m] < 0) num[m] = 0;
                }
            }

        }

        printf("%i\n",sum);
    }
}