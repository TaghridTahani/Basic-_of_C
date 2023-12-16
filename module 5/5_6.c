#include <stdio.h>
int main()
{
    char X; 
    scanf("%c",&X);
    if(48<=X && X<=57){
        printf("IS DIGIT");
    }
    else if(65<=X && X<=90){

        printf("ALPHA\nIS CAPITAL");

    }
    else if(97<=X && X<=122){
        printf("ALPHA\nIS SMALL");

    }
    return 0;
}