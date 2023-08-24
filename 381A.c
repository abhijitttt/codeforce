#include<stdio.h>

int main()
{
    int n,sum1 = 0,sum2 = 0,valid = 0;
    scanf("%i",&n);
    int num[n], l = n - 1;
    for(int i = 0; i < n; i++)
    {
        scanf("%i",&num[i]);
    }

    int i = 0;

    for(int i = 0; i < n; i++)
    {
        if(valid%2 == 0)
        {
            valid++;
            if(num[i] > num[n-1])
            {
                sum1+=num[i];
            }
            else
            {
                sum1 += num[n-1];
                n--;
                i--;
            }
        }
        else
        {
            valid++;
            if(num[i] > num[n-1])
            {
                sum2+=num[i];
            }
            else
            {
                sum2 += num[n-1];
                n--;
                i--;
            }
        }
    }

    printf("%i %i",sum1,sum2);
}