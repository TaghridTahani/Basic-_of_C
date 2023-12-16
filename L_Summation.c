#include <stdio.h>
long long int even_array(long long int a[], long int n, long long int sum)
{
    if (n < 0)
    {
        return sum;
    }
    else
    {
        sum = a[n] + sum;
    }
    even_array(a, n - 1, sum);
}
int main()
{
    long int n;
    long long int sum = 0;

    scanf("%ld", &n);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    sum = even_array(a, n - 1, sum);
    printf("%lld", sum);

    return 0;
}
