#include<ctype.h>
#include<stdio.h>

int main()
{
    int a,sum = 1;
    scanf("%i\n",&a);
    char s[a];
    gets(s);

    if(a < 26)
    {
        printf("NO");
        return 0;
    }

    for(int i = 0; i < a; i++)
    {
        s[i] = tolower(s[i]);
    }

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a-i-1; j++)
        {
            if(s[j] > s[j+1])
            {
                char temp = s[j];
                s[j] = s[j+1];
                s[j+1] =temp;
            }
        }
    }

    for(int i = 0; i < a-1; i++)
    {
        if(s[i] != s[i+1])
        {
            sum++;
        }
    }
    if(sum == 26) printf("YES");
    else printf("NO");
}