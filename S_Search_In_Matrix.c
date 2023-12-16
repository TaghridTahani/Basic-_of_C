#include <stdio.h>
int main()
{
    int n, m, count=0, x;
    
    scanf("%d %d", &n, &m);
    long long int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%lld", &a[i][j]);
        }
    }
    
    scanf("%d", &x);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == x)
            {

                count++;
            }
        }
    }
    if (count == 0)
    {

        printf("will take number");
    }
    else
    {
        printf("will not take number");
    }
    return 0;
}