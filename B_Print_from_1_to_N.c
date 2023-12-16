#include <stdio.h>
void number(int n, int i)
{
    if(i>n){
        return; 
    }

    printf("%d\n", i);
    number(n,i+1); 
}
int main()
{
    int n;
    int i = 1;
    scanf("%d", &n);
    number(n, i);

    return 0;
}