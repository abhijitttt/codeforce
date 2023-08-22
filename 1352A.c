#include<stdio.h>
#include<stdlib.h>

int main()
{
    int test;
    scanf("%i",&test);
    int num[test],l[5];

    for(int i = 0; i < test; i++)
    {
        int j = 0,k = 1;
        scanf("%i",&num[i]);
        while(num[i]>0)
        {
            if(num[i]%10 > 0)
            {
                l[j] = (num[i] % 10) * k;
                num[i] -= (num[i]%10);
                j++;
            }
            k *= 10;
            num[i] /= 10;
        }
        printf("%i\n",j);
        for(int m = 0; m < j;m++)
        {
            printf("%i ",l[m]);
        }
        printf("\n");
    }
}