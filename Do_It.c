#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,k;
   scanf("%d %d", &n,&k); 
   int j=1;
   while(j<=n){
    for(int i=1; i<=k; i++){
        printf("%d ",i);
    }
    printf("\n");
    j++;
   } 
   
     
    return 0;
}
