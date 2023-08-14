#include<stdio.h>
#include<string.h>

int main()
{
    int step,sum = 0;
    scanf("%d\n",&step);
    char in[5];
    for(int i=0; i<step; i++)
    {
        gets(in);
        if ( (in[0]=='-'&&in[1]=='-') || (in[1]=='-'&&in[2]=='-')) sum--;
        if ( (in[0]=='+'&&in[1]=='+') || (in[1]=='+'&&in[2]=='+')) sum++;

    }
    printf("%i\n",sum);
}