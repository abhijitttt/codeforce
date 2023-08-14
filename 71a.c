#include <stdio.h>
#include <string.h>

int main()
{
    int test;
    scanf("%i",&test);
    for (int i = 0; i < test; i++)
    {
        char word[101];
        scanf("%s",&word);
        int num = strlen(word);
        if(num > 10)
        {
            printf("%c%i%c\n",word[0],num-2,word[num-1]);
        }
        else
        {
            printf("%s\n",word);
        }
    }
}