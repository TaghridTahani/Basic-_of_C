#include <stdio.h>
void even_array(int a[], int n)
{
    if(n<0){
        return; 
    }
    if(n%2==0){
        printf("%d ",a[n]); 
    }
    even_array(a, n-1); 
    
    

}
int main()
{
    int n;
     
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    even_array(a, n-1);
    return 0;
}