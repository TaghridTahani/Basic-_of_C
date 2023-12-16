#include <stdio.h>
int main()
{
    char X;
    scanf("%c", &X);

    if (65 <= X <= 90)
    {
        // X = X+32;
        printf("%c", X + 32);
    }
    else if (97 <= X <= 122)
    {
        // X = X-32;
        printf("%c", X - 32);
    }
    return 0;
}