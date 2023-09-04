#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>


int main()
{
    int tt;
    scanf("%i\n",&tt);
    while(tt--)
    {
        long long int a;
        scanf("%lld",&a);
        for(long long int i = 1; i <= a+1; i++)
        {
            if(a%i != 0)
            {
                printf("%lld\n",i-1);
                break;
            }
        }
    }    
}