#include<stdio.h>

int main()
{
    int s[4],sum = 0;
    scanf("%i %i %i %i",&s[0],&s[1],&s[2],&s[3]);
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3-i; j++)
        {
            if(s[j] > s[j+1])
            {
                int temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < 3; i++)
    {
        if(s[i] == s[i+1]) sum++;
    }

    printf("%i",sum);
}