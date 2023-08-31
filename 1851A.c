#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


int main()
{
    int tt;
    scanf("%i",&tt);
    while(tt--)
    {
        int n,m,k,H,sum = 0;
        scanf("%i %i %i %i",&n,&m,&k,&H);
        int num[n];

        for(int i = 0; i < n; i++)
        {
            scanf("%i",&num[i]);
            num[i] = abs(H-num[i]);
            for(int j = 1; j < m; j++)
            {
                if(num[i] == j * k) sum++;
            }
        }

        printf("%i\n",sum);
    }
}