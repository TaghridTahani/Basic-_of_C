#include <stdio.h>
int main()
{
    int N, a, even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &a);
        if (a > 0)
        {
            pos = pos + 1;
            if (a % 2 == 0)
            {
                even = even + 1;
            }
            else if (a % 2 != 0)
            {
                odd = odd + 1;
            }
        }
        else if (a < 0)
        {
            neg = neg + 1;

            if (a % 2 == 0)
            {
                even = even + 1;
            }
            else if (a % 2 != 0)
            {
                odd = odd + 1;
            }
        }
        else if(a==0){
            even = even+1;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);

    return 0;
}