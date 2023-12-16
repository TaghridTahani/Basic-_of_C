#include <stdio.h>
void number(int n)
{
    if(n<1){
        return; 
    }
    if(n==1){
        printf("%d",n); 
    }
    else{
        printf("%d ", n);
    }
    
    number(n-1); 
}
int main()
{
    int n;
    
    scanf("%d", &n);
    number(n);

    return 0;
}