#include <stdio.h>

int main ()
{
    int num;
    scanf("%i",&num);
    if (num % 2 != 0 || num == 2)
        printf("NO\n");
    else
        printf("YES\n");
}
