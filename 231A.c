#include <stdio.h>

int main ()
{
    int num,one,two,three,taken = 0;
    scanf("%i",&num);
    for (int i = 0; i < num; i++)
    {
        scanf("%i %i %i",&one,&two,&three);
        if((one == 1 && two ==1) || (one == 1 && three == 1) || (two == 1 && three ==1))
        {
            taken += 1;
        }
    }
    printf("%i\n",taken);
}