#include<stdio.h>

int main()
{
    int n[3];
    scanf("%i %i %i",&n[0],&n[1],&n[2]);

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3 - i - 1; j++)
        {
            if(n[j] > n[j+1])
            {
                int temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
            }
        }
    }

    printf("%i",(n[1] - n[0]) + (n[2] - n[1]));
}