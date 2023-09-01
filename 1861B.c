#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

bool solve()
{
    char str1[5001],str2[5001];
    gets(str1);
    gets(str2);
    int l = strlen(str1);

    if(strcmp(str1,str2) == 0) return true;

    if(str1[1] == '1' && str2[1] == '1') return true;
    else if(str1[l-2] == '0' && str2[l-2] == '0') return true;
    else 
    {
        for(int i = 1; i < l-2; i++)
        {
            if((str1[i] == '0' && str2[i] == '0') && (str1[i+1] == '1' && str2[i+1] == '1'))
            {
                return true;
            }
        }
        return false;
    }


}


int main()
{
    int tt;
    scanf("%i\n",&tt);
    while(tt--)
    {
        solve() ? printf("YES\n") : printf("NO\n");
    }
}
