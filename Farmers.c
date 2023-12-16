#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,ans=0,days=0; 
    scanf("%d", &t); 
    int m1, m2, d; 
    for(int i=0; i<t; i++){
        scanf("%d %d %d", &m1, &m2, &d);
        ans=(m1*d)/(m1+m2);
        days= d-ans; 
        printf("%d\n",days);
        
    }
    
    return 0;
}

/*
ans=(m1*d)/(m1+m2);
        days= d-ans; 
        printf("%d",d);
*/