#include<stdio.h>

int main()
{
    int test,num,valid;
    scanf("%i",&test);
    for(int i = 0; i < test; i++)
    {
        scanf("%i",&num);
        int n[num];
        for(int j = 0; j < num; j++)
        {
            scanf("%i",&n[j]);
        }

        for(int j = 0; j < num; j++)
        {
            for(int k = 0; k < num - j - 1; k++)
            {
                if(n[k] > n[k+1])
                {
                    int temp = n[k];
                    n[k] = n[k+1];
                    n[k+1] = temp;
                }
            }
        }

        if(num == 1) printf("YES\n");
        else
        {
            valid = 1;
            for(int j = 0; j < num-1; j++)
            {
                if(n[j+1] - n[j] > 1)
                {
                    valid = 0;
                    break;
                }
            }

            if(valid) printf("YES\n");
            else printf("NO\n");
        } 

    }
}