#include <stdio.h>
#include <stdlib.h>

int main()
{   
    long long int primary=0,secondary=0; 
    long long int sum=0; 
    int n; 
    scanf("%d",&n); 
    long long int a[n][n]; 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%lld",&a[i][j]); 
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){

            if(i==j){
                primary = primary+a[i][j];
                
                
            }
            if(i+j==(n-1)){
                secondary=secondary+a[i][j];
                
                
            }
            
        }
    }
    sum=abs(primary-secondary);
    printf("%lld",sum); 
    return 0;
}

