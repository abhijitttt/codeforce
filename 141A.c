#include<stdio.h>
#include<string.h>

int main()
{
    char m[101],n[101],o[101];
    gets(m);
    gets(n);
    gets(o);

    int i = 0;

    while(m[i] != '\0')
    {
        i++;
    }

    for(int j = 0; j <= strlen(n);j++)
    {
        m[i] = n[j];
        i++;
    }

    for(i = 0; i < strlen(o); i++)
    {
        for(int j = 0;j < strlen(o)-i-1; j++)
        {
            if(m[j] < m[j+1])
            {
                char temp = m[j];
                m[j] = m[j+1];
                m[j+1] = temp;
            }

            if(o[j] < o[j+1])
            {
                char temp = o[j];
                o[j] = o[j+1];
                o[j+1] = temp;
            }
        }
    }

    if(strcmp(m,o) == 0) printf("YES");
    else printf("NO");
}