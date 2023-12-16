#include <stdio.h>
int main()
{
    long long int n, sum = 0;
    scanf("%lld", &n);
    long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        
        sum = sum + a[i] ;
      
    }
    if(sum<0){
        printf("%lld",sum*-1);
    }
    else{
        printf("%lld", sum);

    }
    
    return 0;
}