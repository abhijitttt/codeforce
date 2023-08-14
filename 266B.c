#include<stdio.h>

int main()
{
    int a,b;
    scanf("%i %i\n",&a,&b);
    char str[a],cng[a-1];
    gets(str);

    for(int i = 0; i< b; i++)
    {
        for(int j = 0; j < a-1; j++)
        {
            if(str[j] == 'B' && str[j+1] == 'G')
            {
                cng[j] = 1;
            }
        }
        for(int j = 0; j < a-1; j++)
        {
            if(cng[j] == 1)
            {
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
                cng[j] = 0;
            }
        }

    }
    printf("%s",str);
}