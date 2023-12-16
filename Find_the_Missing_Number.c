#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
     
    scanf("%d",&t); 
    long long int m, a,b,c; 
    for(int p=0; p<t; p++){
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);

    
        long long int prod=a*b*c;
        if(m==0){
            printf("%d\n",0);
        }
        else if(m%prod==0){
            printf("%lld\n",m/prod);
        }
        else if(m%prod!=0){
            printf("%d\n",-1);
        }
    }
    
    return 0;
}
