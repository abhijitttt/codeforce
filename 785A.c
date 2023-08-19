#include<stdio.h>

int main()
{
    int n,sum=0;
    scanf("%i\n",&n);

    char s[20];

    for(int i = 0; i < n; i++)
    {
        gets(s);
        if(s[0] == 'T') sum += 4;
        else if(s[0] == 'C') sum += 6;
        else if(s[0] == 'O') sum += 8;
        else if(s[0] == 'D') sum += 12;
        else sum += 20;
    }

    printf("%i",sum);
}