#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char w[100], x[100], a[100], b[100];

    fgets(w, sizeof(w), stdin);
    fgets(x, sizeof(x), stdin);

    int i = 0;
    while (w[i])
    {
        a[i] = toupper(w[i]);
        b[i] = toupper(x[i]);
        i++;
    }
    printf("%i\n",strcmp(a, b));
}