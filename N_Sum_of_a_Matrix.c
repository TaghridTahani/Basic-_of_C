#include <stdio.h>
int main()
{
    int r,c; 
    scanf("%d %d",&r,&c);
    long int a[r][c];
    long int b[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%ld",&a[i][j]); 
        }

    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%ld",&b[i][j]); 
        }

    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            a[i][j]=b[i][j]+a[i][j]; 
        }

    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");

    }
    return 0;
}