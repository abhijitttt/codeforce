#include <stdio.h>

int main()
{
    int num[25];
    scanf("%i %i %i %i %i\n",&num[0],&num[1],&num[2],&num[3],&num[4]);
    
    scanf("%i %i %i %i %i\n",&num[5],&num[6],&num[7],&num[8],&num[9]);
    
    scanf("%i %i %i %i %i\n",&num[10],&num[11],&num[12],&num[13],&num[14]);
    
    scanf("%i %i %i %i %i\n",&num[15],&num[16],&num[17],&num[18],&num[19]);
    
    scanf("%i %i %i %i %i",&num[20],&num[21],&num[22],&num[23],&num[24]);
    int i = 0;
    while (num[i] != 1)
    {
        i++;
    }
    if(i % 2 == 0)
    {
        if(i == 12) printf("0\n");
        else if(i == 0 || i == 4 || i == 20 || i == 24) printf("4\n");
        else printf("2\n");
    }
    else
    {
        if(i == 7 || i == 11 || i == 13 || i == 17) printf("1\n");
        else printf("3\n");
    }
}