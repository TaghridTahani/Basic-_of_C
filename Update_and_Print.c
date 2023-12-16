#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N,X,V;
    scanf("%d",&N);
    int A[N];
    for(int i=0; i<N; i++){
        scanf("%d",&A[i]);
    }
    scanf("%d %d",&X,&V);
    for(int i=0; i<N; i++){
        if(i==X){
            A[X]=V;
        }
    }
    for(int i=N-1; i>=0; i-- ){
        printf("%d ",A[i]);
    }
    return 0;
}
