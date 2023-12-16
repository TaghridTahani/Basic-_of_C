#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    gets(s);
    int i = 0;
    while (i <= strlen(s))
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] = s[i] + 32;
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] = s[i] - 32;
        }
        else if (s[i] == 44)
        {
            s[i] = 32;
        }

        i++;
    }
    printf("%s", s);

    return 0;
}