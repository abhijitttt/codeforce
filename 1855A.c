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
            if(j+1 == num[j]) sum++;
        }

        printf("%i\n",(sum+1)/2);
    }
}