#include <ctype.h>
#include<stdio.h>

int main()
{
    char n[1000];
    
    gets(n);
    n[0] = toupper(n[0]);
    printf("%s",n);
}