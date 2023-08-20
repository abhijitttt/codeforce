#include<stdio.h>

int main()
{
    int test;
    scanf("%i",&test);
    int num[test];

    for(int i = 0; i < test; i++)
    {
        scanf("%i",&num[i]);
    }

    for(int i = 0; i < test; i++)
    {
        if(num[i] == 1 || num[i] == 2)  printf("0\n");
        else 
        {
            if(num[i] % 2 == 0) printf("%i\n",num[i]/2-1);
            else printf("%i\n",num[i]/2);
        }
    }
}