#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int t, sz;
    scanf("%d", &t);
    char a[100];
    while (t != 0)
    {
        scanf("%s", &a);
        int l = strlen(a);
        if (l > 10)
        {
            printf("%c%d%c\n", a[0], l - 2, a[l - 1]);
        }
        else
        {
            printf("%s\n", a);
        }
    }

    return 0;
}