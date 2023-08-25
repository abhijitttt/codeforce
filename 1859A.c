#include<stdio.h>

int main()
{
    int t;
    scanf("%i",&t);
    for(int i = 0; i < t; i++)
    {
        int n,max = 0, min = 0;
        scanf(" %i",&n);
        int num[n],s1,s2 = 0;
        for(int j = 0; j < n; j++)
        {
            scanf("%i",&num[j]);
            if(num[j] > max) max = num[j];
        }

        for(int j = 0; j < n; j++)
        {
            if(num[j] == max) s2++;
        }
        s1 = n - s2;
        int m[s1],k[s2];
        if(s1 != 0 && s2 != 0)
        {
            int a = 0,b = 0;
            printf("%i %i\n",s1,s2); 
            for(int j = 0; j< n; j++)
            {
                if(num[j] != max)
                {
                    printf("%i ",num[j]);
                }
            }
            printf("\n");
            for(int j = 0; j< n; j++)
            {
                if(num[j] == max)
                {
                    printf("%i ",num[j]);
                }
            }
        }
        else printf("-1\n");
    }
}