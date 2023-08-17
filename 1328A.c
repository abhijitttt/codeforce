#include<stdio.h>

int main()
{
    int test;
    scanf("%i",&test);
    int s[test],t[test];

    for(int i = 0; i < test;i++)
    {
        scanf("%i %i",&s[i],&t[i]);
    }

    for(int i = 0; i < test;i++)
    {
        printf("%i\n",(t[i] - (s[i]%t[i]))%t[i]);
    }

}