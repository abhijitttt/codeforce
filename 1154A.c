#include<stdio.h>

int main()
{
    int n[4];    
    scanf("%i %i %i %i",&n[0],&n[1],&n[2],&n[3]);
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4 - i - 1; j++)
        {
            if(n[j] > n[j+1])
            {
                int temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
            }
        }
    }

    int b = (n[0]-n[1]+n[2])/2;
    int a = n[0] - b;
    int c = n[1] - a;

    printf("%i %i %i",a,b,c);
    
}