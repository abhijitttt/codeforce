#include<stdio.h>

int main()
{
    int n;
    scanf("%i",&n);
    char one[100] = "I hate that ";
    char two[100] = "I love that ";
    char three[100] = "I hate it";
    char four[100] = "I love it";

    for(int i = 1; i <= n; i++)
    {
        if(i == n)
        {
            if(i % 2 == 0) printf("%s",four);
            else printf("%s",three);
        }
        else
        {
            if(i % 2 == 0) printf("%s",two);
            else printf("%s",one);
        }
    }
    
}