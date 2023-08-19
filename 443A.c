#include<stdio.h>
#include<string.h>

int main()
{
    char n[2002],m[1001];
    int j = 0,sum = 1;
    gets(n); 

    if(n[1] == '}')
    {
        printf("0");
        return 0;
    }

    for(int i = 0; i < strlen(n);i++)
    {
        if(n[i] >= 97 && n[i] <= 122)
        {
            m[j] = n[i];
            j++;
        }
    }

    int l = strlen(m);

    for(int i = 0; i < l; i++)
    {
        for(int j = 0; j < l - i - 1; j++)
        {
            if(m[j] > m[j+1])
            {
                char temp = m[j];
                m[j] = m[j+1];
                m[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < l-1; i++)
    {
        if(m[i] != m[i+1]) sum++;
    }
    
    printf("%i",sum);
}