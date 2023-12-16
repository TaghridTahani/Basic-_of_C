#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(97<=c && c<122){
        
        printf("%c",c+1);
    }
    else if(c==122){
            printf("%c",'a');
            
        }
    return 0;
}