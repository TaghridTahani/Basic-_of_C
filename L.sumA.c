#include <stdio.h>
int even_array(int a[], int n,int sum)
{
    if(n<0){
        return sum; 
    }
    else{
        sum= a[n]+sum;
        
    } 
    even_array(a,n-1,sum); 
    
    

}
int main()
{
    int n;
    int sum=0; 
     
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x = even_array(a, n-1,sum);
    printf("%d\n",x); 
    
    return 0;
}