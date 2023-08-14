#include<stdio.h>

int main()
{
    int n;
    scanf("%i",&n);
    int num[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%i",&num[i]);
        if(num[i] == 1)
        {
            printf("HARD");
            return 0;
        }
    }
    printf("EASY");
}