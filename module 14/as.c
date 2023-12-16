#include <stdio.h>
void ascending(int a[],int n){
    int temp=0; 
    int b[n]; 
    for(int i=0; i<n; i++){
        b[i]=a[i]; 
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n ; j++){
            if(a[i]>a[j]){
                temp=a[i]; 
                a[i]=a[j];
                a[j]=temp; 
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d\n",a[i]); 
    }
    printf("\n"); 
    for(int i=0; i<n; i++){
        printf("%d\n",b[i]); 
    }

}
int main()
{
    int n; 
    scanf("%d",&n); 
    int a[n]; 
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]); 
    } 
    ascending(a, n);    
    return 0;
}