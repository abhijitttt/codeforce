#include<stdio.h>

int main()
{
    int test,n;
    scanf("%i",&test);
    for(int i = 0; i < test; i++)
    {
        scanf("%i",&n);
        int num[n];
        for(int j = 0; j < n; j++)
        {
            scanf("%i",&num[j]);
        }
        for(int j = 0; j < n-1; j++)
        {
            if(num[j] != num[j+1])
            {
                if(j == 0 && num[j] != num[j+2])
                {
                    printf("%i\n",j+1);
                    break;
                }

                printf("%i\n",j+2);
                break;
            }
        }
    }
}