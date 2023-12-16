#include <stdio.h>
int main()
{
    int n; 
    scanf("%d",&n); 
    int m; 
    m=(n-1)/2+11;
    
    int k = 1;

    int s = m-6;
    for (int i = 1; i <= m-5; i++)
    {

        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
        s--;
        k = k + 2;
    }
    int ss=5; 
    int kk=n; 
    for(int i=m-4; i<=m; i++){
        for (int j = 1; j <= ss; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= kk; j++)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}