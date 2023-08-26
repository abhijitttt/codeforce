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
            if(num[j] % 2 != 0)
            {
                sum++;
            }
        }
        if(sum%2 == 0) printf("YES\n");
        else printf("NO\n");
    }
}