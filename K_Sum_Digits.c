#include <stdio.h>
#include<string.h>
int main()
{
    int n; 
    scanf("%d",&n);
    char a[n];
    for(int i=0; i<n; i++){
        scanf("%s", &a[i]);
    }
    int sum=0; 
    for(int i=0; i<n; i++){
        a[i]=a[i]-48;
        sum= sum+a[i]; 
    }
    printf("%d",sum);

    return 0;
}