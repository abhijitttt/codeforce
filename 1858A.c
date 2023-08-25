#include<stdio.h>

int main()
{
    int t;
    long int num[3];
    scanf("%i",&t);

    for(int i = 0; i < t; i++)
    {
        scanf("%ld %ld %ld",&num[0],&num[1],&num[2]);
        if(num[2] % 2 != 0)
        {
            num[0]++;
        }

        if(num[0] > num[1]) printf("First\n");
        else printf("Second\n");
      
    }
}