#include<stdio.h>

int main()
{
    int c,r;
    scanf("%i %i",&c,&r);
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            if(i % 2 == 0) printf("#");
            else
            {
                if(i % 4 == 1)
                {
                    if(j == r-1) printf("#");
                    else printf(".");
                }

                if(i % 4 == 3)
                {
                    if(j == 0) printf("#");
                    else printf(".");
                }
            }
        }
        printf("\n");
    }

}