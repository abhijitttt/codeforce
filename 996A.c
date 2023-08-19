#include<stdio.h>

int main()
{
    int n,m[5] = {100,20,10,5,1},sum = 0,i = 0;
    scanf("%i",&n);

    while(n != 0)
    {
        sum += (n/m[i]);
        n %= m[i];
        i++;
    }
    printf("%i",sum);
}