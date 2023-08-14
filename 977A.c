#include<stdio.h>

int main()
{
    long a;
    int b;
    scanf("%li %i",&a,&b);

    for(int i = 0; i < b; i++)
    {
        if(a % 10 == 0) a /= 10;
        else a -= 1;
    }
    printf("%i",a);
}