#include <stdio.h>
int main()
{
    int N,X,a=0; 
    scanf("%d",&N);
    for(int i=0; i<N; i++){
        scanf("%d",&X);
        if(X>a){
            a =X;
        }
    }
    printf("%d",a);
    return 0;
}
