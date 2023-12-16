#include <stdio.h>
#include<limits.h>

void min_max(int a[],int n){
    int min=INT_MAX, max=INT_MIN; 
    for(int i=0; i<n; i++){
        if(a[i]<min){
            min=a[i];
        }
        if(a[i]>max){
            max=a[i]; 
        }
    }
    printf("%d %d",min,max); 

}

int main()
{
    int n; 
    scanf("%d",&n); 
    int a[n]; 
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]); 
    }
    min_max(a, n); 

    
    return 0;
}