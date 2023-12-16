#include <stdio.h>
int main()
{
    int n, i, i2;
    scanf("%d", &n);
    i = n % 10;
    i2 = n / 10;
    if ((i % i2 == 0) || (i2 % i == 0))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}