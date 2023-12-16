#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N,pos=0,neg=0;
    scanf("%d",&N);
    int V[N];
    for(int i=0; i<N; i++){
        scanf("%d",&V[i]);
    } 
    for(int i=0; i<N; i++){
        if(V[i]>0){
            pos=pos+V[i];
        }
        else if(V[i]<=0){
            neg= (neg-V[i]);
        }
    }
    printf("%d %d",pos,-neg);
    return 0;
}
