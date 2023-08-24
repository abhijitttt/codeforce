#include<stdio.h>

int main()
{
    int a;
    scanf("%i",&a);
    int n1=4,n2,valid1,valid2;
    for(int i = 0; i < (a/2) +1;i++)
    {
        valid1 = 1;
        valid2 = 2;
        n2 = a-n1;
        for(int j = 2; j <= n1/2; j++)
        {
            if(n1 % j == 0) valid1 = 0;
        }

        for(int j = 2; j <= n2/2; j++)
        {
            if(n2 % j == 0) valid2 = 0;
        }

        if(valid1 == 0 && valid2 == 0)
        {
            printf("%i %i",n1,n2);
            break;
        }

        n1++;
    }
}