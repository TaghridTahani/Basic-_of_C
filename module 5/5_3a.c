#include <stdio.h>
int main()
{
    char X; 
    scanf("%c", &X);
    //printf("%d", X);
    if(65<=X && X<=90){

        printf("%c", X+32);
    }
    else if(97<=X && X<=122) {

        printf("%c", X-32);
        
    }

    return 0;
}