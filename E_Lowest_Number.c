#include <stdio.h>
#include <limits.h>
int main()
{
    int n, min = INT_MAX, index = 0;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i] < min)
        {
            min= A[i];
            index= i+1;
        }
    }

    printf("%d %d",min, index);

    return 0;
}