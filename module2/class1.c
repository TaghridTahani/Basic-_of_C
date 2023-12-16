#include<stdio.h>
int main()
{
    int a, b; 
    float div; 
    printf("ENter a number : \n");
    scanf("%d",&a);
    printf("Enter the second number : \n");
    scanf("%d",&b);
    div = a*1.0/b; 
    printf("division of %d and %d is = %0.1f", a,b ,div);
    return 0;
}