#include<stdio.h>

int main()
{
    int n,k,l,c,d,p,nl,np,a[3];
    scanf("%i %i %i %i %i %i %i %i",&n,&k,&l,&c,&d,&p,&nl,&np);

    a[0] = (k*l)/(n*nl);
    a[1] = (c*d)/n;
    a[2] = p/(np*n);

    int min = a[0];
    for(int i = 0; i < 3; i++)
    {
        if(min>a[i]) min = a[i];
    }
    printf("%i",min);
}