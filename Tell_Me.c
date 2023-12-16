#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){   
    int t,count;
     
    scanf("%d",&t);
     
    for(int i=0; i<t; i++){
        int n; 
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
        }
        int x; 
        scanf("%d",&x);
        count=0;
        for(int i=0; i<n; i++){
            if(x==a[i]){
                count++;
            }
           
        }
        if(count>0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
    }


    return 0;
}
