#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int ind(char arr[],int index)
{
    for(int i = 0; i < 8; i++)
    {
        char str[8];
        gets(str);
        for(int j = 0; j < 8; j++)
        {
            if(str[j] >= 'a' && str[j] <= 'z')
            {
                arr[index] = str[j];
                index++;
            }
        }
    }
    return index;
}

int main()
{
    int tt;
    scanf("%i\n",&tt);
    while(tt--)
    {
        char ans[65];
        int index = 0;
        index = ind(ans,index);

        for(int i = 0; i < index; i++)
        {
            printf("%c",ans[i]);
        }
        printf("\n");
    }
}