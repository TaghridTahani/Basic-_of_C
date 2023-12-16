#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], min = INT_MAX, max = INT_MIN, temp, min_index = 0, max_index = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            min_index = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_index = i;
        }
    }

    temp = a[min_index];
    a[min_index] = a[max_index];
    a[max_index] = temp;

    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }

    return 0;
}