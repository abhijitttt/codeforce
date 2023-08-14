#include<stdio.h>

int main()
{
    int a,b,sum = 0;
    scanf("%i %i",&a,&b);
    int p[a];

    for(int i = 0; i < a; i++)
    {
        scanf("%i",&p[i]);
    }

    for(int i = 0; i < a; i++)
    {
        if(p[i] > b) sum += 2;
        else sum++;
    }
    printf("%i",sum);

}