#include<stdio.h>

int main()
{
    int n,a=0,d=0;
    scanf("%i\n",&n);
    char str[n];

    gets(str);
    
    for(int i = 0; i < n; i++)
    {
        if(str[i] == 'A') a++;
        else d++;
    }
    if(a>d) printf("Anton");
    else if(d>a) printf("Danik");
    else printf("Friendship");

}