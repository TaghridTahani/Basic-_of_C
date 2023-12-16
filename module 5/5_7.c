#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (A >= B && A >= C)
    {
        if (B < C)
        {
            printf("%d %d", B, A);
        }
        else
        {
            printf("%d %d", C, A);
        }
    }
    else if (B >= A && B >= C)
    {
        if (A < C)
        {
            printf("%d %d", A, B);
        }
        else
        {
            printf("%d %d", C, B);
        }
    }
    else if (C >= A && C >= B)
    {
        if (A < B)
        {
            printf("%d %d", A, C);
        }
        else
        {
            printf("%d %d", B, C);
        }
    }

    return 0;
}