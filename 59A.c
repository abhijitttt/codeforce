#include<ctype.h>
#include<stdio.h>
#include<string.h>

int main()
{
    char word[100];

    gets(word);
    int l = strlen(word),cap = 0,small = 0;
    for(int i = 0; i < l; i++)
    {
        if(word[i] >= 65 && word[i] <= 90) cap++;


        if(word[i] >= 97 && word[i] <= 122) small++;
    }
    for(int i = 0; i < l; i++)
    {
        if(cap > small)  word[i] = toupper(word[i]);
        else word[i] = tolower(word[i]);
    }
    printf("%s",word);
}