#include<stdio.h>

int main()
{
    int j,k;
    scanf("%i %i",&j,&k);

    for(int i = 1; i < 100;i++)
    {
        j = j * 3;
        k = k * 2;
        if(j>k)
        {
            printf("%i",i);
            return 0;
        }
    }
}