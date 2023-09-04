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
        int n;
        scanf("%i\n",&n);
        int a[n],b[n],sum,max = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%i %i",&a[i],&b[i]);
            if(b[i] > max && a[i] <= 10)
            {
                max = b[i];
                sum = i;
            }
        }

        printf("%i\n",sum+1);
    }
}
