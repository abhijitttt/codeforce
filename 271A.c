#include<stdio.h>

int main()
{
    int s,num[4] = {1000,100,10,1},k[4];
    scanf("%i",&s);
    

    for(int i = 0; i < 1000; i++)
    {
        s++;
        int x = s;
        for(int i = 0; i < 4; i++)
        {
            k[i] = x/num[i];
            x = x - k[i]*num[i];
        }
        if(k[0] != k[1] && k[1] != k[2] && k[2] != k[3] && k[0] != k[2] && k[0] != k[3] && k[1] != k[3]) 
        {
            printf("%i",s);
            return 0;
        }
    }

}