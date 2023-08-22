#include<stdio.h>

int main()
{
    int a,b,max,min;
    scanf("%i %i",&a,&b);

    if(a>b)
    {
        max = a;
        min = b;
    }
    else 
    {
        max = b;
        min = a;
    }
    printf("%i %i",min,(max-min)/2);
}