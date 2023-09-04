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
        int b,c,h;
        scanf("%i %i %i",&b,&c,&h);

        if(c+h >= b)  printf("%i\n",2 * b - 1);
        else printf("%i\n",2 * (c+h) + 1);
    }
}