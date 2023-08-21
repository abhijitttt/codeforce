#include<stdio.h>

int main()
{
    int a;
    scanf("%i",&a);
    int num[a],sum=0;
    int max = -1;
    int min = 10001;

    for(int i = 0; i < a; i++)
    {
        scanf("%i",&num[i]);
        if(num[i] > max)
        {
            max = num[i];
            sum++;
        }
        
        if(num[i] < min)
        {
            min = num[i];
            sum++;
        }
    }
    printf("%i",sum-2);
   
}